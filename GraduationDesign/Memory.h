#ifndef MY_MEMORY_HEAD
#define MY_MEMORY_HEAD

#include <fltKernel.h>

//Ҫ��д����

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

			//����һ��ִ��shellcode���ڴ棬�ڳ������ǰ�����Բ��ͷţ����ص�ַ
			//����ĵ�ִַ��shellcode���ܲ�������
			SIZE_T InitMemory();

			NTSTATUS ForceCopyKernelMemory(void *destination, const void *source, SIZE_T length);

			//ע��û��Ȩ�޵��޸Ļ���е�ַУ��
			//�ҿ�ִ����ZwCurrentProcessҲ����
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

			//�鿴�����ַ��Ӧ��ÿ��ҳ��
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
