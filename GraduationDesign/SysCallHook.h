#ifndef _SYS_CALL
#define _SYS_CALL


#include <intrin.h>
#include <fltKernel.h>
#include <windef.h>


#include "YHypervisor/util.h"
#include "Cpu.h"

extern "C" {
	namespace ddk
	{
		namespace vmx
		{
			namespace vmfunction
			{
				class CSysCallHook
				{
				private:
					typedef struct _SERVICE_DESCRIPTOR_TABLE {
						PLONG32 ServiceTable;
						PULONG  CounterTable;
						ULONG   TableSize;
						PUCHAR  ArgumentTable;
					} SERVICE_DESCRIPTOR_TABLE, *PSERVICE_DESCRIPTOR_TABLE;

					typedef struct _SERVICE_DESCRIPTOR_TABLE_SHADOW {
						PLONG32 SsdtServiceTable;
						PULONG  SsdtCounterTable;
						ULONG	SsdtTableSize;
						PUCHAR  SsdtArgumentTable;

						PLONG32 ServiceTable;
						PULONG  CounterTable;
						ULONG	TableSize;
						PUCHAR  ArgumentTable;
					} SERVICE_DESCRIPTOR_TABLE_SHADOW, *PSERVICE_DESCRIPTOR_TABLE_SHADOW;

				private:
					bool _isinstallhook = false;
					bool _isvmcall = false;
					ULONG64 _oldsyscall = UtilReadMsr64(Msr::kIa32Lstar);
					ULONG64 _newsyscall = 0;
				private:
					//mysyscall
					PSERVICE_DESCRIPTOR_TABLE _pmyssdt = nullptr;
					PSERVICE_DESCRIPTOR_TABLE_SHADOW _pmysssdt = nullptr;
					PSERVICE_DESCRIPTOR_TABLE _pmyfilter = nullptr;

					//�����Լ�����ת�� ����ȫ��jmp qword[xxx]  ���������Լ���һЩ�����Ļ�����
					PUCHAR _Trampoline = nullptr;
					PULONG_PTR _Address = nullptr;		//�洢�� call [xxxx] �ı�
					PLONG32   _SsdtTable = nullptr;
					ULONG_PTR _SsdtTrampoline = 0;        // FF25 XXXXXXXX
					PULONG64  _SsdtAddress = nullptr;
					PLONG32   _ShadowSsdtTable = nullptr;
					ULONG_PTR _ShadowSsdtTrampoline = 0;  // FF25 XXXXXXXX
					PULONG64  _ShadowSsdtAddress = nullptr;
					PMDL _ImageMdl = nullptr;

				private:
					//for each cpu �ص�
					NTSTATUS hookSysCall(PVOID context);
					NTSTATUS unhookSysCall(PVOID context);
				private:
					ULONG64 init();
					ULONG64 setup(
						//����һ���µ������Լ������syscall��ڵ�ַ
					);
					NTSTATUS fix(
						//���� my syscall64
						//���� my syscall64
						ULONG_PTR pMySysCall64,
						PUCHAR pKiSystemCall64,
						SIZE_T Length
					);
					NTSTATUS fixcall(
						//�ҵ� call
						//�ĳ� ff25  jmp ptr xxxxxx
						ULONG_PTR pKiSystemCall64,
						ULONG_PTR pMySysCall64,
						ULONG64 Offset,
						OUT PULONG_PTR pAddress
					);
					void fixcmp(
						// Fix opcode cmp rsi, qword ptr [nt!MmUserProbeAddress]
						// ���� Ϊ  call  xxxxxxxxx
						ULONG_PTR pMySysCall64,
						ULONG64 Offset,
						PULONG_PTR pAddress
					);
					void fixcmovae(
						// Fix opcode cmovae rsi,qword ptr [nt!MmUserProbeAddress]
						// ���� Ϊ  call  xxxxxxxxx
						ULONG_PTR pMySysCall64,
						ULONG64 Offset,
						PULONG_PTR pAddress
					);
					void fixtest(
						//Fix opcode test dword ptr [nt!PerfGlobalGroupMask],40h
						// ���� Ϊ  call  xxxxxxxxx
						ULONG_PTR pKiSystemCall64,
						ULONG_PTR pMySysCall64,
						ULONG64 Offset,
						PULONG_PTR pAddress
					);
					NTSTATUS rebuildsdt(

						ULONG_PTR pKiSystemCall64,
						ULONG_PTR pMySysCall64,
						ULONG_PTR leaR10Offset,
						ULONG_PTR leaR11Offset,
						ULONG_PTR leaRdiOffset,
						ULONG_PTR leaR11Offset2
					);
					NTSTATUS rebuildssdt(
						PSERVICE_DESCRIPTOR_TABLE ssdt
					);
					NTSTATUS rebuildsssdt(
						PSERVICE_DESCRIPTOR_TABLE_SHADOW SysShadowSsdt
					);
					NTSTATUS rebuildfltsdt(
						PSERVICE_DESCRIPTOR_TABLE fltsdt
					);
				public:
					CSysCallHook();
					~CSysCallHook();
				public:
					static CSysCallHook & instance();
				public:
					void install(
						//���������vmcall����ʽ���õĻ�
						//��ֱ�ӷ�����ڴ棬���ǲ�hook msr���ò�ͬ��vmm���Լ�vmcall
						bool isvmcall = false);
					void uninstall();
					bool hookSDT(
						ULONG Index,
						PVOID NewFunction,
						OUT PVOID *OldFunction);
					ULONG64 getNewSysCall();
					ULONG64 getOldSysCall();

					PEPROCESS LookupAWin32Process();
				};
			}
		}
	}

}



#endif