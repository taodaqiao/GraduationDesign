#include "SDTHook.h"


#include "SysCallHook.h"

#include "HookFunction.h"


namespace ddk
{
	namespace vmx
	{
		namespace vmfunction
		{
			namespace hook
			{
				void CSDTHook::SDT_Hook()
				{
					ddk::vmx::vmfunction::CSysCallHook::instance().install(true);  //挂MSR钩子

					SSDT_Hook();
					//SSSDT_Hook();
				}

				void CSDTHook::SDT_UnHook()
				{

					ddk::vmx::vmfunction::CSysCallHook::instance().uninstall();   //卸载MSR钩子
				}
				//-----------------------
				void CSDTHook::SSDT_Hook()
				{
					
					ddk::vmx::vmfunction::CSysCallHook::instance().hookSDT(OpenProcess_hook.Index, OpenProcess_hook.NewFunction, &OpenProcess_hook.OldFunction);


//#define HOOKSSDT_FUNC(X)\
//					{\
//						auto X_ID = ddk::utils::NtSyscall::DynImport().get_sys_call_index(#X); \
//						if(X_ID != -1)\
//						{\
//							ddk::vmx::vmfunction::CSysCallHook::instance().hookSDT(X_ID, m_##X##HookTarget.handler, (PVOID *)&m_##X##HookTarget.original_call); \
//							dprintf(#X"------>0x%p\n", m_##X##HookTarget.original_call);\
//						}\
//					}

					//一句话挂钩
					//HOOKSSDT_FUNC(NtOpenProcess);
					//HOOKSSDT_FUNC(NtOpenThread);
					//HOOKSSDT_FUNC(NtReadVirtualMemory);
					//HOOKSSDT_FUNC(NtQueryInformationProcess);
					//HOOKSSDT_FUNC(NtQuerySystemInformation);
					//HOOKSSDT_FUNC(NtQueryVirtualMemory);
					//HOOKSSDT_FUNC(NtCreateFile);
					//HOOKSSDT_FUNC(NtOpenFile);
				}

				void CSDTHook::SSSDT_Hook()
				{
//					auto ID_NtUserQueryWindow = -1;
//					auto ID_NtUserGetForegroundWindow = -1;
//					auto ID_NtUserFindWindowEx = -1;
//
//					auto ver = ddk::utils::GetVersion();
//
//					switch (ver)
//					{
//					}
//
//					//挂靠GUI进程才能Hook Shadow表,否则有一定几率得不到Shadow表,从而卡死
//					auto ep = ddk::vmx::vmfunction::CSysCallHook::instance().LookupAWin32Process();
//					if (!ep)
//					{
//						return;
//					}
//					KAPC_STATE ApcState;
//					KeStackAttachProcess(ep, &ApcState);
//
//#define HOOKSSSDT_FUNC(X)\
//					{\
//                        if(ID_##X != -1)\
//						{\
//							ddk::vmx::vmfunction::CSysCallHook::instance().hookSDT((0x1000 + ID_##X), m_##X##HookTarget.handler, (PVOID *)&m_##X##HookTarget.original_call);\
//							dprintf(#X"------>0x%p\n", m_##X##HookTarget.original_call);\
//						}\
//					}
//
//					//一句话挂钩
//					HOOKSSSDT_FUNC(NtUserQueryWindow);
//					HOOKSSSDT_FUNC(NtUserGetForegroundWindow);
//					HOOKSSSDT_FUNC(NtUserFindWindowEx);
//
//					KeUnstackDetachProcess(&ApcState);
				}
			}
		}
	}
}
