#ifndef _H_ANTIANTIDEBUG_H
#define _H_ANTIANTIDEBUG_H

#include <fltKernel.h>
#include "kernel_define_7601.h"

extern "C" {
	namespace Driver {
		namespace AntiAntiDebug {


			typedef __int64(__fastcall *pfObpCallPreOperationCallbacks)(__int64 a1, __int64 a2, __int64 a3);


			__int64 __fastcall Fake_ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, __int64 a3);

			//@init
			//初始化反反调试函数
			void init_AntiAntiDebug();
			void unload_AntiAntiDebug();


			void destory_protect_start();

			extern SIZE_T ori_systemcall_64;



			extern int __fastcall MySwapContext();
		}
	}
}


#endif