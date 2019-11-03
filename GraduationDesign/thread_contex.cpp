
#include "thread_contex.h"




extern "C" {
	namespace Driver {
		namespace thread_contex {


			//dr¼Ä´æÆ÷Á´±í
			LIST_ENTRY DrRwList;
			//dr¼Ä´æÆ÷Á´±íËø
			KSPIN_LOCK g_lock;


			PPROCESS_List Dr_AddProcessToList(PEPROCESS Process) {
				PPROCESS_List TempItem;
				TempItem = (PPROCESS_List)ExAllocatePoolWithTag(NonPagedPool, sizeof(PROCESS_List), 'drrp');
				if (!TempItem)
				{
					return FALSE;
				}

				RtlZeroMemory(TempItem, sizeof(PROCESS_List));
				TempItem->Process = Process;
				InitializeListHead(&TempItem->ThreadList);
				KeInitializeSpinLock(&TempItem->loacl_lock);
				ExInterlockedInsertTailList(&DrRwList, &TempItem->PorcessList, &g_lock);
				if (TempItem != NULL)
				{

					return TempItem;
				}

				return FALSE;
			}


			PTHREAD_dr_List Dr_AddThreadStructToList(PPROCESS_List DrRwListItem, PTHREAD_dr_List Struct) {

				PTHREAD_dr_List TempItem;
				TempItem = (PTHREAD_dr_List)ExAllocatePoolWithTag(NonPagedPool, sizeof(THREAD_dr_List), 'drrt');
				if (!TempItem)
				{
					return FALSE;
				}
				RtlZeroMemory(TempItem, sizeof(THREAD_dr_List));


				TempItem->Dr0 = Struct->Dr0;
				TempItem->Dr1 = Struct->Dr1;
				TempItem->Dr2 = Struct->Dr2;
				TempItem->Dr3 = Struct->Dr3;
				TempItem->Dr6 = Struct->Dr6;
				TempItem->Dr7 = Struct->Dr7;
				TempItem->eflag = Struct->eflag;

				TempItem->Thread = Struct->Thread;

				ExInterlockedInsertTailList(&DrRwListItem->ThreadList, &TempItem->TList, &DrRwListItem->loacl_lock);
				if (TempItem != NULL)
				{

					return TempItem;
				}
			}

			PTHREAD_dr_List Dr_FindThreadContextByThreadList(PPROCESS_List DrRwListItem, PETHREAD Thread) {
				KIRQL OldIrql;
				PLIST_ENTRY Entry;
				THREAD_dr_List *TempItem = NULL;
				THREAD_dr_List* DFind = NULL;
				KeAcquireSpinLock(&DrRwListItem->loacl_lock, &OldIrql);
				Entry = DrRwListItem->ThreadList.Flink;
				while (Entry != &DrRwListItem->ThreadList)
				{
					TempItem = CONTAINING_RECORD(Entry, THREAD_dr_List, TList);

					Entry = Entry->Flink;
					if (TempItem->Thread == Thread)
					{
						DFind = TempItem;
						break;
					}
				}

				KeReleaseSpinLock(&DrRwListItem->loacl_lock, OldIrql);

				return DFind;

			}



			PPROCESS_List Dr_FindProcessList(PEPROCESS Process) {
				KIRQL OldIrql;
				PLIST_ENTRY Entry;
				PROCESS_List *TempItem = NULL;
				PROCESS_List* DFind = NULL;
				KeAcquireSpinLock(&g_lock, &OldIrql);
				Entry = DrRwList.Flink;
				while (Entry != &DrRwList)
				{
					TempItem = CONTAINING_RECORD(Entry, PROCESS_List, PorcessList);

					Entry = Entry->Flink;
					if (TempItem->Process == Process)
					{
						DFind = TempItem;
						break;
					}
				}
				KeReleaseSpinLock(&g_lock, OldIrql);
				return DFind;
			}
		}
	}
}








