#include "find_symbol.h"

#include <tchar.h>
#include <DbgHelp.h>
#pragma comment(lib,"dbghelp.lib")


//#define V2STRING(value) (#value)

init_variable_table init_table;

init_hook_table hook_addr_table;

//std::map<std::string, SIZE_T> hook_addr_table =
//{
//	{"NtCreateDebugObject",0},
//	{"NtWaitForDebugEvent",0},
//	{"NtDebugContinue",0},
//	{"NtDebugActiveProcess",0},
//	{"NtRemoveProcessDebug",0},
//	{"DbgkForwardException",0},
//	{"DbgkCopyProcessDebugPort",0},
//	{"DbgkOpenProcessDebugPort",0},
//	{"DbgkpQueueMessage",0},
//	{"ObpCallPreOperationCallbacks",0},
//	{"RtlpCopyLegacyContextX86",0},
//	{"NtReadVirtualMemory",0},
//	{"NtWriteVirtualMemory",0},
//	{"NtQueryInformationThread",0},
//	{"PsLookupProcessByProcessId",0}
//};






ULONG64 EnumKM(char *HighlightDrvName)
{
	ULONG NeedSize, i, ModuleCount, HLed = 0, BufferSize = 0x5000;
	PVOID pBuffer = NULL;
	PCHAR pDrvName = NULL;
	NTSTATUS Result;
	ULONG64 address;
	PSYSTEM_MODULE_INFORMATION pSystemModuleInformation;
	ZWQUERYSYSTEMINFORMATION ZwQuerySystemInformation = (ZWQUERYSYSTEMINFORMATION)GetProcAddress(LoadLibraryW(L"ntdll.dll"), "ZwQuerySystemInformation");
	do
	{
		//分配内存
		pBuffer = malloc(BufferSize);
		if (pBuffer == NULL)
			return 0;
		//查询模块信息
		Result = ZwQuerySystemInformation(11, pBuffer, BufferSize, &NeedSize);
		if (Result == 0xC0000004L)
		{
			free(pBuffer);
			BufferSize *= 2;
		}
		else if (Result < 0)
		{
			//查询失败则退出
			free(pBuffer);
			return 0;
		}
	} while (Result == 0xC0000004L);
	pSystemModuleInformation = (PSYSTEM_MODULE_INFORMATION)pBuffer;
	//获得模块的总数量
	ModuleCount = pSystemModuleInformation->Count;
	//遍历所有的模块
	for (i = 0; i < ModuleCount; i++)
	{
		if ((ULONG64)(pSystemModuleInformation->Module[i].Base) > (ULONG64)0x8000000000000000)
		{
			pDrvName = pSystemModuleInformation->Module[i].ImageName + pSystemModuleInformation->Module[i].ModuleNameOffset;

			if (_stricmp(pDrvName, HighlightDrvName) == 0)
			{
				address = (ULONG64)pSystemModuleInformation->Module[i].Base;

				HLed = 1;
				break;
			}

		}
	}
	if (HLed == 0)
		return 0;
	free(pBuffer);
	return address;
}

BOOL CALLBACK EnumSymCallBack(PSYMBOL_INFO pSymInfo, ULONG SymbolSize, PVOID UserContext)
{
	if (strcmp((pSymInfo->Name), "KiRetireDpcList") == 0)
	{
		//auto m_hDevice = CreateFile(L"\\\\.\\lf9WAQOjp8", GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		DWORD nOutput = 0;
		DeviceIoControl(m_hDevice, IOCTL_PASSPG, &(pSymInfo->Address), 0x8, NULL, 0, &nOutput, NULL);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if(!strcmp((pSymInfo->Name), "ObTypeIndexTable")) 
	{
		init_table.ObTypeIndexTable = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "DbgkDebugObjectType")) {
		init_table.DbgkDebugObjectType = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "PsResumeThread")) {
		init_table.PsResumeThread = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "ObDuplicateObject")) {
		init_table.ObDuplicateObject = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "PsGetNextProcessThread")) {
		init_table.PsGetNextProcessThread = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "DbgkpPostFakeThreadMessages")) {
		init_table.DbgkpPostFakeThreadMessages = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "DbgkpPostModuleMessages")) {
		init_table.DbgkpPostModuleMessages = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "DbgkpWakeTarget")) {
		init_table.DbgkpWakeTarget = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "KeFreezeAllThreads")) {
		init_table.KeFreezeAllThreads = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "KeThawAllThreads")) {
		init_table.KeThawAllThreads = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "NtCreateDebugObject")) {
		hook_addr_table.NtCreateDebugObject = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "NtWaitForDebugEvent")) {
		hook_addr_table.NtWaitForDebugEvent = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "NtDebugContinue")) {
		hook_addr_table.NtDebugContinue = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "NtDebugActiveProcess")) {
		hook_addr_table.NtDebugActiveProcess = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "NtRemoveProcessDebug")) {
		hook_addr_table.NtRemoveProcessDebug = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "DbgkForwardException")) {
		hook_addr_table.DbgkForwardException = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "DbgkCopyProcessDebugPort")) {
		hook_addr_table.DbgkCopyProcessDebugPort = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "DbgkOpenProcessDebugPort")) {
		hook_addr_table.DbgkOpenProcessDebugPort = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "DbgkpQueueMessage")) {
		hook_addr_table.DbgkpQueueMessage = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "RtlpCopyLegacyContextX86")) {
		hook_addr_table.RtlpCopyLegacyContextX86 = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "ObpCallPreOperationCallbacks")) {
		hook_addr_table.ObpCallPreOperationCallbacks = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "SwapContext")) {
		hook_addr_table.SwapContext = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "SwapContext_PatchXRstor")) {
		init_table.SwapContext_PatchXRstor = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "NtResumeThread")) {
		hook_addr_table.NtResumeThread = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	else if (!strcmp((pSymInfo->Name), "KiDispatchException")) {
		hook_addr_table.KiDispatchException = reinterpret_cast<PVOID>(pSymInfo->Address);
		printf("find function: %s :%p\n", pSymInfo->Name, pSymInfo->Address);
	}
	return TRUE;
}




