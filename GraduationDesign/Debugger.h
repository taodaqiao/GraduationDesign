#ifndef _H_DEBUGGER_
#define _H_DEBUGGER_

#include <fltKernel.h>


extern "C" {
	namespace Driver {
		namespace DeBugger {

			//@struct �������ṹ
			typedef struct _save_handlentry {
				struct _save_handlentry* head;
				HANDLE dbgProcessId;
				PEPROCESS dbgProcessStruct;
				struct _save_handlentry* next;
			}_save_handlentry, *p_save_handlentry;


			//@init ��ʼ������������
			p_save_handlentry init_debugger_list();

			//@insert ��ӵ���������
			p_save_handlentry insert_debugger_list(HANDLE dbgProcessId, PEPROCESS dbgProcessStruct, p_save_handlentry phead);

			//@query ��ѯ����������
			p_save_handlentry querylist(p_save_handlentry phead, HANDLE dbgProcessId, PEPROCESS dbgProcessStruct);

			//@ɾ������������
			void deletelist(p_save_handlentry pclid);


			extern p_save_handlentry debugger_head;
		}
	}
}

#endif