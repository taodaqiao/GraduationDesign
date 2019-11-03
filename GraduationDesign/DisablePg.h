#ifndef _H_DISPG_H
#define _H_DISPG_H
#include <fltKernel.h>

extern "C" {

	extern SIZE_T KiRetireDpcList;
	//extern ULONG64 g_CpuContextAddress;
	//extern ULONG64 g_KiRetireDpcList;

	namespace Driver {
		namespace dis_pg {
			typedef struct _HOOK_CTX
			{
				ULONG64 rax;
				ULONG64 rcx;
				ULONG64 rdx;
				ULONG64 rbx;
				ULONG64 rbp;
				ULONG64 rsi;
				ULONG64 rdi;
				ULONG64 r8;
				ULONG64 r9;
				ULONG64 r10;
				ULONG64 r11;
				ULONG64 r12;
				ULONG64 r13;
				ULONG64 r14;
				ULONG64 r15;
				ULONG64 Rflags;
				ULONG64 rsp;
			}HOOK_CTX, *PHOOK_CTX;

			typedef VOID(*TRtlCaptureContext)(PCONTEXT ContextRecord);

			extern VOID AdjustStackCallPointer(
				IN ULONG_PTR NewStackPointer,
				IN PVOID StartAddress,
				IN PVOID Argument);

			extern CHAR GetCpuIndex();
			extern VOID HookKiRetireDpcList();
			extern VOID HookRtlCaptureContext();
			extern VOID BackTo1942();



			VOID OnRtlCaptureContext(PHOOK_CTX hookCtx);

			VOID InitDisablePatchGuard();
			VOID UnLoadDisablePatchGuard();
		}
	}
}

#endif