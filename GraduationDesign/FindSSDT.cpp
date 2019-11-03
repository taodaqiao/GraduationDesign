#include "FindSSDT.h"

#include <intrin.h>


extern "C" {
	namespace Driver {
		namespace FindSSDT {
			/*
	关键代码
	fffff800`018c8765 8bf8            mov     edi, eax
	fffff800`018c8767 c1ef07          shr     edi, 7
	fffff800`018c876a 83e720          and     edi, 20h
	fffff800`018c876d 25ff0f0000      and     eax,0FFFh
	nt!KiSystemServiceRepeat:
	fffff800`018c8772 4c8d15c7202300  lea     r10,[nt!KeServiceDescriptorTable (fffff800`01afa840)]
	fffff800`018c8779 4c8d1d00212300  lea     r11,[nt!KeServiceDescriptorTableShadow (fffff800`01afa880)]
	fffff800`018c8780 f7830001000080000000 test dword ptr [rbx+100h],80h
	fffff800`018c878a 4d0f45d3        cmovne  r10,r11
	fffff800`018c878e 423b441710      cmp     eax,dword ptr [rdi+r10+10h]
	fffff800`018c8793 0f83e9020000    jae     nt!KiSystemServiceExit+0x1a7 (fffff800`018c8a82)
	fffff800`018c8772 4c8d15c7202300  lea     r10, [nt!KeServiceDescriptorTable(fffff800`01afa840)]
	fffff800`018c8779 4c8d1d00212300  lea     r11, [nt!KeServiceDescriptorTableShadow(fffff800`01afa880)]
	fffff800`018c8799 4e8b1417        mov     r10, qword ptr[rdi + r10]
	fffff800`018c879d 4d631c82        movsxd  r11, dword ptr[r10 + rax * 4]
	fffff800`018c87a1 498bc3          mov     rax, r11
	fffff800`018c87a4 49c1fb04        sar     r11, 4
	fffff800`018c87a8 4d03d3          add     r10, r11
	*/



	//从msr寄存器中读取Kisystemcall64地址再向下根据特征搜索
			SIZE_T GetKeServiceDescriptorTable()
			{
				PUCHAR StartSearchAddress = (PUCHAR)__readmsr(0xC0000082);
				PUCHAR EndSearchAddress = StartSearchAddress + 0x500;
				PUCHAR i = NULL;
				UCHAR b1 = 0, b2 = 0, b3 = 0;
				ULONG templong = 0;
				SIZE_T addr = 0;
				for (i = StartSearchAddress; i < EndSearchAddress; i++)
				{
					//MmIsAddressValid实现
					//将虚拟地址转换成页表虚拟地址中的值，然后判断第一位valid
					if (MmIsAddressValid(i) && MmIsAddressValid(i + 1) && MmIsAddressValid(i + 2))
					{
						b1 = *i;
						b2 = *(i + 1);
						b3 = *(i + 2);
						if (b1 == 0x4c && b2 == 0x8d && b3 == 0x15)
						{
							memcpy(&templong, i + 3, 4);
							addr = (ULONGLONG)templong + (ULONGLONG)i + 7;
							return addr;
						}
					}
				}
				return 0;
			}


			//原理同上
			SIZE_T GetKeServiceDescriptorTableShadow()
			{
				PUCHAR StartSearchAddress = (PUCHAR)__readmsr(0xC0000082);
				PUCHAR EndSearchAddress = StartSearchAddress + 0x500;
				PUCHAR i = NULL;
				UCHAR b1 = 0, b2 = 0, b3 = 0;
				ULONG templong = 0;
				SIZE_T addr = 0;
				for (i = StartSearchAddress; i < EndSearchAddress; i++)
				{
					if (MmIsAddressValid(i) && MmIsAddressValid(i + 1) && MmIsAddressValid(i + 2))
					{
						b1 = *i;
						b2 = *(i + 1);
						b3 = *(i + 2);
						if (b1 == 0x4c && b2 == 0x8d && b3 == 0x1d)
						{
							memcpy(&templong, i + 3, 4);
							addr = (ULONGLONG)templong + (ULONGLONG)i + 7;
							return addr;   //shadow函数表地址在shadowtable的第二个PSYSTEM_SERVICE_TABLE结构
						}
					}
				}
				return 0;
			}


			//根据下标找到SSDT函数地址 反汇编KiSystemServiceStart
			SIZE_T GetSSDTFunctionAddress(ULONGLONG Index)
			{
				LONG dwTemp = 0;
				ULONGLONG qwTemp = 0, stb = 0, ret = 0;
				PSYSTEM_SERVICE_TABLE ssdt = (PSYSTEM_SERVICE_TABLE)GetKeServiceDescriptorTable();
				stb = (ULONGLONG)(ssdt->ServiceTableBase);


				qwTemp = stb + 4 * Index;
				dwTemp = *(PLONG)qwTemp;
				dwTemp = dwTemp >> 4;
				ret = stb + (LONG64)dwTemp;
				return ret;
			}


			//根据下标找到SSDTShadow函数地址
			SIZE_T GetSSDTShadowFunctionAddress(ULONGLONG Index)
			{
				LONG dwTemp = 0;
				ULONGLONG qwTemp = 0, W32pServiceTable = 0, ret = 0;
				//shadow表在第二个结构体中
				PSYSTEM_SERVICE_TABLE Shadow = (PSYSTEM_SERVICE_TABLE)(GetKeServiceDescriptorTableShadow() + sizeof(SYSTEM_SERVICE_TABLE));
				W32pServiceTable = (ULONGLONG)(Shadow->ServiceTableBase);
				//如果按照系统原始，代码如下，这里优化
				//如 index = 0x1000+i;
				//qwTemp = W32pServiceTable + 4 * (index-0x1000);
				qwTemp = W32pServiceTable + 4 * Index;
				dwTemp = *(PLONG)qwTemp;
				dwTemp = dwTemp >> 4;
				ret = W32pServiceTable + (LONG64)dwTemp;
				return ret;
			}
		}
	}
}


































