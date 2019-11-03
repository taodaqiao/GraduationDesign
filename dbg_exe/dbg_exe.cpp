// dbg_exe.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "find_symbol.h"


HANDLE m_hDevice;

typedef struct _handle_Struct {
	HANDLE hProcess;
	SIZE_T address;
	UINT32 size;
}handle_Struct, *phandle_Struct;


typedef struct _write_Struct {
	UINT32 pid;
	SIZE_T address;
	UINT32 size;
}write_Struct, *pwrite_Struct;

int main() 
{
	DWORD nOutput = 0;
	//DWORD pid = 0;
	//std::cin >> pid;


	m_hDevice = CreateFile(L"\\\\.\\YJHDBG", GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);


	InitEnumSymbols();
	//DeviceIoControl(m_hDevice, IOCTL_INIT_HOOK_TABLE, &hook_addr_table, sizeof(hook_addr_table), NULL, 0, &nOutput, NULL);
	//DeviceIoControl(m_hDevice, IOCTL_INIT_TABLE, &init_table, sizeof(init_table), NULL, 0, &nOutput, NULL);

	//////32和64还要分开写
	////auto addr = GetProcAddress(LoadLibrary(L"ntdll.dll"), "DbgBreakPoint");
	////printf("%p", addr);

	//DWORD process_pid = 0;
	//std::cin >> process_pid;
	//DeviceIoControl(m_hDevice, IOCTL_DESTORY_PROTECT, &process_pid, sizeof(DWORD), NULL, 0, &nOutput, NULL);

	

	//std::cin >> process_pid;
	//write_Struct test_data;
	//test_data.pid = process_pid;
	//test_data.address = 0x75c142FFull;
	//test_data.size = 0x1ul;
	//DeviceIoControl(m_hDevice, IOCTL_Write, &test_data, sizeof(write_Struct), NULL, 0, &nOutput, NULL);



	system("pause");
	CloseHandle(m_hDevice);
	return 0;
}







