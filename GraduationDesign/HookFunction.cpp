#include "HookFunction.h"

#define MAGIC_HANDLE 0x80070000;


extern "C" {
	BOOL IsSystemProcessCall()
	{
		CHAR ProcessName[16] = { 0 };
		PEPROCESS CurProcess;
		PCHAR pStrProcName;

		CurProcess = PsGetCurrentProcess();
		pStrProcName = PsGetProcessImageFileName(CurProcess);
		strcpy_s(ProcessName, pStrProcName);

		if (_stricmp(ProcessName, "explorer.exe") == 0)
		{
			return TRUE;
		}
		if (_stricmp(ProcessName, "csrss.exe") == 0)
		{
			return TRUE;
		}
		if (_stricmp(ProcessName, "svchost.exe") == 0)
		{
			return TRUE;
		}
		if (_stricmp(ProcessName, "taskmgr.exe") == 0)
		{
			return TRUE;
		}
		if (_stricmp(ProcessName, "dllhost.exe") == 0)
		{
			return TRUE;
		}
		if (_stricmp(ProcessName, "System") == 0)
		{
			return TRUE;
		}

		return FALSE;
	}

	system_call_data OpenProcess_hook = { 35, Fake_NtOpenProcess,nullptr };



	NTSTATUS NTAPI Fake_NtOpenProcess(
		OUT PHANDLE ProcessHandle,
		IN ACCESS_MASK DesiredAccess,
		IN POBJECT_ATTRIBUTES ObjectAttributes,
		IN PCLIENT_ID ClientId) {

		const auto OrgNtOpenProcess = (fnNtOpenProcess)OpenProcess_hook.OldFunction;
		auto ns = OrgNtOpenProcess(ProcessHandle, DesiredAccess, ObjectAttributes, ClientId);
		//检查当前进程是系统进程
		if (NT_SUCCESS(ns) &&
			(ExGetPreviousMode() == UserMode) &&
			!IsSystemProcessCall()
			)
		{
			PEPROCESS process_info = nullptr;
			ns = ObReferenceObjectByHandle(*ProcessHandle,
				0x0800,
				*PsProcessType,
				KernelMode,
				(PVOID *)&process_info,
				NULL);
			

			//检查目标进程是我们进程
			if (NT_SUCCESS(ns)) {
				PCHAR pStrProcName = PsGetProcessImageFileName(process_info);

				DbgPrintEx(0, 0, "current process: %s\n", pStrProcName);

				if (!_stricmp(pStrProcName, "my_test.exe")) {
					return MAGIC_HANDLE;
				}
			}

		}
		return ns;
	}
}
