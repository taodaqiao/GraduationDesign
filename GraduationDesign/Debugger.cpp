#include "Debugger.h"


extern "C" {
	namespace Driver {
		namespace DeBugger {
			p_save_handlentry debugger_head;

			p_save_handlentry init_debugger_list() {
				ULONG i;
				p_save_handlentry phead = (p_save_handlentry)ExAllocatePool(NonPagedPool, sizeof(_save_handlentry));
				p_save_handlentry ptail = phead;
				ptail->next = NULL;
				p_save_handlentry pnew = (p_save_handlentry)ExAllocatePool(NonPagedPool, sizeof(_save_handlentry));
				pnew->dbgProcessId = 0;
				pnew->dbgProcessStruct = 0;
				pnew->head = NULL;
				ptail->next = pnew;
				pnew->next = NULL;
				ptail->head = NULL;
				return phead;
			}

			p_save_handlentry insert_debugger_list(HANDLE dbgProcessId,PEPROCESS dbgProcessStruct, p_save_handlentry phead)
			{
				p_save_handlentry p = phead->next;
				while (p != NULL)
				{
					if (p->next == NULL) {
						break;
					}
					p = p->next;
				}
				p_save_handlentry pnew = (p_save_handlentry)ExAllocatePool(NonPagedPool, sizeof(_save_handlentry));
				pnew->dbgProcessId = dbgProcessId;
				pnew->dbgProcessStruct = dbgProcessStruct;
				p->next = pnew;
				pnew->next = NULL;
				pnew->head = p;
				return pnew;
			}


			p_save_handlentry querylist(p_save_handlentry phead, HANDLE dbgProcessId, PEPROCESS dbgProcessStruct) {
				p_save_handlentry p = phead->next;
				while (p != NULL)
				{
					if (dbgProcessId != NULL)
					{
						if (p->dbgProcessId == dbgProcessId) 
						{
							return p;
						}
					}
					if (dbgProcessStruct != NULL)
					{
						if (p->dbgProcessStruct == dbgProcessStruct) 
						{
							return p;
						}

					}
					p = p->next;
				}
				return NULL;
			}


			void deletelist(p_save_handlentry pclid) {
				p_save_handlentry p, pp;
				if (pclid->head != NULL) {//ͷ��
					p = pclid->head;
					pp = pclid->next;
					if (pp == NULL) {//���ڵ�
						p->next = NULL;
						ExFreePool(pclid);

						return;
					}
					p->next = pp;//�������ڵ�
					pp->head = p;
					ExFreePool(pclid);
					return;
				}
			}

		}
	}
}