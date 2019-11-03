#ifndef _H_KERNEL_HOOK
#define _H_KERNEL_HOOK

#include <fltKernel.h>


extern "C" {
	namespace Driver {
		namespace kernel_hook {

			PVOID kernel_getaddr(PWCHAR funcstr);

			VOID HookKernelApi(IN PVOID ApiAddress, IN PVOID Proxy_ApiAddress, OUT PVOID *orige_func_data, OUT ULONG *PatchSize);

			VOID UnhookKernelApi(IN PVOID ApiAddress, IN PVOID OriCode, IN ULONG PatchSize);

			typedef int(*LDE_DISASM)(void *p, int dw);

			void LDE_init();


			typedef struct _kernel_hook_struct {
				PVOID ori_func_addr;
				PVOID proxy_func_addr;
				PVOID transfer_addr;  //中转地址，执行完hook后执行原来代码和跳回原始地址,注意最后释放
				ULONG	hook_size;
			}kernel_hook_struct,*p_kernel_hook_struct;
		}
	}
}




#endif