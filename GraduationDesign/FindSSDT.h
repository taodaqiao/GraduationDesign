#ifndef FIND_SSDT
#define FIND_SSDT


#include <fltKernel.h>


extern "C" {
	namespace Driver {
		namespace FindSSDT {

			typedef struct _SYSTEM_SERVICE_TABLE {
				PVOID  		ServiceTableBase;
				PVOID  		ServiceCounterTableBase;
				ULONGLONG  	NumberOfServices;
				PVOID  		ParamTableBase;
			} SYSTEM_SERVICE_TABLE, *PSYSTEM_SERVICE_TABLE;


			//搜索KeServiceDescriptorTable
			SIZE_T GetKeServiceDescriptorTable();


			//搜索KeServiceDescriptorTableShadow
			SIZE_T GetKeServiceDescriptorTableShadow();


			//根据下标获取SSDT函数地址
			SIZE_T GetSSDTFunctionAddress(ULONGLONG Index);

			//根据下标获取SSDTSHADOW函数地址
			SIZE_T GetSSDTShadowFunctionAddress(ULONGLONG Index);
		}
	}
}

#endif