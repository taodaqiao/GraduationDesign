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
					//为true表示创建进程
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
							//映射整个pml4表
							PVOID pml4_map_table = MmMapIoSpace(pml4, 0x1000, MmNonCached);
							//保存到一个页面中，4096 = 512个地址
							memcpy(pml4_table, pml4_map_table, 0x1000);
							MmUnmapIoSpace(pml4_map_table, 0x1000);
						}
					}
				}
			}



			//打印一个虚拟地址每级页表对应的值
			NTSTATUS GetMemoryPageValue(SIZE_T virtual_address,SIZE_T DirectoryTableBase) {
				DbgPrintEx(0, 0, "Memory: pml4 Entry : %llx", DirectoryTableBase);
				UINT32 pml4_index = (virtual_address & ((SIZE_T)0x1ff << 39)) >> 39;
				DbgPrintEx(0,0,"Memory: pml4 index : %lx", pml4_index);
				PHYSICAL_ADDRESS pml4 = { 0ull };
				pml4.QuadPart = DirectoryTableBase + pml4_index * 0x8;
				//也可以直接用系统映射的虚拟地址PTE
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
				//检查是否x86内核地址？
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
					//Windows会以64-KB为边界计算区域的启始地址 分配粒度为64kb 0x10000 16页
					if (DesiredAddress != mbi.AllocationBase)
					{
						DesiredAddress = mbi.AllocationBase;
					}
					else
					{
						DesiredAddress = (PVOID)((ULONG_PTR)mbi.AllocationBase - 0x10000);
					}

					//BaseAddress只是分配页面中的起始虚拟地址
					if (mbi.State == MEM_FREE)
					{
						//先设置为保留内存
						if (NT_SUCCESS(ZwAllocateVirtualMemory(ProcessHandle, &mbi.BaseAddress, 0, DesiredSize, MEM_RESERVE, PAGE_EXECUTE_READWRITE)))
						{
							//提交到物理内存
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

			//内存都是有读取权限的
			//读内存使用mdl不太正确,尚不清楚有些内存为什么地址会变化
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


			//当内存没有写权限时，通过映射物理内存写入
			// 1803页表隔离会失效，要改成mdl映射
			//这种写法可能蓝屏 当物理页面被换出时 写入蓝屏

			//如果使用直接复制当内存没有写权限时蓝屏，且不蓝也可能触发copyonwirte导致写入失败
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
				MDL位

				MDL_PAGES_LOCKED
				MDL_MAPPED_TO_SYSTEM_VA       //内核地址标志位
				MDL_SOURCE_IS_NONPAGED_POOL
				MDL_PARTIAL
				MDL_IO_SPACE
			*/

			//用户进程内存
			//映射内存可读可写可执行
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
					//这里不是非要IoWriteAccess，反正最后映射的内存都有读写执行
					//这里写成内核地址不会校验虚拟地址范围
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
				//就把他映射到内核地址再覆盖,注意这里读的话要换写法，没有测试KernelMode能否读
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


			//内核内存，可强行修改内核中的只读内存
			//mdl->MdlFlags &= ~MDL_SOURCE_IS_NONPAGED_POOL;
			//锁住页面 比起MmProbeAndLockPages校验更少
			//后者还会校验，传入地址与AccessMode是否匹配，比如传入用户进程的地址而写入KernelMode
			//r3地址是否拥有IoWriteAccess / IoModifyAccess权限。
			//mdl->MdlFlags |= MDL_PAGES_LOCKED;
			//MDL_MAPPED_TO_SYSTEM_VA 将地址映射到内核地址
			//在LoadImage回调下这个函数有进程的AddressCreationLock限制，所以在模块回调时不要用UserMode!
			//因为loadimage下进程的虚拟地址无法准确标识哪一个，找不到对应页表
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
				// bug check. 	//破坏Driver检查

				//系统检查源码
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
				//分配一页
				SIZE_T allocSize = 0x1000;
				//申请的内存可能被换出导致蓝屏
				PVOID temp = Driver::Memory::AllocateInjectMemory(ProcessHandle, (PVOID)ModuleBase, &allocSize);
				if (!temp) {
					KeUnstackDetachProcess(&apcstate);
					DbgPrint("alloc memory failed");
					return NULL;
				}

				////使用mdl锁住页面
				//auto mdl = IoAllocateMdl(temp, allocSize, FALSE, FALSE, nullptr);
				//__try {
				//	MmProbeAndLockPages(mdl, UserMode, IoWriteAccess);
				//}
				//__except (EXCEPTION_EXECUTE_HANDLER) {
				//	KeUnstackDetachProcess(&apcstate);
				//	DbgPrint("Lock page failed");
				//	return NULL;
				//}


				//刚申请的内存必须初始化一次，不然第一次写入值会失败，系统会先初始化一次
				//注意地址空间
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
//MmCreateSection和MmMapViewInSystemSpace 