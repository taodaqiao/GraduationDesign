#include "Debugger.h"
#include "debug_func.h"
#include "debug_thread.h"
#include "Process.h"

//不管是CreateProcess的方式还是DebugActiveProcess都会先创建调试对象，通过DbgUiConnectToDbg创建，里面调用CreateDebugObject
//创建好的调试对象放到被调试进程的debugport也就是调试端口,由于调试函数全部重写，所以不需要再往里面写入调试对象，只需要在重写的函数里面处理就行了 

//利用 DebugAPI 调试程序时，系统通过 DbgkForwardException 函数给调试器发送异常等消息。
//DbgkForwardException 函数又会调用 DbgkpSendApiMessage 函数给调试对象发送调试消息。
//DbgkpSendApiMessage 再调用 DbgkpQueueMessage 函数把调试消息插入到调试对象的事件队列里面，插入前先获取一个 DbgkpProcessDebugPortMutex 快速互斥体。



//DebugActiveProcess->NtDebugActiveProcess->DbgkpPostFakeProcessCreateMessages DbgkpSetProcessDebugObject
//ContinueDebugEvent->NtDebugContinue->DbgkpWakeTarget->DbgkpFreeDebugEvent
//
//DbgkpPostFakeProcessCreateMessages->DbgkpPostFakeThreadMessages DbgkpPostFakeModuleMessages

#define ProbeForWriteGenericType(Ptr, Type)                                    \
	do {                                                                       \
	if ((ULONG_PTR)(Ptr) + sizeof(Type) - 1 < (ULONG_PTR)(Ptr) ||          \
	(ULONG_PTR)(Ptr) + sizeof(Type) - 1 >= (ULONG_PTR)MmUserProbeAddress) { \
	ExRaiseAccessViolation();                                          \
								}                                                                      \
		*(volatile Type *)(Ptr) = *(volatile Type *)(Ptr);                     \
							} while (0)

#define ProbeForWriteHandle(Ptr) ProbeForWriteGenericType(Ptr, HANDLE)

