#ifndef _HOOK_FUNCTION_
#define _HOOK_FUNCTION_

#include <intrin.h>
#include <fltKernel.h>
#include <windef.h>

extern "C" {
	typedef struct _system_call_data {
		ULONG Index;
		PVOID NewFunction;
		PVOID OldFunction;
	}system_call_data, *p_system_call_data;


	NTSYSAPI
		PCCHAR
		NTAPI
		PsGetProcessImageFileName(
			IN PEPROCESS Process
		);

	extern system_call_data OpenProcess_hook;






	NTSTATUS NTAPI Fake_NtOpenProcess(
		OUT PHANDLE ProcessHandle,
		IN ACCESS_MASK DesiredAccess,
		IN POBJECT_ATTRIBUTES ObjectAttributes,
		IN PCLIENT_ID ClientId);




	using fnNtOpenProcess = NTSTATUS(NTAPI *)(
		__out PHANDLE ProcessHandle,
		__in ACCESS_MASK DesiredAccess,
		__in POBJECT_ATTRIBUTES ObjectAttributes,
		__in_opt PCLIENT_ID ClientId
		);
}


#endif