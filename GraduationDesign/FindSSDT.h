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


			//����KeServiceDescriptorTable
			SIZE_T GetKeServiceDescriptorTable();


			//����KeServiceDescriptorTableShadow
			SIZE_T GetKeServiceDescriptorTableShadow();


			//�����±��ȡSSDT������ַ
			SIZE_T GetSSDTFunctionAddress(ULONGLONG Index);

			//�����±��ȡSSDTSHADOW������ַ
			SIZE_T GetSSDTShadowFunctionAddress(ULONGLONG Index);
		}
	}
}

#endif