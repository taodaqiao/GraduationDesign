#ifndef MY_PROCESS_HEAD
#define MY_PROCESS_HEAD


#include <fltKernel.h>
#include <windef.h>

extern "C" {
	namespace Driver {
		namespace Process {

			typedef struct _NT_PROC_THREAD_ATTRIBUTE_ENTRY
			{
				ULONG Attribute;    // PROC_THREAD_ATTRIBUTE_XXX
				SIZE_T Size;
				ULONG_PTR Value;
				ULONG Unknown;
			} NT_PROC_THREAD_ATTRIBUTE_ENTRY, *NT_PPROC_THREAD_ATTRIBUTE_ENTRY;

			typedef struct _NT_PROC_THREAD_ATTRIBUTE_LIST
			{
				ULONG Length;
				NT_PROC_THREAD_ATTRIBUTE_ENTRY Entry[1];
			} NT_PROC_THREAD_ATTRIBUTE_LIST, *PNT_PROC_THREAD_ATTRIBUTE_LIST;

			typedef struct _THREAD_BASIC_INFORMATION
			{
				NTSTATUS ExitStatus;
				PVOID TebBaseAddress;
				CLIENT_ID ClientId;
				ULONG_PTR AffinityMask;
				LONG Priority;
				LONG BasePriority;
			} THREAD_BASIC_INFORMATION, *PTHREAD_BASIC_INFORMATION;


			typedef NTSTATUS(NTAPI* fnNtCreateThreadEx)
				(
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
					OUT PVOID lpBytesBuffer
					);


			void CreateThread(PEPROCESS target_process, IN PVOID Address);

			//需要先声明
			NTKERNELAPI PPEB PsGetProcessPeb(PEPROCESS Process);

			NTSYSAPI
				PCCHAR
				NTAPI
				PsGetProcessImageFileName(
					IN PEPROCESS Process
				);


			NTSYSAPI
				NTSTATUS
				NTAPI
				ZwQueryInformationThread(
					IN HANDLE ThreadHandle,
					IN THREADINFOCLASS ThreadInformationClass,
					OUT PVOID ThreadInformation,
					IN ULONG ThreadInformationLength,
					OUT PULONG ReturnLength OPTIONAL
				);

			SIZE_T GetMoudleBase(PEPROCESS process);

			void BypassCheckSign(PDRIVER_OBJECT pDriverObj);

			NTSTATUS ObProtectProcess(BOOLEAN Enable);


			UINT GetMoudleCount(PEPROCESS process);



			typedef struct _LDR_DATA_TABLE_ENTRY
			{
				LIST_ENTRY InLoadOrderLinks;
				LIST_ENTRY InMemoryOrderLinks;
				LIST_ENTRY InInitializationOrderLinks;
				PVOID DllBase;
				PVOID EntryPoint;
				ULONG SizeOfImage;
				UNICODE_STRING FullDllName;
				UNICODE_STRING BaseDllName;
				ULONG Flags;
				WORD LoadCount;
				WORD TlsIndex;
				union
				{
					LIST_ENTRY HashLinks;
					struct
					{
						PVOID SectionPointer;
						ULONG CheckSum;
					};
				};
				union
				{
					ULONG TimeDateStamp;
					PVOID LoadedImports;
				};
				PVOID EntryPointActivationContext;
				PVOID PatchInformation;
				LIST_ENTRY ForwarderLinks;
				LIST_ENTRY ServiceTagLinks;
				LIST_ENTRY StaticLinks;
			} LDR_DATA_TABLE_ENTRY, *PLDR_DATA_TABLE_ENTRY;



			//32位进程PsGetProcessWow64Process然后结构如下
			//实际上是这个指针Wow64Process
			//{
			//	LIST_ENTRY32 InLoadOrderLinks;
			//	LIST_ENTRY32 InMemoryOrderLinks;
			//	LIST_ENTRY32 InInitializationOrderLinks;
			//	ULONG DllBase;
			//	ULONG EntryPoint;
			//	ULONG SizeOfImage;
			//	UNICODE_STRING32 FullDllName;
			//	UNICODE_STRING32 BaseDllName;
			//	ULONG Flags;
			//	USHORT LoadCount;
			//	USHORT TlsIndex;
			//	LIST_ENTRY32 HashLinks;
			//	ULONG SectionPointer;
			//	ULONG CheckSum;
			//	ULONG TimeDateStamp;
			//	ULONG LoadedImports;
			//	ULONG EntryPointActivationContext;
			//	ULONG PatchInformation;
			//	LIST_ENTRY32 ForwarderLinks;
			//	LIST_ENTRY32 ServiceTagLinks;
			//	LIST_ENTRY32 StaticLinks;
			//	ULONG ContextInformation;
			//	ULONG OriginalBase;
			//	LARGE_INTEGER LoadTime;
			//} LDR_DATA_TABLE_ENTRY32, *PLDR_DATA_TABLE_ENTRY32;
		}
	}
}

#endif 

