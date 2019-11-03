#include "Process.h"
#include "FindSSDT.h"

//对应64位进程获取PEB64：函数原型：PPEB PsGetProcessPeb(PEPROCESS Process);
//对应32位进程获取PEB32：函数原型：PPEB PsGetProcessWow64Process(PEPROCESS Process);

extern "C" {
	namespace Driver {
		namespace Process {
			constexpr SIZE_T Ldr_Offset = 0x18;
			constexpr SIZE_T ModList_Offset = 0x10;

			PVOID obHandle = NULL;


			void BypassCheckSign(PDRIVER_OBJECT pDriverObj)
			{
				auto ldr = (PLDR_DATA_TABLE_ENTRY)(pDriverObj->DriverSection);
				ldr->Flags |= 0x20;
			}



			SIZE_T GetMoudleBase(PEPROCESS process)
			{
				if (!MmIsAddressValid(process))
					return 0;
				SIZE_T Peb = (SIZE_T)PsGetProcessPeb(process);
				if (!Peb)
					return 0;

				//定义返回基址
				SIZE_T ModuleBase = 0;
				//附加上去获取数据
				KAPC_STATE apcstate;
				KeStackAttachProcess(process, &apcstate);
				__try
				{
					//暂时都用win7 7601
					SIZE_T Ldr = Peb + Ldr_Offset;
					ProbeForRead((PVOID)Ldr, 8, 8);
					PLIST_ENTRY ModListHead = (PLIST_ENTRY)(*(SIZE_T*)Ldr + ModList_Offset);
					ProbeForRead((PVOID)ModListHead, 8, 8);
					//Flink指向下一个节点,从头结点找到第一个节点
					PLIST_ENTRY Module = ModListHead->Flink;
					//如果链表为空那么Head->Flink = Head,不满足这个条件代表寻址成功
					if (Module != ModListHead) {
						ModuleBase = (SIZE_T)(((PLDR_DATA_TABLE_ENTRY)Module)->DllBase);
					}

				}
				__except (EXCEPTION_EXECUTE_HANDLER)
				{
					DbgPrint("Get Process Base failed");
				}
				KeUnstackDetachProcess(&apcstate);
				return ModuleBase;

			}





			NTSTATUS
				NTAPI
				ZwCreateThreadEx(
					OUT PHANDLE hThread,
					IN ACCESS_MASK DesiredAccess,
					IN PVOID ObjectAttributes,
					IN HANDLE ProcessHandle,
					IN PVOID lpStartAddress,
					IN PVOID lpParameter,
					IN ULONG Flags,
					IN SIZE_T StackZeroBits,
					IN SIZE_T SizeOfStackCommit,
					IN SIZE_T SizeOfStackReserve,
					IN PNT_PROC_THREAD_ATTRIBUTE_LIST AttributeList
				)
			{
				NTSTATUS status = STATUS_SUCCESS;

				fnNtCreateThreadEx NtCreateThreadEx = (fnNtCreateThreadEx)(Driver::FindSSDT::GetSSDTFunctionAddress(165));
				//DbgPrintEx(0, 0, "NtCreateThreadEx: %p", NtCreateThreadEx);
				if (NtCreateThreadEx)
				{
					//
					// If previous mode is UserMode, addresses passed into ZwCreateThreadEx must be in user-mode space
					// Switching to KernelMode allows usage of kernel-mode addresses
					//

					//KTHREAD  PreviousMode偏移
					PUCHAR pPrevMode = (PUCHAR)((SIZE_T)PsGetCurrentThread() + 0x1F6);
					UCHAR prevMode = *pPrevMode;
					*pPrevMode = KernelMode;

					status = NtCreateThreadEx(
						hThread, DesiredAccess, ObjectAttributes,
						ProcessHandle, lpStartAddress, lpParameter,
						Flags, StackZeroBits, SizeOfStackCommit,
						SizeOfStackReserve, AttributeList
					);

					*pPrevMode = prevMode;
				}
				else
					status = STATUS_NOT_FOUND;

				return status;
			}




			NTSTATUS BBExecuteInNewThread(
				IN PVOID pBaseAddress,
				IN PVOID pParam,
				IN ULONG flags,
				IN BOOLEAN wait,
				OUT PNTSTATUS pExitStatus
			)
			{
				HANDLE hThread = NULL;
				OBJECT_ATTRIBUTES ob = { 0 };
				NTSTATUS status;
				InitializeObjectAttributes(&ob, NULL, OBJ_KERNEL_HANDLE, NULL, NULL);

				status = ZwCreateThreadEx(
					&hThread, THREAD_QUERY_LIMITED_INFORMATION, &ob,
					ZwCurrentProcess(), pBaseAddress, pParam, flags,
					0, 0x1000, 0x100000, NULL
					);

				// Wait for completion 这里修改为不等待直接返回
				if (NT_SUCCESS(status))// && wait != FALSE)
				{
					//// Force 60 sec timeout
					//LARGE_INTEGER timeout = { 0 };
					//timeout.QuadPart = -(60ll * 10 * 1000 * 1000);

					//status = ZwWaitForSingleObject(hThread, TRUE, &timeout);
					//if (NT_SUCCESS(status))
					//{
					//	THREAD_BASIC_INFORMATION info = { 0 };
					//	ULONG bytes = 0;

					//	status = ZwQueryInformationThread(hThread, ThreadBasicInformation, &info, sizeof(info), &bytes);
					//	if (NT_SUCCESS(status) && pExitStatus)
					//	{
					//		*pExitStatus = info.ExitStatus;
					//	}
					//	else if (!NT_SUCCESS(status))
					//	{
					//		DbgPrint("ZwQueryInformationThread failed");
					//	}
					//}
					//else
					//	DbgPrint("ZwWaitForSingleObject failed\n");
				}
				else
					DbgPrint("debug:ZwCreateThreadEx failed");

				if (hThread)
					ZwClose(hThread);

				return status;
			}


			void CreateThread(PEPROCESS target_process,IN PVOID Address) {
				KAPC_STATE apc_state;
				NTSTATUS threadStatus;
				//DbgPrint("启动远线程。\n");
				__try
				{
					KeStackAttachProcess(target_process, &apc_state);
					//创建线程并等待退出
					threadStatus = STATUS_SUCCESS;
					BBExecuteInNewThread(Address, NULL, 4, TRUE, &threadStatus);
					KeUnstackDetachProcess(&apc_state);
				}
				__except (EXCEPTION_EXECUTE_HANDLER)
				{
					KeUnstackDetachProcess(&apc_state);
				}
			}

			UINT GetMoudleCount(PEPROCESS process)
			{
				if (!MmIsAddressValid(process))
					return 0;
				SIZE_T Peb = (SIZE_T)PsGetProcessPeb(process);
				if (!Peb)
					return 0;

				//定义返回基址
				UINT ModuleCount = 0;
				//附加上去获取数据
				KAPC_STATE apcstate;
				KeStackAttachProcess(process, &apcstate);
				__try
				{
					//暂时都用win7 7601
					SIZE_T Ldr = Peb + Ldr_Offset;
					ProbeForRead((PVOID)Ldr, 8, 8);
					PLIST_ENTRY ModListHead = (PLIST_ENTRY)(*(SIZE_T*)Ldr + ModList_Offset);
					ProbeForRead((PVOID)ModListHead, 8, 8);
					//Flink指向下一个节点,从头结点找到第一个节点
					PLIST_ENTRY Module = ModListHead->Flink;
					//如果链表为空那么Head->Flink = Head,不满足这个条件代表寻址成功
					while (Module != ModListHead) {
						DbgPrintEx(0, 0, "module name: %wZ\n", ((PLDR_DATA_TABLE_ENTRY)Module)->BaseDllName);
						Module = Module->Flink;
					}

				}
				__except (EXCEPTION_EXECUTE_HANDLER)
				{
					DbgPrint("Get Process Base failed");
				}
				KeUnstackDetachProcess(&apcstate);

				return ModuleCount;
			}

			BOOLEAN IsProtectedProcessName(PEPROCESS eprocess)
			{
				char *Name = PsGetProcessImageFileName(eprocess);
				if (!_stricmp("pub.exe", Name))
					return TRUE;
				else
					return FALSE;
			}



			OB_PREOP_CALLBACK_STATUS preCall(PVOID RegistrationContext, POB_PRE_OPERATION_INFORMATION pOperationInformation)
			{
				#define PROCESS_TERMINATE		 0x1
				#define PROCESS_CREATE_THREAD    0x2
				#define PROCESS_VM_OPERATION	 0x8 
				#define PROCESS_VM_READ          0x10
				#define PROCESS_VM_WRITE         0x20 
				HANDLE pid;
				if (pOperationInformation->ObjectType != *PsProcessType)
					goto exit_sub;
				pid = PsGetProcessId((PEPROCESS)pOperationInformation->Object);
				UNREFERENCED_PARAMETER(RegistrationContext);
				if (IsProtectedProcessName((PEPROCESS)pOperationInformation->Object))
				{
					if (pOperationInformation->Operation == OB_OPERATION_HANDLE_CREATE)
					{
						if ((pOperationInformation->Parameters->CreateHandleInformation.OriginalDesiredAccess & PROCESS_TERMINATE) == PROCESS_TERMINATE)
						{
							pOperationInformation->Parameters->CreateHandleInformation.DesiredAccess &= ~PROCESS_TERMINATE;
						}
						if ((pOperationInformation->Parameters->CreateHandleInformation.OriginalDesiredAccess & PROCESS_VM_OPERATION) == PROCESS_VM_OPERATION)//openprocess
						{
							pOperationInformation->Parameters->CreateHandleInformation.DesiredAccess &= ~PROCESS_VM_OPERATION;
						}
						if ((pOperationInformation->Parameters->CreateHandleInformation.OriginalDesiredAccess & PROCESS_VM_READ) == PROCESS_VM_READ)//内存读
						{
							pOperationInformation->Parameters->CreateHandleInformation.DesiredAccess &= ~PROCESS_VM_READ;
						}
						if ((pOperationInformation->Parameters->CreateHandleInformation.OriginalDesiredAccess & PROCESS_VM_WRITE) == PROCESS_VM_WRITE)//内存写
						{
							pOperationInformation->Parameters->CreateHandleInformation.DesiredAccess &= ~PROCESS_VM_WRITE;
						}
					}

					if (pOperationInformation->Operation == OB_OPERATION_HANDLE_DUPLICATE)
					{
						if ((pOperationInformation->Parameters->DuplicateHandleInformation.OriginalDesiredAccess & PROCESS_TERMINATE) == PROCESS_TERMINATE)
						{
							pOperationInformation->Parameters->DuplicateHandleInformation.DesiredAccess &= ~PROCESS_TERMINATE;
						}
						if ((pOperationInformation->Parameters->DuplicateHandleInformation.OriginalDesiredAccess & PROCESS_VM_OPERATION) == PROCESS_VM_OPERATION)//openprocess
						{
							pOperationInformation->Parameters->DuplicateHandleInformation.DesiredAccess &= ~PROCESS_VM_OPERATION;
						}
						if ((pOperationInformation->Parameters->DuplicateHandleInformation.OriginalDesiredAccess & PROCESS_VM_READ) == PROCESS_VM_READ)//内存读
						{
							pOperationInformation->Parameters->DuplicateHandleInformation.DesiredAccess &= ~PROCESS_VM_READ;
						}
						if ((pOperationInformation->Parameters->DuplicateHandleInformation.OriginalDesiredAccess & PROCESS_VM_WRITE) == PROCESS_VM_WRITE)//内存写
						{
							pOperationInformation->Parameters->DuplicateHandleInformation.DesiredAccess &= ~PROCESS_VM_WRITE;
						}
					}
				}
			exit_sub:
				return OB_PREOP_SUCCESS;
			}

//			OB_PREOP_CALLBACK_STATUS preCall2(PVOID RegistrationContext, POB_PRE_OPERATION_INFORMATION pOperationInformation)
//			{
//#define THREAD_TERMINATE2 0x1
//				PEPROCESS ep;
//				PETHREAD et;
//				HANDLE pid;
//				if (pOperationInformation->ObjectType != *PsThreadType)
//					goto exit_sub;
//				et = (PETHREAD)pOperationInformation->Object;
//				ep = IoThreadToProcess(et);
//				pid = PsGetProcessId(ep);
//				//DbgPrint("[OBCALLBACK][Thread]PID=%ld; TID=%ld\n",pid,PsGetThreadId(et));
//				UNREFERENCED_PARAMETER(RegistrationContext);
//				if (IsProtectedProcessName(ep))
//				{
//					if (pOperationInformation->Operation == OB_OPERATION_HANDLE_CREATE)
//					{
//						//pOperationInformation->Parameters->CreateHandleInformation.DesiredAccess=0;
//						if ((pOperationInformation->Parameters->CreateHandleInformation.OriginalDesiredAccess & THREAD_TERMINATE2) == THREAD_TERMINATE2)
//						{
//							pOperationInformation->Parameters->CreateHandleInformation.DesiredAccess &= ~THREAD_TERMINATE2;
//						}
//					}
//					if (pOperationInformation->Operation == OB_OPERATION_HANDLE_DUPLICATE)
//					{
//						//pOperationInformation->Parameters->DuplicateHandleInformation.DesiredAccess=0;
//						if ((pOperationInformation->Parameters->DuplicateHandleInformation.OriginalDesiredAccess & THREAD_TERMINATE2) == THREAD_TERMINATE2)
//						{
//							pOperationInformation->Parameters->DuplicateHandleInformation.DesiredAccess &= ~THREAD_TERMINATE2;
//						}
//					}
//				}
//			exit_sub:
//				return OB_PREOP_SUCCESS;
//			}


			NTSTATUS ObProtectProcess(BOOLEAN Enable)
			{
				if (Enable == TRUE)
				{
					NTSTATUS obst1 = 0, obst2 = 0;
					OB_CALLBACK_REGISTRATION obReg;
					OB_OPERATION_REGISTRATION opReg;
					//reg ob callback 1
					memset(&obReg, 0, sizeof(obReg));
					obReg.Version = ObGetFilterVersion();
					obReg.OperationRegistrationCount = 1;
					obReg.RegistrationContext = NULL;
					RtlInitUnicodeString(&obReg.Altitude, L"321124");
					obReg.OperationRegistration = &opReg;

					memset(&opReg, 0, sizeof(opReg));
					opReg.ObjectType = PsProcessType;
					opReg.Operations = OB_OPERATION_HANDLE_CREATE | OB_OPERATION_HANDLE_DUPLICATE;
					opReg.PreOperation = (POB_PRE_OPERATION_CALLBACK)&preCall;
					obst1 = ObRegisterCallbacks(&obReg, &obHandle);
					//reg ob callback 2
					//memset(&obReg2, 0, sizeof(obReg2));
					//obReg2.Version = ObGetFilterVersion();
					//obReg2.OperationRegistrationCount = 1;
					//obReg2.RegistrationContext = NULL;
					//RtlInitUnicodeString(&obReg2.Altitude, L"321125");
					//obReg2.OperationRegistration = &opReg2;
					//memset(&opReg2, 0, sizeof(opReg2));
					//opReg2.ObjectType = PsThreadType;
					//opReg2.Operations = OB_OPERATION_HANDLE_CREATE | OB_OPERATION_HANDLE_DUPLICATE;
					//opReg2.PreOperation = (POB_PRE_OPERATION_CALLBACK)&preCall2;
					//obst1=ObRegisterCallbacks(&obReg2, &obHandle2);
					return NT_SUCCESS(obst1);// & NT_SUCCESS(obst2);
				}
				else
				{
					if (obHandle != NULL)
						ObUnRegisterCallbacks(obHandle);
					//if(obHandle2!=NULL)
					//	ObUnRegisterCallbacks(obHandle2);
					return TRUE;
				}
			}

		}
	}
}

