//#include "FindSSDT.h"    
//#include "Gdi.h"
#include "LinkDefine.h"
//#include "RemoveCallBack.h"
#include "kernel_hook.h"
#include "DisablePg.h"
#include "Debugger.h"
#include "debug_func.h"
#include "AntiAntiDebug.h"
#include "Memory.h"
#include "debug_thread.h"
#include "Process.h"

#include "SDTHook.h"

#include "YHypervisor/YHypervisor.h"
extern "C" {
	VOID DriverUnload(PDRIVER_OBJECT pDriverObj)
	{
		UNICODE_STRING strLink;
		//Driver::Process::ObProtectProcess(0);

		//if(Driver::KernelHook::LDE!=NULL)
		//	ExFreePool(Driver::KernelHook::LDE);

		//PsSetCreateProcessNotifyRoutine(Driver::Memory::get_pml4_entry, TRUE);

		//Driver::AntiAntiDebug::unload_AntiAntiDebug();

		//Driver::dis_pg::UnLoadDisablePatchGuard();

		UnLoadHyperVisor(pDriverObj);

		RtlInitUnicodeString(&strLink, LINK_NAME);
		IoDeleteSymbolicLink(&strLink);
		IoDeleteDevice(pDriverObj->DeviceObject);

		//EnableObType(*PsProcessType, TRUE);
		//EnableObType(*PsThreadType, TRUE);
	}

	NTSTATUS DispatchCreate(PDEVICE_OBJECT pDevObj, PIRP pIrp)
	{
		pIrp->IoStatus.Status = STATUS_SUCCESS;
		pIrp->IoStatus.Information = 0;
		IoCompleteRequest(pIrp, IO_NO_INCREMENT);
		return STATUS_SUCCESS;
	}

	NTSTATUS DispatchClose(PDEVICE_OBJECT pDevObj, PIRP pIrp)
	{
		pIrp->IoStatus.Status = STATUS_SUCCESS;
		pIrp->IoStatus.Information = 0;
		IoCompleteRequest(pIrp, IO_NO_INCREMENT);
		return STATUS_SUCCESS;
	}

	NTSTATUS DispatchIoctl(PDEVICE_OBJECT pDevObj, PIRP pIrp)
	{
		//using sdt_base = Driver::FindSSDT::PSYSTEM_SERVICE_TABLE;


		NTSTATUS status = STATUS_INVALID_DEVICE_REQUEST;
		PIO_STACK_LOCATION pIrpStack;
		ULONG uIoControlCode;
		PVOID pIoBuffer;
		ULONG uInSize;
		ULONG uOutSize;
		pIrpStack = IoGetCurrentIrpStackLocation(pIrp);
		uIoControlCode = pIrpStack->Parameters.DeviceIoControl.IoControlCode;
		pIoBuffer = pIrp->AssociatedIrp.SystemBuffer;
		uInSize = pIrpStack->Parameters.DeviceIoControl.InputBufferLength;
		uOutSize = pIrpStack->Parameters.DeviceIoControl.OutputBufferLength;
		switch (uIoControlCode)
		{
		case IOCTL_DESTORY_PROTECT:
		{
			UINT32 pid = 0;
			memcpy(&pid, pIoBuffer, sizeof(UINT32));
			//Driver::Dbg::get_object_handle(pid, Driver::Dbg::handle_process);
			PEPROCESS temp_data = NULL;
			if (NT_SUCCESS(PsLookupProcessByProcessId((HANDLE)pid, &temp_data))) {

				Driver::DeBugger::insert_debugger_list((HANDLE)pid, temp_data, Driver::DeBugger::debugger_head);
				//RemoveListEntry(temp_data + 0x188);
				Driver::AntiAntiDebug::destory_protect_start();

				//恢复页表
				if (Driver::Memory::dxf_pml4_entry!=0) {
					PHYSICAL_ADDRESS pml4 = { 0ull };
					pml4.QuadPart = Driver::Memory::dxf_pml4_entry;
					PVOID pml4_table_map_address = MmMapIoSpace(pml4, 0x1000, MmNonCached);
					memcpy(pml4_table_map_address, Driver::Memory::pml4_table, 0x1000);
					MmUnmapIoSpace(pml4_table_map_address, 0x1000);
				}
			}

			break;
		}
		case IOCTL_INIT_TABLE:
		{
			memcpy(&Driver::Dbg::init_table_variable, pIoBuffer, sizeof(Driver::Dbg::init_variable_table));
			Driver::Dbg::init_func_obj();
			Driver::Dbg::init_hook();
			break;
		}
		case IOCTL_INIT_HOOK_TABLE:
		{
			PVOID p_temp = &Driver::Dbg::init_table_hook;
			for (int i = 0; i < sizeof(Driver::Dbg::init_hook_table); i += sizeof(Driver::kernel_hook::kernel_hook_struct)) {
				memcpy(p_temp, pIoBuffer, sizeof(PVOID));
				pIoBuffer = (PUCHAR)pIoBuffer + 8;
				//DbgPrint("Test: %llx", *(ULONG64*)p_temp);
				p_temp = (PUCHAR)p_temp + sizeof(Driver::kernel_hook::kernel_hook_struct);
			}
			break;
		}
		case IOCTL_PASSPG:
		{
			memcpy(&KiRetireDpcList, pIoBuffer, sizeof(SIZE_T));

			Driver::dis_pg::InitDisablePatchGuard();

			break;
		}

		//case IOCTL_UNPASSPG:
		//{
		//	Driver::dis_pg::UnLoadDisablePatchGuard();
		//	break;
		//}

		case IOCTL_HARD_BREAK_THREAD:
		{
			Driver::thread_list::p_break_point head = Driver::thread_list::break_point_head;
			while (head->next) {
				head = head->next;
				memcpy(pIoBuffer, &head->tid, sizeof(UINT32));
				pIoBuffer = (PUCHAR)pIoBuffer + 4;
			}
			break;
		}

		case IOCTL_HARD_THREAD_COUNT:
		{
			UINT32 thread_count = 0;
			Driver::thread_list::p_break_point head = Driver::thread_list::break_point_head;
			while (head->next) {
				head = head->next;
				thread_count++;
			}
			memcpy(pIoBuffer, &thread_count, sizeof(UINT32));
			break;
		}

		case IOCTL_BREAK_ADDRESS:
		{
			memcpy(&Driver::Dbg::exception_first, pIoBuffer, sizeof(UINT64));
			DbgPrintEx(0, 0, "debug: exception_first: %llx", Driver::Dbg::exception_first);
			break;
		}

		case IOCTL_Write:
		{
			UINT32 pid = 0;
			memcpy(&pid, pIoBuffer, sizeof(UINT32));
			PEPROCESS temp_data = NULL;
			if (NT_SUCCESS(PsLookupProcessByProcessId((HANDLE)pid, &temp_data))) {
				Driver::Memory::RWProcess = temp_data;
				pIoBuffer = (PUCHAR)pIoBuffer + 8;
				Driver::Memory::WStruct w_data = { 0 };
				memcpy(&w_data, pIoBuffer, sizeof(Driver::Memory::WStruct));
				UCHAR test_data = 0xcc;
				Driver::Memory::ForceCopyUserMemory((PVOID)w_data.address, &test_data, w_data.size);
			}
			break;
		}

		}
		status = STATUS_SUCCESS;
		if (status == STATUS_SUCCESS)
			pIrp->IoStatus.Information = uOutSize;
		else
			pIrp->IoStatus.Information = 0;
		pIrp->IoStatus.Status = status;
		IoCompleteRequest(pIrp, IO_NO_INCREMENT);
		return status;
	}

	NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObj, PUNICODE_STRING pRegistryString)
	{
		NTSTATUS status = STATUS_SUCCESS;
		UNICODE_STRING ustrLinkName;
		UNICODE_STRING ustrDevName;
		PDEVICE_OBJECT pDevObj;
		pDriverObj->MajorFunction[IRP_MJ_CREATE] = DispatchCreate;
		pDriverObj->MajorFunction[IRP_MJ_CLOSE] = DispatchClose;
		pDriverObj->MajorFunction[IRP_MJ_DEVICE_CONTROL] = DispatchIoctl;
		pDriverObj->DriverUnload = DriverUnload;
		RtlInitUnicodeString(&ustrDevName, DEVICE_NAME);
		status = IoCreateDevice(pDriverObj, 0, &ustrDevName, FILE_DEVICE_UNKNOWN, 0, FALSE, &pDevObj);
		if (!NT_SUCCESS(status))
			return status;
		RtlInitUnicodeString(&ustrLinkName, LINK_NAME);
		status = IoCreateSymbolicLink(&ustrLinkName, &ustrDevName);
		if (!NT_SUCCESS(status))
		{
			IoDeleteDevice(pDevObj);
			return status;
		}

		LoadHyperVisor(pDriverObj, pRegistryString);
		//@init Led
		Driver::kernel_hook::LDE_init();

		//@init 记录调试器进程的链表
		//Driver::DeBugger::debugger_head = Driver::DeBugger::init_debugger_list();

		//@init 记录不能下硬断的线程
		//Driver::thread_list::init_thread_list();

		//记录进程回调
		//PsSetCreateProcessNotifyRoutine(Driver::Memory::get_pml4_entry, FALSE);

		//开启回调
		//Driver::Process::BypassCheckSign(pDriverObj);
		//Driver::Process::ObProtectProcess(1);

		//失效回调
		//EnableObType(*PsProcessType, FALSE);
		//EnableObType(*PsThreadType, FALSE);

		return STATUS_SUCCESS;
	}


}