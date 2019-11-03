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
				PVOID transfer_addr;  //��ת��ַ��ִ����hook��ִ��ԭ�����������ԭʼ��ַ,ע������ͷ�
				ULONG	hook_size;
			}kernel_hook_struct,*p_kernel_hook_struct;
		}
	}
}




#endif