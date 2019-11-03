#ifndef _H_DEBUG_BREAK_POINTER_H
#define _H_DEBUG_BREAK_POINTER_H
#endif



#include <fltKernel.h>

extern "C" {
	namespace Driver {
		namespace thread_list {
			
			//�ϵ�ṹ
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




//��Ҫ�ǿ�dr7�����
//�ڴ���ʶϵ����޸�Ϊnoaccess  �ڴ�д�ϵ����޸�ΪRE



/************************************************************************
SetHardWareBP:
�����߳�Ӳ���ϵ�
hThread:  �߳̾��
dwAddr:    �ϵ��ַ
dwDrIndex:  Ӳ���Ĵ���(0~3)
nType:    �ϵ�����(0:ִ��,1:��ȡ,2:д��)
nLen:    ��д�ϵ����ݳ���(1,2,4)
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
//		//���ϵ��ַ���ƽ����ӦDr�Ĵ���(�ο�CONTEXT�ṹ)
//		memcpy(((BYTE *)&context) + 4 + dwDrIndex * 4, &dwAddr, 4);
//
//		//����ʹ���ĸ��Ĵ���
//		dwDrFlags |= (DWORD)0x1 << (2 * dwDrIndex);
//
//		//��OD��д�ϵ�ʱ �����λ��,ִ��û��(��λҲ����-_-)
//		dwDrFlags |= 0x100;
//
//
//		//�Ƚ���Ӧ�Ĵ�����Ӧ4������λ����(�Ȼ�,�����,���������÷�����) =.= ���ߵ�Сѧ��
//		dwDrFlags |= (DWORD)0xF << (16 + 4 * dwDrIndex);
//		dwDrFlags ^= (DWORD)0xF << (16 + 4 * dwDrIndex);
//
//
//		//���öϵ�����,ִ��:00 ��ȡ:11 д��:01
//		//(��֪�ι�,����ʱ���ֲ�����11����01,��д����ʱ���������)
//		if (nType == 1)
//			dwDrFlags |= (DWORD)0x3 << (16 + 4 * dwDrIndex);  //��ȡ
//		else if (nType == 2)
//			dwDrFlags |= (DWORD)0x1 << (16 + 4 * dwDrIndex);  //д��
//		  //else if(nType==0) 
//			//dwDrFlags=dwDrFlags            //ִ��
//
//
//		  //���ö�д�ϵ�ʱ���ݳ���
//		if (nType != 0)
//		{
//			if (nLen == 2 && dwAddr % 2 == 0)
//				dwDrFlags |= (DWORD)0x1 << (18 + 4 * dwDrIndex);  //2�ֽ�
//			else if (nLen == 4 && dwAddr % 4 == 0)
//				dwDrFlags |= (DWORD)0x3 << (18 + 4 * dwDrIndex);  //4�ֽ�
//		}
//
//		context.Dr7 = dwDrFlags;
//		if (::SetThreadContext(hThread, &context)) bResult = TRUE;
//	}
//	return bResult;
//}
//
//
////�쳣����
////ֱ�Ӵӹ����п�������
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
////Hook�����쳣����,���������쳣ʱ,��ring0ת��ring3ʱ���õĵ�һ������:KiUserExceptionDispatcher
//BOOL CSysHook::HookSystemSEH()
//{
//	BOOL bResult = FALSE;
//	BYTE *pAddr = (BYTE *)::GetProcAddress(::GetModuleHandleA("ntdll"), "KiUserExceptionDispatcher");
//	if (pAddr)
//	{
//		while (*pAddr != 0xE8)pAddr++;  //XP~Win7����,Win8����Ե�ü�
//		m_fnRtlDispatchException = (pfnRtlDispatchException)((*(DWORD *)(pAddr + 1)) + 5 + (DWORD)pAddr);  //�õ�ԭ������ַ
//		DWORD dwNewAddr = (DWORD)_RtlDispatchException - (DWORD)pAddr - 5;                //�����µ�ַ
//		CMemory::WriteMemory((DWORD)pAddr + 1, (BYTE *)&dwNewAddr, 4);  //���д�ڴ���Լ������
//		bResult = TRUE;
//	}
//	return bResult;
//}
//
////�쳣������
//BOOL RtlDispatchException(PEXCEPTION_RECORD pExcptRec, CONTEXT * pContext)
//{
//	����TRUE, ����쳣���Ѿ��������, �������г���
//		����FALSE, ����쳣�����ҵ�, �ұ��˴���ȥ
//}