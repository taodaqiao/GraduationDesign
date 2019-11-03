#include "Memory.h"

#include "Process.h"

#include "FindSSDT.h"

#include <intrin.h>
extern "C" {
	namespace Driver {
		namespace Memory {
			PEPROCESS RWProcess = NULL;
			//SIZE_T BlankAddress = 0;

			SIZE_T dxf_pml4_entry = 0;

			SIZE_T pml4_table[512] = { 0 };
			VOID get_pml4_entry(
				IN HANDLE hParentId,
				IN HANDLE hProcessId,
				IN BOOLEAN bCreate) 
			{
				if (bCreate) {
					//Ϊtrue��ʾ��������
					PEPROCESS temp_data = NULL;
					if (NT_SUCCESS(PsLookupProcessByProcessId(hProcessId, &temp_data)))
					{
						char* process_name = Driver::Process::PsGetProcessImageFileName(temp_data);
						if (!_stricmp("dnf.exe", process_name)) {
							DbgPrintEx(0, 0, "Memory: process name: %s", process_name);
							SIZE_T pml4_entry = *reinterpret_cast<SIZE_T*>(reinterpret_cast<SIZE_T>(temp_data) + 0x28);
							dxf_pml4_entry = pml4_entry;
							PHYSICAL_ADDRESS pml4 = { 0ull };
							pml4.QuadPart = pml4_entry;
							//ӳ������pml4��
							PVOID pml4_map_table = MmMapIoSpace(pml4, 0x1000, MmNonCached);
							//���浽һ��ҳ���У�4096 = 512����ַ
							memcpy(pml4_table, pml4_map_table, 0x1000);
							MmUnmapIoSpace(pml4_map_table, 0x1000);
						}
					}
				}
			}



			//��ӡһ�������ַÿ��ҳ���Ӧ��ֵ
			NTSTATUS GetMemoryPageValue(SIZE_T virtual_address,SIZE_T DirectoryTableBase) {
				DbgPrintEx(0, 0, "Memory: pml4 Entry : %llx", DirectoryTableBase);
				UINT32 pml4_index = (virtual_address & ((SIZE_T)0x1ff << 39)) >> 39;
				DbgPrintEx(0,0,"Memory: pml4 index : %lx", pml4_index);
				PHYSICAL_ADDRESS pml4 = { 0ull };
				pml4.QuadPart = DirectoryTableBase + pml4_index * 0x8;
				//Ҳ����ֱ����ϵͳӳ��������ַPTE
				PVOID pml4_map_address = MmMapIoSpace(pml4, sizeof(SIZE_T), MmNonCached);
				DbgPrintEx(0, 0, "Memory: pml4 map virtual_address : %llx", pml4_map_address);
				if (!pml4_map_address) {
					return STATUS_MEMORY_NOT_ALLOCATED;
				}
				SIZE_T pml4_value = *reinterpret_cast<SIZE_T*>(pml4_map_address);
				DbgPrintEx(0, 0, "Memory: pml4 value : %llx", pml4_value);
				MmUnmapIoSpace(pml4_map_address, sizeof(SIZE_T));


				SIZE_T pdpt_entry = pml4_value & ((SIZE_T)0xfffffff<<12);
				DbgPrintEx(0, 0, "Memory: pdpt Entry : %llx", pdpt_entry);
				UINT32 pdpt_index = (virtual_address & ((SIZE_T)0x1ff << 30))>>30;
				DbgPrintEx(0, 0, "Memory: pdpt index : %lx", pdpt_index);
				PHYSICAL_ADDRESS pdpt = { 0ull };
				pdpt.QuadPart = pdpt_entry + pdpt_index * 0x8;
				PVOID pdpt_map_address = MmMapIoSpace(pdpt, sizeof(SIZE_T), MmNonCached);
				DbgPrintEx(0, 0, "Memory: pdpt map virtual_address : %llx", pdpt_map_address);
				if (!pdpt_map_address) {
					return STATUS_MEMORY_NOT_ALLOCATED;
				}
				SIZE_T pdpt_value = *reinterpret_cast<SIZE_T*>(pdpt_map_address);
				DbgPrintEx(0, 0, "Memory: pdpt value : %llx", pdpt_value);
				MmUnmapIoSpace(pdpt_map_address, sizeof(SIZE_T));


				SIZE_T pd_entry = pdpt_value & ((SIZE_T)0xfffffff << 12);
				DbgPrintEx(0, 0, "Memory: pd Entry : %llx", pd_entry);
				UINT32 pd_index = (virtual_address & ((SIZE_T)0x1ff << 21))>>21;
				DbgPrintEx(0, 0, "Memory: pd index : %lx", pd_index);
				PHYSICAL_ADDRESS pd = { 0ull };
				pd.QuadPart = pd_entry + pd_index * 0x8;
				PVOID pd_map_address = MmMapIoSpace(pd, sizeof(SIZE_T), MmNonCached);
				DbgPrintEx(0, 0, "Memory: pd map virtual_address : %llx", pd_map_address);
				if (!pd_map_address) {
					return STATUS_MEMORY_NOT_ALLOCATED;
				}
				SIZE_T pd_value = *reinterpret_cast<SIZE_T*>(pd_map_address);
				DbgPrintEx(0, 0, "Memory: pd value : %llx", pd_value);
				MmUnmapIoSpace(pd_map_address, sizeof(SIZE_T));


				SIZE_T pt_entry = pd_value & ((SIZE_T)0xfffffff << 12);
				DbgPrintEx(0, 0, "Memory: pt Entry : %llx", pt_entry);
				UINT32 pt_index = (virtual_address & ((SIZE_T)0x1ff << 12)) >> 12;
				DbgPrintEx(0, 0, "Memory: pt index : %lx", pt_index);
				PHYSICAL_ADDRESS pt = { 0ull };
				pt.QuadPart = pt_entry + pt_index * 0x8;
				PVOID pt_map_address = MmMapIoSpace(pt, sizeof(SIZE_T), MmNonCached);
				DbgPrintEx(0, 0, "Memory: pt map virtual_address : %llx", pt_map_address);
				if (!pt_map_address) {
					return STATUS_MEMORY_NOT_ALLOCATED;
				}
				SIZE_T pt_value = *reinterpret_cast<SIZE_T*>(pt_map_address);
				DbgPrintEx(0, 0, "Memory: pt value : %llx", pt_value);
				MmUnmapIoSpace(pt_map_address, sizeof(SIZE_T));


				SIZE_T phsical_address = pt_value & ((SIZE_T)0xfffffff << 12);
				DbgPrintEx(0, 0, "Memory: phsical_address : %llx", phsical_address);
				//SIZE_T pt_value = *reinterpret_cast<SIZE_T*>(pt_map_address);
				return STATUS_SUCCESS;
			}


			NTSTATUS ReadMemoryByHandle(HANDLE hProcess, SIZE_T address, UINT32 size,PVOID out_address){
				KPROCESSOR_MODE PreviousMode = ExGetPreviousMode();
				PEPROCESS target_process;
				PVOID map_address = NULL;
				NTSTATUS status  = ObReferenceObjectByHandle(hProcess,
					0x0800,
					*PsProcessType,
					PreviousMode,
					(PVOID*)&target_process,
					NULL);
				if (!NT_SUCCESS(status)) {
					DbgPrintEx(0,0,"open handle failed");
					return STATUS_NOT_FOUND;
				}
				KAPC_STATE apc_state;
				KeStackAttachProcess(target_process, &apc_state);
				PHYSICAL_ADDRESS ret_value = { 0 };
				__try {
					ProbeForRead((CONST PVOID)address, size, sizeof(CHAR));
				}
				__except (EXCEPTION_EXECUTE_HANDLER) {
					DbgPrintEx(0, 0, "address %llx is invalid", map_address);
					KeUnstackDetachProcess(&apc_state);
					return STATUS_MEMORY_NOT_ALLOCATED;
				}
				ret_value = MmGetPhysicalAddress((PVOID)address);
				if (ret_value.QuadPart == NULL) {
					DbgPrintEx(0, 0, "get phsical address %llx failed", address);
					KeUnstackDetachProcess(&apc_state);
					return STATUS_MEMORY_NOT_ALLOCATED;
				}
				map_address = MmMapIoSpace(ret_value, sizeof(SIZE_T), MmNonCached);
				if (!map_address) {
					DbgPrintEx(0, 0, "map address %llx failed", map_address);
					KeUnstackDetachProcess(&apc_state);
					return STATUS_MEMORY_NOT_ALLOCATED;
				}
				__try {
					//ProbeForRead(map_address, size, sizeof(CHAR));
					RtlCopyMemory(out_address, map_address, size);
				}
				__except (EXCEPTION_EXECUTE_HANDLER) {
					DbgPrintEx(0, 0, "access address %llx failed", map_address);
					MmUnmapIoSpace(map_address, size);
					KeUnstackDetachProcess(&apc_state);
					return STATUS_MEMORY_NOT_ALLOCATED;
				}
				MmUnmapIoSpace(map_address, size);
				KeUnstackDetachProcess(&apc_state);
				return STATUS_SUCCESS;
			}



			PVOID AllocateInjectMemory(
				IN HANDLE ProcessHandle,
				IN PVOID DesiredAddress,
				IN SIZE_T* DesiredSize)
			{
				//����Ƿ�x86�ں˵�ַ��
				MEMORY_BASIC_INFORMATION mbi;
				if ((ULONG_PTR)DesiredAddress >= 0x70000000 && (ULONG_PTR)DesiredAddress < 0x80000000)
					DesiredAddress = (PVOID)0x70000000;
				while (1)
				{
					if (!NT_SUCCESS(ZwQueryVirtualMemory(ProcessHandle, DesiredAddress, MemoryBasicInformation, &mbi, sizeof(mbi), NULL)))
					{
						DbgPrint("faield QueryVirtualMemory\r\n");
						return NULL;
					}
					//Windows����64-KBΪ�߽�����������ʼ��ַ ��������Ϊ64kb 0x10000 16ҳ
					if (DesiredAddress != mbi.AllocationBase)
					{
						DesiredAddress = mbi.AllocationBase;
					}
					else
					{
						DesiredAddress = (PVOID)((ULONG_PTR)mbi.AllocationBase - 0x10000);
					}

					//BaseAddressֻ�Ƿ���ҳ���е���ʼ�����ַ
					if (mbi.State == MEM_FREE)
					{
						//������Ϊ�����ڴ�
						if (NT_SUCCESS(ZwAllocateVirtualMemory(ProcessHandle, &mbi.BaseAddress, 0, DesiredSize, MEM_RESERVE, PAGE_EXECUTE_READWRITE)))
						{
							//�ύ�������ڴ�
							if (NT_SUCCESS(ZwAllocateVirtualMemory(ProcessHandle, &mbi.BaseAddress, 0, DesiredSize, MEM_COMMIT, PAGE_EXECUTE_READWRITE)))
							{
								return mbi.BaseAddress;
							}
						}
					}
				}
				return NULL;
			}



			NTSTATUS FreeInjectMemory(
				IN HANDLE ProcessHandle,
				IN PVOID* BaseAddress
			)
			{
				SIZE_T allocSize = 0;
				NTSTATUS STATE = NT_SUCCESS(ZwFreeVirtualMemory(ProcessHandle, BaseAddress, &allocSize, MEM_RELEASE));
				return STATE;
			}

			//�ڴ涼���ж�ȡȨ�޵�
			//���ڴ�ʹ��mdl��̫��ȷ,�в������Щ�ڴ�Ϊʲô��ַ��仯
			void ReadProcessMemory(
				IN PEPROCESS Process,
				IN PVOID Address,
				IN UINT32 Length,
				OUT PVOID Buffer
			) {
				KAPC_STATE apc_state;
				KeStackAttachProcess(RWProcess, &apc_state);
				__try
				{
					ProbeForRead((CONST PVOID)Address, Length, sizeof(CHAR));
					RtlCopyMemory(Buffer, Address, Length);
					KeUnstackDetachProcess(&apc_state);
				}
				__except (EXCEPTION_EXECUTE_HANDLER) {
					KeUnstackDetachProcess(&apc_state);
				}
			}


			//���ڴ�û��дȨ��ʱ��ͨ��ӳ�������ڴ�д��
			// 1803ҳ������ʧЧ��Ҫ�ĳ�mdlӳ��
			//����д���������� ������ҳ�汻����ʱ д������

			//���ʹ��ֱ�Ӹ��Ƶ��ڴ�û��дȨ��ʱ�������Ҳ���Ҳ���ܴ���copyonwirte����д��ʧ��
			void WriteProcessMemory(
				IN PEPROCESS Process,
				IN PVOID Address,
				IN UINT32 Length,
				IN PVOID Buffer
			) {
				KAPC_STATE apc_state;
				PHYSICAL_ADDRESS TargetAdd;
				//__try
				//{
				//	KeStackAttachProcess(epGame, &apc_state);
				//	//ProbeForRead((CONST PVOID)Address, Length, sizeof(CHAR));
				//	RtlCopyMemory(Address, Buffer, Length);
				//	KeUnstackDetachProcess(&apc_state);
				//}
				//__except (EXCEPTION_EXECUTE_HANDLER) {
				//	KeUnstackDetachProcess(&apc_state);
				//}
				PVOID mapAdd = NULL;
				KeStackAttachProcess(RWProcess, &apc_state);
				__try
				{
					TargetAdd = MmGetPhysicalAddress(Address);
				}
				__except (EXCEPTION_EXECUTE_HANDLER) {
					KeUnstackDetachProcess(&apc_state);
					return;
				}
				__try
				{
					mapAdd = MmMapIoSpace(TargetAdd, Length, MmNonCached);
					if (mapAdd == NULL) {
						MmUnmapIoSpace(mapAdd, Length);
						DbgPrint("NULL");
						return;
					}
					//ProbeForWrite((CONST PVOID)mapAdd, Length, sizeof(CHAR));
					RtlCopyMemory(mapAdd, Buffer, Length);
					MmUnmapIoSpace(mapAdd, Length);
					KeUnstackDetachProcess(&apc_state);
				}
				__except (EXCEPTION_EXECUTE_HANDLER)
				{
					MmUnmapIoSpace(mapAdd, Length);
					KeUnstackDetachProcess(&apc_state);
				}
			}

			/*
				MDLλ

				MDL_PAGES_LOCKED
				MDL_MAPPED_TO_SYSTEM_VA       //�ں˵�ַ��־λ
				MDL_SOURCE_IS_NONPAGED_POOL
				MDL_PARTIAL
				MDL_IO_SPACE
			*/

			//�û������ڴ�
			//ӳ���ڴ�ɶ���д��ִ��
			NTSTATUS ForceCopyUserMemory(void *destination, void *source, SIZE_T length) {
				if (!RWProcess) {
					DbgPrint("debug: process null");
					return STATUS_INSUFFICIENT_RESOURCES;
				}
				KAPC_STATE apc_state;
				KeStackAttachProcess(RWProcess, &apc_state);
				auto mdl = IoAllocateMdl(destination, static_cast<ULONG>(length), FALSE, FALSE, nullptr);
				if (!mdl) {
					DbgPrint("debug: failed1");
					KeUnstackDetachProcess(&apc_state);
					return STATUS_INSUFFICIENT_RESOURCES;
				}
				__try {
					//���ﲻ�Ƿ�ҪIoWriteAccess���������ӳ����ڴ涼�ж�дִ��
					//����д���ں˵�ַ����У�������ַ��Χ
					MmProbeAndLockPages(mdl, KernelMode, IoReadAccess);
				}
				__except (EXCEPTION_EXECUTE_HANDLER) {
					IoFreeMdl(mdl);
					KeUnstackDetachProcess(&apc_state);
					//modle == RWmodel::read ? DbgPrint("read") : DbgPrint("Write");
					DbgPrint("debug: Lock page failed");
					DbgPrint("debug: destination : %p", destination);
					DbgPrint("debug: source : %p", source);
					return STATUS_INSUFFICIENT_RESOURCES;
				}
				MmBuildMdlForNonPagedPool(mdl);
				//�Ͱ���ӳ�䵽�ں˵�ַ�ٸ���,ע��������Ļ�Ҫ��д����û�в���KernelMode�ܷ��
				auto map_dest = MmMapLockedPagesSpecifyCache(mdl, KernelMode, MmCached, nullptr, FALSE, NormalPagePriority);
				if (!map_dest) {
					DbgPrint("debug: failed2");
					IoFreeMdl(mdl);
					KeUnstackDetachProcess(&apc_state);
					return STATUS_INSUFFICIENT_RESOURCES;
				}
				RtlCopyMemory(map_dest, source, length);
				MmUnmapLockedPages(map_dest, mdl);
				IoFreeMdl(mdl);
				KeUnstackDetachProcess(&apc_state);
				return STATUS_SUCCESS;
			}


			//�ں��ڴ棬��ǿ���޸��ں��е�ֻ���ڴ�
			//mdl->MdlFlags &= ~MDL_SOURCE_IS_NONPAGED_POOL;
			//��סҳ�� ����MmProbeAndLockPagesУ�����
			//���߻���У�飬�����ַ��AccessMode�Ƿ�ƥ�䣬���紫���û����̵ĵ�ַ��д��KernelMode
			//r3��ַ�Ƿ�ӵ��IoWriteAccess / IoModifyAccessȨ�ޡ�
			//mdl->MdlFlags |= MDL_PAGES_LOCKED;
			//MDL_MAPPED_TO_SYSTEM_VA ����ַӳ�䵽�ں˵�ַ
			//��LoadImage�ص�����������н��̵�AddressCreationLock���ƣ�������ģ��ص�ʱ��Ҫ��UserMode!
			//��Ϊloadimage�½��̵������ַ�޷�׼ȷ��ʶ��һ�����Ҳ�����Ӧҳ��
			NTSTATUS ForceCopyKernelMemory(void *destination,const void *source,SIZE_T length) {
				auto mdl = IoAllocateMdl(destination, static_cast<ULONG>(length), FALSE,
					FALSE, nullptr);
				if (!mdl) {
					return STATUS_INSUFFICIENT_RESOURCES;
				}
				MmBuildMdlForNonPagedPool(mdl);

#pragma warning(push)
#pragma warning(disable : 28145)
				// Following MmMapLockedPagesSpecifyCache() call causes bug check in case
				// you are using Driver Verifier. The reason is explained as followings:
				//
				// A driver must not try to create more than one system-address-space
				// mapping for an MDL. Additionally, because an MDL that is built by the
				// MmBuildMdlForNonPagedPool routine is already mapped to the system
				// address space, a driver must not try to map this MDL into the system
				// address space again by using the MmMapLockedPagesSpecifyCache routine.
				// -- MSDN
				//
				// This flag modification hacks Driver Verifier's check and prevent leading
				// bug check. 	//�ƻ�Driver���

				//ϵͳ���Դ��
				//if (Mdl->MdlFlags & (MDL_MAPPED_TO_SYSTEM_VA | MDL_SOURCE_IS_NONPAGED_POOL)) {
				//	return Mdl->MappedSystemVa;
				//}
				//else {
				//	return MmMapLockedPagesSpecifyCache(Mdl, KernelMode, MmCached,
				//		NULL, FALSE, Priority);
				//}


				mdl->MdlFlags &= ~MDL_SOURCE_IS_NONPAGED_POOL;
				mdl->MdlFlags |= MDL_PAGES_LOCKED;
#pragma warning(pop)

				const auto writable_dest =
					MmMapLockedPagesSpecifyCache(mdl, KernelMode, MmCached, nullptr, FALSE,
						NormalPagePriority | MdlMappingNoExecute);
				if (!writable_dest) {
					IoFreeMdl(mdl);
					return STATUS_INSUFFICIENT_RESOURCES;
				}
				RtlCopyMemory(writable_dest, source, length);
				MmUnmapLockedPages(writable_dest, mdl);
				IoFreeMdl(mdl);
				return STATUS_SUCCESS;
			}



			SIZE_T InitMemory() {
				HANDLE ProcessHandle = NULL;
				auto ns = ObOpenObjectByPointer(RWProcess, OBJ_KERNEL_HANDLE, NULL, PROCESS_ALL_ACCESS, *PsProcessType, KernelMode, (PHANDLE)&ProcessHandle);
				if (!NT_SUCCESS(ns)) {
					DbgPrint("OpenProcess Handle failed");
					return NULL;
				}
				SIZE_T ModuleBase = Driver::Process::GetMoudleBase(RWProcess);
				DbgPrint("Process Base: %llx", ModuleBase);

				KAPC_STATE apcstate;
				KeStackAttachProcess(RWProcess, &apcstate);
				//����һҳ
				SIZE_T allocSize = 0x1000;
				//������ڴ���ܱ�������������
				PVOID temp = Driver::Memory::AllocateInjectMemory(ProcessHandle, (PVOID)ModuleBase, &allocSize);
				if (!temp) {
					KeUnstackDetachProcess(&apcstate);
					DbgPrint("alloc memory failed");
					return NULL;
				}

				////ʹ��mdl��סҳ��
				//auto mdl = IoAllocateMdl(temp, allocSize, FALSE, FALSE, nullptr);
				//__try {
				//	MmProbeAndLockPages(mdl, UserMode, IoWriteAccess);
				//}
				//__except (EXCEPTION_EXECUTE_HANDLER) {
				//	KeUnstackDetachProcess(&apcstate);
				//	DbgPrint("Lock page failed");
				//	return NULL;
				//}


				//��������ڴ�����ʼ��һ�Σ���Ȼ��һ��д��ֵ��ʧ�ܣ�ϵͳ���ȳ�ʼ��һ��
				//ע���ַ�ռ�
				RtlZeroMemory(temp, allocSize);





				KeUnstackDetachProcess(&apcstate);

				DbgPrint("alloc size: %lld", allocSize);
				DbgPrint("alloc address: %p", temp);

				return reinterpret_cast<SIZE_T>(temp);


				//ForceCopyUserMemory(temp,,);


				//if (!NT_SUCCESS(Driver::Memory::FreeInjectMemory(ProcessHandle, &temp)))
				//{
				//	DbgPrint("realease memory failed\n");
				//	return NULL;
				//}
			}



			//bool NtProtectVirtualMemory(PVOID* BaseAddress,
			//	SIZE_T* NumberOfBytesToProtect,
			//	ULONG NewAccessProtection,
			//	PULONG OldAccessProtection) {
			//	fnNtProtectVirtualMemory func = reinterpret_cast<fnNtProtectVirtualMemory>(Driver::FindSSDT::GetSSDTFunctionAddress(77));
			//	if (!func) {
			//		DbgPrint("Modify protect failed");
			//		return false;
			//	}
			//	KAPC_STATE apcstate;
			//	KeStackAttachProcess(RWProcess, &apcstate);
			//	ULONG old = 0;
			//	//SIZE_T Modify_Size = 0x200;
			//	if(!NT_SUCCESS(func(ZwCurrentProcess(), BaseAddress, NumberOfBytesToProtect, PAGE_EXECUTE_READWRITE, &old))) {
			//		KeUnstackDetachProcess(&apcstate);
			//		DbgPrint("ProtectVirtualMemory failed");
			//		return false;
			//	}
			//	DbgPrint("old protect %lx", old);



			//	KeUnstackDetachProcess(&apcstate);
			//	return true;
			//}
		}
	}
}



//dump
//MmCreateSection��MmMapViewInSystemSpace 