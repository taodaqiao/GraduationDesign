#pragma once

#include <fltKernel.h>


extern "C" {
	namespace ddk
	{
		namespace utils
		{
			namespace CPU
			{

				class CCPULock
				{
				private:
					struct DPC_CONTEXT
					{
						union
						{
							KIRQL OldIrql;
							void *Reserved;
						};
						KDPC Dpcs[1];  // This field is used as a variadic array
					};
				private:
					DPC_CONTEXT *dpc_ctx;
					LONG g_ExclpReleaseAllProcessors;
					LONG g_ExclpNumberOfLockedProcessors;
					ULONG g_CpuNumber;
					ULONG g_CurrentCpu;
				public:
					CCPULock();
					~CCPULock();
				public:
					void lock();
					void unlock();
				private:
					static VOID _cpu_lock(
						PKDPC Dpc,
						PVOID DeferredContext,
						PVOID SystemArgument1,
						PVOID SystemArgument2);
					void _lock();
				};
			}
		}
	}

}
