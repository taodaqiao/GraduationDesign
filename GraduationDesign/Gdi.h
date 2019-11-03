#ifndef GDI_H
#define GDI_H

#include <fltKernel.h>
#include <windef.h>

#include "Memory.h"
#include "Process.h"
#include "FindSSDT.h"



extern "C" {
	namespace Driver {
		namespace ShadowFunc {

			extern PEPROCESS WinProcess;

			//获取最前窗体
			HWND GetForegroundWindow();
			typedef HWND(APIENTRY *pNtUserGetForegroundWindow)();

			//获取dc设备
			HDC GetDC(HWND hWnd);
			typedef HDC(APIENTRY *pNtUserGetDC)(HWND hWnd);



			//释放dc设备
			BOOL ReleaseDC(HWND hWnd, HDC hdc);
			typedef DWORD_PTR(APIENTRY *pNtUserCallOneParam)(DWORD_PTR Param, DWORD Routine);





			//寻找窗口
			HWND FindWindowW(LPCWSTR lpClassName, LPCWSTR lpWindowName);
			//ascil结构体 ANSI_STRING
			typedef HWND(APIENTRY *pNtUserFindWindowEx)(
				IN HWND hwndParent,
				IN HWND hwndChild,
				IN PUNICODE_STRING pstrClassName OPTIONAL,
				IN PUNICODE_STRING pstrWindowName OPTIONAL,
				IN DWORD dwType
				);


			//绘字
			BOOL TextOutW(
				HDC hdc,
				INT x,
				INT y,
				LPCWSTR lpString,
				INT size
			);
			typedef BOOL(APIENTRY *pNtGdiExtTextOutW)(
				HDC hDC,
				INT XStart,
				INT YStart,
				UINT fuOptions,
				LPRECT UnsafeRect,
				LPWSTR UnsafeString,
				INT Count,
				LPINT UnsafeDx,
				DWORD dwCodePage
				);


			//画线
			BOOL Polyline(_In_ HDC hdc, _In_reads_(cpt) CONST POINT * apt, _In_ DWORD cpt);

			typedef ULONG_PTR(APIENTRY *pNtGdiPolyPolyDraw)(
				_In_ HDC hdc,
				_In_ PPOINT ppt,
				_In_reads_(ccpt) PULONG pcpt,
				_In_ ULONG ccpt,
				_In_ INT iFunc
				);
		}
	}
}

#endif
