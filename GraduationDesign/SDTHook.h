#ifndef _SDT_HOOK_H
#define _SDT_HOOK_H








namespace ddk
{
	namespace vmx
	{
		namespace vmfunction
		{
			namespace hook
			{
				class CSDTHook
				{
				public:
					static void SDT_Hook();

					static void SDT_UnHook();
				private:
					static void SSDT_Hook();
					static void SSSDT_Hook();
				};
			}
		}
	}

}

#endif