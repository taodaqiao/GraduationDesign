#ifndef _H_DEBUGGER_
#define _H_DEBUGGER_

#include <fltKernel.h>


extern "C" {
	namespace Driver {
		namespace DeBugger {

			//@struct 调试器结构
			typedef struct _save_handlentry {
				struct _save_handlentry* head;
				HANDLE dbgProcessId;
				PEPROCESS dbgProcessStruct;
				struct _save_handlentry* next;
			}_save_handlentry, *p_save_handlentry;


			//@init 初始化调试器链表
			p_save_handlentry init_debugger_list();

			//@insert 添加调试器对象
			p_save_handlentry insert_debugger_list(HANDLE dbgProcessId, PEPROCESS dbgProcessStruct, p_save_handlentry phead);

			//@query 查询调试器对象
			p_save_handlentry querylist(p_save_handlentry phead, HANDLE dbgProcessId, PEPROCESS dbgProcessStruct);

			//@删除调试器对象
			void deletelist(p_save_handlentry pclid);


			extern p_save_handlentry debugger_head;
		}
	}
}

#endif