#ifndef _H_DEBUG_BREAK_POINTER_H
#define _H_DEBUG_BREAK_POINTER_H
#endif



#include <fltKernel.h>

extern "C" {
	namespace Driver {
		namespace thread_list {
			
			//断点结构
			typedef struct _break_point {
				UINT32 tid;
				struct _break_point* next;
			}break_point,*p_break_point;

			void init_thread_list();


			void insert_thread_list(UINT32 tid);


			void delete_thread_list(UINT32 tid);


			bool find_thread_list(UINT32 tid);

			extern p_break_point break_point_head;
		}
	}
}




//主要是看dr7里面的
//内存访问断点是修改为noaccess  内存写断点是修改为RE



/************************************************************************
SetHardWareBP:
设置线程硬件断点
hThread:  线程句柄
dwAddr:    断点地址
dwDrIndex:  硬件寄存器(0~3)
nType:    断点类型(0:执行,1:读取,2:写入)
nLen:    读写断点数据长度(1,2,4)
/************************************************************************/

//BOOL SetHardWareBP(HANDLE hThread, DWORD dwAddr, DWORD dwDrIndex = 0, UINT nType = 0, UINT nLen = 1)
//{
//	BOOL bResult = FALSE;
//
//	CONTEXT context = { 0 };
//	context.ContextFlags = CONTEXT_DEBUG_REGISTERS;
//	if (::GetThreadContext(hThread, &context))
//	{
//		DWORD dwDrFlags = context.Dr7;
//
//
//		//将断点地址复制进入对应Dr寄存器(参考CONTEXT结构)
//		memcpy(((BYTE *)&context) + 4 + dwDrIndex * 4, &dwAddr, 4);
//
//		//决定使用哪个寄存器
//		dwDrFlags |= (DWORD)0x1 << (2 * dwDrIndex);
//
//		//见OD读写断点时 这个置位了,执行没有(置位也正常-_-)
//		dwDrFlags |= 0x100;
//
//
//		//先将对应寄存器对应4个控制位清零(先或,再异或,还有其它好方法吗) =.= 悲催的小学生
//		dwDrFlags |= (DWORD)0xF << (16 + 4 * dwDrIndex);
//		dwDrFlags ^= (DWORD)0xF << (16 + 4 * dwDrIndex);
//
//
//		//设置断点类型,执行:00 读取:11 写入:01
//		//(不知何故,测试时发现不论是11还是01,读写数据时均会断下来)
//		if (nType == 1)
//			dwDrFlags |= (DWORD)0x3 << (16 + 4 * dwDrIndex);  //读取
//		else if (nType == 2)
//			dwDrFlags |= (DWORD)0x1 << (16 + 4 * dwDrIndex);  //写入
//		  //else if(nType==0) 
//			//dwDrFlags=dwDrFlags            //执行
//
//
//		  //设置读写断点时数据长度
//		if (nType != 0)
//		{
//			if (nLen == 2 && dwAddr % 2 == 0)
//				dwDrFlags |= (DWORD)0x1 << (18 + 4 * dwDrIndex);  //2字节
//			else if (nLen == 4 && dwAddr % 4 == 0)
//				dwDrFlags |= (DWORD)0x3 << (18 + 4 * dwDrIndex);  //4字节
//		}
//
//		context.Dr7 = dwDrFlags;
//		if (::SetThreadContext(hThread, &context)) bResult = TRUE;
//	}
//	return bResult;
//}
//
//
////异常处理
////直接从工程中拷出来的
//typedef ULONG(WINAPI *pfnRtlDispatchException)(PEXCEPTION_RECORD pExcptRec, CONTEXT * pContext);
//static pfnRtlDispatchException m_fnRtlDispatchException = NULL;
//
//BOOL RtlDispatchException(PEXCEPTION_RECORD pExcptRec, CONTEXT * pContext);
//
//ULONG WINAPI CSysHook::_RtlDispatchException(PEXCEPTION_RECORD pExcptRec, CONTEXT * pContext)
//{
//	if (RtlDispatchException(pExcptRec, pContext)) return 1;
//	return m_fnRtlDispatchException(pExcptRec, pContext);
//}
//
////Hook程序异常处理,当程序发生异常时,由ring0转回ring3时调用的第一个函数:KiUserExceptionDispatcher
//BOOL CSysHook::HookSystemSEH()
//{
//	BOOL bResult = FALSE;
//	BYTE *pAddr = (BYTE *)::GetProcAddress(::GetModuleHandleA("ntdll"), "KiUserExceptionDispatcher");
//	if (pAddr)
//	{
//		while (*pAddr != 0xE8)pAddr++;  //XP~Win7正常,Win8尚无缘得见
//		m_fnRtlDispatchException = (pfnRtlDispatchException)((*(DWORD *)(pAddr + 1)) + 5 + (DWORD)pAddr);  //得到原函数地址
//		DWORD dwNewAddr = (DWORD)_RtlDispatchException - (DWORD)pAddr - 5;                //计算新地址
//		CMemory::WriteMemory((DWORD)pAddr + 1, (BYTE *)&dwNewAddr, 4);  //这个写内存的自己改造吧
//		bResult = TRUE;
//	}
//	return bResult;
//}
//
////异常处理函数
//BOOL RtlDispatchException(PEXCEPTION_RECORD pExcptRec, CONTEXT * pContext)
//{
//	返回TRUE, 这个异常我已经处理好了, 继续运行程序
//		返回FALSE, 这个异常不是我的, 找别人处理去
//}