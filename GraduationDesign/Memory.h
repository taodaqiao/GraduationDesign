#ifndef MY_MEMORY_HEAD
#define MY_MEMORY_HEAD

#include <fltKernel.h>

//要读写进程

extern "C" {
	namespace Driver {
		namespace Memory {

			extern PEPROCESS RWProcess;
			extern SIZE_T BlankAddress;

			typedef struct _RStruct {
				SIZE_T address;
				UINT32 size;
			}RStruct, *PRStruct;


			typedef struct _WStruct {
				SIZE_T address;
				UINT32 size;
			}WStruct, *PWStruct;

			PVOID AllocateInjectMemory(
				IN HANDLE ProcessHandle,
				IN PVOID DesiredAddress,
				IN SIZE_T* DesiredSize
			);


			NTSTATUS FreeInjectMemory(
				IN HANDLE ProcessHandle,
				IN PVOID* BaseAddress
			);


			void ReadProcessMemory(
				IN PEPROCESS Process,
				IN PVOID Address,
				IN UINT32 Length,
				OUT PVOID Buffer
			);

			void WriteProcessMemory(
				IN PEPROCESS Process,
				IN PVOID Address,
				IN UINT32 Length,
				IN PVOID Buffer
			);

			enum RWmodel
			{
				read = 1,
				write = 2
			};

			NTSTATUS  ForceCopyUserMemory(void *destination, void *source, SIZE_T length);


			//bool testMemory();

			//申请一块执行shellcode的内存，在程序结束前都可以不释放，返回地址
			//申请的地址执行shellcode可能产生蓝屏
			SIZE_T InitMemory();

			NTSTATUS ForceCopyKernelMemory(void *destination, const void *source, SIZE_T length);

			//注意没有权限的修改会进行地址校验
			//挂靠执行用ZwCurrentProcess也可以
			using fnNtProtectVirtualMemory = NTSTATUS(NTAPI*)(
				HANDLE ProcessHandle,
				PVOID* BaseAddress,
				SIZE_T* NumberOfBytesToProtect,
				ULONG NewAccessProtection,  
				PULONG OldAccessProtection);

			bool NtProtectVirtualMemory(PVOID* BaseAddress,
				SIZE_T* NumberOfBytesToProtect,
				ULONG NewAccessProtection,
				PULONG OldAccessProtection);

			//查看虚拟地址对应的每集页表
			NTSTATUS GetMemoryPageValue(SIZE_T virtual_address, SIZE_T DirectoryTableBase);
			NTSTATUS ReadMemoryByHandle(HANDLE hProcess, SIZE_T address,UINT32 size, PVOID out_address);
			VOID get_pml4_entry(
				IN HANDLE hParentId,
				IN HANDLE hProcessId,
				IN BOOLEAN bCreate);

			extern SIZE_T pml4_table[512];
			extern SIZE_T dxf_pml4_entry;
		}
	}
}
#endif
