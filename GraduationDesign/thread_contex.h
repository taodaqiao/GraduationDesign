#ifndef _H_THREAD_CONTEX_H
#define _H_THREAD_CONTEX_H


#include <fltKernel.h>
#include <windef.h>



extern "C" {
	namespace Driver {
		namespace thread_contex {

			#define WOW64_SIZE_OF_80387_REGISTERS      80
			#define WOW64_MAXIMUM_SUPPORTED_EXTENSION     512
			//dr¼Ä´æÆ÷Á´±í
			extern LIST_ENTRY DrRwList;
			//dr¼Ä´æÆ÷Á´±íËø
			extern KSPIN_LOCK g_lock;

			typedef struct _THREAD_dr_List {
				LIST_ENTRY TList;
				DWORD   Dr0;
				DWORD   Dr1;
				DWORD   Dr2;
				DWORD   Dr3;
				DWORD   Dr6;
				DWORD   Dr7;
				DWORD  eflag;
				PETHREAD Thread;

			}THREAD_dr_List, *PTHREAD_dr_List;


			typedef struct _PROCESS_List {
				LIST_ENTRY PorcessList;
				PEPROCESS Process;
				KSPIN_LOCK loacl_lock;
				LIST_ENTRY ThreadList;
			}PROCESS_List, *PPROCESS_List;



			typedef struct _WOW64_FLOATING_SAVE_AREA {
				DWORD   ControlWord;
				DWORD   StatusWord;
				DWORD   TagWord;
				DWORD   ErrorOffset;
				DWORD   ErrorSelector;
				DWORD   DataOffset;
				DWORD   DataSelector;
				char    RegisterArea[WOW64_SIZE_OF_80387_REGISTERS];
				DWORD   Cr0NpxState;
			} WOW64_FLOATING_SAVE_AREA;

			typedef struct _WOW64_CONTEXT {

				//
				// The flags values within this flag control the contents of
				// a CONTEXT record.
				//
				// If the context record is used as an input parameter, then
				// for each portion of the context record controlled by a flag
				// whose value is set, it is assumed that that portion of the
				// context record contains valid context. If the context record
				// is being used to modify a threads context, then only that
				// portion of the threads context will be modified.
				//
				// If the context record is used as an IN OUT parameter to capture
				// the context of a thread, then only those portions of the thread's
				// context corresponding to set flags will be returned.
				//
				// The context record is never used as an OUT only parameter.
				//

				DWORD ContextFlags;

				//
				// This section is specified/returned if CONTEXT_DEBUG_REGISTERS is
				// set in ContextFlags.  Note that CONTEXT_DEBUG_REGISTERS is NOT
				// included in CONTEXT_FULL.
				//

				DWORD   Dr0;
				DWORD   Dr1;
				DWORD   Dr2;
				DWORD   Dr3;
				DWORD   Dr6;
				DWORD   Dr7;

				//
				// This section is specified/returned if the
				// ContextFlags word contians the flag CONTEXT_FLOATING_POINT.
				//

				WOW64_FLOATING_SAVE_AREA FloatSave;

				//
				// This section is specified/returned if the
				// ContextFlags word contians the flag CONTEXT_SEGMENTS.
				//

				DWORD   SegGs;
				DWORD   SegFs;
				DWORD   SegEs;
				DWORD   SegDs;

				//
				// This section is specified/returned if the
				// ContextFlags word contians the flag CONTEXT_INTEGER.
				//

				DWORD   Edi;
				DWORD   Esi;
				DWORD   Ebx;
				DWORD   Edx;
				DWORD   Ecx;
				DWORD   Eax;

				//
				// This section is specified/returned if the
				// ContextFlags word contians the flag CONTEXT_CONTROL.
				//

				DWORD   Ebp;
				DWORD   Eip;
				DWORD   SegCs;              // MUST BE SANITIZED
				DWORD   EFlags;             // MUST BE SANITIZED
				DWORD   Esp;
				DWORD   SegSs;

				//
				// This section is specified/returned if the ContextFlags word
				// contains the flag CONTEXT_EXTENDED_REGISTERS.
				// The format and contexts are processor specific
				//

				char    ExtendedRegisters[WOW64_MAXIMUM_SUPPORTED_EXTENSION];

			} WOW64_CONTEXT,*PWOW64_CONTEXT;


			PPROCESS_List Dr_AddProcessToList(PEPROCESS Process);
			PTHREAD_dr_List Dr_AddThreadStructToList(PPROCESS_List DrRwListItem, PTHREAD_dr_List Struct);
			PTHREAD_dr_List Dr_FindThreadContextByThreadList(PPROCESS_List DrRwListItem, PETHREAD Thread);
			PPROCESS_List Dr_FindProcessList(PEPROCESS Process);

		}
	}
}



#endif
