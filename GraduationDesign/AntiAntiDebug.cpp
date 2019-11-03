#include "AntiAntiDebug.h"

#include "Debugger.h"

#include "debug_func.h"


#include "kernel_hook.h"

#include "Process.h"
#include "YHypervisor/util.h"
#include "YHypervisor/log.h"
#include <intrin.h>


extern "C" {
	SIZE_T jmp_SwapContext_PatchXRstor = 0;
	SIZE_T jmp_SwapContext = 0;
	SIZE_T jmp_SwapContextTp = 0;


	BOOLEAN __fastcall  IstThreadStub(PETHREAD OldThread, PETHREAD NewThread) {

		if ((PsIsSystemThread(OldThread) == TRUE) && (PsIsSystemThread(NewThread) == TRUE))
		{
			return TRUE;
		}
		return FALSE;
	}

	namespace Driver {
		namespace AntiAntiDebug {
			SIZE_T ori_systemcall_64 = 0;
			SIZE_T ori_systemcall_32 = 0;




			__int64 __fastcall Fake_ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, __int64 a3) {
				Driver::DeBugger::p_save_handlentry Padd;
				Padd = Driver::DeBugger::querylist(Driver::DeBugger::debugger_head, PsGetCurrentProcessId(), PsGetCurrentProcess());
				if (Padd != NULL || !_stricmp(Driver::Process::PsGetProcessImageFileName(PsGetCurrentProcess()), "x32dbg.exe")) {
					return 0;
				}
				return reinterpret_cast<pfObpCallPreOperationCallbacks>(Driver::Dbg::init_table_hook.ObpCallPreOperationCallbacks.transfer_addr)(a1, a2, a3);
			}


			NTSTATUS RestorTp(PVOID context) {
				HYPERPLATFORM_LOG_INFO("restore for the processor %lu.",
					KeGetCurrentProcessorNumberEx(nullptr));
				UtilVmCall(HypercallNumber::kRestoreTpHook, context);
				return STATUS_SUCCESS;
			}


			//void init_AntiAntiDebug() {


			//	//ori_systemcall_64 = __readmsr(0xC0000082);
			//	//ori_systemcall_32 = __readmsr(0xC0000083);

			//	////jz 
			//	//jmp_SwapContext_PatchXRstor = Driver::Dbg::init_table_variable.SwapContext_PatchXRstor + 0x121;
			//	////TP hook之后的指令
			//	//jmp_SwapContext = reinterpret_cast<SIZE_T>(Driver::Dbg::init_table_hook.SwapContext.ori_func_addr) + 0x29;
			//	////push 
			//	////mov rsp
			//	////ret
			//	////tp跳转地址
			//	//jmp_SwapContextTp = reinterpret_cast<SIZE_T>(Driver::Dbg::init_table_hook.SwapContext.ori_func_addr) + 0x1B;

			//	DbgPrint("orignal value %llx", ori_systemcall_64);
			//}


			void unload_AntiAntiDebug() {
				Driver::kernel_hook::UnhookKernelApi(
					Driver::Dbg::init_table_hook.ObpCallPreOperationCallbacks.ori_func_addr,
					Driver::Dbg::init_table_hook.ObpCallPreOperationCallbacks.transfer_addr,
					Driver::Dbg::init_table_hook.ObpCallPreOperationCallbacks.hook_size
				);
			}

			void destory_protect_start() {
				UtilForEachProcessor(RestorTp, nullptr);

				Driver::kernel_hook::HookKernelApi(
					Driver::Dbg::init_table_hook.ObpCallPreOperationCallbacks.ori_func_addr,
					(PVOID)Fake_ObpCallPreOperationCallbacks,
					&Driver::Dbg::init_table_hook.ObpCallPreOperationCallbacks.transfer_addr,
					&Driver::Dbg::init_table_hook.ObpCallPreOperationCallbacks.hook_size
				);

				//Driver::kernel_hook::HookKernelApi(
				//	Driver::Dbg::init_table_hook.SwapContext.ori_func_addr,
				//	(PVOID)MySwapContext,
				//	&Driver::Dbg::init_table_hook.SwapContext.transfer_addr,
				//	&Driver::Dbg::init_table_hook.SwapContext.hook_size
				//);
			}
		}
	}
}