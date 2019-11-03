#include "CPU.h"
#include "YHypervisor/common.h"

namespace ddk
{
	namespace utils
	{
		namespace CPU
		{


			CCPULock::CCPULock()
			{
				dpc_ctx = nullptr;
				g_ExclpReleaseAllProcessors = 0;
				g_ExclpNumberOfLockedProcessors = 0;
				g_CpuNumber = 0;
				g_CurrentCpu = 0;
				const auto numberOfProcessors = KeQueryActiveProcessorCount(nullptr);
				auto context = reinterpret_cast<DPC_CONTEXT *>(ExAllocatePoolWithTag(NonPagedPool,sizeof(void *) + (numberOfProcessors * sizeof(KDPC)), kHyperPlatformCommonPoolTag));
				if (!context)
				{
					return;
				}
				dpc_ctx = context;
				const auto currentCpu = KeGetCurrentProcessorNumber();
				g_CpuNumber = numberOfProcessors;
				g_CurrentCpu = currentCpu;
			}



			CCPULock::~CCPULock()
			{
				if (!dpc_ctx)
					return;
				while (!InterlockedCompareExchange(&g_ExclpReleaseAllProcessors, 1, 1))
				{
					KeStallExecutionProcessor(10);
				}
				ExFreePoolWithTag(dpc_ctx, kHyperPlatformCommonPoolTag);
			}



			void CCPULock::lock()
			{
				NT_ASSERT(InterlockedAdd(&g_ExclpNumberOfLockedProcessors, 0) == 0);
				InterlockedAnd(&g_ExclpReleaseAllProcessors, 0);

				for (auto i = 0ul; i < g_CpuNumber; i++)
				{
					// Queue a lock DPC.
					if (i == g_CurrentCpu)
					{
						continue;
					}
					KeInitializeDpc(&dpc_ctx->Dpcs[i], CCPULock::_cpu_lock, this);
					KeSetTargetProcessorDpc(&dpc_ctx->Dpcs[i], static_cast<CCHAR>(i));
					KeInsertQueueDpc(&dpc_ctx->Dpcs[i], nullptr, nullptr);
				}
				const auto needToBeLocked = g_CpuNumber - 1;

				while (_InterlockedCompareExchange(&g_ExclpNumberOfLockedProcessors,
					needToBeLocked, needToBeLocked) !=
					static_cast<LONG>(needToBeLocked))
				{
					KeStallExecutionProcessor(10);
				}
			}


			void CCPULock::unlock()
			{
				InterlockedIncrement(&g_ExclpReleaseAllProcessors);

				// Wait until all other processors were unlocked.
				while (InterlockedCompareExchange(&g_ExclpNumberOfLockedProcessors, 0, 0))
				{
					KeStallExecutionProcessor(10);
				}
			}





			VOID CCPULock::_cpu_lock(
				PKDPC Dpc,
				PVOID DeferredContext,
				PVOID SystemArgument1,
				PVOID SystemArgument2)
			{
				auto p_this = reinterpret_cast<CCPULock*>(DeferredContext);
				__try
				{
					//DBG_PRINT("do callback\r\n");
					p_this->_lock();
				}
				__except (1)
				{
					DbgPrintEx(0,0,"callback failed\r\n");
				}
			}
			void CCPULock::_lock()
			{
				InterlockedIncrement(&g_ExclpNumberOfLockedProcessors);


				while (!InterlockedCompareExchange(&g_ExclpReleaseAllProcessors, 1, 1))
				{
					KeStallExecutionProcessor(10);
				}

				InterlockedDecrement(&g_ExclpNumberOfLockedProcessors);
			}
		}
	}
}