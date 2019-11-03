#include "SysCallHook.h"

#include "Memory.h"

extern "C" {
	namespace ddk
	{
		namespace vmx
		{
			namespace vmfunction
			{


				

				NTSYSAPI
					PVOID
					NTAPI
					PsGetProcessWin32Process(PEPROCESS Process);


				typedef ULONG_PTR(*OBGETOBJECTTYPE)(
					ULONG_PTR obj);
				




				CSysCallHook::CSysCallHook()
				{
				}
				CSysCallHook::~CSysCallHook()
				{
				}
				CSysCallHook & CSysCallHook::instance()
				{
					static CSysCallHook c;
					return c;
				}

				ULONG64 CSysCallHook::getNewSysCall()
				{
					return _newsyscall;
				}

				ULONG64 CSysCallHook::getOldSysCall()
				{
					return _oldsyscall;
				}
				void CSysCallHook::install(
					//如果不是以vmcall的形式调用的话
					//就直接分配好内存，但是不hook msr，让不同的vmm来自己vmcall
					bool isvmcall)
				{
					init();

					_isvmcall = isvmcall;

					if (_isinstallhook)
					{
						const auto number_of_processors =
							KeQueryActiveProcessorCountEx(ALL_PROCESSOR_GROUPS);
						for (ULONG processor_index = 0; processor_index < number_of_processors;
							processor_index++) {
							PROCESSOR_NUMBER processor_number = {};
							auto status =
								KeGetProcessorNumberFromIndex(processor_index, &processor_number);
							if (!NT_SUCCESS(status)) {
								return;
							}
							GROUP_AFFINITY affinity = {};
							affinity.Group = processor_number.Group;
							affinity.Mask = 1ull << processor_number.Number;
							GROUP_AFFINITY previous_affinity = {};
							KeSetSystemGroupAffinityThread(&affinity, &previous_affinity);

							status = this->hookSysCall(nullptr);

							KeRevertToUserGroupAffinityThread(&previous_affinity);
							if (!NT_SUCCESS(status)) {
								return;
							}
						}
						return;
					}
				}

				void CSysCallHook::uninstall()
				{
					if (_isinstallhook)
					{
						const auto number_of_processors =
							KeQueryActiveProcessorCountEx(ALL_PROCESSOR_GROUPS);
						for (ULONG processor_index = 0; processor_index < number_of_processors;
							processor_index++) {
							PROCESSOR_NUMBER processor_number = {};
							auto status =
								KeGetProcessorNumberFromIndex(processor_index, &processor_number);
							if (!NT_SUCCESS(status)) {
								return;
							}
							GROUP_AFFINITY affinity = {};
							affinity.Group = processor_number.Group;
							affinity.Mask = 1ull << processor_number.Number;
							GROUP_AFFINITY previous_affinity = {};
							KeSetSystemGroupAffinityThread(&affinity, &previous_affinity);

							status = this->unhookSysCall(nullptr);

							KeRevertToUserGroupAffinityThread(&previous_affinity);
							if (!NT_SUCCESS(status)) {
								return;
							}
						}
						return;
						if (_newsyscall) 
						{
							MmFreePagesFromMdl(_ImageMdl);
							//ExFreePool((PVOID)_newsyscall);
							_newsyscall = 0;
						}
						_isinstallhook = false;
					}
				}

				bool CSysCallHook::hookSDT(
					ULONG Index,
					PVOID NewFunction,
					OUT PVOID *OldFunction)
				{
					if (!_isinstallhook)
					{
						//没hook msr
						return false;
					}

					auto idx = Index & 0xfff;
					ddk::utils::CPU::CCPULock lock;
					lock.lock();
					auto oldIrql = KeRaiseIrqlToDpcLevel();
					PVOID oldFunc(nullptr);

					if (Index >= 0x1000)
					{
						//sssdt hook
						oldFunc = (PVOID)(_ShadowSsdtAddress[idx]);
						_ShadowSsdtAddress[idx] = (ULONG64)NewFunction;
					}
					else
					{
						//ssdt hook
						oldFunc = (PVOID)(_SsdtAddress[idx]);
						_SsdtAddress[idx] = (ULONG64)NewFunction;
					}
					if (OldFunction)
					{
						*OldFunction = oldFunc;
					}
					KeLowerIrql(oldIrql);
					lock.unlock();
					return true;
				}
				ULONG64 CSysCallHook::init()
				{
					if (_isinstallhook)
					{
						//已经安装了，就不要安装了
						return _newsyscall;
					}

					//分配空间，开始安装 自己的syscall64
					_newsyscall = setup();
					if (_newsyscall)
					{
						_isinstallhook = true;
					}
					return _newsyscall;
				}

				ULONG64 CSysCallHook::setup(
					//返回一个新的我们自己构造的syscall入口地址
				)
				{
					auto pKiSystemCall64 = (PUCHAR)_oldsyscall;

					if (pKiSystemCall64 == nullptr)
					{
						DbgPrintEx(0,0,"no Syscall64\n");
						return 0;
					}
					//之所以是3 是因为WIN10 还有个filter表
					//最后留出3个 descriptor 表的空间 来存储3个表
					auto syscall64len = (SIZE_T)(0x1000 - sizeof(SERVICE_DESCRIPTOR_TABLE_SHADOW) * 3);
					PHYSICAL_ADDRESS start = { 0 }, end = { 0 };
					end.QuadPart = MAXULONG64;

					auto p_mdl = MmAllocatePagesForMdl(start, end, start, 0x38000);
					ULONG_PTR p(0);

					__try
					{
						_ImageMdl = p_mdl;
						p = (ULONG_PTR)MmGetSystemAddressForMdlSafe(_ImageMdl, NormalPagePriority);
						auto nss = MmProtectMdlSystemAddress(_ImageMdl, PAGE_EXECUTE | PAGE_WRITECOPY);
						DbgPrintEx(0, 0, "addr = %p %x\r\n", p, nss);
					}
					__except (1)
					{
						DbgPrintEx(0, 0, "What mdl fucked\r\n");
						if (p)
						{
							MmFreePagesFromMdl(_ImageMdl);
						}
						p = 0;
						_ImageMdl = nullptr;
						//ExFreePool(p_mdl);
					}
					//auto p = (ULONG_PTR)ExAllocatePoolWithTag(NonPagedPool, 0x38000, 'fuck');
					if (!p)
					{
						DbgPrintEx(0, 0, "no buffer\n");
						return 0;
					}

					//RtlZeroMemory((PVOID)p, 0x18000);
					//拷贝原始的syscall
					Driver::Memory::ForceCopyKernelMemory((PVOID)p, pKiSystemCall64, syscall64len);
					DbgPrintEx(0, 0, "p : %p, %p, KiSystemCall64 length = %x\n",
						(PULONG_PTR)p,
						pKiSystemCall64,
						syscall64len);

					//构建我们自己的descriptor table
					_pmyssdt = (PSERVICE_DESCRIPTOR_TABLE)(
						p + 0x1000 - sizeof(SERVICE_DESCRIPTOR_TABLE_SHADOW) * 3
						);
					_pmysssdt = (PSERVICE_DESCRIPTOR_TABLE_SHADOW)(
						p + 0x1000 - sizeof(SERVICE_DESCRIPTOR_TABLE_SHADOW) * 2
						);
					_pmyfilter = (PSERVICE_DESCRIPTOR_TABLE)(
						p + 0x1000 - sizeof(SERVICE_DESCRIPTOR_TABLE_SHADOW) * 1
						);

					_Trampoline = (PUCHAR)(p + 0x1000);//跳板位置
					_Address = (PULONG_PTR)(p + 0x4000);//跳跃的地址

					//
					_SsdtTable = (PLONG32)(p + 0x7000);
					_SsdtTrampoline = p + 0xa000;    //FF 25
					_SsdtAddress = (PULONG64)(p + 0xd000);
					//
					_ShadowSsdtTable = (PLONG32)(p + 0x10000);
					_ShadowSsdtTrampoline = p + 0x13000; //FF 25      cha 1500
					_ShadowSsdtAddress = (PULONG64)(p + 0x20000);    //cha  8b00

					if (fix(p, pKiSystemCall64, syscall64len))
					{
						ExFreePool((PVOID)p);
						return 0;
					}
					return p;
				}
				NTSTATUS CSysCallHook::fix(
					//修正 my syscall64
					ULONG_PTR pMySysCall64,
					PUCHAR pKiSystemCall64,
					SIZE_T Length
				)
				{
					// lea r10,[nt!KeServiceDescriptorTable]
					// lea r11,[nt!KeServiceDescriptorTableShadow]
					// lea rdi,[nt!KeServiceDescriptorTableShadow]
					auto leaR10Offset(0ull), leaR11Offset(0ull), leaRdiOffset(0ull);
					auto leaR11Offset2(0ull);
					for (auto i(0ull); i < Length; ++i)
					{
						//第一部分 fix 修改call ，call到我们自己的跳转表去
						//跳转表的内容每个都是 ff25  jmp ptr xxxxxx
						if (pKiSystemCall64[i] == 0xE8)
						{
							fixcall(
								(ULONG_PTR)pKiSystemCall64,
								pMySysCall64,
								i,
								_Address++
							);
						}
						//FF 15 call  qword ptr [fffffa80`010320d0]
						else if (pKiSystemCall64[i] == 0xFF &&
							pKiSystemCall64[i + 1] == 0x15)
						{
							//单纯的修正为我们自己的变量
							auto p = pMySysCall64 + i;
							auto Rel32 = *(PLONG32)(p + 2);

							//原始的call 地址
							*_Address = Rel32 + (ULONG_PTR)pKiSystemCall64 + i + 6;
							if (MmIsAddressValid((PVOID)(*_Address)))
							{
								DbgPrintEx(0, 0, "found %p : 0xFF15 call\n", p);
								*_Address = *(PULONG_PTR)(*_Address);
								//根据我们自己的变量 修正我们自己的偏移
								*(PLONG32)(p + 2) = (LONG32)((PUCHAR)_Address - (PUCHAR)p - 6);
								_Address++;
							}
						}

						// Fix opcode cmp rsi, qword ptr [nt!MmUserProbeAddress]
						// 修正 为  call  xxxxxxxxx
						else if (
							pKiSystemCall64[i] == 0x48 &&
							pKiSystemCall64[i + 1] == 0x3B &&
							pKiSystemCall64[i + 2] == 0x35
							)
						{
							fixcmp(
								pMySysCall64,
								i,
								_Address++
							);
						}
						// Fix opcode cmovae rsi,qword ptr [nt!MmUserProbeAddress]
						// 修正 为  call  xxxxxxxxx
						else if (pKiSystemCall64[i] == 0x48 &&
							pKiSystemCall64[i + 1] == 0x0f &&
							pKiSystemCall64[i + 2] == 0x43 &&
							pKiSystemCall64[i + 3] == 0x35)
						{
							fixcmovae(
								pMySysCall64,
								i,
								_Address++
							);
						}
						//Fix opcode test dword ptr [nt!PerfGlobalGroupMask],40h
						// 修正 为  call  xxxxxxxxx
						else if (
							pKiSystemCall64[i] == 0xF7 &&
							pKiSystemCall64[i + 1] == 0x05 &&
							pKiSystemCall64[i + 6] == 0x40
							)
						{
							fixtest(
								(ULONG_PTR)pKiSystemCall64,
								pMySysCall64,
								i,
								_Address++);
						}
						// Fix lea r10,[nt!KeServiceDescriptorTable]
						//     lea r11,[nt!KeServiceDescriptorTableShadow]
						else if (pKiSystemCall64[i] == 0x4c &&
							pKiSystemCall64[i + 1] == 0x8d &&
							pKiSystemCall64[i + 7] == 0x4c &&
							pKiSystemCall64[i + 8] == 0x8d
							)
						{
							auto p = (PUCHAR)(pMySysCall64 + i + 14);

							// 保存原来的rel32 的位置
							leaR10Offset = i;
							leaR11Offset = i + 7;

							/*
							4C 8D 15 15 3C 25 00                          lea     r10, KeServiceDescriptorTable
							4C 8D 1D CE 3B 25 00                          lea     r11, KeServiceDescriptorTableShadow
							 F7 43 78 40 00 00 00                          test    dword ptr [rbx+78h], 40h
							*/

							////////////////////////////
							//这里就直接跳转到原始函数的test    dword ptr [rbx+78h], 40h去了，因为下面没有必要处理了
							*_Address = (ULONG_PTR)(&pKiSystemCall64[i] + 14);

							//jmp qword ptr [xxxx]
							*p = 0xff;
							*(p + 1) = 0x25;
							*(PLONG32)(p + 2) = (LONG32)((PUCHAR)_Address - p - 6);

							++_Address;
						}
						// Fix lea rdi,[nt!KeServiceDescriptorTableShadow]
						else if (pKiSystemCall64[i] == 0x48 &&
							pKiSystemCall64[i + 1] == 0x8d &&
							pKiSystemCall64[i + 2] == 0x3d)
						{
							//记录偏移
							leaRdiOffset = i;
						}
						//Fix lea     r11, KeServiceDescriptorTableFilter
						else if (pKiSystemCall64[i] == 0x4C &&
							pKiSystemCall64[i + 1] == 0x8d &&
							pKiSystemCall64[i + 7] == 0x4d)
						{
							//记录偏移
							leaR11Offset2 = i;
						}
					}
					//__debugbreak();
					if (!leaR11Offset || !leaR10Offset)
					{
						DbgPrintEx(0, 0, "ssdt table found failed\r\n");
						return STATUS_NOT_FOUND;
					}

					{
						return rebuildsdt(
							(ULONG_PTR)pKiSystemCall64,
							pMySysCall64,
							leaR10Offset,
							leaR11Offset,
							leaRdiOffset,
							leaR11Offset2);
					}

					return STATUS_SUCCESS;
				}
				NTSTATUS CSysCallHook::rebuildsdt(
					//重新构建sdt
					ULONG_PTR pKiSystemCall64,
					ULONG_PTR pMySysCall64,
					ULONG_PTR leaR10Offset,
					ULONG_PTR leaR11Offset,
					ULONG_PTR leaRdiOffset,
					ULONG_PTR leaR11Offset2
				)
				{
					//获取原来ssdt的Rel32
					auto Rel32 = *(PLONG32)(pKiSystemCall64 + leaR10Offset + 3);
					auto ssdt = pKiSystemCall64 + leaR10Offset + 7 + Rel32;
					if (!Rel32)
					{
						DbgPrintEx(0, 0, "rebuildssdt Rel32 failed\n");
						return STATUS_NOT_FOUND;
					}
					//rebuild ssdt
					rebuildssdt((PSERVICE_DESCRIPTOR_TABLE)ssdt);
					Rel32 = (LONG32)((ULONG_PTR)_pmyssdt - (pMySysCall64 + leaR10Offset) - 7);
					*(PLONG32)(pMySysCall64 + leaR10Offset + 3) = Rel32;

					//原来sssdt的rel32
					Rel32 = *(PLONG32)(pKiSystemCall64 + leaR11Offset + 3);
					auto sssdt = pKiSystemCall64 + leaR11Offset + 7 + Rel32;

					if (!Rel32)
					{
						DbgPrintEx(0, 0, "rebuildsssdt Rel32 failed\n");
						return STATUS_NOT_FOUND;
					}
					//dprintf("Shadow SSDT------>%p\n", sssdt);
					//rebuild sssdt
					rebuildsssdt((PSERVICE_DESCRIPTOR_TABLE_SHADOW)sssdt);
					Rel32 = (LONG32)((ULONG_PTR)_pmysssdt - (pMySysCall64 + leaR11Offset) - 7);
					*(PLONG32)(pMySysCall64 + leaR11Offset + 3) = Rel32;

					//lea rdi,[nt!KeServiceDescriptorTableShadow]
					if (leaRdiOffset != 0)
					{
						//偏移到+0x20 结构体正好有个空隙
						Rel32 = *(PLONG32)(pMySysCall64 + leaRdiOffset + 3);
						if (Rel32)
						{
							Rel32 = (LONG32)((ULONG_PTR)_pmysssdt + 0x20 - (pMySysCall64 + leaRdiOffset) - 7);
							*(PLONG32)(pMySysCall64 + leaRdiOffset + 3) = Rel32;
						}
						else
						{
							return STATUS_NOT_FOUND;
						}
					}
					//lea     r11, KeServiceDescriptorTableFilter

					if (leaR11Offset2 != 0)
					{
						Rel32 = *(PLONG32)(pMySysCall64 + leaR11Offset2 + 3);
						auto fltsdt = pKiSystemCall64 + leaR11Offset2 + 7 + Rel32;
						if (Rel32)
						{
							rebuildfltsdt((PSERVICE_DESCRIPTOR_TABLE)fltsdt);
							Rel32 = (LONG32)((ULONG_PTR)_pmyfilter + 0x20 - (pMySysCall64 + leaR11Offset2) - 7);
							*(PLONG32)(pMySysCall64 + leaR11Offset2 + 3) = Rel32;
						}
						else
						{
							return STATUS_NOT_FOUND;
						}
					}
					return STATUS_SUCCESS;
				}
				NTSTATUS CSysCallHook::rebuildfltsdt(
					PSERVICE_DESCRIPTOR_TABLE fltsdt
				)
				{
					if (!fltsdt)
					{
						return STATUS_NOT_FOUND;
					}
					_pmyfilter->ServiceTable = fltsdt->ServiceTable;
					_pmyfilter->ArgumentTable = fltsdt->ArgumentTable;
					_pmyfilter->CounterTable = fltsdt->CounterTable;
					_pmyfilter->TableSize = fltsdt->TableSize;
					//不做复制
					return STATUS_SUCCESS;
				}
				NTSTATUS CSysCallHook::rebuildsssdt(
					PSERVICE_DESCRIPTOR_TABLE_SHADOW sssdt
				)
				{
					if (!sssdt)
					{
						return STATUS_NOT_FOUND;
					}
					auto ep = LookupAWin32Process();
					if (!ep)
					{
						return STATUS_NOT_FOUND;
					}
					KAPC_STATE ApcState;
					//附加到GUI的进程，为了获取sssdt
					//附加到GUI的进程，为了获取sssdt
					/*unsigned char s[] =
					{
						0xe6, 0x15, 0xc6, 0xd0, 0x98, 0x49, 0x6, 0x9e,
						0x36, 0x37, 0xfe, 0xaf, 0xda, 0x98, 0x8a, 0x93,
						0x35, 0x26, 0xd6, 0xb7, 0x9e
					};

					for (unsigned char m = 0; m < sizeof(s); ++m)
					{
						unsigned char c = s[m];
						c -= m;
						c = (c >> 0x3) | (c << 0x5);
						c -= m;
						c ^= 0x1a;
						c += m;
						c ^= 0xa7;
						c += m;
						c = -c;
						c += m;
						c = -c;
						c = ~c;
						c -= 0xb8;
						c ^= 0x65;
						c += 0x32;
						c = -c;
						s[m] = c;
					}

					auto pke = (fnKeStackAttachProcess)ddk::utils::NtSyscall::DynImport::Instance().get_proc_address(std::string((char*)s));
					if (pke && MmIsAddressValid(pke))
					{
						pke(ep, &ApcState);
					}*/

					// 				if (ddk::utils::NtSyscall::DynImport().Instance().KeStackAttachProcess)
					// 				{
					// 					ddk::utils::NtSyscall::DynImport().Instance().KeStackAttachProcess(ep, &ApcState);
					// 				}
					KeStackAttachProcess(ep, &ApcState);

					_pmysssdt->SsdtServiceTable = _SsdtTable;
					_pmysssdt->SsdtArgumentTable = sssdt->SsdtArgumentTable;
					_pmysssdt->SsdtCounterTable = sssdt->SsdtCounterTable;
					_pmysssdt->SsdtTableSize = sssdt->SsdtTableSize;
					//
					_pmysssdt->ServiceTable = _ShadowSsdtTable;
					//pMyShadowSsdt->ServiceTable = SysShadowSsdt->ServiceTable;
					_pmysssdt->ArgumentTable = sssdt->ArgumentTable;
					_pmysssdt->CounterTable = sssdt->CounterTable;
					_pmysssdt->TableSize = sssdt->TableSize;

					DbgPrintEx(0, 0, "\n===============ShadowSSDT===============\n");

					// Fill shadow ssdt rel32
					auto Rel32(0l);
					auto tableSize = sssdt->TableSize;
					for (auto i = 0ul; i < tableSize; ++i)
					{

						_ShadowSsdtAddress[i] = ((LONG)sssdt->ServiceTable[i] >> 4) +
							(ULONG_PTR)sssdt->ServiceTable;

						// jmp qword ptr
						*(PUSHORT)_ShadowSsdtTrampoline = 0x25FF;

						// rel32
						Rel32 = (LONG32)((ULONG_PTR)&_ShadowSsdtAddress[i] - _ShadowSsdtTrampoline - 6);
						*(PLONG32)(_ShadowSsdtTrampoline + 2) = Rel32;


						_ShadowSsdtTable[i] = ((LONG)(_ShadowSsdtTrampoline -
							(ULONG_PTR)_ShadowSsdtTable)) << 4;

						_ShadowSsdtTable[i] |= sssdt->ServiceTable[i] & 0xF;

						_ShadowSsdtTrampoline += 0x10;
						//dprintf("Shadow SSDT------>[%d] 0x%llX\n", i, _ShadowSsdtAddress[i]);  //想看了可以放开
					}

					KeUnstackDetachProcess(&ApcState);
					return STATUS_SUCCESS;
				}
				PEPROCESS CSysCallHook::LookupAWin32Process()
				{
					PEPROCESS EProcess;
					ULONG pid;
					UNICODE_STRING	usFuncName;
					RtlInitUnicodeString(&usFuncName, L"ObGetObjectType");
					OBGETOBJECTTYPE ObGetObjectType = (OBGETOBJECTTYPE)MmGetSystemRoutineAddress(&usFuncName);
					if (!ObGetObjectType)
						return nullptr;
					for (pid = 4; pid < 5000; pid += 4)
					{
						if (PsLookupProcessByProcessId((HANDLE)pid, &EProcess) == STATUS_SUCCESS)
						{
							if (ObGetObjectType((ULONG_PTR)EProcess) == (ULONG_PTR)(*PsProcessType))
							{
								if (PsGetProcessWin32Process(EProcess))
								{
									ObDereferenceObject(EProcess);
									return EProcess;
								}
							}
							ObDereferenceObject(EProcess);
						}
					}

					return nullptr;
				}
				NTSTATUS CSysCallHook::rebuildssdt(
					PSERVICE_DESCRIPTOR_TABLE ssdt
				)
				{
					if (!ssdt)
					{
						return STATUS_NOT_FOUND;
					}

					memset(_pmyssdt, 0, sizeof(SERVICE_DESCRIPTOR_TABLE_SHADOW));

					//填充自己的ssdt
					_pmyssdt->ServiceTable = _SsdtTable;
					_pmyssdt->ArgumentTable = ssdt->ArgumentTable;
					_pmyssdt->CounterTable = ssdt->CounterTable;
					_pmyssdt->TableSize = ssdt->TableSize;

					auto Rel32(0l);

					//填充 ssdt  rel32
					for (auto i(0ul); i < ssdt->TableSize; ++i)
					{

						_SsdtAddress[i] = ((LONG)ssdt->ServiceTable[i] >> 4) +
								(ULONG_PTR)ssdt->ServiceTable;

						//jmp qword ptr[xxxxxxx]
						*(PUSHORT)_SsdtTrampoline = 0x25FF;

						//更新rel32 跳转到原来的自己的ssdt函数中
						Rel32 = (LONG32)((ULONG_PTR)&_SsdtAddress[i] - _SsdtTrampoline - 6);
						*(PLONG32)(_SsdtTrampoline + 2) = Rel32;

						//更新自己的ssdt table 的偏移

						_SsdtTable[i] = ((LONG)(_SsdtTrampoline - (ULONG_PTR)_SsdtTable)) << 4;

						_SsdtTable[i] |= ssdt->ServiceTable[i] & 0xF;
						_SsdtTrampoline += 0x10;
						//dprintf("SSDT------>[%d] 0x%llX\n", i, _SsdtAddress[i]);  //想看了可以放开
					}
					return STATUS_SUCCESS;
				}
				void CSysCallHook::fixtest(
					//Fix opcode test dword ptr [nt!PerfGlobalGroupMask],40h
					// 修正 为  call  xxxxxxxxx
					ULONG_PTR pKiSystemCall64,
					ULONG_PTR pMySysCall64,
					ULONG64 Offset,
					PULONG_PTR pAddress
				)
				{
					auto p = pMySysCall64 + Offset;
					auto Rel32(0l);
					DbgPrintEx(0, 0, "found %p : test dword ptr [nt!PerfGlobalGroupMask],40h\n", p);

					Rel32 = *(PLONG32)(p + 2);

					//push rax
					*_Trampoline = 0x50;
					//mov rax, qword ptr [xxxx]
					*(PULONG_PTR)(_Trampoline + 1) = 0x058B48;

					//获取原始的地址
					*pAddress = pKiSystemCall64 + Offset + 10 + Rel32;
					//更新Rel32  因为 test dword ptr [rax],40h 有8个字节
					Rel32 = (LONG32)((PUCHAR)pAddress - _Trampoline - 8);
					*(PLONG32)(_Trampoline + 4) = Rel32;

					// test dword ptr [rax],40h
					*(PULONG_PTR)(_Trampoline + 8) = 0x4000F7;
					*(PULONG_PTR)(_Trampoline + 11) = 0;

					//pop rax
					*(PUCHAR)(_Trampoline + 14) = 0x58;
					// ret
					*(PUCHAR)(_Trampoline + 15) = 0xC3;

					//call
					*(PUCHAR)p = 0xE8;
					*(PLONG32)(p + 1) = (LONG32)(_Trampoline - (PUCHAR)p - 5);
					//nop 5 直接  原来是10个字节 test dword ptr [nt!PerfGlobalGroupMask],40h
					*(PULONG32)(p + 5) = 0x90909090;
					*(PUCHAR)(p + 9) = 0x90;
					_Trampoline += 16;
				}
				void CSysCallHook::fixcmovae(
					// Fix opcode cmovae rsi,qword ptr [nt!MmUserProbeAddress]
					// 修正 为  call  xxxxxxxxx
					ULONG_PTR pMySysCall64,
					ULONG64 Offset,
					PULONG_PTR pAddress
				)
				{
					auto p = pMySysCall64 + Offset;
					auto Rel32(0l);
					DbgPrintEx(0, 0, "found %p : ccmovae rsi,qword ptr [nt!MmUserProbeAddress]\n", p);

					//push rax
					*_Trampoline = 0x50;
					//mov rax, qword ptr [xxxxx]
					*(PULONG_PTR)(_Trampoline + 1) = 0x058B48;
					//rel32
					*pAddress = (ULONG_PTR)&MmUserProbeAddress;
					Rel32 = (LONG32)((PUCHAR)pAddress - _Trampoline - 8);
					*(PLONG32)(_Trampoline + 4) = Rel32; //上面的xxxxx
					// cmovae  rsi,qword ptr [rax]  //这里的rax就是&MmUserProbeAddress
					*(PULONG_PTR)(_Trampoline + 8) = 0x30430F48;
					//pop rax
					*(PUCHAR)(_Trampoline + 12) = 0x58;
					//ret
					*(PUCHAR)(_Trampoline + 13) = 0xC3;

					//call上面的
					*(PUCHAR)(p) = 0xe8;
					*(PLONG32)(p + 1) = (LONG32)(_Trampoline - (PUCHAR)p - 5);
					//nop 多余的直接 原始的字节是8直接，现在用了5个，所以需要nop3个字节
					*(PUSHORT)(p + 5) = 0x9090;
					*(PUCHAR)(p + 7) = 0x90;
					//_Trampoline递增到下一个
					_Trampoline += 14;
				}
				void CSysCallHook::fixcmp(
					// Fix opcode cmp rsi, qword ptr [nt!MmUserProbeAddress]
					// 修正 为  call  xxxxxxxxx
					ULONG_PTR pMySysCall64,
					ULONG64 Offset,
					PULONG_PTR pAddress
				)
				{
					/*
					48 3B 35 BF C0 11 00    cmp     rsi, cs:MmUserProbeAddress
					*/
					auto p = pMySysCall64 + Offset;
					auto Rel32(0l);
					DbgPrintEx(0, 0, "found %p : cmp rsi, qword ptr [nt!MmUserProbeAddress]\n", p);

					//为了把自己的变量放进去，所以实现了一个函数
					/*构建一个call的函数   开始*/
					// push rax
					*_Trampoline = 0x50;
					//mov rax, qword ptr[xxxx]
					*(PULONG_PTR)(_Trampoline + 1) = 0x058B48;

					// 更新 rel32  取&&MmUserProbeAddress 也就是上面的xxxx
					*pAddress = (ULONG_PTR)&MmUserProbeAddress;
					Rel32 = (LONG32)((PUCHAR)pAddress - _Trampoline - 8);
					*(PLONG32)(_Trampoline + 4) = Rel32;
					// cmp rsi,qword ptr [rax] 此时的rax才是 &MmUserProbeAddress
					*(PULONG_PTR)(_Trampoline + 8) = 0x303B48;
					// pop rax
					*(PUCHAR)(_Trampoline + 11) = 0x58;
					// ret
					*(PUCHAR)(_Trampoline + 12) = 0xC3;
					/*构建一个call的函数   结束*/

					//开始调用上面那个函数
					// call
					*(PUCHAR)p = 0xE8;
					*(PLONG32)(p + 1) = (LONG32)(_Trampoline - (PUCHAR)p - 5);

					//原始的字节是7直接，现在用了5个，所以需要nop2个字节
					*(PUSHORT)(p + 5) = 0x9090;

					//_Trampoline递增到下一个
					_Trampoline += 13;
				}
				NTSTATUS CSysCallHook::fixcall(
					//找到 call
					//改成 ff25  jmp ptr xxxxxx
					ULONG_PTR pKiSystemCall64,
					ULONG_PTR pMySysCall64,
					ULONG64 Offset,
					OUT PULONG_PTR pAddress
				)
				{
					/*
					0000000140154A8D E8 CA EC 52 00    call    PsPicoSystemCallDispatch
					*/
					/*
					更改成下面
					0000000140001168 FF 25 DA 3A 25 00  jmp     cs:__imp_TmEnableCallbacks
					*/
					auto TargetAddress(0ull);  //call 00405000 的那个地址 00405000
					auto p = pMySysCall64 + Offset;
					DbgPrintEx(0, 0, "found:%p : 0xE8 call\n", p);
					auto Rel32 = *(PLONG32)(p + 1); // e8后面的偏移
					TargetAddress = Rel32 + pKiSystemCall64 + Offset + 5;//call 00405000 的那个地址 00405000

					if (MmIsAddressValid((PVOID)TargetAddress))
					{
						*pAddress = TargetAddress;

						// jmp qword ptr [xxx]   ff 25
						*_Trampoline = 0xff;
						*(_Trampoline + 1) = 0x25;

						//从 ff 25  那里拿到offset 然后填充跳转表里的offset
						Rel32 = (LONG32)((PUCHAR)pAddress - _Trampoline - 6);
						*(PLONG32)(_Trampoline + 2) = Rel32;

						//更改原来的e8 后面的偏移call到我们的跳转表里面去
						*(PLONG32)(p + 1) = (LONG32)(_Trampoline - (PUCHAR)p - 5);
						
						//跳转表++
						_Trampoline += 6;
					}
					else
					{
						DbgPrintEx(0, 0, "From %p Call - MmIsAddressValid() failed : %p\n",
							p, TargetAddress);
						return STATUS_UNSUCCESSFUL;
					}
					return STATUS_SUCCESS;
				}
				NTSTATUS CSysCallHook::hookSysCall(PVOID context)
				{
					if (_isvmcall)
					{
						auto ns = UtilVmCall(HypercallNumber::kHookSyscall, reinterpret_cast<void *>(_newsyscall));
					}
					else
					{
						UtilWriteMsr64(Msr::kIa32Lstar, _newsyscall);
						//__writemsr(kIa32Lstar, _newsyscall);
					}

					return STATUS_SUCCESS;
				}
				NTSTATUS CSysCallHook::unhookSysCall(PVOID context)
				{
					if (_isvmcall)
					{
						auto ns = UtilVmCall(HypercallNumber::kUnhookSyscall, reinterpret_cast<void *>(_oldsyscall));
					}
					else
					{
						UtilWriteMsr64(Msr::kIa32Lstar, _oldsyscall);
						//__writemsr(kIa32Lstar, _oldsyscall);
					}

					return STATUS_SUCCESS;
				}
			}
		}
	}
}
