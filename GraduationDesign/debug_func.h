#ifndef _G_DEBUG_H
#define _G_DEBUG_H


#include <fltKernel.h>

#include "kernel_define_7601.h"
#include "kernel_hook.h"
#include "thread_contex.h"

extern "C" {
	namespace Driver {
		namespace Dbg {
			extern HANDLE handle_process;



			//@struct 被调试进程和调试端口链表节点结构
			typedef struct _DbgPortList {
				LIST_ENTRY PortList;
				ULONG64 DbgPort;
				UINT8 markdbg;
				PEPROCESS Process;
			}DbgPortList, *PDbgPortList;


			//@struct 调试信息结构
			typedef struct _DbgProcess
			{
				LIST_ENTRY64 DbgProcessList;
				PEPROCESS DebugProcess;
				PEPROCESS Process;
				POBJECT_TYPE DebugObject;
				HANDLE DbgHanle;
			}DbgProcess, *PDbgProcess;

			//@struct 调试对象结构
			typedef struct _DEBUG_OBJECT
			{
				KEVENT EventsPresent;
				FAST_MUTEX Mutex;
				LIST_ENTRY64 EventList;
				union
				{
					ULONG Flags;
					struct
					{
						UCHAR DebuggerInactive : 1;
						UCHAR KillProcessOnExit : 1;
					};
				};
			} DEBUG_OBJECT, *PDEBUG_OBJECT;


			//******************************
			//@struct 调试消息结构
			typedef struct _DBGKM_EXCEPTION
			{
				EXCEPTION_RECORD ExceptionRecord;
				ULONG FirstChance;
			} DBGKM_EXCEPTION, *PDBGKM_EXCEPTION;

			typedef struct _DBGKM_CREATE_THREAD
			{
				ULONG SubSystemKey;
				PVOID StartAddress;
			} DBGKM_CREATE_THREAD, *PDBGKM_CREATE_THREAD;

			typedef struct _DBGKM_CREATE_PROCESS
			{
				ULONG SubSystemKey;
				HANDLE FileHandle;
				PVOID BaseOfImage;
				ULONG DebugInfoFileOffset;
				ULONG DebugInfoSize;
				DBGKM_CREATE_THREAD InitialThread;
			} DBGKM_CREATE_PROCESS, *PDBGKM_CREATE_PROCESS;

			typedef struct _DBGKM_EXIT_THREAD
			{
				NTSTATUS ExitStatus;
			} DBGKM_EXIT_THREAD, *PDBGKM_EXIT_THREAD;

			typedef struct _DBGKM_EXIT_PROCESS
			{
				NTSTATUS ExitStatus;
			} DBGKM_EXIT_PROCESS, *PDBGKM_EXIT_PROCESS;

			typedef struct _DBGKM_LOAD_DLL
			{
				HANDLE FileHandle;
				PVOID BaseOfDll;
				ULONG DebugInfoFileOffset;
				ULONG DebugInfoSize;
				PVOID NamePointer;
			} DBGKM_LOAD_DLL, *PDBGKM_LOAD_DLL;

			typedef struct _DBGKM_UNLOAD_DLL
			{
				PVOID BaseAddress;
			} DBGKM_UNLOAD_DLL, *PDBGKM_UNLOAD_DLL;
			//**************************************



			//@enum 调试信息API对应号
			typedef enum _DBGKM_APINUMBER
			{
				DbgKmExceptionApi = 0,
				DbgKmCreateThreadApi = 1,
				DbgKmCreateProcessApi = 2,
				DbgKmExitThreadApi = 3,
				DbgKmExitProcessApi = 4,
				DbgKmLoadDllApi = 5,
				DbgKmUnloadDllApi = 6,
				DbgKmErrorReportApi = 7,
				DbgKmMaxApiNumber = 8,
			} DBGKM_APINUMBER;

			//@struct 调试端口信息
			typedef struct _PORT_MESSAGE
			{
				union
				{
					struct
					{
						CSHORT DataLength;
						CSHORT TotalLength;
					} s1;
					ULONG Length;
				} u1;
				union
				{
					struct
					{
						CSHORT Type;
						CSHORT DataInfoOffset;
					} s2;
					ULONG ZeroInit;
				} u2;
				union
				{
					CLIENT_ID ClientId;
					double DoNotUseThisField;
				};
				ULONG32 MessageId;
				union
				{
					ULONGLONG ClientViewSize;
					ULONG32 CallbackId;
				};
			} PORT_MESSAGE, *PPORT_MESSAGE;


			//@struct LPC Debug Message
			typedef struct _DBGKM_MSG
			{
				PORT_MESSAGE h;
				DBGKM_APINUMBER ApiNumber;
				NTSTATUS ReturnedStatus;
				union
				{
					DBGKM_EXCEPTION Exception;
					DBGKM_CREATE_THREAD CreateThread;
					DBGKM_CREATE_PROCESS CreateProcess;
					DBGKM_EXIT_THREAD ExitThread;
					DBGKM_EXIT_PROCESS ExitProcess;
					DBGKM_LOAD_DLL LoadDll;
					DBGKM_UNLOAD_DLL UnloadDll;
				};
				UCHAR unknow[0x40]; //2018-11-27
			} DBGKM_MSG, *PDBGKM_MSG;


			//@struct 调试事件结构
			typedef struct _DEBUG_EVENT
			{
				LIST_ENTRY EventList;
				KEVENT ContinueEvent;
				CLIENT_ID ClientId;
				PEPROCESS Process;
				PETHREAD Thread;
				NTSTATUS Status;
				ULONG32 Flags;
				PETHREAD BackoutThread;
				DBGKM_MSG ApiMsg;

			} DEBUG_EVENT, *PDEBUG_EVENT;


			//
			// Debug States
			//
			typedef enum _DBG_STATE
			{
				DbgIdle,
				DbgReplyPending,
				DbgCreateThreadStateChange,
				DbgCreateProcessStateChange,
				DbgExitThreadStateChange,
				DbgExitProcessStateChange,
				DbgExceptionStateChange,
				DbgBreakpointStateChange,
				DbgSingleStepStateChange,
				DbgLoadDllStateChange,
				DbgUnloadDllStateChange
			} DBG_STATE, *PDBG_STATE;
			//
			// User-Mode Debug State Change Structure
			//
			typedef struct _DBGUI_WAIT_STATE_CHANGE
			{
				DBG_STATE NewState;
				CLIENT_ID AppClientId;
				union
				{
					struct
					{
						HANDLE HandleToThread;
						DBGKM_CREATE_THREAD NewThread;
					} CreateThread;
					struct
					{
						HANDLE HandleToProcess;
						HANDLE HandleToThread;
						DBGKM_CREATE_PROCESS NewProcess;
					} CreateProcessInfo;
					DBGKM_EXIT_THREAD ExitThread;
					DBGKM_EXIT_PROCESS ExitProcess;
					DBGKM_EXCEPTION Exception;
					DBGKM_LOAD_DLL LoadDll;
					DBGKM_UNLOAD_DLL UnloadDll;
				} StateInfo;
			} DBGUI_WAIT_STATE_CHANGE, *PDBGUI_WAIT_STATE_CHANGE;



			//@define
			// Debug Object Access Masks
#define DEBUG_OBJECT_WAIT_STATE_CHANGE      0x0001
#define DEBUG_OBJECT_ADD_REMOVE_PROCESS     0x0002
#define DEBUG_OBJECT_SET_INFORMATION        0x0004
#define DEBUG_OBJECT_ALL_ACCESS             (STANDARD_RIGHTS_REQUIRED | SYNCHRONIZE | 0x0F)




			//@init 
			//初始化相关函数，hook，创建调试对象
			VOID init_func_obj();



			//@init
			//初始化hook
			VOID init_hook();
			VOID unhook();

			//@func*************************************//
			//相关函数声明
			typedef LONG(*EXSYSTEMEXCEPTIONFILTER)(VOID);


			typedef NTSTATUS(__stdcall *OBCREATEOBJECT)(
				__in KPROCESSOR_MODE ProbeMode,
				__in POBJECT_TYPE ObjectType,
				__in POBJECT_ATTRIBUTES ObjectAttributes,
				__in KPROCESSOR_MODE OwnershipMode,
				__inout_opt PVOID ParseContext,
				__in ULONG ObjectBodySize,
				__in ULONG PagedPoolCharge,
				__in ULONG NonPagedPoolCharge,
				__out PVOID *Object
				);



			typedef VOID(__fastcall* KiCheckForKernelApcDelivery1)();

			typedef NTSTATUS (*ObDuplicateObject1)
				(
				IN PEPROCESS_S SourceProcess,
				IN HANDLE SourceHandle,
				IN PEPROCESS_S TargetProcess OPTIONAL,
				OUT PHANDLE TargetHandle OPTIONAL,
				IN ACCESS_MASK DesiredAccess,
				IN ULONG HandleAttributes,
				IN ULONG Options,
				IN KPROCESSOR_MODE PreviousMode
				);

			typedef PETHREAD(__fastcall *PsGetNextProcessThreadx)(PEPROCESS_S process, PKTHREAD THREAD);
			typedef NTSTATUS(__fastcall *PsResumeThreadx)(IN PETHREAD Thread, OUT PULONG PreviousSuspendCount OPTIONAL);
			typedef NTSTATUS (__fastcall* DbgkpPostFakeThreadMessagesx)(IN PEPROCESS_S Process,IN ULONG64 DebugObject,IN PETHREAD StartThread,OUT PETHREAD *FirstThread,OUT PETHREAD *LastThread);
			typedef NTSTATUS(__fastcall *DbgkpPostModuleMessagesx)(PEPROCESS_S process, PKTHREAD THREAD, PDEBUG_OBJECT debug);
			typedef VOID(__fastcall* PfDbgkpFreeDebugEvent)(IN PDEBUG_EVENT DebugEvent);
			typedef NTSTATUS(__fastcall *KeFreezeAllThreadsx)();
			typedef NTSTATUS(__fastcall *KeThawAllThreadsx)();
			typedef PHANDLE_TABLE_ENTRY(__fastcall *EXPLOOKUPHANDLETABLEENTRY)(IN PHANDLE_TABLE HandleTable, IN HANDLE tHandle);


			typedef NTSTATUS(__fastcall* NTRESUMETHREAD)(IN HANDLE ThreadHandle,OUT PULONG PreviousSuspendCount);



			typedef VOID(__fastcall* KIDISPATCHEXCEPTION)(
				IN PEXCEPTION_RECORD ExceptionRecord,
				IN PKEXCEPTION_FRAME ExceptionFrame,
				IN PKTRAP_FRAME TrapFrame,
				IN KPROCESSOR_MODE PreviousMode,
				IN BOOLEAN FirstChance
				);


			typedef BOOLEAN(__fastcall* DBGKFORWARDEXCEPTION)(IN PEXCEPTION_RECORD ExceptionRecord, IN BOOLEAN DebugPort, IN BOOLEAN SecondChance);



			typedef PVOID(__fastcall* MYRTLPCOPYLEGACYCONTEXTX86)(BOOLEAN islegacy, Driver::thread_contex::PWOW64_CONTEXT destcontex, ULONG nouse_falg, Driver::thread_contex::PWOW64_CONTEXT srccontext);


			//hook 相关函数
			//@param: 1:目标进程句柄        2:调试对象句柄  
			//NTSTATUS __fastcall proxyNtDebugActiveProcess(IN HANDLE ProcessHandle, IN HANDLE DebugHandle);




			/* @globle variable
			******************************************/
			//被调试进程以及端口链表
			extern LIST_ENTRY PortList;
			//被调试进程以及端口链表锁
			extern KSPIN_LOCK port_lock;
			//调试对象互斥体
			extern FAST_MUTEX DbgkFastMutex;

			/******************************************
			*/


			//@debug flag
			extern SIZE_T exception_first;
			extern BOOL is_first_exception;






			//@init 全局变量和未导出函数
			typedef struct _init_variable_table {
				POBJECT_TYPE_S* DbgkDebugObjectType;
				POBJECT_TYPE_S* ObTypeIndexTable;
				PsResumeThreadx PsResumeThread;
				ObDuplicateObject1 ObDuplicateObject;
				PsGetNextProcessThreadx PsGetNextProcessThread;
				DbgkpPostFakeThreadMessagesx DbgkpPostFakeThreadMessages;
				DbgkpPostModuleMessagesx DbgkpPostModuleMessages;
				PfDbgkpFreeDebugEvent DbgkpWakeTarget_2; //DbgkpWakeTarget系统原始版本
				KeFreezeAllThreadsx KeFreezeAllThreads;
				KeThawAllThreadsx KeThawAllThreads;
				SIZE_T SwapContext_PatchXRstor;
				//EXPLOOKUPHANDLETABLEENTRY ExpLookupHandleTableEntry;
			}init_variable_table, *p_init_variable_table;


			extern init_variable_table init_table_variable;



			//@init hook函数表
			using hook_data =  Driver::kernel_hook::kernel_hook_struct;
			typedef struct _init_hook_table {
				hook_data NtCreateDebugObject;
				hook_data NtWaitForDebugEvent;
				hook_data NtDebugContinue;
				hook_data NtDebugActiveProcess;
				hook_data NtRemoveProcessDebug;
				hook_data DbgkForwardException;
				//DbgkpSetProcessDebugObject
				hook_data DbgkCopyProcessDebugPort;
				hook_data DbgkOpenProcessDebugPort;
				//DbgkUnMapViewOfSection
				//DbgkMapViewOfSection
				hook_data DbgkpQueueMessage;
				hook_data ObpCallPreOperationCallbacks;
				hook_data RtlpCopyLegacyContextX86;
				hook_data SwapContext;
				//hook_data NtReadVirtualMemory;
				//hook_data NtWriteVirtualMemory;
				//hook_data NtQueryInformationThread;
				//hook_data _PsLookupProcessByProcessId; //该函数已经导出，但是为了统一都写在此
				hook_data NtResumeThread;
				hook_data KiDispatchException;
			}init_hook_table, *p_init_hook_table;

			extern init_hook_table  init_table_hook;


			VOID get_object_handle(UINT32 pid, HANDLE input_handle);



			BOOLEAN __fastcall proxyDbgkForwardException(IN PEXCEPTION_RECORD ExceptionRecord, IN BOOLEAN DebugPort, IN BOOLEAN SecondChance);
		}
	}
}



#endif