bool InitEnumSymbols() {

	HANDLE hProcess;
	DWORD64 BaseOfDll;
	PIMAGEHLP_SYMBOL pSymbol = NULL;
	DWORD Options = SymGetOptions();
	Options = Options | SYMOPT_DEBUG;
	SymSetOptions(Options);
	hProcess = GetCurrentProcess();
	BOOL bRet = SymInitialize(hProcess, 0, FALSE);
	if (!bRet)
	{
		printf("SymInitialize error ...\n");
		return false;
	}
	char SymbolPath[256] = "srv*C:\\symbols*http://msdl.microsoft.com/download/symbols";
	//GetCurrentDirectoryA(sizeof(SymbolPath), SymbolPath);
	//strcat(SymbolPath, "\\symbols");
	SymSetSearchPath(hProcess, SymbolPath);
	char FileName[256];
	GetSystemDirectoryA(FileName, sizeof(FileName));
	strcat(FileName, "\\ntoskrnl.exe");
	printf("%s\n", FileName);
	HANDLE hFile = CreateFileA(FileName, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
	DWORD dwfilesize = GetFileSize(hFile, NULL);
	auto ntoskrnl_base = EnumKM((char*)"ntoskrnl.exe");
	BaseOfDll = SymLoadModule64(hProcess, NULL, FileName, NULL, ntoskrnl_base, dwfilesize);
	if (BaseOfDll == 0)
	{
		DWORD nErr = GetLastError();
		printf("SymLoadModule64 error number %d \n", nErr);
		return false;
	}
	SymEnumSymbols(hProcess, BaseOfDll, 0, EnumSymCallBack, 0);
	SymUnloadModule64(hProcess, BaseOfDll);
	SymCleanup(hProcess);
	return true;
}



//另外一个版本，可能要等一会加载符号
//#include <Windows.h>
//#include <stdio.h>
//#include <string>
//#include <psapi.h>
//
//#include "dbghelp.h"
//#pragma comment(lib,"dbghelp.lib")
//
//BOOL CALLBACK EnumSymCallBack(PSYMBOL_INFO pSymInfo, ULONG SymbolSize, PVOID UserContext)
//{
//	if (strcmp((pSymInfo->Name), "PspCreateProcessNotifyRoutine") == 0 ||
//		strcmp((pSymInfo->Name), "PspLoadImageNotifyRoutine") == 0 ||
//		strcmp((pSymInfo->Name), "PspCreateThreadNotifyRoutine") == 0)
//	{
//		printf("%-30s :%p\n", pSymInfo->Name, pSymInfo->Address);
//	}
//	return TRUE;
//}
//
//int main()
//{
//	std::string strMod;
//	PVOID dwBaseAddr = 0;
//	PVOID pDrvAddr[128 * 8];
//	DWORD dwcbNeeded = 0;
//	if (EnumDeviceDrivers(pDrvAddr, sizeof(pDrvAddr), &dwcbNeeded))
//	{
//		for (unsigned int i = 0; i < (dwcbNeeded / 8); i++)
//		{
//			LPSTR chDrvName[MAX_PATH];
//			GetDeviceDriverBaseNameA(pDrvAddr[i], (LPSTR)chDrvName, MAX_PATH);
//			dwBaseAddr = pDrvAddr[i];
//			strMod = std::string((char*)chDrvName);
//			printf("%-20s 0x%p\n", strMod.c_str(), dwBaseAddr);
//			break;
//		}
//	}
//	SymSetOptions(SYMOPT_DEFERRED_LOADS);
//	HANDLE hProcess = GetCurrentProcess();
//	SymInitialize(hProcess, 0, FALSE);
//	std::string strSymbolPath = "srv*C:\\Windows\\symbols*http://msdl.microsoft.com/download/symbols";
//	std::string strSystemPath = "C:\\Windows\\System32\\" + strMod;
//	SymSetSearchPath(hProcess, strSymbolPath.c_str());
//	HANDLE hSystemFile = CreateFileA(strSystemPath.c_str(), GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE,
//		NULL, OPEN_EXISTING, 0, NULL);
//	DWORD dwFileSize = GetFileSize(hSystemFile, NULL);
//	DWORD64  dwBase = SymLoadModule64(hProcess, NULL, strSystemPath.c_str(), NULL, (DWORD64)dwBaseAddr, dwFileSize);
//	printf("正在枚举符号...\n");
//	SymEnumSymbols(hProcess, dwBase, 0, EnumSymCallBack, 0);
//	printf("枚举符号结束...\n");
//	SymUnloadModule64(hProcess, dwBase);
//	SymCleanup(hProcess);
//	system("pause");
//	return 0;
//}