extern "C" {
	namespace Driver {
		namespace Dbg {

			//需要r3初始化变量表
			init_variable_table init_table_variable;
			//需要r3初始化hook函数表
			init_hook_table  init_table_hook;


			SIZE_T exception_first = 0ull;
			BOOL is_first_exception = false;


			//被调试进程以及端口链表
			LIST_ENTRY PortList;
			//被调试进程以及端口链表自旋
			KSPIN_LOCK port_lock;
			//调试对象互斥体
			FAST_MUTEX DbgkFastMutex;





			//@func pointer
			OBCREATEOBJECT ObCreateObject;
			EXSYSTEMEXCEPTIONFILTER  ExSystemExceptionFilter;
			KiCheckForKernelApcDelivery1 KiCheckForKernelApcDelivery12;

			//用于新建调试对象用到的属性
			POBJECT_TYPE_S NewDbgObject;




			void ZwFlushInstructionCache(HANDLE process, ULONG64 UNKNOW, ULONG64 UNKNOW1);


			//***********************************************************//
			//@port相关函数
			PDbgPortList Port_FindProcessList(PEPROCESS Process, ULONG64 DbgPort) {
				KIRQL OldIrql;
				PLIST_ENTRY Entry;
				DbgPortList* TempItem = NULL;
				DbgPortList* DFind = NULL;
				KeAcquireSpinLock(&port_lock, &OldIrql);
				Entry = PortList.Flink;
				while (Entry != &PortList)
				{
					//直接转换，entry_list在首地址
					//TempItem = reinterpret_cast<DbgPortList*>(Entry);
					TempItem = CONTAINING_RECORD(Entry, DbgPortList, PortList);
					Entry = Entry->Flink;
					if (Process != NULL)
					{

						if (TempItem->Process == Process)
						{
							DFind = TempItem;
							break;
						}
					}

					if (DbgPort != NULL)
					{
						if (TempItem->DbgPort == DbgPort)
						{
							DFind = TempItem;
							break;
						}
					}
				}
				KeReleaseSpinLock(&port_lock, OldIrql);
				return DFind;
			}

			PDbgPortList Port_AddProcessToList(PEPROCESS Process, ULONG64 DbgPort) {
				PDbgPortList TempItem;
				TempItem = (PDbgPortList)ExAllocatePoolWithTag(NonPagedPool, sizeof(DbgPortList), 'prrp');
				if (!TempItem)
				{
					return FALSE;
				}

				RtlZeroMemory(TempItem, sizeof(DbgPortList));
				TempItem->Process = Process;
				TempItem->DbgPort = DbgPort;
				TempItem->markdbg = FALSE;
				ExInterlockedInsertTailList(&PortList, &TempItem->PortList, &port_lock);
				if (TempItem != NULL)
				{

					return TempItem;
				}

				return FALSE;
			}

			BOOLEAN Port_SetPort(PEPROCESS Process, ULONG64 DbgPort) {
				PDbgPortList Temp = NULL;
				Temp = Port_AddProcessToList(Process, DbgPort);
				if (Temp != NULL) {


					return TRUE;
				}
				return FALSE;
			}

			BOOLEAN Port_IsPort(PEPROCESS Process) {
				PDbgPortList Temp = NULL;
				Temp = Port_FindProcessList(Process, NULL);
				if (Temp != NULL)
				{
					if (Temp->DbgPort != NULL && Temp->Process == Process) {

						return TRUE;
					}
				}
				return FALSE;
			}

			ULONG64 Port_GetPort(PEPROCESS Process) {
				PDbgPortList Temp = NULL;
				Temp = Port_FindProcessList(Process, NULL);
				if (Temp != NULL)
				{
					if (Temp->DbgPort != NULL && Temp->Process == Process) {

						return Temp->DbgPort;
					}
				}
				return FALSE;
			}

			VOID NTAPI Port_ExFreeItem(PDbgPortList Item)
			{
				KIRQL OldIrql;
				KeAcquireSpinLock(&port_lock, &OldIrql);
				RemoveEntryList(&Item->PortList);
				KeReleaseSpinLock(&port_lock, OldIrql);
				ExFreePool(Item);
				return;


			}

			BOOLEAN Port_RemoveDbgItem(PEPROCESS Process, ULONG64 DbgPort) {

				PDbgPortList Temp = NULL;
				Temp = Port_FindProcessList(Process, DbgPort);
				if (Temp != NULL)
				{
					if (Process != NULL)
					{
						if (Temp->Process == Process) {
							Port_ExFreeItem(Temp);
							return TRUE;
						}
					}

					if (DbgPort != NULL)
					{
						if (Temp->DbgPort == DbgPort) {
							Port_ExFreeItem(Temp);
							return TRUE;
						}
					}
				}
				return FALSE;

			}

			


			//**************************************//
			//相关调试函数


			VOID NTAPI DbgkpFreeDebugEvent(IN PDEBUG_EVENT DebugEvent)
			{
				PHANDLE Handle = NULL;
				PAGED_CODE();


				switch (DebugEvent->ApiMsg.ApiNumber)
				{

				case DbgKmCreateProcessApi:


					Handle = &DebugEvent->ApiMsg.CreateProcess.FileHandle;
					break;


				case DbgKmLoadDllApi:


					Handle = &DebugEvent->ApiMsg.LoadDll.FileHandle;

				default:
					break;
				}

				if ((Handle) && (*Handle)) ObCloseHandle(*Handle, KernelMode);


				ObDereferenceObject(DebugEvent->Process);
				ObDereferenceObject(DebugEvent->Thread);
				ExFreePoolWithTag(DebugEvent, 'EgbD');
			}


			VOID NTAPI DbgkpWakeTarget(IN PDEBUG_EVENT DebugEvent)
			{
				PETHREAD_S Thread = reinterpret_cast<PETHREAD_S>(DebugEvent->Thread);
				PAGED_CODE();


				if (DebugEvent->Flags & DEBUG_EVENT_SUSPEND)
					init_table_variable.PsResumeThread(reinterpret_cast<PETHREAD>(Thread), NULL);


				if (DebugEvent->Flags & DEBUG_EVENT_RELEASE)
				{

					ExReleaseRundownProtection(&Thread->RundownProtect);
				}


				if (DebugEvent->Flags & DEBUG_EVENT_NOWAIT)
				{

					DbgkpFreeDebugEvent(DebugEvent);
				}
				else
				{

					KeSetEvent(&DebugEvent->ContinueEvent, IO_NO_INCREMENT, FALSE);
				}
			}

			VOID __fastcall DbgkpDeleteObject(IN PVOID DebugObject)
			{
				PAGED_CODE();
				ASSERT(IsListEmpty(&((PDEBUG_OBJECT)DebugObject)->EventList));
			}

			VOID __fastcall DbgkpCloseObject(
				IN PEPROCESS_S Process,
				IN PVOID Object,
				IN ACCESS_MASK GrantedAccess,
				IN ULONG64 ProcessHandleCount,  //modify  ULONG_PTR->ULONG64
				IN ULONG64 SystemHandleCount    //modify 
			)
				/*++

				Routine Description:

				Called by the object manager when a handle is closed to the object.

				Arguments:

				Process - Process doing the close
				Object - Debug object being deleted
				GrantedAccess - Access ranted for this handle
				ProcessHandleCount - Unused and unmaintained by OB
				SystemHandleCount - Current handle count for this object

				Return Value:

				None.

				--*/
			{
				PDEBUG_OBJECT DebugObject = (PDEBUG_OBJECT)Object;
				PDEBUG_EVENT DebugEvent;
				PLIST_ENTRY ListPtr;
				BOOLEAN Deref;

				PAGED_CODE();

				UNREFERENCED_PARAMETER(GrantedAccess);
				UNREFERENCED_PARAMETER(ProcessHandleCount);

				//
				// If this isn't the last handle then do nothing.
				//
				if (SystemHandleCount > 1) {
					return;
				}

				ExAcquireFastMutex(&DebugObject->Mutex);

				//
				// Mark this object as going away and wake up any processes that are waiting.
				//
				DebugObject->Flags |= DEBUG_OBJECT_DELETE_PENDING;

				//
				// Remove any events and queue them to a temporary queue
				//
				ListPtr = (PLIST_ENTRY)DebugObject->EventList.Flink;
				InitializeListHead(reinterpret_cast<PLIST_ENTRY>(&DebugObject->EventList));

				ExReleaseFastMutex(&DebugObject->Mutex);

				//
				// Wake anyone waiting. They need to leave this object alone now as its deleting
				//
				KeSetEvent(&DebugObject->EventsPresent, 0, FALSE);

				//
				// Loop over all processes and remove the debug port from any that still have it.
				// Debug port propagation was disabled by setting the delete pending flag above so we only have to do this
				// once. No more refs can appear now.
				//
				ExAcquireFastMutex(&DbgkFastMutex);
				Deref = Port_RemoveDbgItem(NULL, (ULONG64)DebugObject);
				ExReleaseFastMutex(&DbgkFastMutex);


				if (Deref) {
					//	DbgkpMarkProcessPeb(Process);
					//
					// If the caller wanted process deletion on debugger dying (old interface) then kill off the process.
					//
					if (DebugObject->Flags&DEBUG_OBJECT_KILL_ON_CLOSE) {
						//PsTerminateProcess(Process, STATUS_DEBUGGER_INACTIVE);
					}
					ObDereferenceObject(DebugObject);
				}
				//
				// Wake up all the removed threads.
				//
				while (ListPtr != reinterpret_cast<PLIST_ENTRY>(&DebugObject->EventList)) {
					DebugEvent = CONTAINING_RECORD(ListPtr, DEBUG_EVENT, EventList);
					//DebugEvent = (PDEBUG_EVENT)ListPtr;
					ListPtr = ListPtr->Flink;
					DebugEvent->Status = STATUS_DEBUGGER_INACTIVE;
					DbgkpWakeTarget(DebugEvent);
				}

				ULONG_PTR a;

			}



			POBJECT_TYPE CreateNewObjectType(POBJECT_TYPE_S *OrigDebugObjectType)
			{
				NTSTATUS					status;
				POBJECT_TYPE_S				NewObjectType;

				UNICODE_STRING				usObjectTypeName, usFuncName;
				OBCREATEOBJECTTYPE			ObCreateObjectType;
				OBJECT_TYPE_INITIALIZER_S	Object_Type_Init = { 0 };

				NewObjectType = NULL;
				if (OrigDebugObjectType == NULL || *OrigDebugObjectType == NULL || init_table_variable.ObTypeIndexTable == NULL) //global
				{
					return NULL;
				}


				RtlInitUnicodeString(&usObjectTypeName, L"yobj");
				RtlInitUnicodeString(&usFuncName, L"ObCreateObjectType");
				ObCreateObjectType = (OBCREATEOBJECTTYPE)MmGetSystemRoutineAddress(&usFuncName);
				if (ObCreateObjectType == NULL)
				{
					return NULL;
				}

				memset(&Object_Type_Init, 0x00, sizeof(OBJECT_TYPE_INITIALIZER_S));
				//将原来调试对象的属性全部复制出来，自己再新建一个
				memcpy(&Object_Type_Init, &(*OrigDebugObjectType)->TypeInfo, sizeof(OBJECT_TYPE_INITIALIZER_S));
				Object_Type_Init.DeleteProcedure = &DbgkpDeleteObject;
				Object_Type_Init.CloseProcedure = &DbgkpCloseObject;
				Object_Type_Init.ValidAccessMask = 0x1f000f;
				status = ObCreateObjectType(&usObjectTypeName, &Object_Type_Init, NULL, reinterpret_cast<POBJECT_TYPE *>(&NewObjectType));
				if (status == STATUS_OBJECT_NAME_COLLISION)
				{
					ULONG Index = 2;
					while (init_table_variable.ObTypeIndexTable[Index])
					{
						if (RtlCompareUnicodeString(&init_table_variable.ObTypeIndexTable[Index]->Name, &usObjectTypeName, FALSE) == 0)
						{
							//DbgPrint("Index: %ld", Index);
							return (POBJECT_TYPE)init_table_variable.ObTypeIndexTable[Index];
						}
						Index++;
					}
				}

				return (POBJECT_TYPE)NewObjectType;
			}






			NTSTATUS __fastcall proxyNtCreateDebugObject(OUT PHANDLE DebugObjectHandle,IN ACCESS_MASK DesiredAccess,IN POBJECT_ATTRIBUTES ObjectAttributes,IN ULONG Flags)
			{
				Driver::DeBugger::p_save_handlentry Padd = NULL;
				NTSTATUS status;
				HANDLE Handle;
				PDEBUG_OBJECT DebugObject;
				KPROCESSOR_MODE        PreviousMode;

				PreviousMode = ExGetPreviousMode();
				DbgPrint("HOOK NTCREATEDEBUGOBJECT");
				__try {
					if (PreviousMode != KernelMode) {
						ProbeForWriteHandle(DebugObjectHandle);
						*DebugObjectHandle = *DebugObjectHandle;
					}
					*DebugObjectHandle = NULL;

				}
				__except (ExSystemExceptionFilter()) {
					return GetExceptionCode();
				}

				if (Flags & ~DEBUG_KILL_ON_CLOSE) {
					return STATUS_INVALID_PARAMETER;
				}
				//创建调试对象
				status = ObCreateObject(
					PreviousMode,
					reinterpret_cast<POBJECT_TYPE>(NewDbgObject),    //新的对象类型
					ObjectAttributes,
					PreviousMode,
					NULL,
					sizeof(DEBUG_OBJECT),
					0,
					0,
					(PVOID*)&DebugObject);


				if (!NT_SUCCESS(status)) {
					return status;
				}
				//初始化调试对象
				ExInitializeFastMutex(&DebugObject->Mutex);
				InitializeListHead(reinterpret_cast<PLIST_ENTRY>(&DebugObject->EventList));
				KeInitializeEvent(&DebugObject->EventsPresent, NotificationEvent, FALSE);

				if (Flags & DEBUG_KILL_ON_CLOSE) {
					DebugObject->Flags = DEBUG_OBJECT_KILL_ON_CLOSE;
				}
				else {
					DebugObject->Flags = 0;
				}


				status = ObInsertObject(
					DebugObject,
					NULL,
					DesiredAccess,
					0,
					NULL,
					&Handle);
				if (!NT_SUCCESS(status)) {
					return status;
				}

				__try {
					*DebugObjectHandle = Handle;
				}
				__except (ExSystemExceptionFilter()) {
					status = GetExceptionCode();
				}
				return status;
			}




			VOID NTAPI DbgkpConvertKernelToUserStateChange(IN PDBGUI_WAIT_STATE_CHANGE WaitStateChange, IN PDEBUG_EVENT DebugEvent)
			{


				WaitStateChange->AppClientId = DebugEvent->ClientId;

				DbgPrintEx(0, 0, "DebugEvent->ApiMsg.ApiNumber :%lu", DebugEvent->ApiMsg.ApiNumber);
				switch (DebugEvent->ApiMsg.ApiNumber)
				{
					case DbgKmCreateProcessApi:
						WaitStateChange->NewState = DbgCreateProcessStateChange;
						WaitStateChange->StateInfo.CreateProcessInfo.NewProcess =
							DebugEvent->ApiMsg.CreateProcess;
						DebugEvent->ApiMsg.CreateProcess.FileHandle = NULL;
						break;


					case DbgKmCreateThreadApi:
						WaitStateChange->NewState = DbgCreateThreadStateChange;
						WaitStateChange->StateInfo.CreateThread.NewThread.StartAddress =
							DebugEvent->ApiMsg.CreateThread.StartAddress;
						WaitStateChange->StateInfo.CreateThread.NewThread.SubSystemKey =
							DebugEvent->ApiMsg.CreateThread.SubSystemKey;
						DbgPrintEx(0,0,"CreateThreadApi , stratAddress: %llx, SubSystemKey:%llx", DebugEvent->ApiMsg.CreateThread.StartAddress, DebugEvent->ApiMsg.CreateThread.SubSystemKey);
						break;


				case DbgKmExceptionApi:
					if ((NTSTATUS)DebugEvent->ApiMsg.Exception.ExceptionRecord.ExceptionCode ==
						STATUS_BREAKPOINT)
					{

						WaitStateChange->NewState = DbgBreakpointStateChange;
					}
					else if ((NTSTATUS)DebugEvent->ApiMsg.Exception.ExceptionRecord.ExceptionCode ==
						STATUS_SINGLE_STEP)
					{

						WaitStateChange->NewState = DbgSingleStepStateChange;
					}
					else
					{

						WaitStateChange->NewState = DbgExceptionStateChange;
					}


					WaitStateChange->StateInfo.Exception.ExceptionRecord =
						DebugEvent->ApiMsg.Exception.ExceptionRecord;

					WaitStateChange->StateInfo.Exception.FirstChance =
						DebugEvent->ApiMsg.Exception.FirstChance;
					break;


				case DbgKmExitProcessApi:

					WaitStateChange->NewState = DbgExitProcessStateChange;
					WaitStateChange->StateInfo.ExitProcess.ExitStatus =
						DebugEvent->ApiMsg.ExitProcess.ExitStatus;
					break;


				case DbgKmExitThreadApi:


					WaitStateChange->NewState = DbgExitThreadStateChange;
					WaitStateChange->StateInfo.ExitThread.ExitStatus =
						DebugEvent->ApiMsg.ExitThread.ExitStatus;
					break;


				case DbgKmLoadDllApi:


					WaitStateChange->NewState = DbgLoadDllStateChange;


					WaitStateChange->StateInfo.LoadDll = DebugEvent->ApiMsg.LoadDll;


					DebugEvent->ApiMsg.LoadDll.FileHandle = NULL;


					break;


				case DbgKmUnloadDllApi:


					WaitStateChange->NewState = DbgUnloadDllStateChange;
					WaitStateChange->StateInfo.UnloadDll.BaseAddress =
						DebugEvent->ApiMsg.UnloadDll.BaseAddress;
					break;

				default:


					ASSERT(FALSE);
				}
			}


			VOID NTAPI DbgkpOpenHandles(IN PDBGUI_WAIT_STATE_CHANGE WaitStateChange,IN PEPROCESS Process,IN PETHREAD Thread)
			{
				NTSTATUS Status;
				HANDLE Handle;
				PHANDLE DupHandle;
				PAGED_CODE();



				switch (WaitStateChange->NewState)
				{

				case DbgCreateThreadStateChange:


					Status = ObOpenObjectByPointer(Thread,
						0,
						NULL,
						THREAD_ALL_ACCESS,
						*PsThreadType,
						KernelMode,
						&Handle);
					if (NT_SUCCESS(Status))
					{

						WaitStateChange->
							StateInfo.CreateThread.HandleToThread = Handle;
					}
					return;


				case DbgCreateProcessStateChange:


					Status = ObOpenObjectByPointer(Thread,
						0,
						NULL,
						THREAD_ALL_ACCESS,
						*PsThreadType,
						KernelMode,
						&Handle);
					if (NT_SUCCESS(Status))
					{

						WaitStateChange->
							StateInfo.CreateProcessInfo.HandleToThread = Handle;
					}

					Status = ObOpenObjectByPointer(Process,
						0,
						NULL,
						PROCESS_ALL_ACCESS,
						*PsProcessType,
						KernelMode,
						&Handle);
					if (NT_SUCCESS(Status))
					{

						WaitStateChange->
							StateInfo.CreateProcessInfo.HandleToProcess = Handle;
					}


					DupHandle = &WaitStateChange->
						StateInfo.CreateProcessInfo.NewProcess.FileHandle;
					break;

				case DbgLoadDllStateChange:

					DupHandle = &WaitStateChange->StateInfo.LoadDll.FileHandle;
					break;


				default:
					return;
				}


				Handle = *DupHandle;
				if (Handle)
				{

					Status = init_table_variable.ObDuplicateObject( 
						reinterpret_cast<PEPROCESS_S>(PsGetCurrentProcess()),
						Handle,
						reinterpret_cast<PEPROCESS_S>(PsGetCurrentProcess()),
						DupHandle,
						0,
						0,
						DUPLICATE_SAME_ACCESS,
						KernelMode);
					if (!NT_SUCCESS(Status)) 
						*DupHandle = NULL;


					ObCloseHandle(Handle, KernelMode);
				}
			}


			NTSTATUS __fastcall proxyNtWaitForDebugEvent(IN HANDLE DebugHandle,IN BOOLEAN Alertable,IN PLARGE_INTEGER Timeout OPTIONAL,OUT PDBGUI_WAIT_STATE_CHANGE StateChange)
			{
				KPROCESSOR_MODE PreviousMode = ExGetPreviousMode();
				LARGE_INTEGER LocalTimeOut;
				PEPROCESS Process;
				LARGE_INTEGER StartTime;
				PETHREAD Thread;
				BOOLEAN GotEvent;
				LARGE_INTEGER NewTime;
				PDEBUG_OBJECT DebugObject;
				DBGUI_WAIT_STATE_CHANGE WaitStateChange;
				NTSTATUS Status;
				PDEBUG_EVENT DebugEvent = NULL, DebugEvent2;
				PLIST_ENTRY ListHead, NextEntry, NextEntry2;
				PAGED_CODE();

				DbgProcess dbgmsg = { 0 };
				RtlZeroMemory(&WaitStateChange, sizeof(WaitStateChange));
				LocalTimeOut.QuadPart = 0;

				if (PreviousMode != KernelMode)
				{

					__try
					{

						if (Timeout)
						{

							//ProbeForReadLargeInteger(Timeout);


							LocalTimeOut = *Timeout;
							Timeout = &LocalTimeOut;
						}


						ProbeForWrite(StateChange, sizeof(*StateChange), sizeof(ULONG));
					}
					__except(EXCEPTION_EXECUTE_HANDLER)
					{

						return GetExceptionCode();
					}

				}
				else
				{

					if (Timeout) LocalTimeOut = *Timeout;
				}


				if (Timeout) KeQuerySystemTime(&StartTime);


				Status = ObReferenceObjectByHandle(DebugHandle,
					DEBUG_OBJECT_WAIT_STATE_CHANGE,
					reinterpret_cast<POBJECT_TYPE>(NewDbgObject),
					PreviousMode,
					(PVOID*)&DebugObject,
					NULL);

				if (!NT_SUCCESS(Status)) 
					return Status;


				Process = NULL;
				Thread = NULL;


				while (TRUE)
				{
					//DbgPrintEx(0, 0, "WaitForDebugEvent 我等");
					Status = KeWaitForSingleObject(&DebugObject->EventsPresent,
						Executive,
						PreviousMode,
						Alertable,
						Timeout);
					//DbgPrintEx(0, 0, "WaitForDebugEvent 我等到了");
					if (!NT_SUCCESS(Status) ||
						(Status == STATUS_TIMEOUT) ||
						(Status == STATUS_ALERTED) ||
						(Status == STATUS_USER_APC))
					{

						break;
					}


					GotEvent = FALSE;
					ExAcquireFastMutex(&DebugObject->Mutex);


					if (DebugObject->DebuggerInactive)
					{

						Status = STATUS_DEBUGGER_INACTIVE;
					}
					else
					{

						ListHead = reinterpret_cast<PLIST_ENTRY>(&DebugObject->EventList);
						NextEntry = ListHead->Flink;
						while (ListHead != NextEntry)
						{

							DebugEvent = CONTAINING_RECORD(NextEntry,
								DEBUG_EVENT,
								EventList);



							if (!(DebugEvent->Flags & (DEBUG_EVENT_INACTIVE | DEBUG_EVENT_READ)))
							{

								GotEvent = TRUE;


								NextEntry2 = reinterpret_cast<PLIST_ENTRY>(DebugObject->EventList.Flink);
								while (NextEntry2 != NextEntry)
								{

									DebugEvent2 = CONTAINING_RECORD(NextEntry2,
										DEBUG_EVENT,
										EventList);

									if (DebugEvent2->ClientId.UniqueProcess ==
										DebugEvent->ClientId.UniqueProcess)
									{

										DebugEvent->Flags |= DEBUG_EVENT_INACTIVE;
										DebugEvent->BackoutThread = NULL;
										GotEvent = FALSE;
										break;
									}


									NextEntry2 = NextEntry2->Flink;
								}


								if (GotEvent) break;
							}


							NextEntry = NextEntry->Flink;
						}


						if (GotEvent)
						{
							Process = DebugEvent->Process;
							Thread = DebugEvent->Thread;
							ObReferenceObject(Process);
							ObReferenceObject(Thread);


							DbgkpConvertKernelToUserStateChange(&WaitStateChange,
								DebugEvent);


							DebugEvent->Flags |= DEBUG_EVENT_READ;
						}
						else
						{

							KeClearEvent(&DebugObject->EventsPresent);
						}


						Status = STATUS_SUCCESS;
					}


					ExReleaseFastMutex(&DebugObject->Mutex);
					if (!NT_SUCCESS(Status)) break;


					if (!GotEvent)
					{

						if (LocalTimeOut.QuadPart < 0)
						{

							KeQuerySystemTime(&NewTime);


							LocalTimeOut.QuadPart += (NewTime.QuadPart - StartTime.QuadPart);
							StartTime = NewTime;


							if (LocalTimeOut.QuadPart >= 0)
							{

								Status = STATUS_TIMEOUT;
								break;
							}
						}
					}
					else
					{
						DbgkpOpenHandles(&WaitStateChange, Process, Thread);
						ObDereferenceObject(Process);
						ObDereferenceObject(Thread);
						break;
					}
				}






				ObDereferenceObject(DebugObject);


				__try
				{

					*StateChange = WaitStateChange;
				}
				__except(ExSystemExceptionFilter())
				{

					Status = GetExceptionCode();
				}


				return Status;
			}



			NTSTATUS NTAPI proxyNtDebugContinue(IN HANDLE DebugHandle,IN PCLIENT_ID AppClientId,IN NTSTATUS ContinueStatus)
			{
				DbgProcess dbgmsg = { 0 };
				KPROCESSOR_MODE PreviousMode = ExGetPreviousMode();
				PDEBUG_OBJECT DebugObject;
				NTSTATUS Status;
				PDEBUG_EVENT DebugEvent = NULL, DebugEventToWake = NULL;
				PLIST_ENTRY ListHead, NextEntry;
				BOOLEAN NeedsWake = FALSE;
				CLIENT_ID ClientId;
				PAGED_CODE();

				/*dbgmsg.DbgHanle = DebugHandle;
				dbgmsg.DebugProcess = AppClientId->UniqueProcess;
				if (Debug_FindMyNeedData(&dbgmsg) == FALSE){

					return ori_pslp42(DebugHandle, AppClientId, ContinueStatus);
				}
			*/

				if (PreviousMode != KernelMode)
				{

					__try
					{

						ProbeForRead(AppClientId, sizeof(CLIENT_ID), sizeof(ULONG));
						ClientId = *AppClientId;
						AppClientId = &ClientId;
					}
					__except(EXCEPTION_EXECUTE_HANDLER)
					{

						return GetExceptionCode();
					}
				}


				if ((ContinueStatus != DBG_CONTINUE) &&
					(ContinueStatus != DBG_EXCEPTION_HANDLED) &&
					(ContinueStatus != DBG_EXCEPTION_NOT_HANDLED) &&
					(ContinueStatus != DBG_TERMINATE_THREAD) &&
					(ContinueStatus != DBG_TERMINATE_PROCESS))
				{
					Status = STATUS_INVALID_PARAMETER;
				}
				else
				{



					Status = ObReferenceObjectByHandle(DebugHandle,
						DEBUG_OBJECT_WAIT_STATE_CHANGE,
						reinterpret_cast<POBJECT_TYPE>(NewDbgObject),
						PreviousMode,
						(PVOID*)&DebugObject,
						NULL);

					if (NT_SUCCESS(Status))
					{

						ExAcquireFastMutex(&DebugObject->Mutex);

						ListHead = reinterpret_cast<PLIST_ENTRY>(&DebugObject->EventList);
						NextEntry = ListHead->Flink;
						while (ListHead != NextEntry)
						{

							DebugEvent = CONTAINING_RECORD(NextEntry,
								DEBUG_EVENT,
								EventList);


							if (DebugEvent->ClientId.UniqueProcess ==
								AppClientId->UniqueProcess)
							{

								if (NeedsWake)
								{

									DebugEvent->Flags &= ~DEBUG_EVENT_INACTIVE;
									KeSetEvent(&DebugObject->EventsPresent,
										IO_NO_INCREMENT,
										FALSE);
									break;
								}


								if ((DebugEvent->ClientId.UniqueThread ==
									AppClientId->UniqueThread) && (DebugEvent->Flags & DEBUG_EVENT_READ))
								{

									RemoveEntryList(NextEntry);


									NeedsWake = TRUE;
									DebugEventToWake = DebugEvent;
								}
							}


							NextEntry = NextEntry->Flink;
						}


						ExReleaseFastMutex(&DebugObject->Mutex);


						ObDereferenceObject(DebugObject);

						if (NeedsWake)
						{
							DebugEventToWake->ApiMsg.ReturnedStatus = ContinueStatus;
							DebugEventToWake->Status = STATUS_SUCCESS;


							DbgkpWakeTarget(DebugEventToWake);
						}
						else
						{

							Status = STATUS_INVALID_PARAMETER;
						}
					}
				}
				return Status;
			}

			FORCEINLINE PKTRAP_FRAME PspGetThreadTrapFrame(PETHREAD_S Thread)
			{
				#define KERNEL_STACK_CONTROL_LENGTH sizeof(KERNEL_STACK_CONTROL)  
				#define KTRAP_FRAME_LENGTH sizeof(KTRAP_FRAME)  

				ULONG64 InitialStack;
				PKERNEL_STACK_CONTROL StackControl;
				__try {
					InitialStack = (ULONG64)Thread->Tcb.InitialStack;
					StackControl = (PKERNEL_STACK_CONTROL)InitialStack;
					if (StackControl == NULL)
					{
						return NULL;
					}
					if (MmIsAddressValid(&StackControl->Previous.StackBase) == FALSE)
					{
						return NULL;
					}
					while (StackControl->Previous.StackBase != 0)
					{
						InitialStack = StackControl->Previous.InitialStack;
						StackControl = (PKERNEL_STACK_CONTROL)InitialStack;
					}

				}__except(EXCEPTION_EXECUTE_HANDLER) {
					return NULL;

				}



				return (PKTRAP_FRAME)(InitialStack - KTRAP_FRAME_LENGTH);
			}
			NTSTATUS AddAllThreadContextToList(PEPROCESS_S Process) {

				PKTRAP_FRAME pframe = NULL;
				PETHREAD_S Thread = NULL;

				Driver::thread_contex::THREAD_dr_List t = { 0 };
				Driver::thread_contex::PPROCESS_List PList = NULL;
				if (Process != NULL)
				{
					PList = Driver::thread_contex::Dr_AddProcessToList(reinterpret_cast<PEPROCESS>(Process));
				}
				else
				{
					return FALSE;
				}


				Thread = reinterpret_cast<PETHREAD_S>(init_table_variable.PsGetNextProcessThread(Process, NULL));
				while (Thread != NULL) {

					if (Thread != NULL) {

						if (ExAcquireRundownProtection(&Thread->RundownProtect))
						{
							pframe = PspGetThreadTrapFrame(Thread);

							//Thread->Tcb.TrapFrame;

							DbgPrint("Thread Frame: %p", pframe);


							if (MmIsAddressValid(pframe) == TRUE)
							{
								//首先其他线程的值都是没有被写的，只有一根线程dxf在写
								//那么方案一：先让除那个特殊线程外的所有线程的dr6和dr7在读取的时候固定

								t.Dr0 = ((PLARGE_INTEGER)(&pframe->Dr0))->LowPart;
								t.Dr1 = ((PLARGE_INTEGER)(&pframe->Dr1))->LowPart;
								t.Dr2 = ((PLARGE_INTEGER)(&pframe->Dr2))->LowPart;
								t.Dr3 = ((PLARGE_INTEGER)(&pframe->Dr3))->LowPart;
								t.Dr6 = ((PLARGE_INTEGER)(&pframe->Dr6))->LowPart;
								t.Dr7 = ((PLARGE_INTEGER)(&pframe->Dr7))->LowPart;
								//t.eflag = pframe->EFlags;
								DbgPrintEx(0, 0, "debug:dr0: %lx dr1 :%lx dr2 :%lx dr3 :%lx dr6:%lx dr7:%lx",t.Dr0, t.Dr1, t.Dr2, t.Dr3, t.Dr6, t.Dr7);
								//只需要判断dr7都行了
								//if (t.Dr7 & 0xfful) {
								//	UINT32 tid = (UINT32)PsGetThreadId(reinterpret_cast<PETHREAD>(Thread));
								//	DbgPrintEx(0, 0, "debug: thread: %lx dr7 is : %lx", tid, t.Dr7);
								//	Driver::thread_list::insert_thread_list(tid);
								//}
								////Clear Thread Context
								//pframe->Dr0 = 0;
								//pframe->Dr1 = 0;
								//pframe->Dr2 = 0;
								//pframe->Dr3 = 0;
								//pframe->Dr6 = 0;
								//pframe->Dr7 = 0;

								//t.Thread = reinterpret_cast<PETHREAD>(Thread);
								//Driver::thread_contex::Dr_AddThreadStructToList(PList, &t);
								//DbgPrintEx(0,0,"debug:thread: %lx dr0: %lx dr1 :%lx dr2 :%lx dr3 :%lx dr6:%lx dr7:%lx", PsGetThreadId(t.Thread), t.Dr0, t.Dr1, t.Dr2, t.Dr3, t.Dr6, t.Dr7);
							}
							ExReleaseRundownProtection(&Thread->RundownProtect);
						}
					}
					Thread = (PETHREAD_S)init_table_variable.PsGetNextProcessThread(Process, reinterpret_cast<PETHREAD>(Thread));

				}
				return STATUS_SUCCESS;
			}


			NTSTATUS DbgkpPostFakeProcessCreateMessages_2(
				IN PEPROCESS_S Process,
				IN PDEBUG_OBJECT DebugObject,
				IN PETHREAD *pLastThread
			)
			{
				NTSTATUS	status;
				KAPC_STATE	ApcState;
				PETHREAD	StartThread, Thread;
				PETHREAD	LastThread;

				KeStackAttachProcess((PEPROCESS)Process, &ApcState);
				//收集所有线程创建的消息
				StartThread = 0;
				status = init_table_variable.DbgkpPostFakeThreadMessages(
					Process,
					(ULONG64)DebugObject,
					StartThread,
					&Thread,
					&LastThread);

				if (NT_SUCCESS(status))
				{

					//收集模块创建的消息
					init_table_variable.DbgkpPostModuleMessages(Process, Thread, DebugObject);


					ObfDereferenceObject(Thread);
				}
				else {
					LastThread = 0;
				}
				KeUnstackDetachProcess(&ApcState);
				*pLastThread = LastThread;
				return	status;
			}



			NTSTATUS __fastcall
				DbgkpSetProcessDebugObject_2(//反汇编OK
					IN PEPROCESS_S Process,
					IN PDEBUG_OBJECT DebugObject,
					IN NTSTATUS MsgStatus,
					IN PETHREAD LastThread
				)
			{
				NTSTATUS Status;
				PETHREAD ThisThread;
				LIST_ENTRY TempList;
				PLIST_ENTRY Entry;
				PDEBUG_EVENT DebugEvent;
				BOOLEAN First;
				PETHREAD Thread;
				BOOLEAN GlobalHeld;
				PETHREAD FirstThread;

				PAGED_CODE();

				ThisThread = (PETHREAD)PsGetCurrentThread();

				InitializeListHead(&TempList);

				First = TRUE;
				GlobalHeld = FALSE;

				if (!NT_SUCCESS(MsgStatus))
				{
					LastThread = NULL;
					Status = MsgStatus;
				}
				else
				{
					Status = STATUS_SUCCESS;
				}


				if (NT_SUCCESS(Status))
				{
					while (1)
					{
						GlobalHeld = TRUE;
						ExAcquireFastMutex(&DbgkFastMutex);

						/*	if (Process->Pcb.newdbgport!= NULL)
								{
									Status = STATUS_PORT_ALREADY_SET;
									break;
								}*/
						if (Port_IsPort(reinterpret_cast<PEPROCESS>(Process)))
						{
							Status = STATUS_PORT_ALREADY_SET;
							break;
						}
						Port_SetPort(reinterpret_cast<PEPROCESS>(Process), (ULONG64)DebugObject);
						//Process->Pcb.newdbgport = DebugObject;

						ObReferenceObject(LastThread);

						Thread = init_table_variable.PsGetNextProcessThread(Process, LastThread);
						if (Thread != NULL)
						{
							//Process->DebugPort = NULL; /*------ DebugPort -----------*/

							//Process->Pcb.newdbgport = NULL;
							Port_RemoveDbgItem(reinterpret_cast<PEPROCESS>(Process), NULL);
							ExReleaseFastMutex(&DbgkFastMutex);
							GlobalHeld = FALSE;
							ObDereferenceObject(LastThread);

							Status = init_table_variable.DbgkpPostFakeThreadMessages(
								Process,
								(ULONG64)DebugObject,
								Thread,
								&FirstThread,
								&LastThread);
							if (!NT_SUCCESS(Status))
							{
								LastThread = NULL;
								break;
							}
							ObDereferenceObject(FirstThread);
						}
						else
						{
							break;
						}
					}
				}
				ExAcquireFastMutex(&DebugObject->Mutex);

				if (NT_SUCCESS(Status))
				{
					if ((DebugObject->Flags&DEBUG_OBJECT_DELETE_PENDING) == 0) {
						RtlInterlockedSetBitsDiscardReturn(&Process->Flags, PS_PROCESS_FLAGS_NO_DEBUG_INHERIT | PS_PROCESS_FLAGS_CREATE_REPORTED);
						ObReferenceObject(DebugObject);//Process->NoDebugInherit 为1就表示有调试了。
					}
					else
					{
						//	Process->Pcb.newdbgport = NULL; /*------ DebugPort -----------*/
						Port_RemoveDbgItem(reinterpret_cast<PEPROCESS>(Process), NULL);
						Status = STATUS_DEBUGGER_INACTIVE;
					}
				}

				for (Entry = reinterpret_cast<PLIST_ENTRY>(DebugObject->EventList.Flink);
					Entry != reinterpret_cast<PLIST_ENTRY>(&DebugObject->EventList);
					)
				{
					DebugEvent = CONTAINING_RECORD(Entry, DEBUG_EVENT, EventList);
					Entry = Entry->Flink;

					if ((DebugEvent->Flags&DEBUG_EVENT_INACTIVE) != 0 && DebugEvent->BackoutThread == ThisThread) {
						Thread = DebugEvent->Thread;

						if (NT_SUCCESS(Status))
						{
							PETHREAD_S temp = reinterpret_cast<PETHREAD_S>(Thread);
							if ((DebugEvent->Flags&DEBUG_EVENT_PROTECT_FAILED) != 0) {
								RtlInterlockedSetBitsDiscardReturn(&temp->CrossThreadFlags,
									PS_CROSS_THREAD_FLAGS_SKIP_TERMINATION_MSG);
								RemoveEntryList(&DebugEvent->EventList);
								InsertTailList(&TempList, &DebugEvent->EventList);
							}
							else {

								if (First) {
									DebugEvent->Flags &= ~DEBUG_EVENT_INACTIVE;
									KeSetEvent(&DebugObject->EventsPresent, 0, FALSE);
									First = FALSE;
								}

								DebugEvent->BackoutThread = NULL;
								RtlInterlockedSetBitsDiscardReturn(&temp->CrossThreadFlags,
									PS_CROSS_THREAD_FLAGS_SKIP_CREATION_MSG);

							}
						}
						else
						{
							RemoveEntryList(&DebugEvent->EventList);
							InsertTailList(&TempList, &DebugEvent->EventList);
						}

						if (DebugEvent->Flags&DEBUG_EVENT_RELEASE) {
							DebugEvent->Flags &= ~DEBUG_EVENT_RELEASE;
							PETHREAD_S temp = reinterpret_cast<PETHREAD_S>(Thread);
							ExReleaseRundownProtection(&temp->RundownProtect);
						}

					}
				}

				ExReleaseFastMutex(&DebugObject->Mutex);

				if (GlobalHeld) {
					ExReleaseFastMutex(&DbgkFastMutex);
				}

				if (LastThread != NULL) {
					ObDereferenceObject(LastThread);
				}

				while (!IsListEmpty(&TempList)) {
					Entry = RemoveHeadList(&TempList);
					DebugEvent = CONTAINING_RECORD(Entry, DEBUG_EVENT, EventList);
					init_table_variable.DbgkpWakeTarget_2(DebugEvent);
				}


				return STATUS_SUCCESS;
			}



			NTSTATUS __fastcall proxyNtDebugActiveProcess(IN HANDLE ProcessHandle,IN HANDLE DebugHandle)
			{
				PDbgPortList DbgList = NULL;
				DbgProcess dbgmsg = { 0 };
				PEPROCESS_S Process;
				PDEBUG_OBJECT DebugObject;
				KPROCESSOR_MODE PreviousMode = ExGetPreviousMode();
				PETHREAD LastThread;
				NTSTATUS Status;
				Driver::DeBugger::p_save_handlentry Padd = NULL;

				//@保证代码执行权限小于apc
				PAGED_CODE();


				DbgPrintEx(0, 0, "debug:  avtive");
				Status = ObReferenceObjectByHandle(ProcessHandle,
					PROCESS_SUSPEND_RESUME,
					*PsProcessType,
					PreviousMode,
					(PVOID*)&Process,
					NULL);

				if (!NT_SUCCESS(Status)) 
					return Status;

				//查看想要调试的是否系统进程和自己的进程
				if (((PEPROCESS)Process == PsGetCurrentProcess()) || ((PEPROCESS)Process == PsInitialSystemProcess))
				{
					ObDereferenceObject(Process);
					return STATUS_ACCESS_DENIED;
				}

				//DbgPrintEx(0, 0, "count:%lx", Driver::Process::GetMoudleCount((PEPROCESS)Process));


				DbgList = Port_FindProcessList(reinterpret_cast<PEPROCESS>(Process), NULL);
				if (DbgList != NULL)
				{
					if (MmIsAddressValid(DbgList)) 
					{
						//该调试链表并非线程安全，每次需要重新从内存中读取该值
						InterlockedExchange8(reinterpret_cast<volatile CHAR*>(&DbgList->markdbg), FALSE);//sendfirstexpt!;
					}
				
				}

				Padd = querylist(Driver::DeBugger::debugger_head, PsGetCurrentProcessId(), PsGetCurrentProcess());
				if (Padd != NULL)
				{
					AddAllThreadContextToList(Process);

					Driver::thread_list::p_break_point head = Driver::thread_list::break_point_head;
					while (head->next) {
						head = head->next;
						//DbgPrintEx(0, 0, "debug: thread insert %lx",head->tid);
					}
				}

				Status = ObReferenceObjectByHandle(DebugHandle,
					DEBUG_OBJECT_ADD_REMOVE_PROCESS,
					reinterpret_cast<POBJECT_TYPE>(NewDbgObject),
					PreviousMode,
					(PVOID*)&DebugObject,
					NULL);
				if (!NT_SUCCESS(Status))
				{

					ObDereferenceObject(Process);
					return Status;
				}
				if (!ExAcquireRundownProtection(&Process->RundownProtect))
				{

					ObDereferenceObject(Process);
					ObDereferenceObject(DebugObject);
					return STATUS_PROCESS_IS_TERMINATING;
				}
				//可能是在我收集信息的过程中结束了游戏
				Status = DbgkpPostFakeProcessCreateMessages_2(Process,DebugObject,&LastThread);
				Status = DbgkpSetProcessDebugObject_2(Process,
					DebugObject,
					Status,
					LastThread);

				//Driver::Process::CreateThread(reinterpret_cast<PEPROCESS>(Process), (PVOID)exception_first);

				ExReleaseRundownProtection(&Process->RundownProtect);
				ObDereferenceObject(Process);
				ObDereferenceObject(DebugObject);




				return Status;
			}




			NTSTATUS NTAPI DbgkClearProcessDebugObject(IN PEPROCESS_S Process,IN PDEBUG_OBJECT SourceDebugObject OPTIONAL)
			{
				PDEBUG_OBJECT DebugObject = NULL;
				PDEBUG_EVENT DebugEvent;
				LIST_ENTRY TempList;
				PLIST_ENTRY NextEntry;
				PAGED_CODE();



				ExAcquireFastMutex(&DbgkFastMutex);


				//DebugObject = Process->Pcb.newdbgport;

				DebugObject = (PDEBUG_OBJECT)Port_GetPort(reinterpret_cast<PEPROCESS>(Process));
				if ((DebugObject) &&
					((DebugObject == SourceDebugObject) ||
					(SourceDebugObject == NULL)))
				{

					//	Process->Pcb.newdbgport = NULL;
					Port_RemoveDbgItem(reinterpret_cast<PEPROCESS>(Process), NULL);
					ExReleaseFastMutex(&DbgkFastMutex);
					//DbgkpMarkProcessPeb(Process);
				}
				else
				{

					ExReleaseFastMutex(&DbgkFastMutex);
					return STATUS_PORT_NOT_SET;
				}

				InitializeListHead(&TempList);


				ExAcquireFastMutex(&DebugObject->Mutex);

				NextEntry = reinterpret_cast<PLIST_ENTRY>(DebugObject->EventList.Flink);
				while (NextEntry != reinterpret_cast<PLIST_ENTRY>(&DebugObject->EventList))
				{

					DebugEvent = CONTAINING_RECORD(NextEntry, DEBUG_EVENT, EventList);
					NextEntry = NextEntry->Flink;


					if (DebugEvent->Process == reinterpret_cast<PEPROCESS>(Process))
					{

						RemoveEntryList(&DebugEvent->EventList);
						InsertTailList(&TempList, &DebugEvent->EventList);
					}
				}


				ExReleaseFastMutex(&DebugObject->Mutex);


				ObDereferenceObject(DebugObject);

				while (!IsListEmpty(&TempList))
				{

					NextEntry = RemoveHeadList(&TempList);
					DebugEvent = CONTAINING_RECORD(NextEntry, DEBUG_EVENT, EventList);


					DebugEvent->Status = STATUS_DEBUGGER_INACTIVE;
					DbgkpWakeTarget(DebugEvent);
				}
				return STATUS_SUCCESS;
			}



			NTSTATUS NTAPI proxyNtRemoveProcessDebug(IN HANDLE ProcessHandle,IN HANDLE DebugHandle)
			{
				DbgProcess dbgmsg = { 0 };
				PEPROCESS_S Process;
				PDEBUG_OBJECT DebugObject;
				KPROCESSOR_MODE PreviousMode = ExGetPreviousMode();
				NTSTATUS Status;
				PAGED_CODE();
				PDbgProcess pdbgmsg = NULL;

				Status = ObReferenceObjectByHandle(ProcessHandle,
					PROCESS_SUSPEND_RESUME,
					*PsProcessType,
					PreviousMode,
					(PVOID*)&Process,
					NULL);
				if (!NT_SUCCESS(Status)) return Status;


				Status = ObReferenceObjectByHandle(DebugHandle,
					DEBUG_OBJECT_ADD_REMOVE_PROCESS,
					reinterpret_cast<POBJECT_TYPE>(NewDbgObject),
					PreviousMode,
					(PVOID*)&DebugObject,
					NULL);

				if (!NT_SUCCESS(Status))
				{

					ObDereferenceObject(Process);
					return Status;
				}


				Status = DbgkClearProcessDebugObject(Process, DebugObject);


				ObDereferenceObject(Process);
				ObDereferenceObject(DebugObject);
				return Status;
			}


			BOOLEAN DbgkpSuspendProcess(VOID)
			{
				if ((((PEPROCESS_S)PsGetCurrentProcess())->Flags &
					PS_PROCESS_FLAGS_PROCESS_DELETE) == 0) {
					init_table_variable.KeFreezeAllThreads();
					return TRUE;
				}
				return FALSE;
			}

			VOID NTAPI DbgkpResumeProcess(VOID)
			{
				PAGED_CODE();
				init_table_variable.KeThawAllThreads();
			}


			NTSTATUS __fastcall DbgkpQueueMessage_2(IN PEPROCESS_S Process,IN PETHREAD Thread,IN OUT PDBGKM_MSG ApiMsg,IN ULONG Flags,IN PDEBUG_OBJECT TargetDebugObject)
			{
				PDEBUG_EVENT DebugEvent;
				DEBUG_EVENT StaticDebugEvent;
				PDEBUG_OBJECT DebugObject;
				NTSTATUS Status;
				DbgProcess dbgmsg = { 0 };
				/*
					dbgmsg.DebugProcess = Process;
					if (Debug_FindMyNeedData(&dbgmsg)==FALSE)
					{
						return ori_pslp11(Process, Thread, ApiMsg, Flags, TargetDebugObject);
					}*/
				PAGED_CODE();

				if (Flags&DEBUG_EVENT_NOWAIT) {
					DebugEvent = (PDEBUG_EVENT)ExAllocatePoolWithQuotaTag(static_cast<POOL_TYPE>(NonPagedPool | POOL_QUOTA_FAIL_INSTEAD_OF_RAISE),sizeof(*DebugEvent),'EgbD');
					if (DebugEvent == NULL) {
						return STATUS_INSUFFICIENT_RESOURCES;
					}
					DebugEvent->Flags = Flags | DEBUG_EVENT_INACTIVE;
					ObReferenceObject(Process);
					ObReferenceObject(Thread);
					DebugEvent->BackoutThread = PsGetCurrentThread();
					DebugObject = TargetDebugObject;
				}
				else {
					DebugEvent = &StaticDebugEvent;
					DebugEvent->Flags = Flags;

					ExAcquireFastMutex(&DbgkFastMutex);

					//DebugObject = Process->Pcb.newdbgport;
					//DebugObject = Process->Pcb.newdbgport;
					DebugObject = (PDEBUG_OBJECT)Port_GetPort(reinterpret_cast<PEPROCESS>(Process));
					//
					// See if this create message has already been sent.
					//
					PETHREAD_S temp = reinterpret_cast<PETHREAD_S>(Thread);
					if (ApiMsg->ApiNumber == DbgKmCreateThreadApi ||
						ApiMsg->ApiNumber == DbgKmCreateProcessApi) {
						if (temp->CrossThreadFlags&PS_CROSS_THREAD_FLAGS_SKIP_CREATION_MSG) {
							DebugObject = NULL;
						}
					}
					if (ApiMsg->ApiNumber == DbgKmLoadDllApi && temp->CrossThreadFlags&PS_CROSS_THREAD_FLAGS_SKIP_CREATION_MSG && Flags & 0x40) {
						DebugObject = NULL;
					}
					//
					// See if this exit message is for a thread that never had a create
					//
					if (ApiMsg->ApiNumber == DbgKmExitThreadApi ||
						ApiMsg->ApiNumber == DbgKmExitProcessApi) {
						if (temp->CrossThreadFlags&PS_CROSS_THREAD_FLAGS_SKIP_TERMINATION_MSG) {
							DebugObject = NULL;
						}
					}

					KeInitializeEvent(&DebugEvent->ContinueEvent, SynchronizationEvent, FALSE);

				}


				PETHREAD_S temp = reinterpret_cast<PETHREAD_S>(Thread);
				DebugEvent->Process = reinterpret_cast<PEPROCESS>(Process);
				DebugEvent->Thread = Thread;
				DebugEvent->ApiMsg = *ApiMsg;
				DebugEvent->ClientId = temp->Cid;

				if (DebugObject == NULL) {
					Status = STATUS_PORT_NOT_SET;
				}
				else {

					//
					// We must not use a debug port thats got no handles left.
					//
					ExAcquireFastMutex(&DebugObject->Mutex);

					//
					// If the object is delete pending then don't use this object.
					//
					if ((DebugObject->Flags&DEBUG_OBJECT_DELETE_PENDING) == 0) {
						InsertTailList(reinterpret_cast<PLIST_ENTRY>(&DebugObject->EventList), &DebugEvent->EventList);
						//
						// Set the event to say there is an unread event in the object
						//
						if ((Flags&DEBUG_EVENT_NOWAIT) == 0) {
							KeSetEvent(&DebugObject->EventsPresent, 0, FALSE);
						}
						Status = STATUS_SUCCESS;
					}
					else {
						Status = STATUS_DEBUGGER_INACTIVE;
					}

					ExReleaseFastMutex(&DebugObject->Mutex);
				}


				if ((Flags&DEBUG_EVENT_NOWAIT) == 0) 
				{
					ExReleaseFastMutex(&DbgkFastMutex);

					if (NT_SUCCESS(Status)) {
						//DbgPrintEx(0, 0, "DbgkpQueueMessage_2 我等");
						KeWaitForSingleObject(&DebugEvent->ContinueEvent,
							Executive,
							KernelMode,
							FALSE,
							NULL);
						//DbgPrintEx(0, 0, "DbgkpQueueMessage_2 有消息来了");
						Status = DebugEvent->Status;
						*ApiMsg = DebugEvent->ApiMsg;
					}
				}
				else {
					if (!NT_SUCCESS(Status)) {
						ObDereferenceObject(Process);
						ObDereferenceObject(Thread);
						ExFreePool(DebugEvent);
					}
				}
				return Status;
			}


			NTSTATUS __fastcall DbgkpSendApiMessage_2(IN OUT PDBGKM_MSG ApiMsg,IN BOOLEAN SuspendProcess)
			{
				NTSTATUS Status;
				BOOLEAN Suspended = FALSE;
				PAGED_CODE();

				/* Suspend process if required */
				if (SuspendProcess) Suspended = DbgkpSuspendProcess();

				/* Set return status */
				ApiMsg->ReturnedStatus = STATUS_PENDING;

				/* Set create process reported state */

				//PspSetFlag(&((PEPROCESS_S)PsGetCurrentProcess())->Flags, PS_PROCESS_FLAGS_CREATE_REPORTED);

				/* Send the LPC command */
				Status = DbgkpQueueMessage_2(reinterpret_cast<PEPROCESS_S>(PsGetCurrentProcess()),
					PsGetCurrentThread(),
					ApiMsg,
					((SuspendProcess & 0x2) << 0x5),
					NULL);

				/* Flush the instruction cache */
				ZwFlushInstructionCache(NtCurrentProcess(), NULL, 0);

				/* Resume the process if it was suspended */
				if (Suspended) DbgkpResumeProcess();
				return Status;
			}



			VOID SendForWarExcept_Thread() {

				DBGKM_MSG ApiMessage = { 0 };
				PDBGKM_CREATE_THREAD CreateThreadArgs = &ApiMessage.CreateThread;


				ApiMessage.h.u1.Length = sizeof(DBGKM_MSG) << 16 |
					(8 + sizeof(DBGKM_CREATE_THREAD));
				ApiMessage.h.u2.ZeroInit = 0;
				ApiMessage.h.u2.s2.Type = LPC_DEBUG_EVENT;
				ApiMessage.ApiNumber = DbgKmCreateThreadApi;
				//PDBGKM_EXCEPTION DbgKmException = &ApiMessage.Exception;
				//DbgKmException->ExceptionRecord = *ExceptionRecord;
				//DbgKmException->FirstChance = !SecondChance;


				CreateThreadArgs->StartAddress = reinterpret_cast<PVOID>(0x402BAA);
				CreateThreadArgs->SubSystemKey = 0;
				DbgkpSendApiMessage_2(&ApiMessage, FALSE);

			}



			BOOLEAN __fastcall MarkDbgProcess() {
				PEPROCESS_S Process = reinterpret_cast<PEPROCESS_S>(PsGetCurrentProcess());
				PDbgPortList DbgList = NULL;

				DbgList = Port_FindProcessList(reinterpret_cast<PEPROCESS>(Process), NULL);
				DbgPrintEx(0, 0, "process: %llx, flag", DbgList, DbgList->markdbg);
				if (DbgList != NULL && MmIsAddressValid(DbgList) == TRUE && DbgList->markdbg == FALSE)
				{
					DbgPrintEx(0, 0, "发异常");
					InterlockedExchange8(reinterpret_cast<volatile CHAR*>(&DbgList->markdbg), TRUE);
					//	Process->Pcb.Unused3 = TRUE;
					SendForWarExcept_Thread(); //SendCreateThreadMsg
					return TRUE;
				}
				else {
					return FALSE;
				}
			}



			VOID __fastcall
				proxyKiDispatchException(
					IN PEXCEPTION_RECORD ExceptionRecord,
					IN PKEXCEPTION_FRAME ExceptionFrame,
					IN PKTRAP_FRAME TrapFrame,
					IN KPROCESSOR_MODE PreviousMode,
					IN BOOLEAN FirstChance
				) 
			{
				KIDISPATCHEXCEPTION  ori_KiDispatchException = reinterpret_cast<KIDISPATCHEXCEPTION>(init_table_hook.KiDispatchException.transfer_addr);
				//ori_KiDispatchException(ExceptionRecord, ExceptionFrame, TrapFrame, PreviousMode, FirstChance);
				if (PreviousMode == KernelMode)
				{
					//去这里要调用原始KiDispatchException去内核
					goto Handle1;
				}

				//所以我们这里的逻辑是：
				//1.第一次进来，先判断有调试器，也就是调试端口存在不存在，如果存在  处理完ok
				//2.如果调试端口不存在，那就是没调试器，换栈到SEH处理，如果SEH也失败，那么发起第二次调用
				//3.第二次进来，直接就寻找第二次的处理，第二次处理也失败，就会发送到异常端口进行处理，再失败就蓝屏


				//为什么调试器触发的异常暂停不下来？

				DbgPrintEx(0, 0, " KiDispatchException ExceptionRecord: %llx", ExceptionRecord->ExceptionAddress);


				if (FirstChance)
				{
					DbgPrintEx(0, 0, "第一次");
					if (proxyDbgkForwardException(ExceptionRecord, TRUE, FALSE))
					{
						DbgPrintEx(0, 0, "调试器处理了异常");
						goto Handle2;
					}
				}



				//************************KiUserExceptionDispatcher  换栈会去找SEH
				//


				//第二次是KiUserExceptionDispatcher发起的
				if(!FirstChance)
					DbgPrintEx(0, 0, "第二次");


				//第二次应当将消息返回到调试端口
				//if (proxyDbgkForwardException(ExceptionRecord, TRUE, TRUE))
				//{
				//	goto Handle2;
				//}


			Handle1:
				ori_KiDispatchException(ExceptionRecord, ExceptionFrame, TrapFrame, PreviousMode, FirstChance);
			Handle2:
				return;
			}

			//void(*shit[10])();
			


			//参数2是执行发送给调试端口还是异常端口；参数3是指定是否是第二轮处理机会。

			BOOLEAN __fastcall proxyDbgkForwardException(IN PEXCEPTION_RECORD ExceptionRecord,IN BOOLEAN DebugPort,IN BOOLEAN SecondChance)
			{

				if (!DebugPort && SecondChance) {
					//走异常端口
					return reinterpret_cast<DBGKFORWARDEXCEPTION>(init_table_hook.DbgkForwardException.transfer_addr)(ExceptionRecord,DebugPort, SecondChance);
				}
				//直接不检查PS_CROSS_THREAD_FLAGS_HIDEFROMDBG，也就让ThreadHideFromDebugger无效
				DBGKM_MSG ApiMessage;
				PDBGKM_EXCEPTION DbgKmException = &ApiMessage.Exception;

				NTSTATUS Status = TRUE;
				PEPROCESS_S Process = reinterpret_cast<PEPROCESS_S>(PsGetCurrentProcess());

				PVOID Port = NULL;
				DbgProcess dbgmsg = { 0 };
				BOOLEAN UseLpc = FALSE;
				PAGED_CODE();

				ApiMessage.h.u1.Length = sizeof(DBGKM_MSG) << 16 |
					(8 + sizeof(DBGKM_EXCEPTION));
				ApiMessage.h.u2.ZeroInit = 0;
				ApiMessage.h.u2.s2.Type = LPC_DEBUG_EVENT;
				ApiMessage.ApiNumber = DbgKmExceptionApi;



				if (DebugPort)
				{
					Port = (PVOID)Port_GetPort(reinterpret_cast<PEPROCESS>(Process));
				}

				if (!Port) 
					return FALSE;
				//AddAllThreadContextToList(reinterpret_cast<PEPROCESS_S>(PsGetCurrentProcess()));

				DbgPrintEx(0, 0, "debug:  ExceptionRecord: %llx", ExceptionRecord->ExceptionAddress);
				DbgPrintEx(0, 0, "debug: exception code: %lx",ExceptionRecord->ExceptionCode);


				DbgPrintEx(0, 0, "debug: thread id: %lx", PsGetCurrentThreadId());

				PKTRAP_FRAME pframe = PspGetThreadTrapFrame(reinterpret_cast<PETHREAD_S>(PsGetCurrentThread()));
				auto Dr0 = ((PLARGE_INTEGER)(&pframe->Dr0))->LowPart;
				auto Dr1 = ((PLARGE_INTEGER)(&pframe->Dr1))->LowPart;
				auto Dr2 = ((PLARGE_INTEGER)(&pframe->Dr2))->LowPart;
				auto Dr3 = ((PLARGE_INTEGER)(&pframe->Dr3))->LowPart;
				auto Dr6 = ((PLARGE_INTEGER)(&pframe->Dr6))->LowPart;
				auto Dr7 = ((PLARGE_INTEGER)(&pframe->Dr7))->LowPart;

				DbgPrintEx(0, 0, "debug:dr0: %lx dr1 :%lx dr2 :%lx dr3 :%lx dr6:%lx dr7:%lx", Dr0,Dr1,Dr2,Dr3,Dr6, Dr7);

				//if (!Driver::thread_list::find_thread_list((UINT32)PsGetCurrentThreadId())) {
				//	//先看看他对其他线程的dr寄存器有没有检测,6和7读了先不写
				//	pframe->Dr0 = 0x1;
				//	pframe->Dr1 = 0x2;
				//	pframe->Dr2 = 0x3;
				//	pframe->Dr3 = 0x4;
				//}
				return FALSE;

				//如果有硬件异常过来了，就必须交给源程序的VEH了
				//首先我没办法阻止他抛出异常
				//如果我搞定dr7他就不会再产生异常了
				//而且看起来他只是读的dr6


				//那么如果让他硬件异常都设置不成功，而且读出来也是永远都没触发
				//不成功不执行异常代码就跑飞了
				//先废掉他的dr7试试
				//反正看来异常给他他也没有再set
				//废掉之后他自己清零然后炸了
				//((PLARGE_INTEGER)(&pframe->Dr7))->LowPart = 0x400;
				//修改后他主动清零了，不行

				//DbgPrintEx(0, 0, "debug: thread id: %llx",PsGetCurrentThreadId());




				
				if ((!is_first_exception) && exception_first != (SIZE_T)ExceptionRecord->ExceptionAddress) {
					return FALSE;
				}


				DbgKmException->ExceptionRecord = *ExceptionRecord;
				DbgKmException->FirstChance = !SecondChance;

				Status = DbgkpSendApiMessage_2(&ApiMessage, DebugPort);


				DbgPrintEx(0, 0, "debug:调试器返回状态：%llx", ApiMessage.ReturnedStatus);
				if (!(NT_SUCCESS(Status)) ||
					((DebugPort) &&
					(!(NT_SUCCESS(ApiMessage.ReturnedStatus)) ||
						(ApiMessage.ReturnedStatus == DBG_EXCEPTION_NOT_HANDLED))))
				{
					return FALSE;
				}

				DbgPrintEx(0, 0, "debug:调试器处理完毕");

				is_first_exception = true;
				return TRUE;
			}


			NTSTATUS __fastcall proxyDbgkOpenProcessDebugPort(IN PEPROCESS_S Process,IN KPROCESSOR_MODE PreviousMode,OUT HANDLE *DebugHandle)
			{
				PDEBUG_OBJECT DebugObject;
				NTSTATUS Status;
				DbgProcess dbgmsg = { 0 };
				PAGED_CODE();

				if (!Port_IsPort(reinterpret_cast<PEPROCESS>(Process))) 
					return STATUS_PORT_NOT_SET;

				ExAcquireFastMutex(&DbgkFastMutex);


				//DebugObject = Process->Pcb.newdbgport;
				DebugObject = (PDEBUG_OBJECT)Port_GetPort(reinterpret_cast<PEPROCESS>(Process));
				if (DebugObject) 
					ObReferenceObject(DebugObject);


				ExReleaseFastMutex(&DbgkFastMutex);


				if (!DebugObject) return STATUS_PORT_NOT_SET;


				Status = ObOpenObjectByPointer(
					DebugObject,
					0,
					NULL,
					MAXIMUM_ALLOWED,
					reinterpret_cast<POBJECT_TYPE>(NewDbgObject),
					PreviousMode,
					DebugHandle);
				if (!NT_SUCCESS(Status)) 
					ObDereferenceObject(DebugObject);
				return Status;
			}




			VOID proxyDbgkCopyProcessDebugPort(IN PEPROCESS_S TargetProcess,IN PEPROCESS_S SourceProcess,IN ULONG64 unknow, IN ULONG64 unknow1)
			{
				PDEBUG_OBJECT DebugObject;
				Driver::DeBugger::p_save_handlentry Padd = NULL;

				PAGED_CODE();

				if (Port_IsPort(reinterpret_cast<PEPROCESS>(SourceProcess)))

					//if (SourceProcess->Pcb.newdbgport != NULL) 
				{
					ExAcquireFastMutex(&DbgkFastMutex);
					//DebugObject = SourceProcess->Pcb.newdbgport;
					DebugObject = (PDEBUG_OBJECT)Port_GetPort(reinterpret_cast<PEPROCESS>(SourceProcess));
					if (DebugObject != NULL && (SourceProcess->Flags&PS_PROCESS_FLAGS_NO_DEBUG_INHERIT) == 0) {
						//
						// We must not propagate a debug port thats got no handles left.
						//
						ExAcquireFastMutex(&DebugObject->Mutex);

						//
						// If the object is delete pending then don't propagate this object.
						//
						if ((DebugObject->Flags&DEBUG_OBJECT_DELETE_PENDING) == 0) {
							ObReferenceObject(DebugObject);

							//TargetProcess->Pcb.newdbgport = DebugObject;
							Port_SetPort(reinterpret_cast<PEPROCESS>(TargetProcess), (ULONG64)DebugObject);
						}

						ExReleaseFastMutex(&DebugObject->Mutex);
					}
					ExReleaseFastMutex(&DbgkFastMutex);
				}
			}



			void *__fastcall myRtlpCopyLegacyContextX86(BOOLEAN islegacy, Driver::thread_contex::PWOW64_CONTEXT destcontex, ULONG nouse_falg, Driver::thread_contex::PWOW64_CONTEXT srccontext)
			{
				PETHREAD Thread = PsGetCurrentThread();
				if (!_stricmp("DriverTetst.exe", Driver::Process::PsGetProcessImageFileName(IoThreadToProcess(Thread)))) {
				//	//要让异常都不能触发，但是关键这里要区分是读还是写
				// 貌似只有读

					DbgPrintEx(0, 0, "debug: src:  dr6:%lx dr7:%lx", srccontext->Dr6, srccontext->Dr7);
					//DbgPrintEx(0, 0, "debug: des:   dr0: %lx dr1 :%lx dr2 :%lx dr3 :%lx dr6:%lx dr7:%lx", destcontex->Dr0, destcontex->Dr1, destcontex->Dr2, destcontex->Dr3, destcontex->Dr6, destcontex->Dr7);
				}
				return reinterpret_cast<MYRTLPCOPYLEGACYCONTEXTX86>(init_table_hook.RtlpCopyLegacyContextX86.transfer_addr)(islegacy, destcontex, nouse_falg, srccontext);

				//PETHREAD Thread = PsGetCurrentThread();
				////DbgPrintEx(0, 0, "debug:thread: %lu, process:%lu", PsGetCurrentThreadId(), PsGetProcessId(IoThreadToProcess(Thread)));
				//void *result = reinterpret_cast<PVOID>(0x10020);
				//PEPROCESS Process = NULL;
				//Driver::thread_contex::PPROCESS_List PlIST = NULL;
				//Driver::thread_contex::PTHREAD_dr_List TList = NULL;
				//if (islegacy)
				//{
				//	destcontex->ContextFlags = srccontext->ContextFlags;
				//	if (Thread != NULL) {


				//		Process = IoThreadToProcess(Thread);
				//		if (Process != NULL) {

				//			PlIST = Driver::thread_contex::Dr_FindProcessList(Process);
				//			if (PlIST != NULL)
				//			{

				//				TList = Driver::thread_contex::Dr_FindThreadContextByThreadList(PlIST, Thread);
				//				if (TList != NULL)
				//				{
				//					DbgPrintEx(0, 0, "debug:thread: %lx, process:%s", PsGetCurrentThreadId(), Driver::Process::PsGetProcessImageFileName(IoThreadToProcess(Thread)));
				//					DbgPrintEx(0, 0, "debug: src:  dr0: %lx dr1 :%lx dr2 :%lx dr3 :%lx dr6:%lx dr7:%lx", srccontext->Dr0, srccontext->Dr1, srccontext->Dr2, srccontext->Dr3, srccontext->Dr6, srccontext->Dr7);
				//					destcontex->Dr0 = TList->Dr0;
				//					destcontex->Dr1 = TList->Dr1;
				//					destcontex->Dr2 = TList->Dr2;
				//					destcontex->Dr3 = TList->Dr3;
				//					destcontex->Dr6 = TList->Dr6;
				//					destcontex->Dr7 = TList->Dr7;
				//					destcontex->EFlags = TList->eflag;
				//					DbgPrintEx(0, 0, "debug: des:   dr0: %lx dr1 :%lx dr2 :%lx dr3 :%lx dr6:%lx dr7:%lx", destcontex->Dr0, destcontex->Dr1, destcontex->Dr2, destcontex->Dr3, destcontex->Dr6, destcontex->Dr7);
				//				}
				//				else
				//				{
				//					DbgPrintEx(0, 0, "debug:not find thread %lx", PsGetCurrentThreadId());
				//					/////////////////////////////////////////////////////////////////////////
				//					destcontex->Dr0 = NULL;
				//					destcontex->Dr1 = NULL;
				//					destcontex->Dr2 = NULL;
				//					destcontex->Dr3 = NULL;
				//					destcontex->Dr6 = NULL;
				//					destcontex->Dr7 = NULL;
				//					destcontex->EFlags &= ~0x100;
				//					//////////////////////////////////////////////////////////////////////////
				//				}
				//			}
				//			else
				//			{
				//				destcontex->Dr0 = srccontext->Dr0;
				//				destcontex->Dr1 = srccontext->Dr1;
				//				destcontex->Dr2 = srccontext->Dr2;
				//				destcontex->Dr3 = srccontext->Dr3;
				//				destcontex->Dr6 = srccontext->Dr6;
				//				destcontex->Dr7 = srccontext->Dr7;
				//			}
				//		}

				//	}
				//	else {

				//		destcontex->Dr0 = srccontext->Dr0;
				//		destcontex->Dr1 = srccontext->Dr1;
				//		destcontex->Dr2 = srccontext->Dr2;
				//		destcontex->Dr3 = srccontext->Dr3;
				//		destcontex->Dr6 = srccontext->Dr6;
				//		destcontex->Dr7 = srccontext->Dr7;

				//	}

				//	destcontex->Eax = srccontext->Eax;
				//	destcontex->Ebp = srccontext->Ebp;
				//	destcontex->Ebx = srccontext->Ebx;
				//	destcontex->Ecx = srccontext->Ecx;
				//	destcontex->Edi = srccontext->Edi;
				//	destcontex->Edx = srccontext->Edx;
				//	destcontex->EFlags = srccontext->EFlags;
				//	destcontex->Eip = srccontext->Eip;
				//	destcontex->Esi = srccontext->Esi;
				//	destcontex->Esp = srccontext->Esp;
				//	destcontex->SegCs = srccontext->SegCs;

				//	destcontex->SegDs = srccontext->SegDs;
				//	destcontex->SegEs = srccontext->SegEs;
				//	destcontex->SegFs = srccontext->SegFs;
				//	destcontex->SegGs = srccontext->SegGs;
				//	destcontex->SegSs = srccontext->SegSs;

				//	result = memmove(&destcontex->ExtendedRegisters, &srccontext->ExtendedRegisters, 0x200ui64);

				//	destcontex->FloatSave = srccontext->FloatSave;
				//}
				//return result;
			}




			VOID init_func_obj() {

				InitializeListHead(&PortList);
				KeInitializeSpinLock(&port_lock);


				InitializeListHead(&Driver::thread_contex::DrRwList);
				KeInitializeSpinLock(&Driver::thread_contex::g_lock);
				ExSystemExceptionFilter = (EXSYSTEMEXCEPTIONFILTER)Driver::kernel_hook::kernel_getaddr(L"ExSystemExceptionFilter");
				ObCreateObject = (OBCREATEOBJECT)Driver::kernel_hook::kernel_getaddr(L"ObCreateObject");
				KiCheckForKernelApcDelivery12 = (KiCheckForKernelApcDelivery1)Driver::kernel_hook::kernel_getaddr(L"KiCheckForKernelApcDelivery");
				ExInitializeFastMutex(&DbgkFastMutex);
				NewDbgObject = reinterpret_cast<POBJECT_TYPE_S>(CreateNewObjectType(init_table_variable.DbgkDebugObjectType)); //global

				if (NewDbgObject == NULL) {

					DbgPrint("NewDbgObject is NULL");
				}
			}

			VOID init_hook() {
				Driver::kernel_hook::HookKernelApi(
					init_table_hook.NtCreateDebugObject.ori_func_addr, 
					(PVOID)proxyNtCreateDebugObject,
					&init_table_hook.NtCreateDebugObject.transfer_addr, 
					&init_table_hook.NtCreateDebugObject.hook_size
				);

				Driver::kernel_hook::HookKernelApi(
					init_table_hook.NtWaitForDebugEvent.ori_func_addr,
					(PVOID)proxyNtWaitForDebugEvent,
					&init_table_hook.NtWaitForDebugEvent.transfer_addr,
					&init_table_hook.NtWaitForDebugEvent.hook_size
				);

				Driver::kernel_hook::HookKernelApi(
					init_table_hook.NtDebugContinue.ori_func_addr,
					(PVOID)proxyNtDebugContinue,
					&init_table_hook.NtDebugContinue.transfer_addr,
					&init_table_hook.NtDebugContinue.hook_size
				);

				Driver::kernel_hook::HookKernelApi(
					init_table_hook.NtDebugActiveProcess.ori_func_addr,
					(PVOID)proxyNtDebugActiveProcess,
					&init_table_hook.NtDebugActiveProcess.transfer_addr,
					&init_table_hook.NtDebugActiveProcess.hook_size
				);

				Driver::kernel_hook::HookKernelApi(
					init_table_hook.NtRemoveProcessDebug.ori_func_addr,
					(PVOID)proxyNtRemoveProcessDebug,
					&init_table_hook.NtRemoveProcessDebug.transfer_addr,
					&init_table_hook.NtRemoveProcessDebug.hook_size
				);

				Driver::kernel_hook::HookKernelApi(
					init_table_hook.DbgkForwardException.ori_func_addr,
					(PVOID)proxyDbgkForwardException,
					&init_table_hook.DbgkForwardException.transfer_addr,
					&init_table_hook.DbgkForwardException.hook_size
				);

				Driver::kernel_hook::HookKernelApi(
					init_table_hook.DbgkCopyProcessDebugPort.ori_func_addr,
					(PVOID)proxyDbgkCopyProcessDebugPort,
					&init_table_hook.DbgkCopyProcessDebugPort.transfer_addr,
					&init_table_hook.DbgkCopyProcessDebugPort.hook_size
				);

				Driver::kernel_hook::HookKernelApi(
					init_table_hook.DbgkOpenProcessDebugPort.ori_func_addr,
					(PVOID)proxyDbgkOpenProcessDebugPort,
					&init_table_hook.DbgkOpenProcessDebugPort.transfer_addr,
					&init_table_hook.DbgkOpenProcessDebugPort.hook_size
				);

				Driver::kernel_hook::HookKernelApi(
					init_table_hook.DbgkpQueueMessage.ori_func_addr,
					(PVOID)DbgkpQueueMessage_2,
					&init_table_hook.DbgkpQueueMessage.transfer_addr,
					&init_table_hook.DbgkpQueueMessage.hook_size
				);






				//Driver::kernel_hook::HookKernelApi(
				//	init_table_hook.RtlpCopyLegacyContextX86.ori_func_addr,
				//	(PVOID)myRtlpCopyLegacyContextX86,
				//	&init_table_hook.RtlpCopyLegacyContextX86.transfer_addr,
				//	&init_table_hook.RtlpCopyLegacyContextX86.hook_size
				//);

				//Driver::kernel_hook::HookKernelApi(
				//	init_table_hook.KiDispatchException.ori_func_addr,
				//	(PVOID)proxyKiDispatchException,
				//	&init_table_hook.KiDispatchException.transfer_addr,
				//	&init_table_hook.KiDispatchException.hook_size
				//);



			}
		}
	}
}