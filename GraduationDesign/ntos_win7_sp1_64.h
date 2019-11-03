//#pragma warning(disable:4091)
//#pragma warning(disable:4005)
//#pragma once
//#ifdef __cplusplus
//extern "C" {
//#endif
//
//	//////////////////
//	//   C Define   //
//	//////////////////
//
//#define VOID void
//#define STDCALL __stdcall
//#define FASTCALL __fastcall
//#define CDECL __cdecl
//#define THISCALL __thiscall
//#define NEAR
//#define FAR
////---------------------------------------------------------------------
//
////////////////////
//// C Basic Type //
////////////////////
//
//	typedef signed char INT8;
//	typedef signed char CHAR;
//	typedef signed short INT16;
//	typedef signed int INT32;
//	typedef signed int BOOL;
//	typedef signed __int64 INT64;
//	typedef signed __int64 LONG64;
//	typedef signed long LONG32;
//	typedef unsigned char UINT8;
//	typedef unsigned char BYTE;
//	typedef unsigned short UINT16;
//	typedef unsigned short WCHAR;
//	typedef unsigned int UINT32;
//	typedef unsigned __int64 UINT64;
//	typedef unsigned __int64 ULONG64;
//	typedef unsigned long ULONG32;
//	typedef float FLOAT32;
//	typedef double FLOAT64;
//	typedef struct { unsigned short W[5]; } FLOAT80;
//	typedef struct { __int64 LowPart; __int64 HighPart; } FLOAT128;
//	typedef double DATE;
//	typedef signed long HRESULT;
//	typedef union { struct { unsigned long Lo; long Hi; }; __int64 int64; } CURRENCY;
//	typedef wchar_t OLECHAR;
//	//---------------------------------------------------------------------
//
//	//------------------------------------------------------------------------
//	//------------------------------------------------------------------------
//	// Declaration of Enum types
//
//	typedef enum ___2015110902002400E38D2E8A98F333853_RecordType  // 2 elements, 0x4 bytes
//	{
//		KTMOH_CommitTransaction_Result = 1 /*0x1*/,
//		KTMOH_RollbackTransaction_Result = 2 /*0x2*/
//	}__2015110902002400E38D2E8A98F333853_RecordType, *P__2015110902002400E38D2E8A98F333853_RecordType;
//
//	typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE  // 3 elements, 0x4 bytes
//	{
//		StandardDesign = 0 /*0x0*/,
//		NEC98x86 = 1 /*0x1*/,
//		EndAlternatives = 2 /*0x2*/
//	}ALTERNATIVE_ARCHITECTURE_TYPE, *PALTERNATIVE_ARCHITECTURE_TYPE;
//
//	typedef enum _ARBITER_ACTION  // 10 elements, 0x4 bytes
//	{
//		ArbiterActionTestAllocation = 0 /*0x0*/,
//		ArbiterActionRetestAllocation = 1 /*0x1*/,
//		ArbiterActionCommitAllocation = 2 /*0x2*/,
//		ArbiterActionRollbackAllocation = 3 /*0x3*/,
//		ArbiterActionQueryAllocatedResources = 4 /*0x4*/,
//		ArbiterActionWriteReservedResources = 5 /*0x5*/,
//		ArbiterActionQueryConflict = 6 /*0x6*/,
//		ArbiterActionQueryArbitrate = 7 /*0x7*/,
//		ArbiterActionAddReserved = 8 /*0x8*/,
//		ArbiterActionBootAllocation = 9 /*0x9*/
//	}ARBITER_ACTION, *PARBITER_ACTION;
//
//	typedef enum _ARBITER_REQUEST_SOURCE  // 6 elements, 0x4 bytes
//	{
//		ArbiterRequestUndefined = -1 /*0xFF*/,
//		ArbiterRequestLegacyReported = 0 /*0x0*/,
//		ArbiterRequestHalReported = 1 /*0x1*/,
//		ArbiterRequestLegacyAssigned = 2 /*0x2*/,
//		ArbiterRequestPnpDetected = 3 /*0x3*/,
//		ArbiterRequestPnpEnumerated = 4 /*0x4*/
//	}ARBITER_REQUEST_SOURCE, *PARBITER_REQUEST_SOURCE;
//
//	typedef enum _ARBITER_RESULT  // 4 elements, 0x4 bytes
//	{
//		ArbiterResultUndefined = -1 /*0xFF*/,
//		ArbiterResultSuccess = 0 /*0x0*/,
//		ArbiterResultExternalConflict = 1 /*0x1*/,
//		ArbiterResultNullRequest = 2 /*0x2*/
//	}ARBITER_RESULT, *PARBITER_RESULT;
//
//	typedef enum _BLOB_ID  // 11 elements, 0x4 bytes
//	{
//		BLOB_TYPE_UNKNOWN = 0 /*0x0*/,
//		BLOB_TYPE_CONNECTION_INFO = 1 /*0x1*/,
//		BLOB_TYPE_MESSAGE = 2 /*0x2*/,
//		BLOB_TYPE_SECURITY_CONTEXT = 3 /*0x3*/,
//		BLOB_TYPE_SECTION = 4 /*0x4*/,
//		BLOB_TYPE_REGION = 5 /*0x5*/,
//		BLOB_TYPE_VIEW = 6 /*0x6*/,
//		BLOB_TYPE_RESERVE = 7 /*0x7*/,
//		BLOB_TYPE_DIRECT_TRANSFER = 8 /*0x8*/,
//		BLOB_TYPE_HANDLE_DATA = 9 /*0x9*/,
//		BLOB_TYPE_MAX_ID = 10 /*0xA*/
//	}BLOB_ID, *PBLOB_ID;
//
//	typedef enum _BUS_QUERY_ID_TYPE  // 6 elements, 0x4 bytes
//	{
//		BusQueryDeviceID = 0 /*0x0*/,
//		BusQueryHardwareIDs = 1 /*0x1*/,
//		BusQueryCompatibleIDs = 2 /*0x2*/,
//		BusQueryInstanceID = 3 /*0x3*/,
//		BusQueryDeviceSerialNumber = 4 /*0x4*/,
//		BusQueryContainerID = 5 /*0x5*/
//	}BUS_QUERY_ID_TYPE, *PBUS_QUERY_ID_TYPE;
//
//	typedef enum _CM_LOAD_FAILURE_TYPE  // 20 elements, 0x4 bytes
//	{
//		_None = 0 /*0x0*/,
//		_CmInitializeHive = 1 /*0x1*/,
//		_HvInitializeHive = 2 /*0x2*/,
//		_HvpBuildMap = 3 /*0x3*/,
//		_HvpBuildMapAndCopy = 4 /*0x4*/,
//		_HvpInitMap = 5 /*0x5*/,
//		_HvLoadHive = 6 /*0x6*/,
//		_HvpReadFileImageAndBuildMap = 7 /*0x7*/,
//		_HvpRecoverData = 8 /*0x8*/,
//		_HvpRecoverWholeHive = 9 /*0x9*/,
//		_HvpMapFileImageAndBuildMap = 10 /*0xA*/,
//		_CmpValidateHiveSecurityDescriptors = 11 /*0xB*/,
//		_HvpEnlistBinInMap = 12 /*0xC*/,
//		_CmCheckRegistry = 13 /*0xD*/,
//		_CmRegistryIO = 14 /*0xE*/,
//		_CmCheckRegistry2 = 15 /*0xF*/,
//		_CmpCheckKey = 16 /*0x10*/,
//		_CmpCheckValueList = 17 /*0x11*/,
//		_HvCheckHive = 18 /*0x12*/,
//		_HvCheckBin = 19 /*0x13*/
//	}CM_LOAD_FAILURE_TYPE, *PCM_LOAD_FAILURE_TYPE;
//
//	typedef enum _CM_SHARE_DISPOSITION  // 4 elements, 0x4 bytes
//	{
//		CmResourceShareUndetermined = 0 /*0x0*/,
//		CmResourceShareDeviceExclusive = 1 /*0x1*/,
//		CmResourceShareDriverExclusive = 2 /*0x2*/,
//		CmResourceShareShared = 3 /*0x3*/
//	}CM_SHARE_DISPOSITION, *PCM_SHARE_DISPOSITION;
//
//	typedef enum _CONFIGURATION_CLASS  // 8 elements, 0x4 bytes
//	{
//		SystemClass = 0 /*0x0*/,
//		ProcessorClass = 1 /*0x1*/,
//		CacheClass = 2 /*0x2*/,
//		AdapterClass = 3 /*0x3*/,
//		ControllerClass = 4 /*0x4*/,
//		PeripheralClass = 5 /*0x5*/,
//		MemoryClass = 6 /*0x6*/,
//		MaximumClass = 7 /*0x7*/
//	}CONFIGURATION_CLASS, *PCONFIGURATION_CLASS;
//
//	typedef enum _CONFIGURATION_TYPE  // 42 elements, 0x4 bytes
//	{
//		ArcSystem = 0 /*0x0*/,
//		CentralProcessor = 1 /*0x1*/,
//		FloatingPointProcessor = 2 /*0x2*/,
//		PrimaryIcache = 3 /*0x3*/,
//		PrimaryDcache = 4 /*0x4*/,
//		SecondaryIcache = 5 /*0x5*/,
//		SecondaryDcache = 6 /*0x6*/,
//		SecondaryCache = 7 /*0x7*/,
//		EisaAdapter = 8 /*0x8*/,
//		TcAdapter = 9 /*0x9*/,
//		ScsiAdapter = 10 /*0xA*/,
//		DtiAdapter = 11 /*0xB*/,
//		MultiFunctionAdapter = 12 /*0xC*/,
//		DiskController = 13 /*0xD*/,
//		TapeController = 14 /*0xE*/,
//		CdromController = 15 /*0xF*/,
//		WormController = 16 /*0x10*/,
//		SerialController = 17 /*0x11*/,
//		NetworkController = 18 /*0x12*/,
//		DisplayController = 19 /*0x13*/,
//		ParallelController = 20 /*0x14*/,
//		PointerController = 21 /*0x15*/,
//		KeyboardController = 22 /*0x16*/,
//		AudioController = 23 /*0x17*/,
//		OtherController = 24 /*0x18*/,
//		DiskPeripheral = 25 /*0x19*/,
//		FloppyDiskPeripheral = 26 /*0x1A*/,
//		TapePeripheral = 27 /*0x1B*/,
//		ModemPeripheral = 28 /*0x1C*/,
//		MonitorPeripheral = 29 /*0x1D*/,
//		PrinterPeripheral = 30 /*0x1E*/,
//		PointerPeripheral = 31 /*0x1F*/,
//		KeyboardPeripheral = 32 /*0x20*/,
//		TerminalPeripheral = 33 /*0x21*/,
//		OtherPeripheral = 34 /*0x22*/,
//		LinePeripheral = 35 /*0x23*/,
//		NetworkPeripheral = 36 /*0x24*/,
//		SystemMemory = 37 /*0x25*/,
//		DockingInformation = 38 /*0x26*/,
//		RealModeIrqRoutingTable = 39 /*0x27*/,
//		RealModePCIEnumeration = 40 /*0x28*/,
//		MaximumType = 41 /*0x29*/
//	}CONFIGURATION_TYPE, *PCONFIGURATION_TYPE;
//
//	typedef enum _CREATE_FILE_TYPE  // 3 elements, 0x4 bytes
//	{
//		CreateFileTypeNone = 0 /*0x0*/,
//		CreateFileTypeNamedPipe = 1 /*0x1*/,
//		CreateFileTypeMailslot = 2 /*0x2*/
//	}CREATE_FILE_TYPE, *PCREATE_FILE_TYPE;
//
//	typedef enum _DEVICE_POWER_STATE  // 6 elements, 0x4 bytes
//	{
//		PowerDeviceUnspecified = 0 /*0x0*/,
//		PowerDeviceD0 = 1 /*0x1*/,
//		PowerDeviceD1 = 2 /*0x2*/,
//		PowerDeviceD2 = 3 /*0x3*/,
//		PowerDeviceD3 = 4 /*0x4*/,
//		PowerDeviceMaximum = 5 /*0x5*/
//	}DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;
//
//	typedef enum _DEVICE_RELATION_TYPE  // 7 elements, 0x4 bytes
//	{
//		BusRelations = 0 /*0x0*/,
//		EjectionRelations = 1 /*0x1*/,
//		PowerRelations = 2 /*0x2*/,
//		RemovalRelations = 3 /*0x3*/,
//		TargetDeviceRelation = 4 /*0x4*/,
//		SingleBusRelations = 5 /*0x5*/,
//		TransportRelations = 6 /*0x6*/
//	}DEVICE_RELATION_TYPE, *PDEVICE_RELATION_TYPE;
//
//	typedef enum _DEVICE_TEXT_TYPE  // 2 elements, 0x4 bytes
//	{
//		DeviceTextDescription = 0 /*0x0*/,
//		DeviceTextLocationInformation = 1 /*0x1*/
//	}DEVICE_TEXT_TYPE, *PDEVICE_TEXT_TYPE;
//
//	typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE  // 4 elements, 0x4 bytes
//	{
//		DeviceUsageTypeUndefined = 0 /*0x0*/,
//		DeviceUsageTypePaging = 1 /*0x1*/,
//		DeviceUsageTypeHibernation = 2 /*0x2*/,
//		DeviceUsageTypeDumpFile = 3 /*0x3*/
//	}DEVICE_USAGE_NOTIFICATION_TYPE, *PDEVICE_USAGE_NOTIFICATION_TYPE;
//
//	typedef enum _DPFLTR_TYPE  // 147 elements, 0x4 bytes
//	{
//		DPFLTR_SYSTEM_ID = 0 /*0x0*/,
//		DPFLTR_SMSS_ID = 1 /*0x1*/,
//		DPFLTR_SETUP_ID = 2 /*0x2*/,
//		DPFLTR_NTFS_ID = 3 /*0x3*/,
//		DPFLTR_FSTUB_ID = 4 /*0x4*/,
//		DPFLTR_CRASHDUMP_ID = 5 /*0x5*/,
//		DPFLTR_CDAUDIO_ID = 6 /*0x6*/,
//		DPFLTR_CDROM_ID = 7 /*0x7*/,
//		DPFLTR_CLASSPNP_ID = 8 /*0x8*/,
//		DPFLTR_DISK_ID = 9 /*0x9*/,
//		DPFLTR_REDBOOK_ID = 10 /*0xA*/,
//		DPFLTR_STORPROP_ID = 11 /*0xB*/,
//		DPFLTR_SCSIPORT_ID = 12 /*0xC*/,
//		DPFLTR_SCSIMINIPORT_ID = 13 /*0xD*/,
//		DPFLTR_CONFIG_ID = 14 /*0xE*/,
//		DPFLTR_I8042PRT_ID = 15 /*0xF*/,
//		DPFLTR_SERMOUSE_ID = 16 /*0x10*/,
//		DPFLTR_LSERMOUS_ID = 17 /*0x11*/,
//		DPFLTR_KBDHID_ID = 18 /*0x12*/,
//		DPFLTR_MOUHID_ID = 19 /*0x13*/,
//		DPFLTR_KBDCLASS_ID = 20 /*0x14*/,
//		DPFLTR_MOUCLASS_ID = 21 /*0x15*/,
//		DPFLTR_TWOTRACK_ID = 22 /*0x16*/,
//		DPFLTR_WMILIB_ID = 23 /*0x17*/,
//		DPFLTR_ACPI_ID = 24 /*0x18*/,
//		DPFLTR_AMLI_ID = 25 /*0x19*/,
//		DPFLTR_HALIA64_ID = 26 /*0x1A*/,
//		DPFLTR_VIDEO_ID = 27 /*0x1B*/,
//		DPFLTR_SVCHOST_ID = 28 /*0x1C*/,
//		DPFLTR_VIDEOPRT_ID = 29 /*0x1D*/,
//		DPFLTR_TCPIP_ID = 30 /*0x1E*/,
//		DPFLTR_DMSYNTH_ID = 31 /*0x1F*/,
//		DPFLTR_NTOSPNP_ID = 32 /*0x20*/,
//		DPFLTR_FASTFAT_ID = 33 /*0x21*/,
//		DPFLTR_SAMSS_ID = 34 /*0x22*/,
//		DPFLTR_PNPMGR_ID = 35 /*0x23*/,
//		DPFLTR_NETAPI_ID = 36 /*0x24*/,
//		DPFLTR_SCSERVER_ID = 37 /*0x25*/,
//		DPFLTR_SCCLIENT_ID = 38 /*0x26*/,
//		DPFLTR_SERIAL_ID = 39 /*0x27*/,
//		DPFLTR_SERENUM_ID = 40 /*0x28*/,
//		DPFLTR_UHCD_ID = 41 /*0x29*/,
//		DPFLTR_RPCPROXY_ID = 42 /*0x2A*/,
//		DPFLTR_AUTOCHK_ID = 43 /*0x2B*/,
//		DPFLTR_DCOMSS_ID = 44 /*0x2C*/,
//		DPFLTR_UNIMODEM_ID = 45 /*0x2D*/,
//		DPFLTR_SIS_ID = 46 /*0x2E*/,
//		DPFLTR_FLTMGR_ID = 47 /*0x2F*/,
//		DPFLTR_WMICORE_ID = 48 /*0x30*/,
//		DPFLTR_BURNENG_ID = 49 /*0x31*/,
//		DPFLTR_IMAPI_ID = 50 /*0x32*/,
//		DPFLTR_SXS_ID = 51 /*0x33*/,
//		DPFLTR_FUSION_ID = 52 /*0x34*/,
//		DPFLTR_IDLETASK_ID = 53 /*0x35*/,
//		DPFLTR_SOFTPCI_ID = 54 /*0x36*/,
//		DPFLTR_TAPE_ID = 55 /*0x37*/,
//		DPFLTR_MCHGR_ID = 56 /*0x38*/,
//		DPFLTR_IDEP_ID = 57 /*0x39*/,
//		DPFLTR_PCIIDE_ID = 58 /*0x3A*/,
//		DPFLTR_FLOPPY_ID = 59 /*0x3B*/,
//		DPFLTR_FDC_ID = 60 /*0x3C*/,
//		DPFLTR_TERMSRV_ID = 61 /*0x3D*/,
//		DPFLTR_W32TIME_ID = 62 /*0x3E*/,
//		DPFLTR_PREFETCHER_ID = 63 /*0x3F*/,
//		DPFLTR_RSFILTER_ID = 64 /*0x40*/,
//		DPFLTR_FCPORT_ID = 65 /*0x41*/,
//		DPFLTR_PCI_ID = 66 /*0x42*/,
//		DPFLTR_DMIO_ID = 67 /*0x43*/,
//		DPFLTR_DMCONFIG_ID = 68 /*0x44*/,
//		DPFLTR_DMADMIN_ID = 69 /*0x45*/,
//		DPFLTR_WSOCKTRANSPORT_ID = 70 /*0x46*/,
//		DPFLTR_VSS_ID = 71 /*0x47*/,
//		DPFLTR_PNPMEM_ID = 72 /*0x48*/,
//		DPFLTR_PROCESSOR_ID = 73 /*0x49*/,
//		DPFLTR_DMSERVER_ID = 74 /*0x4A*/,
//		DPFLTR_SR_ID = 75 /*0x4B*/,
//		DPFLTR_INFINIBAND_ID = 76 /*0x4C*/,
//		DPFLTR_IHVDRIVER_ID = 77 /*0x4D*/,
//		DPFLTR_IHVVIDEO_ID = 78 /*0x4E*/,
//		DPFLTR_IHVAUDIO_ID = 79 /*0x4F*/,
//		DPFLTR_IHVNETWORK_ID = 80 /*0x50*/,
//		DPFLTR_IHVSTREAMING_ID = 81 /*0x51*/,
//		DPFLTR_IHVBUS_ID = 82 /*0x52*/,
//		DPFLTR_HPS_ID = 83 /*0x53*/,
//		DPFLTR_RTLTHREADPOOL_ID = 84 /*0x54*/,
//		DPFLTR_LDR_ID = 85 /*0x55*/,
//		DPFLTR_TCPIP6_ID = 86 /*0x56*/,
//		DPFLTR_ISAPNP_ID = 87 /*0x57*/,
//		DPFLTR_SHPC_ID = 88 /*0x58*/,
//		DPFLTR_STORPORT_ID = 89 /*0x59*/,
//		DPFLTR_STORMINIPORT_ID = 90 /*0x5A*/,
//		DPFLTR_PRINTSPOOLER_ID = 91 /*0x5B*/,
//		DPFLTR_VSSDYNDISK_ID = 92 /*0x5C*/,
//		DPFLTR_VERIFIER_ID = 93 /*0x5D*/,
//		DPFLTR_VDS_ID = 94 /*0x5E*/,
//		DPFLTR_VDSBAS_ID = 95 /*0x5F*/,
//		DPFLTR_VDSDYN_ID = 96 /*0x60*/,
//		DPFLTR_VDSDYNDR_ID = 97 /*0x61*/,
//		DPFLTR_VDSLDR_ID = 98 /*0x62*/,
//		DPFLTR_VDSUTIL_ID = 99 /*0x63*/,
//		DPFLTR_DFRGIFC_ID = 100 /*0x64*/,
//		DPFLTR_DEFAULT_ID = 101 /*0x65*/,
//		DPFLTR_MM_ID = 102 /*0x66*/,
//		DPFLTR_DFSC_ID = 103 /*0x67*/,
//		DPFLTR_WOW64_ID = 104 /*0x68*/,
//		DPFLTR_ALPC_ID = 105 /*0x69*/,
//		DPFLTR_WDI_ID = 106 /*0x6A*/,
//		DPFLTR_PERFLIB_ID = 107 /*0x6B*/,
//		DPFLTR_KTM_ID = 108 /*0x6C*/,
//		DPFLTR_IOSTRESS_ID = 109 /*0x6D*/,
//		DPFLTR_HEAP_ID = 110 /*0x6E*/,
//		DPFLTR_WHEA_ID = 111 /*0x6F*/,
//		DPFLTR_USERGDI_ID = 112 /*0x70*/,
//		DPFLTR_MMCSS_ID = 113 /*0x71*/,
//		DPFLTR_TPM_ID = 114 /*0x72*/,
//		DPFLTR_THREADORDER_ID = 115 /*0x73*/,
//		DPFLTR_ENVIRON_ID = 116 /*0x74*/,
//		DPFLTR_EMS_ID = 117 /*0x75*/,
//		DPFLTR_WDT_ID = 118 /*0x76*/,
//		DPFLTR_FVEVOL_ID = 119 /*0x77*/,
//		DPFLTR_NDIS_ID = 120 /*0x78*/,
//		DPFLTR_NVCTRACE_ID = 121 /*0x79*/,
//		DPFLTR_LUAFV_ID = 122 /*0x7A*/,
//		DPFLTR_APPCOMPAT_ID = 123 /*0x7B*/,
//		DPFLTR_USBSTOR_ID = 124 /*0x7C*/,
//		DPFLTR_SBP2PORT_ID = 125 /*0x7D*/,
//		DPFLTR_COVERAGE_ID = 126 /*0x7E*/,
//		DPFLTR_CACHEMGR_ID = 127 /*0x7F*/,
//		DPFLTR_MOUNTMGR_ID = 128 /*0x80*/,
//		DPFLTR_CFR_ID = 129 /*0x81*/,
//		DPFLTR_TXF_ID = 130 /*0x82*/,
//		DPFLTR_KSECDD_ID = 131 /*0x83*/,
//		DPFLTR_FLTREGRESS_ID = 132 /*0x84*/,
//		DPFLTR_MPIO_ID = 133 /*0x85*/,
//		DPFLTR_MSDSM_ID = 134 /*0x86*/,
//		DPFLTR_UDFS_ID = 135 /*0x87*/,
//		DPFLTR_PSHED_ID = 136 /*0x88*/,
//		DPFLTR_STORVSP_ID = 137 /*0x89*/,
//		DPFLTR_LSASS_ID = 138 /*0x8A*/,
//		DPFLTR_SSPICLI_ID = 139 /*0x8B*/,
//		DPFLTR_CNG_ID = 140 /*0x8C*/,
//		DPFLTR_EXFAT_ID = 141 /*0x8D*/,
//		DPFLTR_FILETRACE_ID = 142 /*0x8E*/,
//		DPFLTR_XSAVE_ID = 143 /*0x8F*/,
//		DPFLTR_SE_ID = 144 /*0x90*/,
//		DPFLTR_DRIVEEXTENDER_ID = 145 /*0x91*/,
//		DPFLTR_ENDOFTABLE_ID = 146 /*0x92*/
//	}DPFLTR_TYPE, *PDPFLTR_TYPE;
//
//	typedef enum _ETW_BUFFER_STATE  // 5 elements, 0x4 bytes
//	{
//		EtwBufferStateFree = 0 /*0x0*/,
//		EtwBufferStateGeneralLogging = 1 /*0x1*/,
//		EtwBufferStateCSwitch = 2 /*0x2*/,
//		EtwBufferStateFlush = 3 /*0x3*/,
//		EtwBufferStateMaximum = 4 /*0x4*/
//	}ETW_BUFFER_STATE, *PETW_BUFFER_STATE;
//
//	typedef enum _ETW_PROVIDER_STATE  // 4 elements, 0x4 bytes
//	{
//		EtwProviderStateFree = 0 /*0x0*/,
//		EtwProviderStateTransition = 1 /*0x1*/,
//		EtwProviderStateActive = 2 /*0x2*/,
//		EtwProviderStateMax = 3 /*0x3*/
//	}ETW_PROVIDER_STATE, *PETW_PROVIDER_STATE;
//
//	typedef enum _ETW_RT_EVENT_LOSS  // 5 elements, 0x4 bytes
//	{
//		EtwRtEventNoLoss = 0 /*0x0*/,
//		EtwRtEventLost = 1 /*0x1*/,
//		EtwRtBufferLost = 2 /*0x2*/,
//		EtwRtBackupLost = 3 /*0x3*/,
//		EtwRtEventLossMax = 4 /*0x4*/
//	}ETW_RT_EVENT_LOSS, *PETW_RT_EVENT_LOSS;
//
//	typedef enum _EVENT_INFO_CLASS  // 3 elements, 0x4 bytes
//	{
//		EventProviderSetTraits = 2 /*0x2*/,
//		EventProviderUseDescriptorType = 3 /*0x3*/,
//		MaxEventInfo = 4 /*0x4*/
//	}EVENT_INFO_CLASS, *PEVENT_INFO_CLASS;
//
//	typedef enum _EVENT_TYPE  // 2 elements, 0x4 bytes
//	{
//		NotificationEvent = 0 /*0x0*/,
//		SynchronizationEvent = 1 /*0x1*/
//	}EVENT_TYPE, *PEVENT_TYPE;
//
//	typedef enum _EX_POOL_PRIORITY  // 9 elements, 0x4 bytes
//	{
//		LowPoolPriority = 0 /*0x0*/,
//		LowPoolPrioritySpecialPoolOverrun = 8 /*0x8*/,
//		LowPoolPrioritySpecialPoolUnderrun = 9 /*0x9*/,
//		NormalPoolPriority = 16 /*0x10*/,
//		NormalPoolPrioritySpecialPoolOverrun = 24 /*0x18*/,
//		NormalPoolPrioritySpecialPoolUnderrun = 25 /*0x19*/,
//		HighPoolPriority = 32 /*0x20*/,
//		HighPoolPrioritySpecialPoolOverrun = 40 /*0x28*/,
//		HighPoolPrioritySpecialPoolUnderrun = 41 /*0x29*/
//	}EX_POOL_PRIORITY, *PEX_POOL_PRIORITY;
//
//	typedef enum _EXCEPTION_DISPOSITION  // 4 elements, 0x4 bytes
//	{
//		ExceptionContinueExecution = 0 /*0x0*/,
//		ExceptionContinueSearch = 1 /*0x1*/,
//		ExceptionNestedException = 2 /*0x2*/,
//		ExceptionCollidedUnwind = 3 /*0x3*/
//	}EXCEPTION_DISPOSITION, *PEXCEPTION_DISPOSITION;
//
//	typedef enum _FILE_INFORMATION_CLASS  // 56 elements, 0x4 bytes
//	{
//		FileDirectoryInformation = 1 /*0x1*/,
//		FileFullDirectoryInformation = 2 /*0x2*/,
//		FileBothDirectoryInformation = 3 /*0x3*/,
//		FileBasicInformation = 4 /*0x4*/,
//		FileStandardInformation = 5 /*0x5*/,
//		FileInternalInformation = 6 /*0x6*/,
//		FileEaInformation = 7 /*0x7*/,
//		FileAccessInformation = 8 /*0x8*/,
//		FileNameInformation = 9 /*0x9*/,
//		FileRenameInformation = 10 /*0xA*/,
//		FileLinkInformation = 11 /*0xB*/,
//		FileNamesInformation = 12 /*0xC*/,
//		FileDispositionInformation = 13 /*0xD*/,
//		FilePositionInformation = 14 /*0xE*/,
//		FileFullEaInformation = 15 /*0xF*/,
//		FileModeInformation = 16 /*0x10*/,
//		FileAlignmentInformation = 17 /*0x11*/,
//		FileAllInformation = 18 /*0x12*/,
//		FileAllocationInformation = 19 /*0x13*/,
//		FileEndOfFileInformation = 20 /*0x14*/,
//		FileAlternateNameInformation = 21 /*0x15*/,
//		FileStreamInformation = 22 /*0x16*/,
//		FilePipeInformation = 23 /*0x17*/,
//		FilePipeLocalInformation = 24 /*0x18*/,
//		FilePipeRemoteInformation = 25 /*0x19*/,
//		FileMailslotQueryInformation = 26 /*0x1A*/,
//		FileMailslotSetInformation = 27 /*0x1B*/,
//		FileCompressionInformation = 28 /*0x1C*/,
//		FileObjectIdInformation = 29 /*0x1D*/,
//		FileCompletionInformation = 30 /*0x1E*/,
//		FileMoveClusterInformation = 31 /*0x1F*/,
//		FileQuotaInformation = 32 /*0x20*/,
//		FileReparsePointInformation = 33 /*0x21*/,
//		FileNetworkOpenInformation = 34 /*0x22*/,
//		FileAttributeTagInformation = 35 /*0x23*/,
//		FileTrackingInformation = 36 /*0x24*/,
//		FileIdBothDirectoryInformation = 37 /*0x25*/,
//		FileIdFullDirectoryInformation = 38 /*0x26*/,
//		FileValidDataLengthInformation = 39 /*0x27*/,
//		FileShortNameInformation = 40 /*0x28*/,
//		FileIoCompletionNotificationInformation = 41 /*0x29*/,
//		FileIoStatusBlockRangeInformation = 42 /*0x2A*/,
//		FileIoPriorityHintInformation = 43 /*0x2B*/,
//		FileSfioReserveInformation = 44 /*0x2C*/,
//		FileSfioVolumeInformation = 45 /*0x2D*/,
//		FileHardLinkInformation = 46 /*0x2E*/,
//		FileProcessIdsUsingFileInformation = 47 /*0x2F*/,
//		FileNormalizedNameInformation = 48 /*0x30*/,
//		FileNetworkPhysicalNameInformation = 49 /*0x31*/,
//		FileIdGlobalTxDirectoryInformation = 50 /*0x32*/,
//		FileIsRemoteDeviceInformation = 51 /*0x33*/,
//		FileAttributeCacheInformation = 52 /*0x34*/,
//		FileNumaNodeInformation = 53 /*0x35*/,
//		FileStandardLinkInformation = 54 /*0x36*/,
//		FileRemoteProtocolInformation = 55 /*0x37*/,
//		FileMaximumInformation = 56 /*0x38*/
//	}FILE_INFORMATION_CLASS, *PFILE_INFORMATION_CLASS;
//
//	typedef enum _FILE_OBJECT_EXTENSION_TYPE  // 8 elements, 0x4 bytes
//	{
//		FoExtTypeTransactionParams = 0 /*0x0*/,
//		FoExtTypeDeviceObjectHint = 1 /*0x1*/,
//		FoExtTypeIosbRange = 2 /*0x2*/,
//		FoExtTypeGeneric = 3 /*0x3*/,
//		FoExtTypeSfio = 4 /*0x4*/,
//		FoExtTypeSymlink = 5 /*0x5*/,
//		FoExtTypeOplockKey = 6 /*0x6*/,
//		MaxFoExtTypes = 7 /*0x7*/
//	}FILE_OBJECT_EXTENSION_TYPE, *PFILE_OBJECT_EXTENSION_TYPE;
//
//	typedef enum _FS_FILTER_SECTION_SYNC_TYPE  // 2 elements, 0x4 bytes
//	{
//		SyncTypeOther = 0 /*0x0*/,
//		SyncTypeCreateSection = 1 /*0x1*/
//	}FS_FILTER_SECTION_SYNC_TYPE, *PFS_FILTER_SECTION_SYNC_TYPE;
//
//	typedef enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE  // 2 elements, 0x4 bytes
//	{
//		NotifyTypeCreate = 0 /*0x0*/,
//		NotifyTypeRetired = 1 /*0x1*/
//	}FS_FILTER_STREAM_FO_NOTIFICATION_TYPE, *PFS_FILTER_STREAM_FO_NOTIFICATION_TYPE;
//
//	typedef enum _FSINFOCLASS  // 12 elements, 0x4 bytes
//	{
//		FileFsVolumeInformation = 1 /*0x1*/,
//		FileFsLabelInformation = 2 /*0x2*/,
//		FileFsSizeInformation = 3 /*0x3*/,
//		FileFsDeviceInformation = 4 /*0x4*/,
//		FileFsAttributeInformation = 5 /*0x5*/,
//		FileFsControlInformation = 6 /*0x6*/,
//		FileFsFullSizeInformation = 7 /*0x7*/,
//		FileFsObjectIdInformation = 8 /*0x8*/,
//		FileFsDriverPathInformation = 9 /*0x9*/,
//		FileFsVolumeFlagsInformation = 10 /*0xA*/,
//		FileFsSectorSizeInformation = 11 /*0xB*/,
//		FileFsMaximumInformation = 12 /*0xC*/
//	}FSINFOCLASS, *PFSINFOCLASS;
//
//	typedef enum _HARDWARE_COUNTER_TYPE  // 2 elements, 0x4 bytes
//	{
//		PMCCounter = 0 /*0x0*/,
//		MaxHardwareCounterType = 1 /*0x1*/
//	}HARDWARE_COUNTER_TYPE, *PHARDWARE_COUNTER_TYPE;
//
//	typedef enum _HEAP_FAILURE_TYPE  // 14 elements, 0x4 bytes
//	{
//		heap_failure_internal = 0 /*0x0*/,
//		heap_failure_unknown = 1 /*0x1*/,
//		heap_failure_generic = 2 /*0x2*/,
//		heap_failure_entry_corruption = 3 /*0x3*/,
//		heap_failure_multiple_entries_corruption = 4 /*0x4*/,
//		heap_failure_virtual_block_corruption = 5 /*0x5*/,
//		heap_failure_buffer_overrun = 6 /*0x6*/,
//		heap_failure_buffer_underrun = 7 /*0x7*/,
//		heap_failure_block_not_busy = 8 /*0x8*/,
//		heap_failure_invalid_argument = 9 /*0x9*/,
//		heap_failure_usage_after_free = 10 /*0xA*/,
//		heap_failure_cross_heap_operation = 11 /*0xB*/,
//		heap_failure_freelists_corruption = 12 /*0xC*/,
//		heap_failure_listentry_corruption = 13 /*0xD*/
//	}HEAP_FAILURE_TYPE, *PHEAP_FAILURE_TYPE;
//
//	typedef enum _HSTORAGE_TYPE  // 3 elements, 0x4 bytes
//	{
//		Stable = 0 /*0x0*/,
//		Volatile = 1 /*0x1*/,
//		InvalidStorage = 2 /*0x2*/
//	}HSTORAGE_TYPE, *PHSTORAGE_TYPE;
//
//	typedef enum _INTERFACE_TYPE  // 19 elements, 0x4 bytes
//	{
//		InterfaceTypeUndefined = -1 /*0xFF*/,
//		Internal = 0 /*0x0*/,
//		Isa = 1 /*0x1*/,
//		Eisa = 2 /*0x2*/,
//		MicroChannel = 3 /*0x3*/,
//		TurboChannel = 4 /*0x4*/,
//		PCIBus = 5 /*0x5*/,
//		VMEBus = 6 /*0x6*/,
//		NuBus = 7 /*0x7*/,
//		PCMCIABus = 8 /*0x8*/,
//		CBus = 9 /*0x9*/,
//		MPIBus = 10 /*0xA*/,
//		MPSABus = 11 /*0xB*/,
//		ProcessorInternal = 12 /*0xC*/,
//		InternalPowerBus = 13 /*0xD*/,
//		PNPISABus = 14 /*0xE*/,
//		PNPBus = 15 /*0xF*/,
//		Vmcs = 16 /*0x10*/,
//		MaximumInterfaceType = 17 /*0x11*/
//	}INTERFACE_TYPE, *PINTERFACE_TYPE;
//
//	typedef enum _INTERLOCKED_RESULT  // 3 elements, 0x4 bytes
//	{
//		ResultNegative = 1 /*0x1*/,
//		ResultZero = 0 /*0x0*/,
//		ResultPositive = 2 /*0x2*/
//	}INTERLOCKED_RESULT, *PINTERLOCKED_RESULT;
//
//	typedef enum _IO_ALLOCATION_ACTION  // 3 elements, 0x4 bytes
//	{
//		KeepObject = 1 /*0x1*/,
//		DeallocateObject = 2 /*0x2*/,
//		DeallocateObjectKeepRegisters = 3 /*0x3*/
//	}IO_ALLOCATION_ACTION, *PIO_ALLOCATION_ACTION;
//
//	typedef enum _IO_PAGING_PRIORITY  // 5 elements, 0x4 bytes
//	{
//		IoPagingPriorityInvalid = 0 /*0x0*/,
//		IoPagingPriorityNormal = 1 /*0x1*/,
//		IoPagingPriorityHigh = 2 /*0x2*/,
//		IoPagingPriorityReserved1 = 3 /*0x3*/,
//		IoPagingPriorityReserved2 = 4 /*0x4*/
//	}IO_PAGING_PRIORITY, *PIO_PAGING_PRIORITY;
//
//	typedef enum _IO_PRIORITY_HINT  // 6 elements, 0x4 bytes
//	{
//		IoPriorityVeryLow = 0 /*0x0*/,
//		IoPriorityLow = 1 /*0x1*/,
//		IoPriorityNormal = 2 /*0x2*/,
//		IoPriorityHigh = 3 /*0x3*/,
//		IoPriorityCritical = 4 /*0x4*/,
//		MaxIoPriorityTypes = 5 /*0x5*/
//	}IO_PRIORITY_HINT, *PIO_PRIORITY_HINT;
//
//	typedef enum _IO_SESSION_STATE  // 9 elements, 0x4 bytes
//	{
//		IoSessionStateCreated = 1 /*0x1*/,
//		IoSessionStateInitialized = 2 /*0x2*/,
//		IoSessionStateConnected = 3 /*0x3*/,
//		IoSessionStateDisconnected = 4 /*0x4*/,
//		IoSessionStateDisconnectedLoggedOn = 5 /*0x5*/,
//		IoSessionStateLoggedOn = 6 /*0x6*/,
//		IoSessionStateLoggedOff = 7 /*0x7*/,
//		IoSessionStateTerminated = 8 /*0x8*/,
//		IoSessionStateMax = 9 /*0x9*/
//	}IO_SESSION_STATE, *PIO_SESSION_STATE;
//
//	typedef enum _IOP_PRIORITY_HINT  // 7 elements, 0x4 bytes
//	{
//		IopIoPriorityNotSet = 0 /*0x0*/,
//		IopIoPriorityVeryLow = 1 /*0x1*/,
//		IopIoPriorityLow = 2 /*0x2*/,
//		IopIoPriorityNormal = 3 /*0x3*/,
//		IopIoPriorityHigh = 4 /*0x4*/,
//		IopIoPriorityCritical = 5 /*0x5*/,
//		MaxIopIoPriorityTypes = 6 /*0x6*/
//	}IOP_PRIORITY_HINT, *PIOP_PRIORITY_HINT;
//
//	typedef enum _IRPLOCK  // 4 elements, 0x4 bytes
//	{
//		IRPLOCK_CANCELABLE = 0 /*0x0*/,
//		IRPLOCK_CANCEL_STARTED = 1 /*0x1*/,
//		IRPLOCK_CANCEL_COMPLETE = 2 /*0x2*/,
//		IRPLOCK_COMPLETED = 3 /*0x3*/
//	}IRPLOCK, *PIRPLOCK;
//
//	typedef enum _IRQ_PRIORITY  // 4 elements, 0x4 bytes
//	{
//		IrqPriorityUndefined = 0 /*0x0*/,
//		IrqPriorityLow = 1 /*0x1*/,
//		IrqPriorityNormal = 2 /*0x2*/,
//		IrqPriorityHigh = 3 /*0x3*/
//	}IRQ_PRIORITY, *PIRQ_PRIORITY;
//
//	typedef enum _KENLISTMENT_STATE  // 20 elements, 0x4 bytes
//	{
//		KEnlistmentUninitialized = 0 /*0x0*/,
//		KEnlistmentActive = 256 /*0x100*/,
//		KEnlistmentPreparing = 257 /*0x101*/,
//		KEnlistmentPrepared = 258 /*0x102*/,
//		KEnlistmentInDoubt = 259 /*0x103*/,
//		KEnlistmentCommitted = 260 /*0x104*/,
//		KEnlistmentCommittedNotify = 261 /*0x105*/,
//		KEnlistmentCommitRequested = 262 /*0x106*/,
//		KEnlistmentAborted = 263 /*0x107*/,
//		KEnlistmentDelegated = 264 /*0x108*/,
//		KEnlistmentDelegatedDisconnected = 265 /*0x109*/,
//		KEnlistmentPrePreparing = 266 /*0x10A*/,
//		KEnlistmentForgotten = 267 /*0x10B*/,
//		KEnlistmentRecovering = 268 /*0x10C*/,
//		KEnlistmentAborting = 269 /*0x10D*/,
//		KEnlistmentReadOnly = 270 /*0x10E*/,
//		KEnlistmentOutcomeUnavailable = 271 /*0x10F*/,
//		KEnlistmentOffline = 272 /*0x110*/,
//		KEnlistmentPrePrepared = 273 /*0x111*/,
//		KEnlistmentInitialized = 274 /*0x112*/
//	}KENLISTMENT_STATE, *PKENLISTMENT_STATE;
//
//	typedef enum _KINTERRUPT_MODE  // 2 elements, 0x4 bytes
//	{
//		LevelSensitive = 0 /*0x0*/,
//		Latched = 1 /*0x1*/
//	}KINTERRUPT_MODE, *PKINTERRUPT_MODE;
//
//	typedef enum _KINTERRUPT_POLARITY  // 3 elements, 0x4 bytes
//	{
//		InterruptPolarityUnknown = 0 /*0x0*/,
//		InterruptActiveHigh = 1 /*0x1*/,
//		InterruptActiveLow = 2 /*0x2*/
//	}KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;
//
//	typedef enum _KOBJECTS  // 26 elements, 0x4 bytes
//	{
//		EventNotificationObject = 0 /*0x0*/,
//		EventSynchronizationObject = 1 /*0x1*/,
//		MutantObject = 2 /*0x2*/,
//		ProcessObject = 3 /*0x3*/,
//		QueueObject = 4 /*0x4*/,
//		SemaphoreObject = 5 /*0x5*/,
//		ThreadObject = 6 /*0x6*/,
//		GateObject = 7 /*0x7*/,
//		TimerNotificationObject = 8 /*0x8*/,
//		TimerSynchronizationObject = 9 /*0x9*/,
//		Spare2Object = 10 /*0xA*/,
//		Spare3Object = 11 /*0xB*/,
//		Spare4Object = 12 /*0xC*/,
//		Spare5Object = 13 /*0xD*/,
//		Spare6Object = 14 /*0xE*/,
//		Spare7Object = 15 /*0xF*/,
//		Spare8Object = 16 /*0x10*/,
//		Spare9Object = 17 /*0x11*/,
//		ApcObject = 18 /*0x12*/,
//		DpcObject = 19 /*0x13*/,
//		DeviceQueueObject = 20 /*0x14*/,
//		EventPairObject = 21 /*0x15*/,
//		InterruptObject = 22 /*0x16*/,
//		ProfileObject = 23 /*0x17*/,
//		ThreadedDpcObject = 24 /*0x18*/,
//		MaximumKernelObject = 25 /*0x19*/
//	}KOBJECTS, *PKOBJECTS;
//
//	typedef enum _KPROCESS_STATE  // 7 elements, 0x4 bytes
//	{
//		ProcessInMemory = 0 /*0x0*/,
//		ProcessOutOfMemory = 1 /*0x1*/,
//		ProcessInTransition = 2 /*0x2*/,
//		ProcessOutTransition = 3 /*0x3*/,
//		ProcessInSwap = 4 /*0x4*/,
//		ProcessOutSwap = 5 /*0x5*/,
//		ProcessAllSwapStates = 6 /*0x6*/
//	}KPROCESS_STATE, *PKPROCESS_STATE;
//
//	typedef enum _KRESOURCEMANAGER_STATE  // 3 elements, 0x4 bytes
//	{
//		KResourceManagerUninitialized = 0 /*0x0*/,
//		KResourceManagerOffline = 1 /*0x1*/,
//		KResourceManagerOnline = 2 /*0x2*/
//	}KRESOURCEMANAGER_STATE, *PKRESOURCEMANAGER_STATE;
//
//	typedef enum _KTM_STATE  // 6 elements, 0x4 bytes
//	{
//		KKtmUninitialized = 0 /*0x0*/,
//		KKtmInitialized = 1 /*0x1*/,
//		KKtmRecovering = 2 /*0x2*/,
//		KKtmOnline = 3 /*0x3*/,
//		KKtmRecoveryFailed = 4 /*0x4*/,
//		KKtmOffline = 5 /*0x5*/
//	}KTM_STATE, *PKTM_STATE;
//
//	typedef enum _KTRANSACTION_OUTCOME  // 5 elements, 0x4 bytes
//	{
//		KTxOutcomeUninitialized = 0 /*0x0*/,
//		KTxOutcomeUndetermined = 1 /*0x1*/,
//		KTxOutcomeCommitted = 2 /*0x2*/,
//		KTxOutcomeAborted = 3 /*0x3*/,
//		KTxOutcomeUnavailable = 4 /*0x4*/
//	}KTRANSACTION_OUTCOME, *PKTRANSACTION_OUTCOME;
//
//	typedef enum _KTRANSACTION_STATE  // 12 elements, 0x4 bytes
//	{
//		KTransactionUninitialized = 0 /*0x0*/,
//		KTransactionActive = 1 /*0x1*/,
//		KTransactionPreparing = 2 /*0x2*/,
//		KTransactionPrepared = 3 /*0x3*/,
//		KTransactionInDoubt = 4 /*0x4*/,
//		KTransactionCommitted = 5 /*0x5*/,
//		KTransactionAborted = 6 /*0x6*/,
//		KTransactionDelegated = 7 /*0x7*/,
//		KTransactionPrePreparing = 8 /*0x8*/,
//		KTransactionForgotten = 9 /*0x9*/,
//		KTransactionRecovering = 10 /*0xA*/,
//		KTransactionPrePrepared = 11 /*0xB*/
//	}KTRANSACTION_STATE, *PKTRANSACTION_STATE;
//
//	typedef enum _KWAIT_BLOCK_STATE  // 5 elements, 0x4 bytes
//	{
//		WaitBlockBypassStart = 0 /*0x0*/,
//		WaitBlockBypassComplete = 1 /*0x1*/,
//		WaitBlockActive = 2 /*0x2*/,
//		WaitBlockInactive = 3 /*0x3*/,
//		WaitBlockAllStates = 4 /*0x4*/
//	}KWAIT_BLOCK_STATE, *PKWAIT_BLOCK_STATE;
//
//	typedef enum _KWAIT_REASON  // 38 elements, 0x4 bytes
//	{
//		Executive = 0 /*0x0*/,
//		FreePage = 1 /*0x1*/,
//		PageIn = 2 /*0x2*/,
//		PoolAllocation = 3 /*0x3*/,
//		DelayExecution = 4 /*0x4*/,
//		Suspended = 5 /*0x5*/,
//		UserRequest = 6 /*0x6*/,
//		WrExecutive = 7 /*0x7*/,
//		WrFreePage = 8 /*0x8*/,
//		WrPageIn = 9 /*0x9*/,
//		WrPoolAllocation = 10 /*0xA*/,
//		WrDelayExecution = 11 /*0xB*/,
//		WrSuspended = 12 /*0xC*/,
//		WrUserRequest = 13 /*0xD*/,
//		WrEventPair = 14 /*0xE*/,
//		WrQueue = 15 /*0xF*/,
//		WrLpcReceive = 16 /*0x10*/,
//		WrLpcReply = 17 /*0x11*/,
//		WrVirtualMemory = 18 /*0x12*/,
//		WrPageOut = 19 /*0x13*/,
//		WrRendezvous = 20 /*0x14*/,
//		WrKeyedEvent = 21 /*0x15*/,
//		WrTerminated = 22 /*0x16*/,
//		WrProcessInSwap = 23 /*0x17*/,
//		WrCpuRateControl = 24 /*0x18*/,
//		WrCalloutStack = 25 /*0x19*/,
//		WrKernel = 26 /*0x1A*/,
//		WrResource = 27 /*0x1B*/,
//		WrPushLock = 28 /*0x1C*/,
//		WrMutex = 29 /*0x1D*/,
//		WrQuantumEnd = 30 /*0x1E*/,
//		WrDispatchInt = 31 /*0x1F*/,
//		WrPreempted = 32 /*0x20*/,
//		WrYieldExecution = 33 /*0x21*/,
//		WrFastMutex = 34 /*0x22*/,
//		WrGuardedMutex = 35 /*0x23*/,
//		WrRundown = 36 /*0x24*/,
//		MaximumWaitReason = 37 /*0x25*/
//	}KWAIT_REASON, *PKWAIT_REASON;
//
//	typedef enum _KWAIT_STATE  // 4 elements, 0x4 bytes
//	{
//		WaitInProgress = 0 /*0x0*/,
//		WaitCommitted = 1 /*0x1*/,
//		WaitAborted = 2 /*0x2*/,
//		MaximumWaitState = 3 /*0x3*/
//	}KWAIT_STATE, *PKWAIT_STATE;
//
//	typedef enum _LOCK_OPERATION  // 3 elements, 0x4 bytes
//	{
//		IoReadAccess = 0 /*0x0*/,
//		IoWriteAccess = 1 /*0x1*/,
//		IoModifyAccess = 2 /*0x2*/
//	}LOCK_OPERATION, *PLOCK_OPERATION;
//
//	typedef enum _LSA_FOREST_TRUST_RECORD_TYPE  // 4 elements, 0x4 bytes
//	{
//		ForestTrustTopLevelName = 0 /*0x0*/,
//		ForestTrustTopLevelNameEx = 1 /*0x1*/,
//		ForestTrustDomainInfo = 2 /*0x2*/,
//		ForestTrustRecordTypeLast = 2 /*0x2*/
//	}LSA_FOREST_TRUST_RECORD_TYPE, *PLSA_FOREST_TRUST_RECORD_TYPE;
//
//	typedef enum _MEMORY_CACHING_TYPE  // 7 elements, 0x4 bytes
//	{
//		MmNonCached = 0 /*0x0*/,
//		MmCached = 1 /*0x1*/,
//		MmWriteCombined = 2 /*0x2*/,
//		MmHardwareCoherentCached = 3 /*0x3*/,
//		MmNonCachedUnordered = 4 /*0x4*/,
//		MmUSWCCached = 5 /*0x5*/,
//		MmMaximumCacheType = 6 /*0x6*/
//	}MEMORY_CACHING_TYPE, *PMEMORY_CACHING_TYPE;
//
//	typedef enum _MEMORY_CACHING_TYPE_ORIG  // 1 elements, 0x4 bytes
//	{
//		MmFrameBufferCached = 2 /*0x2*/
//	}MEMORY_CACHING_TYPE_ORIG, *PMEMORY_CACHING_TYPE_ORIG;
//
//	typedef enum _MI_DYNAMIC_MEMORY_LOCKTYPE  // 4 elements, 0x4 bytes
//	{
//		AlreadyHeld = 0 /*0x0*/,
//		AcquiredShared = 1 /*0x1*/,
//		UseSpinLock = 2 /*0x2*/,
//		UseSpinLockRaiseIrql = 3 /*0x3*/
//	}MI_DYNAMIC_MEMORY_LOCKTYPE, *PMI_DYNAMIC_MEMORY_LOCKTYPE;
//
//	typedef enum _MI_PFN_CACHE_ATTRIBUTE  // 4 elements, 0x4 bytes
//	{
//		MiNonCached = 0 /*0x0*/,
//		MiCached = 1 /*0x1*/,
//		MiWriteCombined = 2 /*0x2*/,
//		MiNotMapped = 3 /*0x3*/
//	}MI_PFN_CACHE_ATTRIBUTE, *PMI_PFN_CACHE_ATTRIBUTE;
//
//	typedef enum _MI_STORE_BIT_TYPE  // 3 elements, 0x4 bytes
//	{
//		MiStoreBitTypeInStore = 0 /*0x0*/,
//		MiStoreBitTypeEvicted = 1 /*0x1*/,
//		MiStoreBitTypeMax = 2 /*0x2*/
//	}MI_STORE_BIT_TYPE, *PMI_STORE_BIT_TYPE;
//
//	typedef enum _MI_SYSTEM_VA_TYPE  // 15 elements, 0x4 bytes
//	{
//		MiVaUnused = 0 /*0x0*/,
//		MiVaSessionSpace = 1 /*0x1*/,
//		MiVaProcessSpace = 2 /*0x2*/,
//		MiVaBootLoaded = 3 /*0x3*/,
//		MiVaPfnDatabase = 4 /*0x4*/,
//		MiVaNonPagedPool = 5 /*0x5*/,
//		MiVaPagedPool = 6 /*0x6*/,
//		MiVaSpecialPoolPaged = 7 /*0x7*/,
//		MiVaSystemCache = 8 /*0x8*/,
//		MiVaSystemPtes = 9 /*0x9*/,
//		MiVaHal = 10 /*0xA*/,
//		MiVaSessionGlobalSpace = 11 /*0xB*/,
//		MiVaDriverImages = 12 /*0xC*/,
//		MiVaSpecialPoolNonPaged = 13 /*0xD*/,
//		MiVaMaximumType = 14 /*0xE*/
//	}MI_SYSTEM_VA_TYPE, *PMI_SYSTEM_VA_TYPE;
//
//	typedef enum _MM_PAGE_ACCESS_TYPE  // 4 elements, 0x4 bytes
//	{
//		MmPteAccessType = 0 /*0x0*/,
//		MmCcReadAheadType = 1 /*0x1*/,
//		MmPfnRepurposeType = 2 /*0x2*/,
//		MmMaximumPageAccessType = 3 /*0x3*/
//	}MM_PAGE_ACCESS_TYPE, *PMM_PAGE_ACCESS_TYPE;
//
//	typedef enum _MM_POOL_FAILURE_REASONS  // 12 elements, 0x4 bytes
//	{
//		MmNonPagedNoPtes = 0 /*0x0*/,
//		MmPriorityTooLow = 1 /*0x1*/,
//		MmNonPagedNoPagesAvailable = 2 /*0x2*/,
//		MmPagedNoPtes = 3 /*0x3*/,
//		MmSessionPagedNoPtes = 4 /*0x4*/,
//		MmPagedNoPagesAvailable = 5 /*0x5*/,
//		MmSessionPagedNoPagesAvailable = 6 /*0x6*/,
//		MmPagedNoCommit = 7 /*0x7*/,
//		MmSessionPagedNoCommit = 8 /*0x8*/,
//		MmNonPagedNoResidentAvailable = 9 /*0x9*/,
//		MmNonPagedNoCommit = 10 /*0xA*/,
//		MmMaximumFailureReason = 11 /*0xB*/
//	}MM_POOL_FAILURE_REASONS, *PMM_POOL_FAILURE_REASONS;
//
//	typedef enum _MM_POOL_PRIORITIES  // 4 elements, 0x4 bytes
//	{
//		MmHighPriority = 0 /*0x0*/,
//		MmNormalPriority = 1 /*0x1*/,
//		MmLowPriority = 2 /*0x2*/,
//		MmMaximumPoolPriority = 3 /*0x3*/
//	}MM_POOL_PRIORITIES, *PMM_POOL_PRIORITIES;
//
//	typedef enum _MM_POOL_TYPES  // 4 elements, 0x4 bytes
//	{
//		MmNonPagedPool = 0 /*0x0*/,
//		MmPagedPool = 1 /*0x1*/,
//		MmSessionPagedPool = 2 /*0x2*/,
//		MmMaximumPoolType = 3 /*0x3*/
//	}MM_POOL_TYPES, *PMM_POOL_TYPES;
//
//	typedef enum _MM_PREEMPTIVE_TRIMS  // 5 elements, 0x4 bytes
//	{
//		MmPreemptForNonPaged = 0 /*0x0*/,
//		MmPreemptForPaged = 1 /*0x1*/,
//		MmPreemptForNonPagedPriority = 2 /*0x2*/,
//		MmPreemptForPagedPriority = 3 /*0x3*/,
//		MmMaximumPreempt = 4 /*0x4*/
//	}MM_PREEMPTIVE_TRIMS, *PMM_PREEMPTIVE_TRIMS;
//
//	typedef enum _MMLISTS  // 8 elements, 0x4 bytes
//	{
//		ZeroedPageList = 0 /*0x0*/,
//		FreePageList = 1 /*0x1*/,
//		StandbyPageList = 2 /*0x2*/,
//		ModifiedPageList = 3 /*0x3*/,
//		ModifiedNoWritePageList = 4 /*0x4*/,
//		BadPageList = 5 /*0x5*/,
//		ActiveAndValid = 6 /*0x6*/,
//		TransitionPage = 7 /*0x7*/
//	}MMLISTS, *PMMLISTS;
//
//	typedef enum _MODE  // 3 elements, 0x4 bytes
//	{
//		KernelMode = 0 /*0x0*/,
//		UserMode = 1 /*0x1*/,
//		MaximumMode = 2 /*0x2*/
//	}MODE, *PMODE;
//
//	typedef enum _NT_PRODUCT_TYPE  // 3 elements, 0x4 bytes
//	{
//		NtProductWinNt = 1 /*0x1*/,
//		NtProductLanManNt = 2 /*0x2*/,
//		NtProductServer = 3 /*0x3*/
//	}NT_PRODUCT_TYPE, *PNT_PRODUCT_TYPE;
//
//	typedef enum _OB_OPEN_REASON  // 5 elements, 0x4 bytes
//	{
//		ObCreateHandle = 0 /*0x0*/,
//		ObOpenHandle = 1 /*0x1*/,
//		ObDuplicateHandle = 2 /*0x2*/,
//		ObInheritHandle = 3 /*0x3*/,
//		ObMaxOpenReason = 4 /*0x4*/
//	}OB_OPEN_REASON, *POB_OPEN_REASON;
//
//	typedef enum _OBJECT_INFORMATION_CLASS  // 7 elements, 0x4 bytes
//	{
//		ObjectBasicInformation = 0 /*0x0*/,
//		ObjectNameInformation = 1 /*0x1*/,
//		ObjectTypeInformation = 2 /*0x2*/,
//		ObjectTypesInformation = 3 /*0x3*/,
//		ObjectHandleFlagInformation = 4 /*0x4*/,
//		ObjectSessionInformation = 5 /*0x5*/,
//		MaxObjectInfoClass = 6 /*0x6*/
//	}OBJECT_INFORMATION_CLASS, *POBJECT_INFORMATION_CLASS;
//
//	typedef enum _PCW_CALLBACK_TYPE  // 4 elements, 0x4 bytes
//	{
//		PcwCallbackAddCounter = 0 /*0x0*/,
//		PcwCallbackRemoveCounter = 1 /*0x1*/,
//		PcwCallbackEnumerateInstances = 2 /*0x2*/,
//		PcwCallbackCollectData = 3 /*0x3*/
//	}PCW_CALLBACK_TYPE, *PPCW_CALLBACK_TYPE;
//
//	typedef enum _PF_FILE_ACCESS_TYPE  // 3 elements, 0x4 bytes
//	{
//		PfFileAccessTypeRead = 0 /*0x0*/,
//		PfFileAccessTypeWrite = 1 /*0x1*/,
//		PfFileAccessTypeMax = 2 /*0x2*/
//	}PF_FILE_ACCESS_TYPE, *PPF_FILE_ACCESS_TYPE;
//
//	typedef enum _PLUGPLAY_EVENT_CATEGORY  // 12 elements, 0x4 bytes
//	{
//		HardwareProfileChangeEvent = 0 /*0x0*/,
//		TargetDeviceChangeEvent = 1 /*0x1*/,
//		DeviceClassChangeEvent = 2 /*0x2*/,
//		CustomDeviceEvent = 3 /*0x3*/,
//		DeviceInstallEvent = 4 /*0x4*/,
//		DeviceArrivalEvent = 5 /*0x5*/,
//		VetoEvent = 6 /*0x6*/,
//		BlockedDriverEvent = 7 /*0x7*/,
//		InvalidIDEvent = 8 /*0x8*/,
//		DevicePropertyChangeEvent = 9 /*0x9*/,
//		DeviceInstanceRemovalEvent = 10 /*0xA*/,
//		MaxPlugEventCategory = 11 /*0xB*/
//	}PLUGPLAY_EVENT_CATEGORY, *PPLUGPLAY_EVENT_CATEGORY;
//
//	typedef enum _PNP_DEVICE_ACTION_REQUEST  // 19 elements, 0x4 bytes
//	{
//		AssignResources = 0 /*0x0*/,
//		ClearDeviceProblem = 1 /*0x1*/,
//		ClearProblem = 2 /*0x2*/,
//		ClearEjectProblem = 3 /*0x3*/,
//		HaltDevice = 4 /*0x4*/,
//		QueryPowerRelations = 5 /*0x5*/,
//		Rebalance = 6 /*0x6*/,
//		ReenumerateBootDevices = 7 /*0x7*/,
//		ReenumerateDeviceOnly = 8 /*0x8*/,
//		ReenumerateDeviceTree = 9 /*0x9*/,
//		ReenumerateRootDevices = 10 /*0xA*/,
//		RequeryDeviceState = 11 /*0xB*/,
//		ResetDevice = 12 /*0xC*/,
//		ResourceRequirementsChanged = 13 /*0xD*/,
//		RestartEnumeration = 14 /*0xE*/,
//		SetDeviceProblem = 15 /*0xF*/,
//		StartDevice = 16 /*0x10*/,
//		StartSystemDevicesPass0 = 17 /*0x11*/,
//		StartSystemDevicesPass1 = 18 /*0x12*/
//	}PNP_DEVICE_ACTION_REQUEST, *PPNP_DEVICE_ACTION_REQUEST;
//
//	typedef enum _PNP_DEVNODE_STATE  // 22 elements, 0x4 bytes
//	{
//		DeviceNodeUnspecified = 768 /*0x300*/,
//		DeviceNodeUninitialized = 769 /*0x301*/,
//		DeviceNodeInitialized = 770 /*0x302*/,
//		DeviceNodeDriversAdded = 771 /*0x303*/,
//		DeviceNodeResourcesAssigned = 772 /*0x304*/,
//		DeviceNodeStartPending = 773 /*0x305*/,
//		DeviceNodeStartCompletion = 774 /*0x306*/,
//		DeviceNodeStartPostWork = 775 /*0x307*/,
//		DeviceNodeStarted = 776 /*0x308*/,
//		DeviceNodeQueryStopped = 777 /*0x309*/,
//		DeviceNodeStopped = 778 /*0x30A*/,
//		DeviceNodeRestartCompletion = 779 /*0x30B*/,
//		DeviceNodeEnumeratePending = 780 /*0x30C*/,
//		DeviceNodeEnumerateCompletion = 781 /*0x30D*/,
//		DeviceNodeAwaitingQueuedDeletion = 782 /*0x30E*/,
//		DeviceNodeAwaitingQueuedRemoval = 783 /*0x30F*/,
//		DeviceNodeQueryRemoved = 784 /*0x310*/,
//		DeviceNodeRemovePendingCloses = 785 /*0x311*/,
//		DeviceNodeRemoved = 786 /*0x312*/,
//		DeviceNodeDeletePendingCloses = 787 /*0x313*/,
//		DeviceNodeDeleted = 788 /*0x314*/,
//		MaxDeviceNodeState = 789 /*0x315*/
//	}PNP_DEVNODE_STATE, *PPNP_DEVNODE_STATE;
//
//	typedef enum _PNP_VETO_TYPE  // 13 elements, 0x4 bytes
//	{
//		PNP_VetoTypeUnknown = 0 /*0x0*/,
//		PNP_VetoLegacyDevice = 1 /*0x1*/,
//		PNP_VetoPendingClose = 2 /*0x2*/,
//		PNP_VetoWindowsApp = 3 /*0x3*/,
//		PNP_VetoWindowsService = 4 /*0x4*/,
//		PNP_VetoOutstandingOpen = 5 /*0x5*/,
//		PNP_VetoDevice = 6 /*0x6*/,
//		PNP_VetoDriver = 7 /*0x7*/,
//		PNP_VetoIllegalDeviceRequest = 8 /*0x8*/,
//		PNP_VetoInsufficientPower = 9 /*0x9*/,
//		PNP_VetoNonDisableable = 10 /*0xA*/,
//		PNP_VetoLegacyDriver = 11 /*0xB*/,
//		PNP_VetoInsufficientRights = 12 /*0xC*/
//	}PNP_VETO_TYPE, *PPNP_VETO_TYPE;
//
//	typedef enum _POLICY_AUDIT_EVENT_TYPE  // 9 elements, 0x4 bytes
//	{
//		AuditCategorySystem = 0 /*0x0*/,
//		AuditCategoryLogon = 1 /*0x1*/,
//		AuditCategoryObjectAccess = 2 /*0x2*/,
//		AuditCategoryPrivilegeUse = 3 /*0x3*/,
//		AuditCategoryDetailedTracking = 4 /*0x4*/,
//		AuditCategoryPolicyChange = 5 /*0x5*/,
//		AuditCategoryAccountManagement = 6 /*0x6*/,
//		AuditCategoryDirectoryServiceAccess = 7 /*0x7*/,
//		AuditCategoryAccountLogon = 8 /*0x8*/
//	}POLICY_AUDIT_EVENT_TYPE, *PPOLICY_AUDIT_EVENT_TYPE;
//
//	typedef enum _POOL_TYPE  // 15 elements, 0x4 bytes
//	{
//		NonPagedPool = 0 /*0x0*/,
//		PagedPool = 1 /*0x1*/,
//		NonPagedPoolMustSucceed = 2 /*0x2*/,
//		DontUseThisType = 3 /*0x3*/,
//		NonPagedPoolCacheAligned = 4 /*0x4*/,
//		PagedPoolCacheAligned = 5 /*0x5*/,
//		NonPagedPoolCacheAlignedMustS = 6 /*0x6*/,
//		MaxPoolType = 7 /*0x7*/,
//		NonPagedPoolSession = 32 /*0x20*/,
//		PagedPoolSession = 33 /*0x21*/,
//		NonPagedPoolMustSucceedSession = 34 /*0x22*/,
//		DontUseThisTypeSession = 35 /*0x23*/,
//		NonPagedPoolCacheAlignedSession = 36 /*0x24*/,
//		PagedPoolCacheAlignedSession = 37 /*0x25*/,
//		NonPagedPoolCacheAlignedMustSSession = 38 /*0x26*/
//	}POOL_TYPE, *PPOOL_TYPE;
//
//	typedef enum _POP_DEVICE_IDLE_TYPE  // 2 elements, 0x4 bytes
//	{
//		DeviceIdleNormal = 0 /*0x0*/,
//		DeviceIdleDisk = 1 /*0x1*/
//	}POP_DEVICE_IDLE_TYPE, *PPOP_DEVICE_IDLE_TYPE;
//
//	typedef enum _POWER_ACTION  // 8 elements, 0x4 bytes
//	{
//		PowerActionNone = 0 /*0x0*/,
//		PowerActionReserved = 1 /*0x1*/,
//		PowerActionSleep = 2 /*0x2*/,
//		PowerActionHibernate = 3 /*0x3*/,
//		PowerActionShutdown = 4 /*0x4*/,
//		PowerActionShutdownReset = 5 /*0x5*/,
//		PowerActionShutdownOff = 6 /*0x6*/,
//		PowerActionWarmEject = 7 /*0x7*/
//	}POWER_ACTION, *PPOWER_ACTION;
//
//	typedef enum _POWER_POLICY_DEVICE_TYPE  // 9 elements, 0x4 bytes
//	{
//		PolicyDeviceSystemButton = 0 /*0x0*/,
//		PolicyDeviceThermalZone = 1 /*0x1*/,
//		PolicyDeviceBattery = 2 /*0x2*/,
//		PolicyDeviceMemory = 3 /*0x3*/,
//		PolicyInitiatePowerActionAPI = 4 /*0x4*/,
//		PolicySetPowerStateAPI = 5 /*0x5*/,
//		PolicyImmediateDozeS4 = 6 /*0x6*/,
//		PolicySystemIdle = 7 /*0x7*/,
//		PolicyDeviceMax = 8 /*0x8*/
//	}POWER_POLICY_DEVICE_TYPE, *PPOWER_POLICY_DEVICE_TYPE;
//
//	typedef enum _POWER_STATE_TYPE  // 2 elements, 0x4 bytes
//	{
//		SystemPowerState = 0 /*0x0*/,
//		DevicePowerState = 1 /*0x1*/
//	}POWER_STATE_TYPE, *PPOWER_STATE_TYPE;
//
//	typedef enum _PP_NPAGED_LOOKASIDE_NUMBER  // 10 elements, 0x4 bytes
//	{
//		LookasideSmallIrpList = 0 /*0x0*/,
//		LookasideMediumIrpList = 1 /*0x1*/,
//		LookasideLargeIrpList = 2 /*0x2*/,
//		LookasideMdlList = 3 /*0x3*/,
//		LookasideCreateInfoList = 4 /*0x4*/,
//		LookasideNameBufferList = 5 /*0x5*/,
//		LookasideTwilightList = 6 /*0x6*/,
//		LookasideCompletionList = 7 /*0x7*/,
//		LookasideScratchBufferList = 8 /*0x8*/,
//		LookasideMaximumList = 9 /*0x9*/
//	}PP_NPAGED_LOOKASIDE_NUMBER, *PPP_NPAGED_LOOKASIDE_NUMBER;
//
//	typedef enum _PROC_HYPERVISOR_STATE  // 3 elements, 0x4 bytes
//	{
//		ProcHypervisorNone = 0 /*0x0*/,
//		ProcHypervisorPresent = 1 /*0x1*/,
//		ProcHypervisorPower = 2 /*0x2*/
//	}PROC_HYPERVISOR_STATE, *PPROC_HYPERVISOR_STATE;
//
//	typedef enum _PROCESSOR_CACHE_TYPE  // 4 elements, 0x4 bytes
//	{
//		CacheUnified = 0 /*0x0*/,
//		CacheInstruction = 1 /*0x1*/,
//		CacheData = 2 /*0x2*/,
//		CacheTrace = 3 /*0x3*/
//	}PROCESSOR_CACHE_TYPE, *PPROCESSOR_CACHE_TYPE;
//
//	typedef enum _PROFILE_DEPARTURE_STYLE  // 4 elements, 0x4 bytes
//	{
//		PDS_UPDATE_DEFAULT = 1 /*0x1*/,
//		PDS_UPDATE_ON_REMOVE = 2 /*0x2*/,
//		PDS_UPDATE_ON_INTERFACE = 3 /*0x3*/,
//		PDS_UPDATE_ON_EJECT = 4 /*0x4*/
//	}PROFILE_DEPARTURE_STYLE, *PPROFILE_DEPARTURE_STYLE;
//
//	typedef enum _PROFILE_STATUS  // 5 elements, 0x4 bytes
//	{
//		DOCK_NOTDOCKDEVICE = 0 /*0x0*/,
//		DOCK_QUIESCENT = 1 /*0x1*/,
//		DOCK_ARRIVING = 2 /*0x2*/,
//		DOCK_DEPARTING = 3 /*0x3*/,
//		DOCK_EJECTIRP_COMPLETED = 4 /*0x4*/
//	}PROFILE_STATUS, *PPROFILE_STATUS;
//
//	typedef enum _PS_ATTRIBUTE_NUM  // 18 elements, 0x4 bytes
//	{
//		PsAttributeParentProcess = 0 /*0x0*/,
//		PsAttributeDebugObject = 1 /*0x1*/,
//		PsAttributeToken = 2 /*0x2*/,
//		PsAttributeClientId = 3 /*0x3*/,
//		PsAttributeTebAddress = 4 /*0x4*/,
//		PsAttributeImageName = 5 /*0x5*/,
//		PsAttributeImageInfo = 6 /*0x6*/,
//		PsAttributeMemoryReserve = 7 /*0x7*/,
//		PsAttributePriorityClass = 8 /*0x8*/,
//		PsAttributeErrorMode = 9 /*0x9*/,
//		PsAttributeStdHandleInfo = 10 /*0xA*/,
//		PsAttributeHandleList = 11 /*0xB*/,
//		PsAttributeGroupAffinity = 12 /*0xC*/,
//		PsAttributePreferredNode = 13 /*0xD*/,
//		PsAttributeIdealProcessor = 14 /*0xE*/,
//		PsAttributeUmsThread = 15 /*0xF*/,
//		PsAttributeExecuteOptions = 16 /*0x10*/,
//		PsAttributeMax = 17 /*0x11*/
//	}PS_ATTRIBUTE_NUM, *PPS_ATTRIBUTE_NUM;
//
//	typedef enum _PS_CREATE_STATE  // 8 elements, 0x4 bytes
//	{
//		PsCreateInitialState = 0 /*0x0*/,
//		PsCreateFailOnFileOpen = 1 /*0x1*/,
//		PsCreateFailOnSectionCreate = 2 /*0x2*/,
//		PsCreateFailExeFormat = 3 /*0x3*/,
//		PsCreateFailMachineMismatch = 4 /*0x4*/,
//		PsCreateFailExeName = 5 /*0x5*/,
//		PsCreateSuccess = 6 /*0x6*/,
//		PsCreateMaximumStates = 7 /*0x7*/
//	}PS_CREATE_STATE, *PPS_CREATE_STATE;
//
//	typedef enum _PS_IFEO_KEY_STATE  // 4 elements, 0x4 bytes
//	{
//		PsReadIFEOAllValues = 0 /*0x0*/,
//		PsSkipIFEODebugger = 1 /*0x1*/,
//		PsSkipAllIFEO = 2 /*0x2*/,
//		PsMaxIFEOKeyStates = 3 /*0x3*/
//	}PS_IFEO_KEY_STATE, *PPS_IFEO_KEY_STATE;
//
//	typedef enum _PS_RESOURCE_TYPE  // 6 elements, 0x4 bytes
//	{
//		PsResourceNonPagedPool = 0 /*0x0*/,
//		PsResourcePagedPool = 1 /*0x1*/,
//		PsResourcePageFile = 2 /*0x2*/,
//		PsResourceWorkingSet = 3 /*0x3*/,
//		PsResourceCpuRate = 4 /*0x4*/,
//		PsResourceMax = 5 /*0x5*/
//	}PS_RESOURCE_TYPE, *PPS_RESOURCE_TYPE;
//
//	typedef enum _PS_STD_HANDLE_STATE  // 4 elements, 0x4 bytes
//	{
//		PsNeverDuplicate = 0 /*0x0*/,
//		PsRequestDuplicate = 1 /*0x1*/,
//		PsAlwaysDuplicate = 2 /*0x2*/,
//		PsMaxStdHandleStates = 3 /*0x3*/
//	}PS_STD_HANDLE_STATE, *PPS_STD_HANDLE_STATE;
//
//	typedef enum _REG_NOTIFY_CLASS  // 59 elements, 0x4 bytes
//	{
//		RegNtDeleteKey = 0 /*0x0*/,
//		RegNtPreDeleteKey = 0 /*0x0*/,
//		RegNtSetValueKey = 1 /*0x1*/,
//		RegNtPreSetValueKey = 1 /*0x1*/,
//		RegNtDeleteValueKey = 2 /*0x2*/,
//		RegNtPreDeleteValueKey = 2 /*0x2*/,
//		RegNtSetInformationKey = 3 /*0x3*/,
//		RegNtPreSetInformationKey = 3 /*0x3*/,
//		RegNtRenameKey = 4 /*0x4*/,
//		RegNtPreRenameKey = 4 /*0x4*/,
//		RegNtEnumerateKey = 5 /*0x5*/,
//		RegNtPreEnumerateKey = 5 /*0x5*/,
//		RegNtEnumerateValueKey = 6 /*0x6*/,
//		RegNtPreEnumerateValueKey = 6 /*0x6*/,
//		RegNtQueryKey = 7 /*0x7*/,
//		RegNtPreQueryKey = 7 /*0x7*/,
//		RegNtQueryValueKey = 8 /*0x8*/,
//		RegNtPreQueryValueKey = 8 /*0x8*/,
//		RegNtQueryMultipleValueKey = 9 /*0x9*/,
//		RegNtPreQueryMultipleValueKey = 9 /*0x9*/,
//		RegNtPreCreateKey = 10 /*0xA*/,
//		RegNtPostCreateKey = 11 /*0xB*/,
//		RegNtPreOpenKey = 12 /*0xC*/,
//		RegNtPostOpenKey = 13 /*0xD*/,
//		RegNtKeyHandleClose = 14 /*0xE*/,
//		RegNtPreKeyHandleClose = 14 /*0xE*/,
//		RegNtPostDeleteKey = 15 /*0xF*/,
//		RegNtPostSetValueKey = 16 /*0x10*/,
//		RegNtPostDeleteValueKey = 17 /*0x11*/,
//		RegNtPostSetInformationKey = 18 /*0x12*/,
//		RegNtPostRenameKey = 19 /*0x13*/,
//		RegNtPostEnumerateKey = 20 /*0x14*/,
//		RegNtPostEnumerateValueKey = 21 /*0x15*/,
//		RegNtPostQueryKey = 22 /*0x16*/,
//		RegNtPostQueryValueKey = 23 /*0x17*/,
//		RegNtPostQueryMultipleValueKey = 24 /*0x18*/,
//		RegNtPostKeyHandleClose = 25 /*0x19*/,
//		RegNtPreCreateKeyEx = 26 /*0x1A*/,
//		RegNtPostCreateKeyEx = 27 /*0x1B*/,
//		RegNtPreOpenKeyEx = 28 /*0x1C*/,
//		RegNtPostOpenKeyEx = 29 /*0x1D*/,
//		RegNtPreFlushKey = 30 /*0x1E*/,
//		RegNtPostFlushKey = 31 /*0x1F*/,
//		RegNtPreLoadKey = 32 /*0x20*/,
//		RegNtPostLoadKey = 33 /*0x21*/,
//		RegNtPreUnLoadKey = 34 /*0x22*/,
//		RegNtPostUnLoadKey = 35 /*0x23*/,
//		RegNtPreQueryKeySecurity = 36 /*0x24*/,
//		RegNtPostQueryKeySecurity = 37 /*0x25*/,
//		RegNtPreSetKeySecurity = 38 /*0x26*/,
//		RegNtPostSetKeySecurity = 39 /*0x27*/,
//		RegNtCallbackObjectContextCleanup = 40 /*0x28*/,
//		RegNtPreRestoreKey = 41 /*0x29*/,
//		RegNtPostRestoreKey = 42 /*0x2A*/,
//		RegNtPreSaveKey = 43 /*0x2B*/,
//		RegNtPostSaveKey = 44 /*0x2C*/,
//		RegNtPreReplaceKey = 45 /*0x2D*/,
//		RegNtPostReplaceKey = 46 /*0x2E*/,
//		MaxRegNtNotifyClass = 47 /*0x2F*/
//	}REG_NOTIFY_CLASS, *PREG_NOTIFY_CLASS;
//
//	typedef enum _ReplacesCorHdrNumericDefines  // 24 elements, 0x4 bytes
//	{
//		COMIMAGE_FLAGS_ILONLY = 1 /*0x1*/,
//		COMIMAGE_FLAGS_32BITREQUIRED = 2 /*0x2*/,
//		COMIMAGE_FLAGS_IL_LIBRARY = 4 /*0x4*/,
//		COMIMAGE_FLAGS_STRONGNAMESIGNED = 8 /*0x8*/,
//		COMIMAGE_FLAGS_NATIVE_ENTRYPOINT = 16 /*0x10*/,
//		COMIMAGE_FLAGS_TRACKDEBUGDATA = 65536 /*0x10000*/,
//		COR_VERSION_MAJOR_V2 = 2 /*0x2*/,
//		COR_VERSION_MAJOR = 2 /*0x2*/,
//		COR_VERSION_MINOR = 0 /*0x0*/,
//		COR_DELETED_NAME_LENGTH = 8 /*0x8*/,
//		COR_VTABLEGAP_NAME_LENGTH = 8 /*0x8*/,
//		NATIVE_TYPE_MAX_CB = 1 /*0x1*/,
//		COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE = 255 /*0xFF*/,
//		IMAGE_COR_MIH_METHODRVA = 1 /*0x1*/,
//		IMAGE_COR_MIH_EHRVA = 2 /*0x2*/,
//		IMAGE_COR_MIH_BASICBLOCK = 8 /*0x8*/,
//		COR_VTABLE_32BIT = 1 /*0x1*/,
//		COR_VTABLE_64BIT = 2 /*0x2*/,
//		COR_VTABLE_FROM_UNMANAGED = 4 /*0x4*/,
//		COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN = 8 /*0x8*/,
//		COR_VTABLE_CALL_MOST_DERIVED = 16 /*0x10*/,
//		IMAGE_COR_EATJ_THUNK_SIZE = 32 /*0x20*/,
//		MAX_CLASS_NAME = 1024 /*0x400*/,
//		MAX_PACKAGE_NAME = 1024 /*0x400*/
//	}ReplacesCorHdrNumericDefines, *PReplacesCorHdrNumericDefines;
//
//	typedef enum _REQUESTER_TYPE  // 3 elements, 0x4 bytes
//	{
//		KernelRequester = 0 /*0x0*/,
//		UserProcessRequester = 1 /*0x1*/,
//		UserSharedServiceRequester = 2 /*0x2*/
//	}REQUESTER_TYPE, *PREQUESTER_TYPE;
//
//	typedef enum _RTL_GENERIC_COMPARE_RESULTS  // 3 elements, 0x4 bytes
//	{
//		GenericLessThan = 0 /*0x0*/,
//		GenericGreaterThan = 1 /*0x1*/,
//		GenericEqual = 2 /*0x2*/
//	}RTL_GENERIC_COMPARE_RESULTS, *PRTL_GENERIC_COMPARE_RESULTS;
//
//	typedef enum _SECURITY_IMPERSONATION_LEVEL  // 4 elements, 0x4 bytes
//	{
//		SecurityAnonymous = 0 /*0x0*/,
//		SecurityIdentification = 1 /*0x1*/,
//		SecurityImpersonation = 2 /*0x2*/,
//		SecurityDelegation = 3 /*0x3*/
//	}SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;
//
//	typedef enum _SECURITY_OPERATION_CODE  // 4 elements, 0x4 bytes
//	{
//		SetSecurityDescriptor = 0 /*0x0*/,
//		QuerySecurityDescriptor = 1 /*0x1*/,
//		DeleteSecurityDescriptor = 2 /*0x2*/,
//		AssignSecurityDescriptor = 3 /*0x3*/
//	}SECURITY_OPERATION_CODE, *PSECURITY_OPERATION_CODE;
//
//	typedef enum _SYSTEM_POWER_CONDITION  // 4 elements, 0x4 bytes
//	{
//		PoAc = 0 /*0x0*/,
//		PoDc = 1 /*0x1*/,
//		PoHot = 2 /*0x2*/,
//		PoConditionMaximum = 3 /*0x3*/
//	}SYSTEM_POWER_CONDITION, *PSYSTEM_POWER_CONDITION;
//
//	typedef enum _SYSTEM_POWER_STATE  // 8 elements, 0x4 bytes
//	{
//		PowerSystemUnspecified = 0 /*0x0*/,
//		PowerSystemWorking = 1 /*0x1*/,
//		PowerSystemSleeping1 = 2 /*0x2*/,
//		PowerSystemSleeping2 = 3 /*0x3*/,
//		PowerSystemSleeping3 = 4 /*0x4*/,
//		PowerSystemHibernate = 5 /*0x5*/,
//		PowerSystemShutdown = 6 /*0x6*/,
//		PowerSystemMaximum = 7 /*0x7*/
//	}SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;
//
//	typedef enum _TlgBlob_t  // 7 elements, 0x4 bytes
//	{
//		_TlgBlobNone = 0 /*0x0*/,
//		_TlgBlobEnd = 1 /*0x1*/,
//		_TlgBlobProvider = 2 /*0x2*/,
//		_TlgBlobEvent3 = 3 /*0x3*/,
//		_TlgBlobProvider3 = 4 /*0x4*/,
//		_TlgBlobEvent2 = 5 /*0x5*/,
//		_TlgBlobMax = 6 /*0x6*/
//	}TlgBlob_t, *PTlgBlob_t;
//
//	typedef enum _TlgIn_t  // 36 elements, 0x4 bytes
//	{
//		_TlgInNULL = 0 /*0x0*/,
//		_TlgInUNICODESTRING = 1 /*0x1*/,
//		_TlgInANSISTRING = 2 /*0x2*/,
//		_TlgInINT8 = 3 /*0x3*/,
//		_TlgInUINT8 = 4 /*0x4*/,
//		_TlgInINT16 = 5 /*0x5*/,
//		_TlgInUINT16 = 6 /*0x6*/,
//		_TlgInINT32 = 7 /*0x7*/,
//		_TlgInUINT32 = 8 /*0x8*/,
//		_TlgInINT64 = 9 /*0x9*/,
//		_TlgInUINT64 = 10 /*0xA*/,
//		_TlgInFLOAT = 11 /*0xB*/,
//		_TlgInDOUBLE = 12 /*0xC*/,
//		_TlgInBOOL32 = 13 /*0xD*/,
//		_TlgInBINARY = 14 /*0xE*/,
//		_TlgInGUID = 15 /*0xF*/,
//		_TlgInPOINTER_unsupported = 16 /*0x10*/,
//		_TlgInFILETIME = 17 /*0x11*/,
//		_TlgInSYSTEMTIME = 18 /*0x12*/,
//		_TlgInSID = 19 /*0x13*/,
//		_TlgInHEXINT32 = 20 /*0x14*/,
//		_TlgInHEXINT64 = 21 /*0x15*/,
//		_TlgInCOUNTEDSTRING = 22 /*0x16*/,
//		_TlgInCOUNTEDANSISTRING = 23 /*0x17*/,
//		_TlgInSTRUCT = 24 /*0x18*/,
//		_TlgInMax = 25 /*0x19*/,
//		_TlgInINTPTR = 9 /*0x9*/,
//		_TlgInUINTPTR = 10 /*0xA*/,
//		_TlgInPOINTER = 21 /*0x15*/,
//		_TlgInCcount = 32 /*0x20*/,
//		_TlgInVcount = 64 /*0x40*/,
//		_TlgInChain = 128 /*0x80*/,
//		_TlgInCustom = 96 /*0x60*/,
//		_TlgInTypeMask = 31 /*0x1F*/,
//		_TlgInCountMask = 96 /*0x60*/,
//		_TlgInFlagMask = 224 /*0xE0*/
//	}TlgIn_t, *PTlgIn_t;
//
//	typedef enum _TlgOut_t  // 22 elements, 0x4 bytes
//	{
//		_TlgOutNULL = 0 /*0x0*/,
//		_TlgOutNOPRINT = 1 /*0x1*/,
//		_TlgOutSTRING = 2 /*0x2*/,
//		_TlgOutBOOLEAN = 3 /*0x3*/,
//		_TlgOutHEX = 4 /*0x4*/,
//		_TlgOutPID = 5 /*0x5*/,
//		_TlgOutTID = 6 /*0x6*/,
//		_TlgOutPORT = 7 /*0x7*/,
//		_TlgOutIPV4 = 8 /*0x8*/,
//		_TlgOutIPV6 = 9 /*0x9*/,
//		_TlgOutSOCKETADDRESS = 10 /*0xA*/,
//		_TlgOutXML = 11 /*0xB*/,
//		_TlgOutJSON = 12 /*0xC*/,
//		_TlgOutWIN32ERROR = 13 /*0xD*/,
//		_TlgOutNTSTATUS = 14 /*0xE*/,
//		_TlgOutHRESULT = 15 /*0xF*/,
//		_TlgOutFILETIME = 16 /*0x10*/,
//		_TlgOutSIGNED = 17 /*0x11*/,
//		_TlgOutUNSIGNED = 18 /*0x12*/,
//		_TlgOutMax = 19 /*0x13*/,
//		_TlgOutChain = 128 /*0x80*/,
//		_TlgOutTypeMask = 127 /*0x7F*/
//	}TlgOut_t, *PTlgOut_t;
//
//	typedef enum _TOKEN_TYPE  // 2 elements, 0x4 bytes
//	{
//		TokenPrimary = 1 /*0x1*/,
//		TokenImpersonation = 2 /*0x2*/
//	}TOKEN_TYPE, *PTOKEN_TYPE;
//
//	typedef enum _TP_CALLBACK_PRIORITY  // 4 elements, 0x4 bytes
//	{
//		TP_CALLBACK_PRIORITY_HIGH = 0 /*0x0*/,
//		TP_CALLBACK_PRIORITY_NORMAL = 1 /*0x1*/,
//		TP_CALLBACK_PRIORITY_LOW = 2 /*0x2*/,
//		TP_CALLBACK_PRIORITY_INVALID = 3 /*0x3*/
//	}TP_CALLBACK_PRIORITY, *PTP_CALLBACK_PRIORITY;
//
//	typedef enum _TPM_BOOT_ENTROPY_RESULT_CODE  // 5 elements, 0x4 bytes
//	{
//		TpmBootEntropyStructureUninitialized = 0 /*0x0*/,
//		TpmBootEntropyDisabledByPolicy = 1 /*0x1*/,
//		TpmBootEntropyNoTpmFound = 2 /*0x2*/,
//		TpmBootEntropyTpmError = 3 /*0x3*/,
//		TpmBootEntropySuccess = 4 /*0x4*/
//	}TPM_BOOT_ENTROPY_RESULT_CODE, *PTPM_BOOT_ENTROPY_RESULT_CODE;
//
//	typedef enum _TRANSFER_TYPE  // 3 elements, 0x4 bytes
//	{
//		ReadTransfer = 0 /*0x0*/,
//		WriteTransfer = 1 /*0x1*/,
//		OtherTransfer = 2 /*0x2*/
//	}TRANSFER_TYPE, *PTRANSFER_TYPE;
//
//	typedef enum _TYPE_OF_MEMORY  // 30 elements, 0x4 bytes
//	{
//		LoaderExceptionBlock = 0 /*0x0*/,
//		LoaderSystemBlock = 1 /*0x1*/,
//		LoaderFree = 2 /*0x2*/,
//		LoaderBad = 3 /*0x3*/,
//		LoaderLoadedProgram = 4 /*0x4*/,
//		LoaderFirmwareTemporary = 5 /*0x5*/,
//		LoaderFirmwarePermanent = 6 /*0x6*/,
//		LoaderOsloaderHeap = 7 /*0x7*/,
//		LoaderOsloaderStack = 8 /*0x8*/,
//		LoaderSystemCode = 9 /*0x9*/,
//		LoaderHalCode = 10 /*0xA*/,
//		LoaderBootDriver = 11 /*0xB*/,
//		LoaderConsoleInDriver = 12 /*0xC*/,
//		LoaderConsoleOutDriver = 13 /*0xD*/,
//		LoaderStartupDpcStack = 14 /*0xE*/,
//		LoaderStartupKernelStack = 15 /*0xF*/,
//		LoaderStartupPanicStack = 16 /*0x10*/,
//		LoaderStartupPcrPage = 17 /*0x11*/,
//		LoaderStartupPdrPage = 18 /*0x12*/,
//		LoaderRegistryData = 19 /*0x13*/,
//		LoaderMemoryData = 20 /*0x14*/,
//		LoaderNlsData = 21 /*0x15*/,
//		LoaderSpecialMemory = 22 /*0x16*/,
//		LoaderBBTMemory = 23 /*0x17*/,
//		LoaderReserve = 24 /*0x18*/,
//		LoaderXIPRom = 25 /*0x19*/,
//		LoaderHALCachedMemory = 26 /*0x1A*/,
//		LoaderLargePageFiller = 27 /*0x1B*/,
//		LoaderErrorLogMemory = 28 /*0x1C*/,
//		LoaderMaximum = 29 /*0x1D*/
//	}TYPE_OF_MEMORY, *PTYPE_OF_MEMORY;
//
//	typedef enum _UoWActionType  // 15 elements, 0x4 bytes
//	{
//		UoWAddThisKey = 0 /*0x0*/,
//		UoWAddChildKey = 1 /*0x1*/,
//		UoWDeleteThisKey = 2 /*0x2*/,
//		UoWDeleteChildKey = 3 /*0x3*/,
//		UoWSetValueNew = 4 /*0x4*/,
//		UoWSetValueExisting = 5 /*0x5*/,
//		UoWDeleteValue = 6 /*0x6*/,
//		UoWSetKeyUserFlags = 7 /*0x7*/,
//		UoWSetLastWriteTime = 8 /*0x8*/,
//		UoWSetSecurityDescriptor = 9 /*0x9*/,
//		UoWRenameSubKey = 10 /*0xA*/,
//		UoWRenameOldSubKey = 11 /*0xB*/,
//		UoWRenameNewSubKey = 12 /*0xC*/,
//		UoWIsolation = 13 /*0xD*/,
//		UoWInvalid = 14 /*0xE*/
//	}UoWActionType, *PUoWActionType;
//
//	typedef enum _VI_DEADLOCK_RESOURCE_TYPE  // 10 elements, 0x4 bytes
//	{
//		VfDeadlockUnknown = 0 /*0x0*/,
//		VfDeadlockMutex = 1 /*0x1*/,
//		VfDeadlockMutexAbandoned = 2 /*0x2*/,
//		VfDeadlockFastMutex = 3 /*0x3*/,
//		VfDeadlockFastMutexUnsafe = 4 /*0x4*/,
//		VfDeadlockSpinLock = 5 /*0x5*/,
//		VfDeadlockInStackQueuedSpinLock = 6 /*0x6*/,
//		VfDeadlockUnusedSpinLock = 7 /*0x7*/,
//		VfDeadlockEresource = 8 /*0x8*/,
//		VfDeadlockTypeMaximum = 9 /*0x9*/
//	}VI_DEADLOCK_RESOURCE_TYPE, *PVI_DEADLOCK_RESOURCE_TYPE;
//
//	typedef enum _WHEA_ERROR_PACKET_DATA_FORMAT  // 9 elements, 0x4 bytes
//	{
//		WheaDataFormatIPFSalRecord = 0 /*0x0*/,
//		WheaDataFormatXPFMCA = 1 /*0x1*/,
//		WheaDataFormatMemory = 2 /*0x2*/,
//		WheaDataFormatPCIExpress = 3 /*0x3*/,
//		WheaDataFormatNMIPort = 4 /*0x4*/,
//		WheaDataFormatPCIXBus = 5 /*0x5*/,
//		WheaDataFormatPCIXDevice = 6 /*0x6*/,
//		WheaDataFormatGeneric = 7 /*0x7*/,
//		WheaDataFormatMax = 8 /*0x8*/
//	}WHEA_ERROR_PACKET_DATA_FORMAT, *PWHEA_ERROR_PACKET_DATA_FORMAT;
//
//	typedef enum _WHEA_ERROR_SEVERITY  // 4 elements, 0x4 bytes
//	{
//		WheaErrSevRecoverable = 0 /*0x0*/,
//		WheaErrSevFatal = 1 /*0x1*/,
//		WheaErrSevCorrected = 2 /*0x2*/,
//		WheaErrSevInformational = 3 /*0x3*/
//	}WHEA_ERROR_SEVERITY, *PWHEA_ERROR_SEVERITY;
//
//	typedef enum _WHEA_ERROR_SOURCE_TYPE  // 13 elements, 0x4 bytes
//	{
//		WheaErrSrcTypeMCE = 0 /*0x0*/,
//		WheaErrSrcTypeCMC = 1 /*0x1*/,
//		WheaErrSrcTypeCPE = 2 /*0x2*/,
//		WheaErrSrcTypeNMI = 3 /*0x3*/,
//		WheaErrSrcTypePCIe = 4 /*0x4*/,
//		WheaErrSrcTypeGeneric = 5 /*0x5*/,
//		WheaErrSrcTypeINIT = 6 /*0x6*/,
//		WheaErrSrcTypeBOOT = 7 /*0x7*/,
//		WheaErrSrcTypeSCIGeneric = 8 /*0x8*/,
//		WheaErrSrcTypeIPFMCA = 9 /*0x9*/,
//		WheaErrSrcTypeIPFCMC = 10 /*0xA*/,
//		WheaErrSrcTypeIPFCPE = 11 /*0xB*/,
//		WheaErrSrcTypeMax = 12 /*0xC*/
//	}WHEA_ERROR_SOURCE_TYPE, *PWHEA_ERROR_SOURCE_TYPE;
//
//	typedef enum _WHEA_ERROR_TYPE  // 7 elements, 0x4 bytes
//	{
//		WheaErrTypeProcessor = 0 /*0x0*/,
//		WheaErrTypeMemory = 1 /*0x1*/,
//		WheaErrTypePCIExpress = 2 /*0x2*/,
//		WheaErrTypeNMI = 3 /*0x3*/,
//		WheaErrTypePCIXBus = 4 /*0x4*/,
//		WheaErrTypePCIXDevice = 5 /*0x5*/,
//		WheaErrTypeGeneric = 6 /*0x6*/
//	}WHEA_ERROR_TYPE, *PWHEA_ERROR_TYPE;
//
//	typedef enum _WORKING_SET_TYPE  // 7 elements, 0x4 bytes
//	{
//		WorkingSetTypeUser = 0 /*0x0*/,
//		WorkingSetTypeSession = 1 /*0x1*/,
//		WorkingSetTypeSystemTypes = 2 /*0x2*/,
//		WorkingSetTypeSystemCache = 2 /*0x2*/,
//		WorkingSetTypePagedPool = 3 /*0x3*/,
//		WorkingSetTypeSystemPtes = 4 /*0x4*/,
//		WorkingSetTypeMaximum = 5 /*0x5*/
//	}WORKING_SET_TYPE, *PWORKING_SET_TYPE;
//
//	typedef enum _WOW64_SHARED_INFORMATION  // 13 elements, 0x4 bytes
//	{
//		SharedNtdll32LdrInitializeThunk = 0 /*0x0*/,
//		SharedNtdll32KiUserExceptionDispatcher = 1 /*0x1*/,
//		SharedNtdll32KiUserApcDispatcher = 2 /*0x2*/,
//		SharedNtdll32KiUserCallbackDispatcher = 3 /*0x3*/,
//		SharedNtdll32LdrHotPatchRoutine = 4 /*0x4*/,
//		SharedNtdll32ExpInterlockedPopEntrySListFault = 5 /*0x5*/,
//		SharedNtdll32ExpInterlockedPopEntrySListResume = 6 /*0x6*/,
//		SharedNtdll32ExpInterlockedPopEntrySListEnd = 7 /*0x7*/,
//		SharedNtdll32RtlUserThreadStart = 8 /*0x8*/,
//		SharedNtdll32pQueryProcessDebugInformationRemote = 9 /*0x9*/,
//		SharedNtdll32EtwpNotificationThread = 10 /*0xA*/,
//		SharedNtdll32BaseAddress = 11 /*0xB*/,
//		Wow64SharedPageEntriesCount = 12 /*0xC*/
//	}WOW64_SHARED_INFORMATION, *PWOW64_SHARED_INFORMATION;
//
//	//------------------------------------------------------------------------
//	//------------------------------------------------------------------------
//	// Information about structure types
//
//	typedef struct _ACCESS_REASONS;
//	typedef struct _ACCESS_STATE;
//	typedef struct _ACL;
//	typedef struct _ACTIVATION_CONTEXT;
//	typedef struct _ACTIVATION_CONTEXT_DATA;
//	typedef struct _ACTIVATION_CONTEXT_STACK;
//	typedef struct _ADAPTER_OBJECT;
//	typedef struct _ALIGNED_AFFINITY_SUMMARY;
//	typedef struct _ALPC_COMMUNICATION_INFO;
//	typedef struct _ALPC_COMPLETION_LIST;
//	typedef struct _ALPC_COMPLETION_LIST_HEADER;
//	typedef struct _ALPC_COMPLETION_LIST_STATE;
//	typedef struct _ALPC_COMPLETION_PACKET_LOOKASIDE;
//	typedef struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY;
//	typedef struct _ALPC_DISPATCH_CONTEXT;
//	typedef struct _ALPC_HANDLE_ENTRY;
//	typedef struct _ALPC_HANDLE_TABLE;
//	typedef struct _ALPC_MESSAGE_ATTRIBUTES;
//	typedef struct _ALPC_MESSAGE_ZONE;
//	typedef struct _ALPC_PORT;
//	typedef struct _ALPC_PORT_ATTRIBUTES;
//	typedef struct _ALPC_PROCESS_CONTEXT;
//	typedef struct _AMD64_DBGKD_CONTROL_SET;
//	typedef struct _ARBITER_ADD_RESERVED_PARAMETERS;
//	typedef struct _ARBITER_ALLOCATION_STATE;
//	typedef struct _ARBITER_ALTERNATIVE;
//	typedef struct _ARBITER_BOOT_ALLOCATION_PARAMETERS;
//	typedef struct _ARBITER_CONFLICT_INFO;
//	typedef struct _ARBITER_INSTANCE;
//	typedef struct _ARBITER_INTERFACE;
//	typedef struct _ARBITER_LIST_ENTRY;
//	typedef struct _ARBITER_ORDERING;
//	typedef struct _ARBITER_ORDERING_LIST;
//	typedef struct _ARBITER_PARAMETERS;
//	typedef struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS;
//	typedef struct _ARBITER_QUERY_ARBITRATE_PARAMETERS;
//	typedef struct _ARBITER_QUERY_CONFLICT_PARAMETERS;
//	typedef struct _ARBITER_RETEST_ALLOCATION_PARAMETERS;
//	typedef struct _ARBITER_TEST_ALLOCATION_PARAMETERS;
//	typedef struct _ARC_DISK_INFORMATION;
//	typedef struct _ARM_DBGKD_CONTROL_SET;
//	typedef struct _ASSEMBLY_STORAGE_MAP;
//	typedef struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION;
//	typedef struct _AUX_ACCESS_DATA;
//	typedef struct _BATTERY_REPORTING_SCALE;
//	typedef struct _BITMAP_RANGE;
//	typedef struct _BLOB;
//	typedef struct _BLOB_TYPE;
//	typedef struct _BUS_EXTENSION_LIST;
//	typedef struct _CACHE_DESCRIPTOR;
//	typedef struct _CACHE_MANAGER_CALLBACKS;
//	typedef struct _CACHE_UNINITIALIZE_EVENT;
//	typedef struct _CACHED_CHILD_LIST;
//	typedef struct _CACHED_KSTACK_LIST;
//	typedef struct _CALL_HASH_ENTRY;
//	typedef struct _CALL_PERFORMANCE_DATA;
//	typedef struct _CALLBACK_OBJECT;
//	typedef struct _CELL_DATA;
//	typedef struct _CHILD_LIST;
//	typedef struct _CLIENT_ID;
//	typedef struct _CLIENT_ID32;
//	typedef struct _CLIENT_ID64;
//	typedef union _CLS_LSN;
//	typedef struct _CM_BIG_DATA;
//	typedef struct _CM_CACHED_VALUE_INDEX;
//	typedef struct _CM_CELL_REMAP_BLOCK;
//	typedef struct _CM_FULL_RESOURCE_DESCRIPTOR;
//	typedef struct _CM_INDEX_HINT_BLOCK;
//	typedef struct _CM_INTENT_LOCK;
//	typedef struct _CM_KCB_UOW;
//	typedef struct _CM_KEY_BODY;
//	typedef struct _CM_KEY_CONTROL_BLOCK;
//	typedef struct _CM_KEY_HASH;
//	typedef struct _CM_KEY_HASH_TABLE_ENTRY;
//	typedef struct _CM_KEY_INDEX;
//	typedef struct _CM_KEY_NODE;
//	typedef struct _CM_KEY_REFERENCE;
//	typedef struct _CM_KEY_SECURITY;
//	typedef struct _CM_KEY_SECURITY_CACHE;
//	typedef struct _CM_KEY_SECURITY_CACHE_ENTRY;
//	typedef struct _CM_KEY_VALUE;
//	typedef struct _CM_NAME_CONTROL_BLOCK;
//	typedef struct _CM_NAME_HASH;
//	typedef struct _CM_NOTIFY_BLOCK;
//	typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
//	typedef struct _CM_PARTIAL_RESOURCE_LIST;
//	typedef struct _CM_RESOURCE_LIST;
//	typedef struct _CM_RM;
//	typedef struct _CM_TRANS;
//	typedef struct _CM_VIEW_OF_FILE;
//	typedef struct _CM_WORKITEM;
//	typedef struct _CMHIVE;
//	typedef struct _CMP_OFFSET_ARRAY;
//	typedef struct _COMPRESSED_DATA_INFO;
//	typedef struct _CONFIGURATION_COMPONENT;
//	typedef struct _CONFIGURATION_COMPONENT_DATA;
//	typedef struct _CONTEXT;
//	typedef struct _CONTEXT32_UPDATE;
//	typedef struct _CONTROL_AREA;
//	typedef struct _COUNTER_READING;
//	typedef struct _CPU_INFO;
//	typedef struct _CURDIR;
//	typedef struct _DBGKD_ANY_CONTROL_SET;
//	typedef struct _DBGKD_BREAKPOINTEX;
//	typedef struct _DBGKD_CONTINUE;
//	typedef struct _DBGKD_CONTINUE2;
//	typedef struct _DBGKD_FILL_MEMORY;
//	typedef struct _DBGKD_GET_CONTEXT;
//	typedef struct _DBGKD_GET_INTERNAL_BREAKPOINT32;
//	typedef struct _DBGKD_GET_INTERNAL_BREAKPOINT64;
//	typedef struct _DBGKD_GET_SET_BUS_DATA;
//	typedef struct _DBGKD_GET_VERSION32;
//	typedef struct _DBGKD_GET_VERSION64;
//	typedef struct _DBGKD_LOAD_SYMBOLS32;
//	typedef struct _DBGKD_LOAD_SYMBOLS64;
//	typedef struct _DBGKD_MANIPULATE_STATE32;
//	typedef struct _DBGKD_MANIPULATE_STATE64;
//	typedef struct _DBGKD_QUERY_MEMORY;
//	typedef struct _DBGKD_QUERY_SPECIAL_CALLS;
//	typedef struct _DBGKD_READ_MEMORY32;
//	typedef struct _DBGKD_READ_MEMORY64;
//	typedef struct _DBGKD_READ_WRITE_IO_EXTENDED32;
//	typedef struct _DBGKD_READ_WRITE_IO_EXTENDED64;
//	typedef struct _DBGKD_READ_WRITE_IO32;
//	typedef struct _DBGKD_READ_WRITE_IO64;
//	typedef struct _DBGKD_READ_WRITE_MSR;
//	typedef struct _DBGKD_RESTORE_BREAKPOINT;
//	typedef struct _DBGKD_SEARCH_MEMORY;
//	typedef struct _DBGKD_SET_CONTEXT;
//	typedef struct _DBGKD_SET_INTERNAL_BREAKPOINT32;
//	typedef struct _DBGKD_SET_INTERNAL_BREAKPOINT64;
//	typedef struct _DBGKD_SET_SPECIAL_CALL32;
//	typedef struct _DBGKD_SET_SPECIAL_CALL64;
//	typedef struct _DBGKD_SWITCH_PARTITION;
//	typedef struct _DBGKD_WRITE_BREAKPOINT32;
//	typedef struct _DBGKD_WRITE_BREAKPOINT64;
//	typedef struct _DBGKD_WRITE_MEMORY32;
//	typedef struct _DBGKD_WRITE_MEMORY64;
//	typedef struct _DBGKM_EXCEPTION32;
//	typedef struct _DBGKM_EXCEPTION64;
//	typedef struct _DEFERRED_WRITE;
//	typedef struct _DEVICE_CAPABILITIES;
//	typedef struct _DEVICE_FLAGS;
//	typedef struct _DEVICE_MAP;
//	typedef struct _DEVICE_NODE;
//	typedef struct _DEVICE_OBJECT;
//	typedef struct _DEVICE_OBJECT_POWER_EXTENSION;
//	typedef struct _DEVICE_RELATIONS;
//	typedef struct _DEVOBJ_EXTENSION;
//	typedef struct _DIAGNOSTIC_BUFFER;
//	typedef struct _DIAGNOSTIC_CONTEXT;
//	typedef struct _DISALLOWED_GUIDS;
//	typedef struct _DISPATCHER_HEADER;
//	typedef struct _DOCK_INTERFACE;
//	typedef struct _DRIVER_EXTENSION;
//	typedef struct _DRIVER_OBJECT;
//	typedef struct _DUAL;
//	typedef struct _DUMMY_FILE_OBJECT;
//	typedef struct _DUMP_INITIALIZATION_CONTEXT;
//	typedef struct _DUMP_STACK_CONTEXT;
//	typedef struct _ECP_LIST;
//	typedef struct _EFI_FIRMWARE_INFORMATION;
//	typedef struct _EJOB;
//	typedef struct _EPROCESS;
//	typedef struct _EPROCESS_QUOTA_BLOCK;
//	typedef struct _ERESOURCE;
//	typedef struct _ETHREAD;
//	typedef struct _ETIMER;
//	typedef struct _ETW_BUFFER_CONTEXT;
//	typedef struct _ETW_BUFFER_HANDLE;
//	typedef struct _ETW_GUID_ENTRY;
//	typedef struct _ETW_LAST_ENABLE_INFO;
//	typedef struct _ETW_LOGGER_HANDLE;
//	typedef struct _ETW_PERF_COUNTERS;
//	typedef struct _ETW_PROVIDER_TABLE_ENTRY;
//	typedef struct _ETW_PROVIDER_TRAITS;
//	typedef struct _ETW_REALTIME_CONSUMER;
//	typedef struct _ETW_REF_CLOCK;
//	typedef struct _ETW_REG_ENTRY;
//	typedef struct _ETW_REPLY_QUEUE;
//	typedef struct _ETW_SESSION_PERF_COUNTERS;
//	typedef struct _ETW_SYSTEMTIME;
//	typedef struct _ETW_WMITRACE_WORK;
//	typedef struct _EVENT_DATA_DESCRIPTOR;
//	typedef struct _EVENT_DESCRIPTOR;
//	typedef struct _EVENT_FILTER_DESCRIPTOR;
//	typedef struct _EVENT_FILTER_HEADER;
//	typedef struct _EX_FAST_REF;
//	typedef struct _EX_PUSH_LOCK;
//	typedef struct _EX_PUSH_LOCK_CACHE_AWARE;
//	typedef struct _EX_PUSH_LOCK_WAIT_BLOCK;
//	typedef union _EX_QUEUE_WORKER_INFO;
//	typedef struct _EX_RUNDOWN_REF;
//	typedef struct _EX_WORK_QUEUE;
//	typedef struct _EXCEPTION_POINTERS;
//	typedef struct _EXCEPTION_RECORD;
//	typedef struct _EXCEPTION_RECORD32;
//	typedef struct _EXCEPTION_RECORD64;
//	typedef struct _EXCEPTION_REGISTRATION_RECORD;
//	typedef struct _FAST_IO_DISPATCH;
//	typedef struct _FAST_MUTEX;
//	typedef struct _FILE_BASIC_INFORMATION;
//	typedef struct _FILE_GET_QUOTA_INFORMATION;
//	typedef struct _FILE_NETWORK_OPEN_INFORMATION;
//	typedef struct _FILE_OBJECT;
//	typedef union _FILE_SEGMENT_ELEMENT;
//	typedef struct _FILE_STANDARD_INFORMATION;
//	typedef struct _FIRMWARE_INFORMATION_LOADER_BLOCK;
//	typedef struct _flags;
//	typedef struct _FLS_CALLBACK_INFO;
//	typedef struct _FREE_DISPLAY;
//	typedef struct _FS_FILTER_CALLBACK_DATA;
//	typedef struct _FS_FILTER_CALLBACKS;
//	typedef union _FS_FILTER_PARAMETERS;
//	typedef struct _FSRTL_ADVANCED_FCB_HEADER;
//	typedef struct _GDI_TEB_BATCH;
//	typedef struct _GDI_TEB_BATCH32;
//	typedef struct _GDI_TEB_BATCH64;
//	typedef struct _GENERAL_LOOKASIDE;
//	typedef struct _GENERAL_LOOKASIDE_POOL;
//	typedef struct _GENERIC_MAPPING;
//	typedef struct _GROUP_AFFINITY;
//	typedef struct _GUID;
//	typedef struct _HANDLE_TABLE;
//	typedef struct _HANDLE_TABLE_ENTRY;
//	typedef struct _HANDLE_TABLE_ENTRY_INFO;
//	typedef struct _HANDLE_TRACE_DB_ENTRY;
//	typedef struct _HANDLE_TRACE_DEBUG_INFO;
//	typedef struct _HARDWARE_PTE;
//	typedef struct _HBASE_BLOCK;
//	typedef struct _HBIN;
//	typedef struct _HCELL;
//	typedef struct _HEADLESS_LOADER_BLOCK;
//	typedef struct _HEAP;
//	typedef struct _HEAP_COUNTERS;
//	typedef struct _HEAP_DEBUGGING_INFORMATION;
//	typedef struct _HEAP_ENTRY;
//	typedef struct _HEAP_ENTRY_EXTRA;
//	typedef struct _HEAP_FREE_ENTRY;
//	typedef struct _HEAP_FREE_ENTRY_EXTRA;
//	typedef struct _HEAP_LIST_LOOKUP;
//	typedef struct _HEAP_LOCAL_SEGMENT_INFO;
//	typedef struct _HEAP_LOCK;
//	typedef struct _HEAP_LOOKASIDE;
//	typedef struct _HEAP_PSEUDO_TAG_ENTRY;
//	typedef struct _HEAP_SEGMENT;
//	typedef struct _HEAP_STOP_ON_TAG;
//	typedef struct _HEAP_STOP_ON_VALUES;
//	typedef struct _HEAP_SUBSEGMENT;
//	typedef struct _HEAP_TAG_ENTRY;
//	typedef struct _HEAP_TUNING_PARAMETERS;
//	typedef struct _HEAP_UCR_DESCRIPTOR;
//	typedef struct _HEAP_USERDATA_HEADER;
//	typedef struct _HEAP_VIRTUAL_ALLOC_ENTRY;
//	typedef struct _HHIVE;
//	typedef struct _HIVE_LIST_ENTRY;
//	typedef struct _HIVE_LOAD_FAILURE;
//	typedef struct _HMAP_DIRECTORY;
//	typedef struct _HMAP_ENTRY;
//	typedef struct _HMAP_TABLE;
//	typedef struct _I386_LOADER_BLOCK;
//	typedef struct _IA64_DBGKD_CONTROL_SET;
//	typedef struct _IA64_LOADER_BLOCK;
//	typedef struct _IMAGE_DATA_DIRECTORY;
//	typedef struct _IMAGE_DEBUG_DIRECTORY;
//	typedef struct _IMAGE_DOS_HEADER;
//	typedef struct _IMAGE_FILE_HEADER;
//	typedef struct _IMAGE_NT_HEADERS64;
//	typedef struct _IMAGE_OPTIONAL_HEADER64;
//	typedef struct _IMAGE_ROM_OPTIONAL_HEADER;
//	typedef struct _IMAGE_SECTION_HEADER;
//	typedef struct _IMAGE_SECURITY_CONTEXT;
//	typedef struct _INITIAL_PRIVILEGE_SET;
//	typedef struct _INTERFACE;
//	typedef struct _INTERLOCK_SEQ;
//	typedef struct _IO_CLIENT_EXTENSION;
//	typedef struct _IO_COMPLETION_CONTEXT;
//	typedef struct _IO_DRIVER_CREATE_CONTEXT;
//	typedef struct _IO_MINI_COMPLETION_PACKET_USER;
//	typedef struct _IO_PRIORITY_INFO;
//	typedef struct _IO_RESOURCE_DESCRIPTOR;
//	typedef struct _IO_RESOURCE_LIST;
//	typedef struct _IO_RESOURCE_REQUIREMENTS_LIST;
//	typedef struct _IO_SECURITY_CONTEXT;
//	typedef struct _IO_STACK_LOCATION;
//	typedef struct _IO_STATUS_BLOCK;
//	typedef struct _IO_STATUS_BLOCK32;
//	typedef struct _IO_TIMER;
//	typedef struct _IO_WORKITEM;
//	typedef struct _iobuf;
//	typedef struct _IOP_FILE_OBJECT_EXTENSION;
//	typedef struct _IOV_FORCED_PENDING_TRACE;
//	typedef struct _IRP;
//	typedef struct _JOB_ACCESS_STATE;
//	typedef struct _KAFFINITY_ENUMERATION_CONTEXT;
//	typedef struct _KAFFINITY_EX;
//	typedef struct _KALPC_HANDLE_DATA;
//	typedef struct _KALPC_MESSAGE;
//	typedef struct _KALPC_MESSAGE_ATTRIBUTES;
//	typedef struct _KALPC_REGION;
//	typedef struct _KALPC_RESERVE;
//	typedef struct _KALPC_SECTION;
//	typedef struct _KALPC_SECURITY_DATA;
//	typedef struct _KALPC_VIEW;
//	typedef struct _KAPC;
//	typedef struct _KAPC_STATE;
//	typedef union _KBUGCHECK_ACTIVE_STATE;
//	typedef struct _KDESCRIPTOR;
//	typedef struct _KDEVICE_QUEUE;
//	typedef struct _KDEVICE_QUEUE_ENTRY;
//	typedef struct _KDPC;
//	typedef struct _KDPC_DATA;
//	typedef struct _KENLISTMENT;
//	typedef struct _KENLISTMENT_HISTORY;
//	typedef struct _KERNEL_STACK_CONTROL;
//	typedef struct _KERNEL_STACK_SEGMENT;
//	typedef struct _KEVENT;
//	typedef struct _KEXCEPTION_FRAME;
//	typedef union _KEXECUTE_OPTIONS;
//	typedef struct _KGATE;
//	typedef union _KGDTENTRY64;
//	typedef struct _KGUARDED_MUTEX;
//	typedef union _KIDTENTRY64;
//	typedef struct _KINTERRUPT;
//	typedef struct _KLOCK_QUEUE_HANDLE;
//	typedef struct _KMUTANT;
//	typedef struct _KNODE;
//	typedef struct _KPCR;
//	typedef struct _KPRCB;
//	typedef struct _KPROCESS;
//	typedef struct _KPROCESSOR_STATE;
//	typedef struct _KQUEUE;
//	typedef struct _KREQUEST_PACKET;
//	typedef struct _KRESOURCEMANAGER;
//	typedef struct _KRESOURCEMANAGER_COMPLETION_BINDING;
//	typedef struct _KSEMAPHORE;
//	typedef struct _KSPECIAL_REGISTERS;
//	typedef struct _KSPIN_LOCK_QUEUE;
//	typedef union _KSTACK_COUNT;
//	typedef struct _KSYSTEM_TIME;
//	typedef struct _KTHREAD;
//	typedef struct _KTHREAD_COUNTERS;
//	typedef struct _KTIMER;
//	typedef struct _KTIMER_TABLE;
//	typedef struct _KTIMER_TABLE_ENTRY;
//	typedef struct _KTM;
//	typedef struct _KTMNOTIFICATION_PACKET;
//	typedef struct _KTMOBJECT_NAMESPACE;
//	typedef struct _KTMOBJECT_NAMESPACE_LINK;
//	typedef struct _KTRANSACTION;
//	typedef struct _KTRANSACTION_HISTORY;
//	typedef struct _KTRAP_FRAME;
//	typedef struct _KTSS64;
//	typedef struct _KUMS_CONTEXT_HEADER;
//	typedef struct _KUSER_SHARED_DATA;
//	typedef struct _KWAIT_BLOCK;
//	typedef union _KWAIT_STATUS_REGISTER;
//	typedef union _LARGE_INTEGER;
//	typedef struct _LAZY_WRITER;
//	typedef struct _LDR_DATA_TABLE_ENTRY;
//	typedef struct _LIST_ENTRY;
//	typedef struct _LIST_ENTRY32;
//	typedef struct _LIST_ENTRY64;
//	typedef struct _LOADER_PARAMETER_BLOCK;
//	typedef struct _LOADER_PARAMETER_EXTENSION;
//	typedef struct _LOADER_PERFORMANCE_DATA;
//	typedef struct _LOOKASIDE_LIST_EX;
//	typedef struct _LPCP_MESSAGE;
//	typedef struct _LPCP_NONPAGED_PORT_QUEUE;
//	typedef struct _LPCP_PORT_OBJECT;
//	typedef struct _LPCP_PORT_QUEUE;
//	typedef struct _LUID;
//	typedef struct _LUID_AND_ATTRIBUTES;
//	typedef struct _M128A;
//	typedef struct _MAILSLOT_CREATE_PARAMETERS;
//	typedef struct _MAPPED_FILE_SEGMENT;
//	typedef struct _MBCB;
//	typedef struct _MDL;
//	typedef struct _MEMORY_ALLOCATION_DESCRIPTOR;
//	typedef struct _MI_COLOR_BASE;
//	typedef struct _MI_EXTRA_IMAGE_INFORMATION;
//	typedef struct _MI_IMAGE_SECURITY_REFERENCE;
//	typedef struct _MI_PAGEFILE_TRACES;
//	typedef struct _MI_SECTION_CREATION_GATE;
//	typedef struct _MI_SECTION_IMAGE_INFORMATION;
//	typedef struct _MI_SPECIAL_POOL;
//	typedef struct _MI_SPECIAL_POOL_PTE_LIST;
//	typedef struct _MI_SYSTEM_PTE_TYPE;
//	typedef struct _MI_VERIFIER_POOL_HEADER;
//	typedef struct _MM_AVL_TABLE;
//	typedef struct _MM_DRIVER_VERIFIER_DATA;
//	typedef struct _MM_PAGE_ACCESS_INFO;
//	typedef union _MM_PAGE_ACCESS_INFO_FLAGS;
//	typedef struct _MM_PAGE_ACCESS_INFO_HEADER;
//	typedef struct _MM_PAGED_POOL_INFO;
//	typedef struct _MM_SESSION_SPACE;
//	typedef struct _MM_SESSION_SPACE_FLAGS;
//	typedef union _MM_STORE_KEY;
//	typedef struct _MM_SUBSECTION_AVL_TABLE;
//	typedef struct _MMADDRESS_LIST;
//	typedef struct _MMADDRESS_NODE;
//	typedef struct _MMBANKED_SECTION;
//	typedef struct _MMEXTEND_INFO;
//	typedef struct _MMMOD_WRITER_MDL_ENTRY;
//	typedef struct _MMPAGING_FILE;
//	typedef struct _MMPFN;
//	typedef struct _MMPFNENTRY;
//	typedef struct _MMPFNLIST;
//	typedef struct _MMPTE;
//	typedef struct _MMPTE_HARDWARE;
//	typedef struct _MMPTE_LIST;
//	typedef struct _MMPTE_PROTOTYPE;
//	typedef struct _MMPTE_SOFTWARE;
//	typedef struct _MMPTE_SUBSECTION;
//	typedef struct _MMPTE_TIMESTAMP;
//	typedef struct _MMPTE_TRANSITION;
//	typedef struct _MMSECTION_FLAGS;
//	typedef struct _MMSECURE_FLAGS;
//	typedef struct _MMSESSION;
//	typedef struct _MMSUBSECTION_FLAGS;
//	typedef struct _MMSUBSECTION_NODE;
//	typedef struct _MMSUPPORT;
//	typedef struct _MMSUPPORT_FLAGS;
//	typedef struct _MMVAD;
//	typedef struct _MMVAD_FLAGS;
//	typedef struct _MMVAD_FLAGS2;
//	typedef struct _MMVAD_FLAGS3;
//	typedef struct _MMVAD_LONG;
//	typedef struct _MMVAD_SHORT;
//	typedef struct _MMVIEW;
//	typedef struct _MMWSL;
//	typedef struct _MMWSLE;
//	typedef struct _MMWSLE_FREE_ENTRY;
//	typedef struct _MMWSLE_HASH;
//	typedef struct _MMWSLE_NONDIRECT_HASH;
//	typedef struct _MMWSLENTRY;
//	typedef struct _MSUBSECTION;
//	typedef struct _NAMED_PIPE_CREATE_PARAMETERS;
//	typedef struct _NBQUEUE_BLOCK;
//	typedef struct _NETWORK_LOADER_BLOCK;
//	typedef struct _NLS_DATA_BLOCK;
//	typedef struct _NPAGED_LOOKASIDE_LIST;
//	typedef struct _NT_TIB;
//	typedef struct _NT_TIB32;
//	typedef struct _NT_TIB64;
//	typedef struct _OB_DUPLICATE_OBJECT_STATE;
//	typedef struct _OBJECT_ATTRIBUTES;
//	typedef struct _OBJECT_CREATE_INFORMATION;
//	typedef struct _OBJECT_DIRECTORY;
//	typedef struct _OBJECT_DIRECTORY_ENTRY;
//	typedef struct _OBJECT_DUMP_CONTROL;
//	typedef struct _OBJECT_HANDLE_COUNT_DATABASE;
//	typedef struct _OBJECT_HANDLE_COUNT_ENTRY;
//	typedef struct _OBJECT_HANDLE_INFORMATION;
//	typedef struct _OBJECT_HEADER;
//	typedef struct _OBJECT_HEADER_CREATOR_INFO;
//	typedef struct _OBJECT_HEADER_HANDLE_INFO;
//	typedef struct _OBJECT_HEADER_NAME_INFO;
//	typedef struct _OBJECT_HEADER_PROCESS_INFO;
//	typedef struct _OBJECT_HEADER_QUOTA_INFO;
//	typedef struct _OBJECT_NAME_INFORMATION;
//	typedef struct _OBJECT_REF_INFO;
//	typedef struct _OBJECT_REF_STACK_INFO;
//	typedef struct _OBJECT_REF_TRACE;
//	typedef struct _OBJECT_SYMBOLIC_LINK;
//	typedef struct _OBJECT_TYPE;
//	typedef struct _OBJECT_TYPE_INITIALIZER;
//	typedef struct _OBP_LOOKUP_CONTEXT;
//	typedef struct _OPEN_PACKET;
//	typedef struct _OWNER_ENTRY;
//	typedef struct _PAGED_LOOKASIDE_LIST;
//	typedef struct _PAGEFAULT_HISTORY;
//	typedef struct _PCAT_FIRMWARE_INFORMATION;
//	typedef struct _PCW_BUFFER;
//	typedef union _PCW_CALLBACK_INFORMATION;
//	typedef struct _PCW_COUNTER_DESCRIPTOR;
//	typedef struct _PCW_COUNTER_INFORMATION;
//	typedef struct _PCW_DATA;
//	typedef struct _PCW_INSTANCE;
//	typedef struct _PCW_MASK_INFORMATION;
//	typedef struct _PCW_PROCESSOR_INFO;
//	typedef struct _PCW_REGISTRATION;
//	typedef struct _PCW_REGISTRATION_INFORMATION;
//	typedef struct _PEB;
//	typedef struct _PEB_LDR_DATA;
//	typedef struct _PEB32;
//	typedef struct _PEB64;
//	typedef struct _PENDING_RELATIONS_LIST_ENTRY;
//	typedef struct _PERFINFO_GROUPMASK;
//	typedef struct _PERFINFO_TRACE_HEADER;
//	typedef struct _PF_KERNEL_GLOBALS;
//	typedef struct _PHYSICAL_MEMORY_DESCRIPTOR;
//	typedef struct _PHYSICAL_MEMORY_RUN;
//	typedef struct _PI_BUS_EXTENSION;
//	typedef struct _PI_RESOURCE_ARBITER_ENTRY;
//	typedef struct _PLUGPLAY_EVENT_BLOCK;
//	typedef struct _PNP_ASSIGN_RESOURCES_CONTEXT;
//	typedef struct _PNP_DEVICE_ACTION_ENTRY;
//	typedef struct _PNP_DEVICE_COMPLETION_QUEUE;
//	typedef struct _PNP_DEVICE_COMPLETION_REQUEST;
//	typedef struct _PNP_DEVICE_EVENT_ENTRY;
//	typedef struct _PNP_DEVICE_EVENT_LIST;
//	typedef struct _PNP_RESOURCE_REQUEST;
//	typedef struct _PO_DEVICE_NOTIFY;
//	typedef struct _PO_DEVICE_NOTIFY_ORDER;
//	typedef struct _PO_DIAG_STACK_RECORD;
//	typedef struct _PO_HIBER_PERF;
//	typedef struct _PO_IRP_MANAGER;
//	typedef struct _PO_IRP_QUEUE;
//	typedef struct _PO_MEMORY_IMAGE;
//	typedef struct _PO_NOTIFY_ORDER_LEVEL;
//	typedef struct _POOL_BLOCK_HEAD;
//	typedef struct _POOL_DESCRIPTOR;
//	typedef struct _POOL_HACKER;
//	typedef struct _POOL_HEADER;
//	typedef struct _POOL_TRACKER_BIG_PAGES;
//	typedef struct _POOL_TRACKER_TABLE;
//	typedef struct _POP_ACTION_TRIGGER;
//	typedef struct _POP_DEVICE_SYS_STATE;
//	typedef struct _POP_HIBER_CONTEXT;
//	typedef struct _POP_POWER_ACTION;
//	typedef struct _POP_SHUTDOWN_BUG_CHECK;
//	typedef struct _POP_SYSTEM_IDLE;
//	typedef struct _POP_THERMAL_ZONE;
//	typedef struct _POP_THERMAL_ZONE_METRICS;
//	typedef struct _POP_TRIGGER_WAIT;
//	typedef struct _PORT_MESSAGE;
//	typedef struct _PORT_MESSAGE32;
//	typedef struct _POWER_ACTION_POLICY;
//	typedef struct _POWER_SEQUENCE;
//	typedef union _POWER_STATE;
//	typedef struct _PP_LOOKASIDE_LIST;
//	typedef struct _PPC_DBGKD_CONTROL_SET;
//	typedef struct _PPM_FFH_THROTTLE_STATE_INFO;
//	typedef struct _PPM_IDLE_STATE;
//	typedef struct _PPM_IDLE_STATES;
//	typedef struct _PPM_PERF_STATE;
//	typedef struct _PPM_PERF_STATES;
//	typedef struct _PRIVATE_CACHE_MAP;
//	typedef struct _PRIVATE_CACHE_MAP_FLAGS;
//	typedef struct _PRIVILEGE_SET;
//	typedef struct _PROC_HISTORY_ENTRY;
//	typedef struct _PROC_IDLE_ACCOUNTING;
//	typedef struct _PROC_IDLE_SNAP;
//	typedef struct _PROC_IDLE_STATE_ACCOUNTING;
//	typedef struct _PROC_IDLE_STATE_BUCKET;
//	typedef struct _PROC_PERF_CONSTRAINT;
//	typedef struct _PROC_PERF_DOMAIN;
//	typedef struct _PROC_PERF_LOAD;
//	typedef struct _PROCESSOR_IDLESTATE_INFO;
//	typedef struct _PROCESSOR_IDLESTATE_POLICY;
//	typedef struct _PROCESSOR_NUMBER;
//	typedef struct _PROCESSOR_PERFSTATE_POLICY;
//	typedef struct _PROCESSOR_POWER_STATE;
//	typedef struct _PROFILE_PARAMETER_BLOCK;
//	typedef union _PS_CLIENT_SECURITY_CONTEXT;
//	typedef struct _PS_CPU_QUOTA_BLOCK;
//	typedef struct _PS_PER_CPU_QUOTA_CACHE_AWARE;
//	typedef union _PSP_CPU_QUOTA_APC;
//	typedef union _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA;
//	typedef struct _PTE_TRACKER;
//	typedef struct _QUAD;
//	typedef struct _RELATION_LIST;
//	typedef struct _RELATION_LIST_ENTRY;
//	typedef struct _RELATIVE_SYMLINK_INFO;
//	typedef struct _REMOTE_PORT_VIEW;
//	typedef struct _REQUEST_MAILBOX;
//	typedef struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME;
//	typedef struct _RTL_ATOM_TABLE;
//	typedef struct _RTL_ATOM_TABLE_ENTRY;
//	typedef struct _RTL_AVL_TABLE;
//	typedef struct _RTL_AVL_TREE;
//	typedef struct _RTL_BALANCED_LINKS;
//	typedef struct _RTL_BALANCED_NODE;
//	typedef struct _RTL_BITMAP;
//	typedef struct _RTL_CRITICAL_SECTION;
//	typedef struct _RTL_CRITICAL_SECTION_DEBUG;
//	typedef struct _RTL_DRIVE_LETTER_CURDIR;
//	typedef struct _RTL_DYNAMIC_HASH_TABLE;
//	typedef struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT;
//	typedef struct _RTL_DYNAMIC_HASH_TABLE_ENTRY;
//	typedef struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR;
//	typedef struct _RTL_HANDLE_TABLE;
//	typedef struct _RTL_HANDLE_TABLE_ENTRY;
//	typedef struct _RTL_RANGE;
//	typedef struct _RTL_RANGE_LIST;
//	typedef struct _RTL_RB_TREE;
//	typedef struct _RTL_SRWLOCK;
//	typedef struct _RTL_UMS_CONTEXT;
//	typedef struct _RTL_USER_PROCESS_PARAMETERS;
//	typedef struct _RTLP_RANGE_LIST_ENTRY;
//	typedef struct _SCSI_REQUEST_BLOCK;
//	typedef struct _SE_AUDIT_PROCESS_CREATION_INFO;
//	typedef struct _SECTION_IMAGE_INFORMATION;
//	typedef struct _SECTION_OBJECT;
//	typedef struct _SECTION_OBJECT_POINTERS;
//	typedef struct _SECURITY_CLIENT_CONTEXT;
//	typedef struct _SECURITY_DESCRIPTOR;
//	typedef struct _SECURITY_DESCRIPTOR_RELATIVE;
//	typedef struct _SECURITY_QUALITY_OF_SERVICE;
//	typedef struct _SECURITY_SUBJECT_CONTEXT;
//	typedef struct _SEGMENT;
//	typedef struct _SEGMENT_FLAGS;
//	typedef struct _SEGMENT_OBJECT;
//	typedef struct _SEP_AUDIT_POLICY;
//	typedef struct _SEP_LOGON_SESSION_REFERENCES;
//	typedef struct _SEP_TOKEN_PRIVILEGES;
//	typedef struct _SHARED_CACHE_MAP;
//	typedef struct _SHARED_CACHE_MAP_LIST_CURSOR;
//	typedef struct _SID;
//	typedef struct _SID_AND_ATTRIBUTES;
//	typedef struct _SID_AND_ATTRIBUTES_HASH;
//	typedef struct _SID_IDENTIFIER_AUTHORITY;
//	typedef struct _SINGLE_LIST_ENTRY;
//	typedef struct _SINGLE_LIST_ENTRY32;
//	typedef struct _SLIST_ENTRY;
//	typedef union _SLIST_HEADER;
//	typedef struct _SMBIOS_TABLE_HEADER;
//	typedef struct _STACK_TABLE;
//	typedef struct _STRING;
//	typedef struct _STRING32;
//	typedef struct _STRING64;
//	typedef struct _SUBSECTION;
//	typedef struct _SYSPTES_HEADER;
//	typedef struct _SYSTEM_POWER_CAPABILITIES;
//	typedef struct _SYSTEM_POWER_LEVEL;
//	typedef struct _SYSTEM_POWER_POLICY;
//	typedef struct _SYSTEM_POWER_STATE_CONTEXT;
//	typedef struct _SYSTEM_TRACE_HEADER;
//	typedef struct _TEB;
//	typedef struct _TEB_ACTIVE_FRAME;
//	typedef struct _TEB_ACTIVE_FRAME_CONTEXT;
//	typedef struct _TEB32;
//	typedef struct _TEB64;
//	typedef struct _TERMINATION_PORT;
//	typedef struct _THERMAL_INFORMATION;
//	typedef struct _THERMAL_INFORMATION_EX;
//	typedef struct _THREAD_PERFORMANCE_DATA;
//	typedef struct _TIME_FIELDS;
//	typedef struct _TlgProvider_t;
//	typedef struct _TlgProviderMetadata_t;
//	typedef struct _TOKEN;
//	typedef struct _TOKEN_ACCESS_INFORMATION;
//	typedef struct _TOKEN_AUDIT_POLICY;
//	typedef struct _TOKEN_CONTROL;
//	typedef struct _TOKEN_MANDATORY_POLICY;
//	typedef struct _TOKEN_PRIVILEGES;
//	typedef struct _TOKEN_SOURCE;
//	typedef struct _TP_CALLBACK_ENVIRON_V3;
//	typedef struct _TP_CALLBACK_INSTANCE;
//	typedef struct _TP_CLEANUP_GROUP;
//	typedef struct _TP_DIRECT;
//	typedef struct _TP_NBQ_GUARD;
//	typedef struct _TP_POOL;
//	typedef struct _TP_TASK;
//	typedef struct _TP_TASK_CALLBACKS;
//	typedef struct _TPM_BOOT_ENTROPY_LDR_RESULT;
//	typedef struct _TRACE_ENABLE_CONTEXT;
//	typedef struct _TRACE_ENABLE_CONTEXT_EX;
//	typedef struct _TRACE_ENABLE_INFO;
//	typedef struct _TraceLoggingMetadata_t;
//	typedef struct _TXN_PARAMETER_BLOCK;
//	typedef union _ULARGE_INTEGER;
//	typedef struct _UMS_CONTROL_BLOCK;
//	typedef struct _UNEXPECTED_INTERRUPT;
//	typedef struct _UNICODE_STRING;
//	typedef struct _VACB;
//	typedef struct _VACB_ARRAY_HEADER;
//	typedef struct _VACB_LEVEL_ALLOCATION_LIST;
//	typedef struct _VACB_LEVEL_REFERENCE;
//	typedef struct _VERIFIER_SHARED_EXPORT_THUNK;
//	typedef struct _VF_ADDRESS_RANGE;
//	typedef struct _VF_AVL_TABLE;
//	typedef struct _VF_AVL_TREE;
//	typedef struct _VF_AVL_TREE_NODE;
//	typedef struct _VF_KE_CRITICAL_REGION_TRACE;
//	typedef struct _VF_POOL_TRACE;
//	typedef struct _VF_SUSPECT_DRIVER_ENTRY;
//	typedef struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS;
//	typedef struct _VF_TARGET_DRIVER;
//	typedef struct _VF_TARGET_VERIFIED_DRIVER_DATA;
//	typedef struct _VF_TRACKER;
//	typedef struct _VF_TRACKER_STAMP;
//	typedef struct _VF_WATCHDOG_IRP;
//	typedef struct _VI_DEADLOCK_GLOBALS;
//	typedef struct _VI_DEADLOCK_NODE;
//	typedef struct _VI_DEADLOCK_RESOURCE;
//	typedef struct _VI_DEADLOCK_THREAD;
//	typedef struct _VI_FAULT_TRACE;
//	typedef struct _VI_POOL_ENTRY;
//	typedef struct _VI_POOL_ENTRY_INUSE;
//	typedef struct _VI_POOL_PAGE_HEADER;
//	typedef struct _VI_TRACK_IRQL;
//	typedef struct _VI_VERIFIER_ISSUE;
//	typedef struct _VIRTUAL_EFI_RUNTIME_SERVICES;
//	typedef struct _VOLUME_CACHE_MAP;
//	typedef struct _VPB;
//	typedef struct _WAIT_CONTEXT_BLOCK;
//	typedef union _WHEA_ERROR_PACKET_FLAGS;
//	typedef struct _WHEA_ERROR_PACKET_V2;
//	typedef struct _WHEA_ERROR_RECORD;
//	typedef struct _WHEA_ERROR_RECORD_HEADER;
//	typedef union _WHEA_ERROR_RECORD_HEADER_FLAGS;
//	typedef union _WHEA_ERROR_RECORD_HEADER_VALIDBITS;
//	typedef struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
//	typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;
//	typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;
//	typedef union _WHEA_ERROR_STATUS;
//	typedef struct _WHEA_MEMORY_ERROR_SECTION;
//	typedef union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS;
//	typedef union _WHEA_PERSISTENCE_INFO;
//	typedef union _WHEA_REVISION;
//	typedef union _WHEA_TIMESTAMP;
//	typedef struct _WMI_BUFFER_HEADER;
//	typedef struct _WMI_LOGGER_CONTEXT;
//	typedef struct _WMI_TRACE_PACKET;
//	typedef struct _WORK_QUEUE_ENTRY;
//	typedef struct _WORK_QUEUE_ITEM;
//	typedef struct _X86_DBGKD_CONTROL_SET;
//	typedef struct _XSAVE_AREA;
//	typedef struct _XSAVE_AREA_HEADER;
//	typedef struct _XSAVE_FORMAT;
//	typedef struct _XSTATE_CONFIGURATION;
//	typedef struct _XSTATE_CONTEXT;
//	typedef struct _XSTATE_FEATURE;
//	typedef struct _XSTATE_SAVE;
//
//	//------------------------------------------------------------------------
//	//------------------------------------------------------------------------
//	// Declaration of Function types
//
//	typedef VOID(NEAR CDECL FUNCT_00A3_00A2_CleanupGroupCancelCallback_DeRefSecurityDescriptor_PostRoutine) (VOID*, VOID*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_00AA_FinalizationCallback) (struct _TP_CALLBACK_INSTANCE*, VOID*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_00C7_ExecuteCallback) (struct _TP_CALLBACK_INSTANCE*, struct _TP_TASK*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_00CC_Unposted) (struct _TP_TASK*, struct _TP_POOL*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_00DF_Callback) (struct _TP_CALLBACK_INSTANCE*, struct _TP_DIRECT*, VOID*, struct _IO_STATUS_BLOCK*);
//	typedef enum _EXCEPTION_DISPOSITION(NEAR CDECL FUNCT_0160_015F_Handler) (struct _EXCEPTION_RECORD*, VOID*, struct _CONTEXT*, VOID*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_0284_PostProcessInitRoutine_DispatchAddress_FinishRoutine) ();
//	typedef VOID(NEAR CDECL FUNCT_00A3_0587_DeferredRoutine) (struct _KDPC*, VOID*, VOID*, VOID*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_0666_NormalRoutine) (VOID*, VOID*, VOID*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_065D_KernelRoutine) (struct _KAPC*, FUNCT_00A3_0666_NormalRoutine**, VOID**, VOID**, VOID**);
//	typedef VOID(NEAR CDECL FUNCT_00A3_0666_NormalRoutine) (VOID*, VOID*, VOID*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_066B_RundownRoutine) (struct _KAPC*);
//	typedef VOID* (NEAR CDECL FUNCT_00A6_071A_AllocateEx) (enum _POOL_TYPE, UINT64, ULONG32, struct _LOOKASIDE_LIST_EX*);
//	typedef VOID* (NEAR CDECL FUNCT_00A6_0724_Allocate) (enum _POOL_TYPE, UINT64, ULONG32);
//	typedef VOID(NEAR CDECL FUNCT_00A3_0729_FreeEx) (VOID*, struct _LOOKASIDE_LIST_EX*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead) (VOID*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_07A2_IdleCheck_DestroyProcedure) (VOID*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_07E5_FeedbackHandler) (ULONG32*, UINT64, UINT8);
//	typedef VOID(NEAR CDECL FUNCT_00A3_07EA_GetFFHThrottleState) (UINT64*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_07EE_BoostPolicyHandler_StallRoutine) (ULONG32);
//	typedef ULONG32(NEAR CDECL FUNCT_0009_07F1_PerfSelectionHandler) (UINT64, ULONG32, ULONG32, ULONG32, ULONG32, ULONG32*, ULONG32*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_07FA_PerfHandler) (UINT64, ULONG32);
//	typedef VOID(NEAR CDECL FUNCT_00A3_082B_WorkerRoutine) (VOID*, VOID*, VOID*, VOID*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_0940_AddDevice) (struct _DRIVER_OBJECT*, struct _DEVICE_OBJECT*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_0958_PreAcquireForSectionSynchronization_PreReleaseForSectionSynchronization_PreAcquireForCcFlush_PreReleaseForCcFlush_PreAcquireForModifiedPageWriter_PreReleaseForModifiedPageWriter) (struct _FS_FILTER_CALLBACK_DATA*, VOID**);
//	typedef VOID(NEAR CDECL FUNCT_00A3_09D1_PostAcquireForSectionSynchronization_PostReleaseForSectionSynchronization_PostAcquireForCcFlush_PostReleaseForCcFlush_PostAcquireForModifiedPageWriter_PostReleaseForModifiedPageWriter) (struct _FS_FILTER_CALLBACK_DATA*, LONG32, VOID*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_09F5_FastIoCheckIfPossible) (struct _FILE_OBJECT*, union _LARGE_INTEGER*, ULONG32, UINT8, ULONG32, UINT8, struct _IO_STATUS_BLOCK*, struct _DEVICE_OBJECT*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_09FF_FastIoRead_FastIoWrite) (struct _FILE_OBJECT*, union _LARGE_INTEGER*, ULONG32, UINT8, ULONG32, VOID*, struct _IO_STATUS_BLOCK*, struct _DEVICE_OBJECT*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_0A09_FastIoQueryBasicInfo) (struct _FILE_OBJECT*, UINT8, struct _FILE_BASIC_INFORMATION*, struct _IO_STATUS_BLOCK*, struct _DEVICE_OBJECT*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_0A17_FastIoQueryStandardInfo) (struct _FILE_OBJECT*, UINT8, struct _FILE_STANDARD_INFORMATION*, struct _IO_STATUS_BLOCK*, struct _DEVICE_OBJECT*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_0A25_FastIoLock) (struct _FILE_OBJECT*, union _LARGE_INTEGER*, union _LARGE_INTEGER*, struct _EPROCESS*, ULONG32, UINT8, UINT8, struct _IO_STATUS_BLOCK*, struct _DEVICE_OBJECT*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_0BCE_FastIoUnlockSingle) (struct _FILE_OBJECT*, union _LARGE_INTEGER*, union _LARGE_INTEGER*, struct _EPROCESS*, ULONG32, struct _IO_STATUS_BLOCK*, struct _DEVICE_OBJECT*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_0BD7_FastIoUnlockAll) (struct _FILE_OBJECT*, struct _EPROCESS*, struct _IO_STATUS_BLOCK*, struct _DEVICE_OBJECT*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_0BDD_FastIoUnlockAllByKey) (struct _FILE_OBJECT*, VOID*, ULONG32, struct _IO_STATUS_BLOCK*, struct _DEVICE_OBJECT*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_0BE4_FastIoDeviceControl) (struct _FILE_OBJECT*, UINT8, VOID*, ULONG32, VOID*, ULONG32, ULONG32, struct _IO_STATUS_BLOCK*, struct _DEVICE_OBJECT*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_0BEF_AcquireFileForNtCreateSection_ReleaseFileForNtCreateSection) (struct _FILE_OBJECT*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_0BF2_FastIoDetachDevice) (struct _DEVICE_OBJECT*, struct _DEVICE_OBJECT*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_0BF6_FastIoQueryNetworkOpenInfo) (struct _FILE_OBJECT*, UINT8, struct _FILE_NETWORK_OPEN_INFORMATION*, struct _IO_STATUS_BLOCK*, struct _DEVICE_OBJECT*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_0C06_AcquireForModWrite) (struct _FILE_OBJECT*, union _LARGE_INTEGER*, struct _ERESOURCE**, struct _DEVICE_OBJECT*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_0C0C_MdlRead_PrepareMdlWrite) (struct _FILE_OBJECT*, union _LARGE_INTEGER*, ULONG32, ULONG32, struct _MDL**, struct _IO_STATUS_BLOCK*, struct _DEVICE_OBJECT*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_0C20_MdlReadComplete_MdlReadCompleteCompressed) (struct _FILE_OBJECT*, struct _MDL*, struct _DEVICE_OBJECT*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_0C25_MdlWriteComplete_MdlWriteCompleteCompressed) (struct _FILE_OBJECT*, union _LARGE_INTEGER*, struct _MDL*, struct _DEVICE_OBJECT*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_0C2B_FastIoReadCompressed_FastIoWriteCompressed) (struct _FILE_OBJECT*, union _LARGE_INTEGER*, ULONG32, ULONG32, VOID*, struct _MDL**, struct _IO_STATUS_BLOCK*, struct _COMPRESSED_DATA_INFO*, ULONG32, struct _DEVICE_OBJECT*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_0C40_FastIoQueryOpen) (struct _IRP*, struct _FILE_NETWORK_OPEN_INFORMATION*, struct _DEVICE_OBJECT*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_0C67_UserApcRoutine) (VOID*, struct _IO_STATUS_BLOCK*, ULONG32);
//	typedef VOID(NEAR CDECL FUNCT_00A3_0C6C_DriverStartIo_CancelRoutine) (struct _DEVICE_OBJECT*, struct _IRP*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_0EEF_CompletionRoutine) (struct _DEVICE_OBJECT*, struct _IRP*, VOID*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_0EF4_ReleaseForModWrite) (struct _FILE_OBJECT*, struct _ERESOURCE*, struct _DEVICE_OBJECT*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_0EF9_AcquireForCcFlush_ReleaseForCcFlush) (struct _FILE_OBJECT*, struct _DEVICE_OBJECT*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_0EFD_DriverInit) (struct _DRIVER_OBJECT*, struct _UNICODE_STRING*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_0F01_DriverUnload) (struct _DRIVER_OBJECT*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_0F05_MajorFunction) (struct _DEVICE_OBJECT*, struct _IRP*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_0F0F_TimerRoutine) (struct _DEVICE_OBJECT*, VOID*);
//	typedef enum _IO_ALLOCATION_ACTION(NEAR CDECL FUNCT_0F1F_0F1E_DeviceRoutine) (struct _DEVICE_OBJECT*, struct _IRP*, VOID*, VOID*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_0FBB_DumpProcedure) (VOID*, struct _OBJECT_DUMP_CONTROL*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_0FC3_OpenProcedure) (enum _OB_OPEN_REASON, CHAR, struct _EPROCESS*, VOID*, ULONG32*, ULONG32);
//	typedef VOID(NEAR CDECL FUNCT_00A3_0FD1_CloseProcedure) (struct _EPROCESS*, VOID*, UINT64, UINT64);
//	typedef LONG32(NEAR CDECL FUNCT_005B_0FD7_ParseProcedure) (VOID*, VOID*, struct _ACCESS_STATE*, CHAR, ULONG32, struct _UNICODE_STRING*, struct _UNICODE_STRING*, VOID*, struct _SECURITY_QUALITY_OF_SERVICE*, VOID**);
//	typedef LONG32(NEAR CDECL FUNCT_005B_0FE3_SecurityProcedure) (VOID*, enum _SECURITY_OPERATION_CODE, ULONG32*, VOID*, ULONG32*, VOID**, enum _POOL_TYPE, struct _GENERIC_MAPPING*, CHAR);
//	typedef LONG32(NEAR CDECL FUNCT_005B_0FF4_QueryNameProcedure) (VOID*, UINT8, struct _OBJECT_NAME_INFORMATION*, ULONG32, ULONG32*, CHAR);
//	typedef UINT8(NEAR CDECL FUNCT_0065_0FFC_OkayToCloseProcedure) (struct _EPROCESS*, VOID*, VOID*, CHAR);
//	typedef struct _CELL_DATA* (NEAR CDECL FUNCT_142D_142C_GetCellRoutine) (struct _HHIVE*, ULONG32);
//	typedef VOID(NEAR CDECL FUNCT_00A3_147B_ReleaseCellRoutine) (struct _HHIVE*, ULONG32);
//	typedef VOID* (NEAR CDECL FUNCT_00A6_147D_Allocate) (ULONG32, UINT8, ULONG32);
//	typedef VOID(NEAR CDECL FUNCT_00A3_1482_Free) (VOID*, ULONG32);
//	typedef UINT8(NEAR CDECL FUNCT_0065_1486_FileSetSize) (struct _HHIVE*, ULONG32, ULONG32, ULONG32);
//	typedef UINT8(NEAR CDECL FUNCT_0065_148C_FileWrite) (struct _HHIVE*, ULONG32, struct _CMP_OFFSET_ARRAY*, ULONG32, ULONG32*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_1498_FileRead) (struct _HHIVE*, ULONG32, ULONG32*, VOID*, ULONG32);
//	typedef UINT8(NEAR CDECL FUNCT_0065_149F_FileFlush) (struct _HHIVE*, ULONG32, union _LARGE_INTEGER*, ULONG32);
//	typedef LONG32(NEAR CDECL FUNCT_005B_1605_NotificationRoutine) (struct _KENLISTMENT*, VOID*, VOID*, ULONG32, union _LARGE_INTEGER*, ULONG32, VOID*);
//	typedef enum _RTL_GENERIC_COMPARE_RESULTS(NEAR CDECL FUNCT_164B_164A_CompareRoutine) (struct _RTL_AVL_TABLE*, VOID*, VOID*);
//	typedef VOID* (NEAR CDECL FUNCT_00A6_1654_AllocateRoutine) (struct _RTL_AVL_TABLE*, ULONG32);
//	typedef VOID(NEAR CDECL FUNCT_00A3_1658_FreeRoutine) (struct _RTL_AVL_TABLE*, VOID*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_178D_Callback) (enum _PCW_CALLBACK_TYPE, union _PCW_CALLBACK_INFORMATION*, VOID*);
//	typedef ULONG32(NEAR CDECL FUNCT_0009_18D4_ProfileDepartureSetMode) (VOID*, enum _PROFILE_DEPARTURE_STYLE);
//	typedef ULONG32(NEAR CDECL FUNCT_0009_18DD_ProfileDepartureUpdate) (VOID*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_1A86_AcquireForLazyWrite_AcquireForReadAhead) (VOID*, UINT8);
//	typedef VOID(NEAR CDECL FUNCT_00A3_1A8A_FlushToLsnRoutine) (VOID*, union _LARGE_INTEGER);
//	typedef LONG32(NEAR CDECL FUNCT_005B_1B38_CommitRoutine) (VOID*, VOID**, UINT64*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_1C68_MiniPacketCallback) (struct _IO_MINI_COMPLETION_PACKET_USER*, VOID*);
//	typedef INT64(NEAR CDECL FUNCT_0075_1E90_GetCpuClock) ();
//	typedef VOID(NEAR CDECL FUNCT_00A3_1EB6_BufferCallback) (struct _WMI_BUFFER_HEADER*, VOID*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_1F2D_EnableCallback) (struct _GUID*, ULONG32, UINT8, UINT64, UINT64, struct _EVENT_FILTER_DESCRIPTOR*, VOID*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_1F3B_AnnotationFunc) (/*NoType*/);
//	typedef VOID(NEAR CDECL FUNCT_00A3_20BC_BankedRoutine) (ULONG32, ULONG32, VOID*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_2116_ServiceRoutine) (struct _KINTERRUPT*, VOID*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_211B_MessageServiceRoutine) (struct _KINTERRUPT*, VOID*, ULONG32);
//	typedef VOID(NEAR CDECL FUNCT_00A3_2173_Routine) (VOID*, VOID*, struct _IO_WORKITEM*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_23E5_ArbiterHandler) (VOID*, enum _ARBITER_ACTION, struct _ARBITER_PARAMETERS*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_2447_UnpackRequirement) (struct _IO_RESOURCE_DESCRIPTOR*, UINT64*, UINT64*, UINT64*, UINT64*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_244E_PackResource) (struct _IO_RESOURCE_DESCRIPTOR*, UINT64, struct _CM_PARTIAL_RESOURCE_DESCRIPTOR*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_2453_UnpackResource) (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR*, UINT64*, UINT64*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_2458_ScoreRequirement) (struct _IO_RESOURCE_DESCRIPTOR*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_245B_TestAllocation) (struct _ARBITER_INSTANCE*, struct _ARBITER_TEST_ALLOCATION_PARAMETERS*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_2461_RetestAllocation) (struct _ARBITER_INSTANCE*, struct _ARBITER_RETEST_ALLOCATION_PARAMETERS*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_2466_CommitAllocation_RollbackAllocation) (struct _ARBITER_INSTANCE*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_2469_BootAllocation) (struct _ARBITER_INSTANCE*, struct _ARBITER_BOOT_ALLOCATION_PARAMETERS*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_246E_QueryArbitrate) (struct _ARBITER_INSTANCE*, struct _ARBITER_QUERY_ARBITRATE_PARAMETERS*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_2473_QueryConflict) (struct _ARBITER_INSTANCE*, struct _ARBITER_QUERY_CONFLICT_PARAMETERS*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_2478_AddReserved) (struct _ARBITER_INSTANCE*, struct _ARBITER_ADD_RESERVED_PARAMETERS*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_247D_StartArbiter) (struct _ARBITER_INSTANCE*, struct _CM_RESOURCE_LIST*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_2481_PreprocessEntry_AllocateEntry) (struct _ARBITER_INSTANCE*, struct _ARBITER_ALLOCATION_STATE*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_2485_GetNextAllocationRange_FindSuitableRange_OverrideConflict) (struct _ARBITER_INSTANCE*, struct _ARBITER_ALLOCATION_STATE*);
//	typedef VOID(NEAR CDECL FUNCT_00A3_2487_AddAllocation_BacktrackAllocation) (struct _ARBITER_INSTANCE*, struct _ARBITER_ALLOCATION_STATE*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_2489_InitializeRangeList) (struct _ARBITER_INSTANCE*, ULONG32, struct _CM_PARTIAL_RESOURCE_DESCRIPTOR*, struct _RTL_RANGE_LIST*);
//	typedef UINT8(NEAR CDECL FUNCT_0065_248F_ConflictCallback) (VOID*, struct _RTL_RANGE*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_2688_HeapLeakEnumerationRoutine) (LONG32, VOID*, VOID*, UINT64, ULONG32, VOID*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_26DB_PStateHandler_TStateHandler) (UINT64, UINT64, UINT64);
//	typedef UINT8(NEAR CDECL FUNCT_0065_27AB_OpenRoutine) (union _LARGE_INTEGER);
//	typedef LONG32(NEAR CDECL FUNCT_005B_27AE_WriteRoutine) (union _LARGE_INTEGER*, struct _MDL*);
//	typedef LONG32(NEAR CDECL FUNCT_005B_27B4_WritePendingRoutine) (LONG32, union _LARGE_INTEGER*, struct _MDL*, VOID*);
//
//	//------------------------------------------------------------------------
//	//------------------------------------------------------------------------
//	// Declaration of Structure types
//
//	typedef struct _ACCESS_REASONS // 1 elements, 0x80 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Data[32];
//	}ACCESS_REASONS, *PACCESS_REASONS;
//
//	typedef struct _LUID       // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      LowPart;
//		/*0x004*/     LONG32       HighPart;
//	}LUID, *PLUID;
//
//	typedef struct _SECURITY_SUBJECT_CONTEXT                   // 4 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        ClientToken;
//		/*0x008*/     enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     VOID*        PrimaryToken;
//		/*0x018*/     VOID*        ProcessAuditId;
//	}SECURITY_SUBJECT_CONTEXT, *PSECURITY_SUBJECT_CONTEXT;
//
//	typedef struct _LUID_AND_ATTRIBUTES // 2 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     struct _LUID Luid;              // 2 elements, 0x8 bytes (sizeof)
//		/*0x008*/     ULONG32      Attributes;
//	}LUID_AND_ATTRIBUTES, *PLUID_AND_ATTRIBUTES;
//
//	typedef struct _INITIAL_PRIVILEGE_SET         // 3 elements, 0x2C bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      PrivilegeCount;
//		/*0x004*/     ULONG32      Control;
//		/*0x008*/     struct _LUID_AND_ATTRIBUTES Privilege[3];
//	}INITIAL_PRIVILEGE_SET, *PINITIAL_PRIVILEGE_SET;
//
//	typedef struct _PRIVILEGE_SET                 // 3 elements, 0x14 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      PrivilegeCount;
//		/*0x004*/     ULONG32      Control;
//		/*0x008*/     struct _LUID_AND_ATTRIBUTES Privilege[1];
//	}PRIVILEGE_SET, *PPRIVILEGE_SET;
//
//	typedef struct _UNICODE_STRING    // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Length;
//		/*0x002*/     UINT16       MaximumLength;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     UINT16*      Buffer;
//	}UNICODE_STRING, *PUNICODE_STRING;
//
//	typedef struct _ACCESS_STATE                                 // 16 elements, 0xA0 bytes (sizeof)
//	{
//		/*0x000*/     struct _LUID OperationID;                                // 2 elements, 0x8 bytes (sizeof)
//		/*0x008*/     UINT8        SecurityEvaluated;
//		/*0x009*/     UINT8        GenerateAudit;
//		/*0x00A*/     UINT8        GenerateOnClose;
//		/*0x00B*/     UINT8        PrivilegesAllocated;
//		/*0x00C*/     ULONG32      Flags;
//		/*0x010*/     ULONG32      RemainingDesiredAccess;
//		/*0x014*/     ULONG32      PreviouslyGrantedAccess;
//		/*0x018*/     ULONG32      OriginalDesiredAccess;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		/*0x020*/     struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // 4 elements, 0x20 bytes (sizeof)
//		/*0x040*/     VOID*        SecurityDescriptor;
//		/*0x048*/     VOID*        AuxData;
//		union                                                    // 2 elements, 0x2C bytes (sizeof)
//		{
//			/*0x050*/         struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet;   // 3 elements, 0x2C bytes (sizeof)
//			/*0x050*/         struct _PRIVILEGE_SET PrivilegeSet;                  // 3 elements, 0x14 bytes (sizeof)
//		}Privileges;
//		/*0x07C*/     UINT8        AuditPrivileges;
//		/*0x07D*/     UINT8        _PADDING1_[0x3];
//		/*0x080*/     struct _UNICODE_STRING ObjectName;                       // 3 elements, 0x10 bytes (sizeof)
//		/*0x090*/     struct _UNICODE_STRING ObjectTypeName;                   // 3 elements, 0x10 bytes (sizeof)
//	}ACCESS_STATE, *PACCESS_STATE;
//
//	typedef struct _ACL           // 5 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        AclRevision;
//		/*0x001*/     UINT8        Sbz1;
//		/*0x002*/     UINT16       AclSize;
//		/*0x004*/     UINT16       AceCount;
//		/*0x006*/     UINT16       Sbz2;
//	}ACL, *PACL;
//
//	typedef struct _ACTIVATION_CONTEXT // 0 elements, 0x0 bytes (sizeof)
//	{
//	}ACTIVATION_CONTEXT, *PACTIVATION_CONTEXT;
//
//	typedef struct _ACTIVATION_CONTEXT_DATA // 0 elements, 0x0 bytes (sizeof)
//	{
//	}ACTIVATION_CONTEXT_DATA, *PACTIVATION_CONTEXT_DATA;
//
//	typedef struct _LIST_ENTRY     // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY* Flink;
//		/*0x008*/     struct _LIST_ENTRY* Blink;
//	}LIST_ENTRY, *PLIST_ENTRY;
//
//	typedef struct _ACTIVATION_CONTEXT_STACK                     // 5 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME* ActiveFrame;
//		/*0x008*/     struct _LIST_ENTRY FrameListCache;                       // 2 elements, 0x10 bytes (sizeof)
//		/*0x018*/     ULONG32      Flags;
//		/*0x01C*/     ULONG32      NextCookieSequenceNumber;
//		/*0x020*/     ULONG32      StackId;
//		/*0x024*/     UINT8        _PADDING0_[0x4];
//	}ACTIVATION_CONTEXT_STACK, *PACTIVATION_CONTEXT_STACK;
//
//	typedef struct _ADAPTER_OBJECT // 0 elements, 0x0 bytes (sizeof)
//	{
//	}ADAPTER_OBJECT, *PADAPTER_OBJECT;
//
//	typedef struct _KAFFINITY_EX // 4 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Count;
//		/*0x002*/     UINT16       Size;
//		/*0x004*/     ULONG32      Reserved;
//		/*0x008*/     UINT64       Bitmap[4];
//	}KAFFINITY_EX, *PKAFFINITY_EX;
//
//	typedef struct _ALIGNED_AFFINITY_SUMMARY // 2 elements, 0x80 bytes (sizeof)
//	{
//		/*0x000*/     struct _KAFFINITY_EX CpuSet;         // 4 elements, 0x28 bytes (sizeof)
//		/*0x028*/     struct _KAFFINITY_EX SMTSet;         // 4 elements, 0x28 bytes (sizeof)
//		/*0x050*/     UINT8        _PADDING0_[0x30];
//	}ALIGNED_AFFINITY_SUMMARY, *PALIGNED_AFFINITY_SUMMARY;
//
//	typedef struct _EX_PUSH_LOCK                 // 7 elements, 0x8 bytes (sizeof)
//	{
//		union                                    // 3 elements, 0x8 bytes (sizeof)
//		{
//			struct                               // 5 elements, 0x8 bytes (sizeof)
//			{
//				/*0x000*/             UINT64       Locked : 1;         // 0 BitPosition
//				/*0x000*/             UINT64       Waiting : 1;        // 1 BitPosition
//				/*0x000*/             UINT64       Waking : 1;         // 2 BitPosition
//				/*0x000*/             UINT64       MultipleShared : 1; // 3 BitPosition
//				/*0x000*/             UINT64       Shared : 60;        // 4 BitPosition
//			};
//			/*0x000*/         UINT64       Value;
//			/*0x000*/         VOID*        Ptr;
//		};
//	}EX_PUSH_LOCK, *PEX_PUSH_LOCK;
//
//	typedef struct _ALPC_HANDLE_TABLE       // 4 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _ALPC_HANDLE_ENTRY* Handles;
//		/*0x008*/     ULONG32      TotalHandles;
//		/*0x00C*/     ULONG32      Flags;
//		/*0x010*/     struct _EX_PUSH_LOCK Lock;          // 7 elements, 0x8 bytes (sizeof)
//	}ALPC_HANDLE_TABLE, *PALPC_HANDLE_TABLE;
//
//	typedef struct _ALPC_COMMUNICATION_INFO         // 5 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     struct _ALPC_PORT* ConnectionPort;
//		/*0x008*/     struct _ALPC_PORT* ServerCommunicationPort;
//		/*0x010*/     struct _ALPC_PORT* ClientCommunicationPort;
//		/*0x018*/     struct _LIST_ENTRY CommunicationList;       // 2 elements, 0x10 bytes (sizeof)
//		/*0x028*/     struct _ALPC_HANDLE_TABLE HandleTable;      // 4 elements, 0x18 bytes (sizeof)
//	}ALPC_COMMUNICATION_INFO, *PALPC_COMMUNICATION_INFO;
//
//	typedef struct _ALPC_COMPLETION_LIST             // 20 elements, 0x98 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY Entry;                    // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _EPROCESS* OwnerProcess;
//		/*0x018*/     struct _MDL* Mdl;
//		/*0x020*/     VOID*        UserVa;
//		/*0x028*/     VOID*        UserLimit;
//		/*0x030*/     VOID*        DataUserVa;
//		/*0x038*/     VOID*        SystemVa;
//		/*0x040*/     UINT64       TotalSize;
//		/*0x048*/     struct _ALPC_COMPLETION_LIST_HEADER* Header;
//		/*0x050*/     VOID*        List;
//		/*0x058*/     UINT64       ListSize;
//		/*0x060*/     VOID*        Bitmap;
//		/*0x068*/     UINT64       BitmapSize;
//		/*0x070*/     VOID*        Data;
//		/*0x078*/     UINT64       DataSize;
//		/*0x080*/     ULONG32      BitmapLimit;
//		/*0x084*/     ULONG32      BitmapNextHint;
//		/*0x088*/     ULONG32      ConcurrencyCount;
//		/*0x08C*/     ULONG32      AttributeFlags;
//		/*0x090*/     ULONG32      AttributeSize;
//		/*0x094*/     UINT8        _PADDING0_[0x4];
//	}ALPC_COMPLETION_LIST, *PALPC_COMPLETION_LIST;
//
//	typedef struct _ALPC_COMPLETION_LIST_STATE       // 1 elements, 0x8 bytes (sizeof)
//	{
//		union                                        // 2 elements, 0x8 bytes (sizeof)
//		{
//			struct                                   // 3 elements, 0x8 bytes (sizeof)
//			{
//				/*0x000*/             UINT64       Head : 24;              // 0 BitPosition
//				/*0x000*/             UINT64       Tail : 24;              // 24 BitPosition
//				/*0x000*/             UINT64       ActiveThreadCount : 16; // 48 BitPosition
//			}s1;
//			/*0x000*/         UINT64       Value;
//		}u1;
//	}ALPC_COMPLETION_LIST_STATE, *PALPC_COMPLETION_LIST_STATE;
//
//	typedef struct _RTL_SRWLOCK                  // 7 elements, 0x8 bytes (sizeof)
//	{
//		union                                    // 3 elements, 0x8 bytes (sizeof)
//		{
//			struct                               // 5 elements, 0x8 bytes (sizeof)
//			{
//				/*0x000*/             UINT64       Locked : 1;         // 0 BitPosition
//				/*0x000*/             UINT64       Waiting : 1;        // 1 BitPosition
//				/*0x000*/             UINT64       Waking : 1;         // 2 BitPosition
//				/*0x000*/             UINT64       MultipleShared : 1; // 3 BitPosition
//				/*0x000*/             UINT64       Shared : 60;        // 4 BitPosition
//			};
//			/*0x000*/         UINT64       Value;
//			/*0x000*/         VOID*        Ptr;
//		};
//	}RTL_SRWLOCK, *PRTL_SRWLOCK;
//
//	typedef struct _ALPC_COMPLETION_LIST_HEADER   // 18 elements, 0x300 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       StartMagic;
//		/*0x008*/     ULONG32      TotalSize;
//		/*0x00C*/     ULONG32      ListOffset;
//		/*0x010*/     ULONG32      ListSize;
//		/*0x014*/     ULONG32      BitmapOffset;
//		/*0x018*/     ULONG32      BitmapSize;
//		/*0x01C*/     ULONG32      DataOffset;
//		/*0x020*/     ULONG32      DataSize;
//		/*0x024*/     ULONG32      AttributeFlags;
//		/*0x028*/     ULONG32      AttributeSize;
//		/*0x02C*/     UINT8        _PADDING0_[0x54];
//		/*0x080*/     struct _ALPC_COMPLETION_LIST_STATE State; // 1 elements, 0x8 bytes (sizeof)
//		/*0x088*/     ULONG32      LastMessageId;
//		/*0x08C*/     ULONG32      LastCallbackId;
//		/*0x090*/     UINT8        _PADDING1_[0x70];
//		/*0x100*/     ULONG32      PostCount;
//		/*0x104*/     UINT8        _PADDING2_[0x7C];
//		/*0x180*/     ULONG32      ReturnCount;
//		/*0x184*/     UINT8        _PADDING3_[0x7C];
//		/*0x200*/     ULONG32      LogSequenceNumber;
//		/*0x204*/     UINT8        _PADDING4_[0x7C];
//		/*0x280*/     struct _RTL_SRWLOCK UserLock;             // 7 elements, 0x8 bytes (sizeof)
//		/*0x288*/     UINT64       EndMagic;
//		/*0x290*/     UINT8        _PADDING5_[0x70];
//	}ALPC_COMPLETION_LIST_HEADER, *PALPC_COMPLETION_LIST_HEADER;
//
//	typedef struct _SINGLE_LIST_ENTRY    // 1 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     struct _SINGLE_LIST_ENTRY* Next;
//	}SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY;
//
//	typedef struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY   // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _SINGLE_LIST_ENTRY ListEntry;                 // 1 elements, 0x8 bytes (sizeof)
//		/*0x008*/     struct _IO_MINI_COMPLETION_PACKET_USER* Packet;
//		/*0x010*/     struct _ALPC_COMPLETION_PACKET_LOOKASIDE* Lookaside;
//	}ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY, *PALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY;
//
//	typedef struct _ALPC_COMPLETION_PACKET_LOOKASIDE             // 10 elements, 0x50 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Lock;
//		/*0x008*/     ULONG32      Size;
//		/*0x00C*/     ULONG32      ActiveCount;
//		/*0x010*/     ULONG32      PendingNullCount;
//		/*0x014*/     ULONG32      PendingCheckCompletionListCount;
//		/*0x018*/     ULONG32      PendingDelete;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		/*0x020*/     struct _SINGLE_LIST_ENTRY FreeListHead;                  // 1 elements, 0x8 bytes (sizeof)
//		/*0x028*/     VOID*        CompletionPort;
//		/*0x030*/     VOID*        CompletionKey;
//		/*0x038*/     struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY Entry[1];
//	}ALPC_COMPLETION_PACKET_LOOKASIDE, *PALPC_COMPLETION_PACKET_LOOKASIDE;
//
//	typedef struct _ALPC_DISPATCH_CONTEXT                   // 9 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     struct _ALPC_PORT* PortObject;
//		/*0x008*/     struct _KALPC_MESSAGE* Message;
//		/*0x010*/     struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;
//		/*0x018*/     struct _ETHREAD* TargetThread;
//		/*0x020*/     struct _ALPC_PORT* TargetPort;
//		/*0x028*/     ULONG32      Flags;
//		/*0x02C*/     UINT16       TotalLength;
//		/*0x02E*/     UINT16       Type;
//		/*0x030*/     UINT16       DataInfoOffset;
//		/*0x032*/     UINT8        _PADDING0_[0x6];
//	}ALPC_DISPATCH_CONTEXT, *PALPC_DISPATCH_CONTEXT;
//
//	typedef struct _ALPC_HANDLE_ENTRY // 1 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        Object;
//	}ALPC_HANDLE_ENTRY, *PALPC_HANDLE_ENTRY;
//
//	typedef struct _ALPC_MESSAGE_ATTRIBUTES // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      AllocatedAttributes;
//		/*0x004*/     ULONG32      ValidAttributes;
//	}ALPC_MESSAGE_ATTRIBUTES, *PALPC_MESSAGE_ATTRIBUTES;
//
//	typedef struct _ALPC_MESSAGE_ZONE // 6 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     struct _MDL* Mdl;
//		/*0x008*/     VOID*        UserVa;
//		/*0x010*/     VOID*        UserLimit;
//		/*0x018*/     VOID*        SystemVa;
//		/*0x020*/     VOID*        SystemLimit;
//		/*0x028*/     UINT64       Size;
//	}ALPC_MESSAGE_ZONE, *PALPC_MESSAGE_ZONE;
//
//	typedef struct _SECURITY_QUALITY_OF_SERVICE                // 4 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Length;
//		/*0x004*/     enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
//		/*0x008*/     UINT8        ContextTrackingMode;
//		/*0x009*/     UINT8        EffectiveOnly;
//		/*0x00A*/     UINT8        _PADDING0_[0x2];
//	}SECURITY_QUALITY_OF_SERVICE, *PSECURITY_QUALITY_OF_SERVICE;
//
//	typedef struct _TOKEN_SOURCE       // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     CHAR         SourceName[8];
//		/*0x008*/     struct _LUID SourceIdentifier; // 2 elements, 0x8 bytes (sizeof)
//	}TOKEN_SOURCE, *PTOKEN_SOURCE;
//
//	typedef struct _TOKEN_CONTROL         // 4 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _LUID TokenId;             // 2 elements, 0x8 bytes (sizeof)
//		/*0x008*/     struct _LUID AuthenticationId;    // 2 elements, 0x8 bytes (sizeof)
//		/*0x010*/     struct _LUID ModifiedId;          // 2 elements, 0x8 bytes (sizeof)
//		/*0x018*/     struct _TOKEN_SOURCE TokenSource; // 2 elements, 0x10 bytes (sizeof)
//	}TOKEN_CONTROL, *PTOKEN_CONTROL;
//
//	typedef struct _SECURITY_CLIENT_CONTEXT              // 6 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // 4 elements, 0xC bytes (sizeof)
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     VOID*        ClientToken;
//		/*0x018*/     UINT8        DirectlyAccessClientToken;
//		/*0x019*/     UINT8        DirectAccessEffectiveOnly;
//		/*0x01A*/     UINT8        ServerIsRemote;
//		/*0x01B*/     UINT8        _PADDING1_[0x1];
//		/*0x01C*/     struct _TOKEN_CONTROL ClientTokenControl;        // 4 elements, 0x28 bytes (sizeof)
//		/*0x044*/     UINT8        _PADDING2_[0x4];
//	}SECURITY_CLIENT_CONTEXT, *PSECURITY_CLIENT_CONTEXT;
//
//	typedef struct _ALPC_PORT_ATTRIBUTES                 // 10 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Flags;
//		/*0x004*/     struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // 4 elements, 0xC bytes (sizeof)
//		/*0x010*/     UINT64       MaxMessageLength;
//		/*0x018*/     UINT64       MemoryBandwidth;
//		/*0x020*/     UINT64       MaxPoolUsage;
//		/*0x028*/     UINT64       MaxSectionSize;
//		/*0x030*/     UINT64       MaxViewSize;
//		/*0x038*/     UINT64       MaxTotalSectionSize;
//		/*0x040*/     ULONG32      DupObjectTypes;
//		/*0x044*/     ULONG32      Reserved;
//	}ALPC_PORT_ATTRIBUTES, *PALPC_PORT_ATTRIBUTES;
//
//	typedef struct _ALPC_PORT                                                // 33 elements, 0x1A0 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY PortListEntry;                                    // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;
//		/*0x018*/     struct _EPROCESS* OwnerProcess;
//		/*0x020*/     VOID*        CompletionPort;
//		/*0x028*/     VOID*        CompletionKey;
//		/*0x030*/     struct _ALPC_COMPLETION_PACKET_LOOKASIDE* CompletionPacketLookaside;
//		/*0x038*/     VOID*        PortContext;
//		/*0x040*/     struct _SECURITY_CLIENT_CONTEXT StaticSecurity;                      // 6 elements, 0x48 bytes (sizeof)
//		/*0x088*/     struct _LIST_ENTRY MainQueue;                                        // 2 elements, 0x10 bytes (sizeof)
//		/*0x098*/     struct _LIST_ENTRY PendingQueue;                                     // 2 elements, 0x10 bytes (sizeof)
//		/*0x0A8*/     struct _LIST_ENTRY LargeMessageQueue;                                // 2 elements, 0x10 bytes (sizeof)
//		/*0x0B8*/     struct _LIST_ENTRY WaitQueue;                                        // 2 elements, 0x10 bytes (sizeof)
//		union                                                                // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x0C8*/         struct _KSEMAPHORE* Semaphore;
//			/*0x0C8*/         struct _KEVENT* DummyEvent;
//		};
//		/*0x0D0*/     struct _ALPC_PORT_ATTRIBUTES PortAttributes;                         // 10 elements, 0x48 bytes (sizeof)
//		/*0x118*/     struct _EX_PUSH_LOCK Lock;                                           // 7 elements, 0x8 bytes (sizeof)
//		/*0x120*/     struct _EX_PUSH_LOCK ResourceListLock;                               // 7 elements, 0x8 bytes (sizeof)
//		/*0x128*/     struct _LIST_ENTRY ResourceListHead;                                 // 2 elements, 0x10 bytes (sizeof)
//		/*0x138*/     struct _ALPC_COMPLETION_LIST* CompletionList;
//		/*0x140*/     struct _ALPC_MESSAGE_ZONE* MessageZone;
//		/*0x148*/     struct _CALLBACK_OBJECT* CallbackObject;
//		/*0x150*/     VOID*        CallbackContext;
//		/*0x158*/     struct _LIST_ENTRY CanceledQueue;                                    // 2 elements, 0x10 bytes (sizeof)
//		/*0x168*/     LONG32       SequenceNo;
//		union                                                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			struct                                                           // 16 elements, 0x4 bytes (sizeof)
//			{
//				/*0x16C*/             ULONG32      Initialized : 1;                                // 0 BitPosition
//				/*0x16C*/             ULONG32      Type : 2;                                       // 1 BitPosition
//				/*0x16C*/             ULONG32      ConnectionPending : 1;                          // 3 BitPosition
//				/*0x16C*/             ULONG32      ConnectionRefused : 1;                          // 4 BitPosition
//				/*0x16C*/             ULONG32      Disconnected : 1;                               // 5 BitPosition
//				/*0x16C*/             ULONG32      Closed : 1;                                     // 6 BitPosition
//				/*0x16C*/             ULONG32      NoFlushOnClose : 1;                             // 7 BitPosition
//				/*0x16C*/             ULONG32      ReturnExtendedInfo : 1;                         // 8 BitPosition
//				/*0x16C*/             ULONG32      Waitable : 1;                                   // 9 BitPosition
//				/*0x16C*/             ULONG32      DynamicSecurity : 1;                            // 10 BitPosition
//				/*0x16C*/             ULONG32      Wow64CompletionList : 1;                        // 11 BitPosition
//				/*0x16C*/             ULONG32      Lpc : 1;                                        // 12 BitPosition
//				/*0x16C*/             ULONG32      LpcToLpc : 1;                                   // 13 BitPosition
//				/*0x16C*/             ULONG32      HasCompletionList : 1;                          // 14 BitPosition
//				/*0x16C*/             ULONG32      HadCompletionList : 1;                          // 15 BitPosition
//				/*0x16C*/             ULONG32      EnableCompletionList : 1;                       // 16 BitPosition
//			}s1;
//			/*0x16C*/         ULONG32      State;
//		}u1;
//		/*0x170*/     struct _ALPC_PORT* TargetQueuePort;
//		/*0x178*/     struct _ALPC_PORT* TargetSequencePort;
//		/*0x180*/     struct _KALPC_MESSAGE* CachedMessage;
//		/*0x188*/     ULONG32      MainQueueLength;
//		/*0x18C*/     ULONG32      PendingQueueLength;
//		/*0x190*/     ULONG32      LargeMessageQueueLength;
//		/*0x194*/     ULONG32      CanceledQueueLength;
//		/*0x198*/     ULONG32      WaitQueueLength;
//		/*0x19C*/     UINT8        _PADDING0_[0x4];
//	}ALPC_PORT, *PALPC_PORT;
//
//	typedef struct _ALPC_PROCESS_CONTEXT  // 3 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _EX_PUSH_LOCK Lock;        // 7 elements, 0x8 bytes (sizeof)
//		/*0x008*/     struct _LIST_ENTRY ViewListHead;  // 2 elements, 0x10 bytes (sizeof)
//		/*0x018*/     UINT64       PagedPoolQuotaCache;
//	}ALPC_PROCESS_CONTEXT, *PALPC_PROCESS_CONTEXT;
//
//	typedef struct _AMD64_DBGKD_CONTROL_SET // 4 elements, 0x1C bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      TraceFlag;
//		/*0x004*/     UINT64       Dr7;
//		/*0x00C*/     UINT64       CurrentSymbolStart;
//		/*0x014*/     UINT64       CurrentSymbolEnd;
//	}AMD64_DBGKD_CONTROL_SET, *PAMD64_DBGKD_CONTROL_SET;
//
//	typedef struct _ARBITER_ADD_RESERVED_PARAMETERS // 1 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     struct _DEVICE_OBJECT* ReserveDevice;
//	}ARBITER_ADD_RESERVED_PARAMETERS, *PARBITER_ADD_RESERVED_PARAMETERS;
//
//	typedef struct _ARBITER_ALLOCATION_STATE             // 12 elements, 0x50 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Start;
//		/*0x008*/     UINT64       End;
//		/*0x010*/     UINT64       CurrentMinimum;
//		/*0x018*/     UINT64       CurrentMaximum;
//		/*0x020*/     struct _ARBITER_LIST_ENTRY* Entry;
//		/*0x028*/     struct _ARBITER_ALTERNATIVE* CurrentAlternative;
//		/*0x030*/     ULONG32      AlternativeCount;
//		/*0x034*/     UINT8        _PADDING0_[0x4];
//		/*0x038*/     struct _ARBITER_ALTERNATIVE* Alternatives;
//		/*0x040*/     UINT16       Flags;
//		/*0x042*/     UINT8        RangeAttributes;
//		/*0x043*/     UINT8        RangeAvailableAttributes;
//		/*0x044*/     UINT8        _PADDING1_[0x4];
//		/*0x048*/     UINT64       WorkSpace;
//	}ARBITER_ALLOCATION_STATE, *PARBITER_ALLOCATION_STATE;
//
//	typedef struct _ARBITER_ALTERNATIVE             // 8 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Minimum;
//		/*0x008*/     UINT64       Maximum;
//		/*0x010*/     UINT64       Length;
//		/*0x018*/     UINT64       Alignment;
//		/*0x020*/     LONG32       Priority;
//		/*0x024*/     ULONG32      Flags;
//		/*0x028*/     struct _IO_RESOURCE_DESCRIPTOR* Descriptor;
//		/*0x030*/     ULONG32      Reserved[3];
//		/*0x03C*/     UINT8        _PADDING0_[0x4];
//	}ARBITER_ALTERNATIVE, *PARBITER_ALTERNATIVE;
//
//	typedef struct _ARBITER_BOOT_ALLOCATION_PARAMETERS // 1 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY* ArbitrationList;
//	}ARBITER_BOOT_ALLOCATION_PARAMETERS, *PARBITER_BOOT_ALLOCATION_PARAMETERS;
//
//	typedef struct _ARBITER_CONFLICT_INFO    // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _DEVICE_OBJECT* OwningObject;
//		/*0x008*/     UINT64       Start;
//		/*0x010*/     UINT64       End;
//	}ARBITER_CONFLICT_INFO, *PARBITER_CONFLICT_INFO;
//
//	typedef struct _ARBITER_ORDERING_LIST    // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Count;
//		/*0x002*/     UINT16       Maximum;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _ARBITER_ORDERING* Orderings;
//	}ARBITER_ORDERING_LIST, *PARBITER_ORDERING_LIST;
//
//	typedef struct _ARBITER_INSTANCE                                                                       // 43 elements, 0x698 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Signature;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _KEVENT* MutexEvent;
//		/*0x010*/     UINT16*      Name;
//		/*0x018*/     UINT16*      OrderingName;
//		/*0x020*/     INT32        ResourceType;
//		/*0x024*/     UINT8        _PADDING1_[0x4];
//		/*0x028*/     struct _RTL_RANGE_LIST* Allocation;
//		/*0x030*/     struct _RTL_RANGE_LIST* PossibleAllocation;
//		/*0x038*/     struct _ARBITER_ORDERING_LIST OrderingList;                                                        // 3 elements, 0x10 bytes (sizeof)
//		/*0x048*/     struct _ARBITER_ORDERING_LIST ReservedList;                                                        // 3 elements, 0x10 bytes (sizeof)
//		/*0x058*/     LONG32       ReferenceCount;
//		/*0x05C*/     UINT8        _PADDING2_[0x4];
//		/*0x060*/     struct _ARBITER_INTERFACE* Interface;
//		/*0x068*/     ULONG32      AllocationStackMaxSize;
//		/*0x06C*/     UINT8        _PADDING3_[0x4];
//		/*0x070*/     struct _ARBITER_ALLOCATION_STATE* AllocationStack;
//		/*0x078*/     FUNCT_005B_2447_UnpackRequirement* UnpackRequirement;
//		/*0x080*/     FUNCT_005B_244E_PackResource* PackResource;
//		/*0x088*/     FUNCT_005B_2453_UnpackResource* UnpackResource;
//		/*0x090*/     FUNCT_005B_2458_ScoreRequirement* ScoreRequirement;
//		/*0x098*/     FUNCT_005B_245B_TestAllocation* TestAllocation;
//		/*0x0A0*/     FUNCT_005B_2461_RetestAllocation* RetestAllocation;
//		/*0x0A8*/     FUNCT_005B_2466_CommitAllocation_RollbackAllocation* CommitAllocation;
//		/*0x0B0*/     FUNCT_005B_2466_CommitAllocation_RollbackAllocation* RollbackAllocation;
//		/*0x0B8*/     FUNCT_005B_2469_BootAllocation* BootAllocation;
//		/*0x0C0*/     FUNCT_005B_246E_QueryArbitrate* QueryArbitrate;
//		/*0x0C8*/     FUNCT_005B_2473_QueryConflict* QueryConflict;
//		/*0x0D0*/     FUNCT_005B_2478_AddReserved* AddReserved;
//		/*0x0D8*/     FUNCT_005B_247D_StartArbiter* StartArbiter;
//		/*0x0E0*/     FUNCT_005B_2481_PreprocessEntry_AllocateEntry* PreprocessEntry;
//		/*0x0E8*/     FUNCT_005B_2481_PreprocessEntry_AllocateEntry* AllocateEntry;
//		/*0x0F0*/     FUNCT_0065_2485_GetNextAllocationRange_FindSuitableRange_OverrideConflict* GetNextAllocationRange;
//		/*0x0F8*/     FUNCT_0065_2485_GetNextAllocationRange_FindSuitableRange_OverrideConflict* FindSuitableRange;
//		/*0x100*/     FUNCT_00A3_2487_AddAllocation_BacktrackAllocation* AddAllocation;
//		/*0x108*/     FUNCT_00A3_2487_AddAllocation_BacktrackAllocation* BacktrackAllocation;
//		/*0x110*/     FUNCT_0065_2485_GetNextAllocationRange_FindSuitableRange_OverrideConflict* OverrideConflict;
//		/*0x118*/     FUNCT_005B_2489_InitializeRangeList* InitializeRangeList;
//		/*0x120*/     UINT8        TransactionInProgress;
//		/*0x121*/     UINT8        _PADDING4_[0x7];
//		/*0x128*/     struct _KEVENT* TransactionEvent;
//		/*0x130*/     VOID*        Extension;
//		/*0x138*/     struct _DEVICE_OBJECT* BusDeviceObject;
//		/*0x140*/     VOID*        ConflictCallbackContext;
//		/*0x148*/     FUNCT_0065_248F_ConflictCallback* ConflictCallback;
//		/*0x150*/     WCHAR        PdoDescriptionString[336];
//		/*0x3F0*/     CHAR         PdoSymbolicNameString[672];
//		/*0x690*/     WCHAR        PdoAddressString[1];
//		/*0x692*/     UINT8        _PADDING5_[0x6];
//	}ARBITER_INSTANCE, *PARBITER_INSTANCE;
//
//	typedef struct _ARBITER_INTERFACE                                                                                                                                                    // 7 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Size;
//		/*0x002*/     UINT16       Version;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     VOID*        Context;
//		/*0x010*/     FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* InterfaceReference;
//		/*0x018*/     FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* InterfaceDereference;
//		/*0x020*/     FUNCT_005B_23E5_ArbiterHandler* ArbiterHandler;
//		/*0x028*/     ULONG32      Flags;
//		/*0x02C*/     UINT8        _PADDING1_[0x4];
//	}ARBITER_INTERFACE, *PARBITER_INTERFACE;
//
//	typedef struct _ARBITER_LIST_ENTRY                       // 13 elements, 0x60 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY ListEntry;                        // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     ULONG32      AlternativeCount;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//		/*0x018*/     struct _IO_RESOURCE_DESCRIPTOR* Alternatives;
//		/*0x020*/     struct _DEVICE_OBJECT* PhysicalDeviceObject;
//		/*0x028*/     enum _ARBITER_REQUEST_SOURCE RequestSource;
//		/*0x02C*/     ULONG32      Flags;
//		/*0x030*/     INT64        WorkSpace;
//		/*0x038*/     enum _INTERFACE_TYPE InterfaceType;
//		/*0x03C*/     ULONG32      SlotNumber;
//		/*0x040*/     ULONG32      BusNumber;
//		/*0x044*/     UINT8        _PADDING1_[0x4];
//		/*0x048*/     struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* Assignment;
//		/*0x050*/     struct _IO_RESOURCE_DESCRIPTOR* SelectedAlternative;
//		/*0x058*/     enum _ARBITER_RESULT Result;
//		/*0x05C*/     UINT8        _PADDING2_[0x4];
//	}ARBITER_LIST_ENTRY, *PARBITER_LIST_ENTRY;
//
//	typedef struct _ARBITER_ORDERING // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Start;
//		/*0x008*/     UINT64       End;
//	}ARBITER_ORDERING, *PARBITER_ORDERING;
//
//	typedef struct _ARBITER_TEST_ALLOCATION_PARAMETERS        // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY* ArbitrationList;
//		/*0x008*/     ULONG32      AllocateFromCount;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* AllocateFrom;
//	}ARBITER_TEST_ALLOCATION_PARAMETERS, *PARBITER_TEST_ALLOCATION_PARAMETERS;
//
//	typedef struct _ARBITER_RETEST_ALLOCATION_PARAMETERS      // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY* ArbitrationList;
//		/*0x008*/     ULONG32      AllocateFromCount;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* AllocateFrom;
//	}ARBITER_RETEST_ALLOCATION_PARAMETERS, *PARBITER_RETEST_ALLOCATION_PARAMETERS;
//
//	typedef struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS // 1 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     struct _CM_PARTIAL_RESOURCE_LIST** AllocatedResources;
//	}ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS, *PARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS;
//
//	typedef struct _ARBITER_QUERY_CONFLICT_PARAMETERS        // 4 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _DEVICE_OBJECT* PhysicalDeviceObject;
//		/*0x008*/     struct _IO_RESOURCE_DESCRIPTOR* ConflictingResource;
//		/*0x010*/     ULONG32*     ConflictCount;
//		/*0x018*/     struct _ARBITER_CONFLICT_INFO** Conflicts;
//	}ARBITER_QUERY_CONFLICT_PARAMETERS, *PARBITER_QUERY_CONFLICT_PARAMETERS;
//
//	typedef struct _ARBITER_QUERY_ARBITRATE_PARAMETERS // 1 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY* ArbitrationList;
//	}ARBITER_QUERY_ARBITRATE_PARAMETERS, *PARBITER_QUERY_ARBITRATE_PARAMETERS;
//
//	typedef struct _ARBITER_PARAMETERS                                                    // 1 elements, 0x20 bytes (sizeof)
//	{
//		union                                                                             // 7 elements, 0x20 bytes (sizeof)
//		{
//			/*0x000*/         struct _ARBITER_TEST_ALLOCATION_PARAMETERS TestAllocation;                    // 3 elements, 0x18 bytes (sizeof)
//			/*0x000*/         struct _ARBITER_RETEST_ALLOCATION_PARAMETERS RetestAllocation;                // 3 elements, 0x18 bytes (sizeof)
//			/*0x000*/         struct _ARBITER_BOOT_ALLOCATION_PARAMETERS BootAllocation;                    // 1 elements, 0x8 bytes (sizeof)
//			/*0x000*/         struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS QueryAllocatedResources; // 1 elements, 0x8 bytes (sizeof)
//			/*0x000*/         struct _ARBITER_QUERY_CONFLICT_PARAMETERS QueryConflict;                      // 4 elements, 0x20 bytes (sizeof)
//			/*0x000*/         struct _ARBITER_QUERY_ARBITRATE_PARAMETERS QueryArbitrate;                    // 1 elements, 0x8 bytes (sizeof)
//			/*0x000*/         struct _ARBITER_ADD_RESERVED_PARAMETERS AddReserved;                          // 1 elements, 0x8 bytes (sizeof)
//		}Parameters;
//	}ARBITER_PARAMETERS, *PARBITER_PARAMETERS;
//
//	typedef struct _ARC_DISK_INFORMATION   // 1 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY DiskSignatures; // 2 elements, 0x10 bytes (sizeof)
//	}ARC_DISK_INFORMATION, *PARC_DISK_INFORMATION;
//
//	typedef struct _ARM_DBGKD_CONTROL_SET // 3 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Continue;
//		/*0x004*/     ULONG32      CurrentSymbolStart;
//		/*0x008*/     ULONG32      CurrentSymbolEnd;
//	}ARM_DBGKD_CONTROL_SET, *PARM_DBGKD_CONTROL_SET;
//
//	typedef struct _ASSEMBLY_STORAGE_MAP // 0 elements, 0x0 bytes (sizeof)
//	{
//	}ASSEMBLY_STORAGE_MAP, *PASSEMBLY_STORAGE_MAP;
//
//	typedef struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION // 4 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      SecurityAttributeCount;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _LIST_ENTRY SecurityAttributesList;             // 2 elements, 0x10 bytes (sizeof)
//		/*0x018*/     ULONG32      WorkingSecurityAttributeCount;
//		/*0x01C*/     UINT8        _PADDING1_[0x4];
//		/*0x020*/     struct _LIST_ENTRY WorkingSecurityAttributesList;      // 2 elements, 0x10 bytes (sizeof)
//	}AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION, *PAUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION;
//
//	typedef struct _GENERIC_MAPPING  // 4 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      GenericRead;
//		/*0x004*/     ULONG32      GenericWrite;
//		/*0x008*/     ULONG32      GenericExecute;
//		/*0x00C*/     ULONG32      GenericAll;
//	}GENERIC_MAPPING, *PGENERIC_MAPPING;
//
//	typedef struct _GUID       // 4 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Data1;
//		/*0x004*/     UINT16       Data2;
//		/*0x006*/     UINT16       Data3;
//		/*0x008*/     UINT8        Data4[8];
//	}GUID, *PGUID;
//
//	typedef struct _AUX_ACCESS_DATA                                                                              // 11 elements, 0xD8 bytes (sizeof)
//	{
//		/*0x000*/     struct _PRIVILEGE_SET* PrivilegesUsed;
//		/*0x008*/     struct _GENERIC_MAPPING GenericMapping;                                                                  // 4 elements, 0x10 bytes (sizeof)
//		/*0x018*/     ULONG32      AccessesToAudit;
//		/*0x01C*/     ULONG32      MaximumAuditMask;
//		/*0x020*/     struct _GUID TransactionId;                                                                              // 4 elements, 0x10 bytes (sizeof)
//		/*0x030*/     VOID*        NewSecurityDescriptor;
//		/*0x038*/     VOID*        ExistingSecurityDescriptor;
//		/*0x040*/     VOID*        ParentSecurityDescriptor;
//		/*0x048*/     FUNCT_00A3_00A2_CleanupGroupCancelCallback_DeRefSecurityDescriptor_PostRoutine* DeRefSecurityDescriptor;
//		/*0x050*/     VOID*        SDLock;
//		/*0x058*/     struct _ACCESS_REASONS AccessReasons;                                                                    // 1 elements, 0x80 bytes (sizeof)
//	}AUX_ACCESS_DATA, *PAUX_ACCESS_DATA;
//
//	typedef struct _BATTERY_REPORTING_SCALE // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Granularity;
//		/*0x004*/     ULONG32      Capacity;
//	}BATTERY_REPORTING_SCALE, *PBATTERY_REPORTING_SCALE;
//
//	typedef struct _BITMAP_RANGE      // 6 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY Links;     // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     INT64        BasePage;
//		/*0x018*/     ULONG32      FirstDirtyPage;
//		/*0x01C*/     ULONG32      LastDirtyPage;
//		/*0x020*/     ULONG32      DirtyPages;
//		/*0x024*/     UINT8        _PADDING0_[0x4];
//		/*0x028*/     ULONG32*     Bitmap;
//	}BITMAP_RANGE, *PBITMAP_RANGE;
//
//	typedef struct _SLIST_ENTRY       // 1 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _SLIST_ENTRY* Next;
//		/*0x008*/     UINT8        _PADDING0_[0x8];
//	}SLIST_ENTRY, *PSLIST_ENTRY;
//
//	typedef struct _BLOB                         // 7 elements, 0x20 bytes (sizeof)
//	{
//		union                                    // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x000*/         struct _LIST_ENTRY ResourceList;     // 2 elements, 0x10 bytes (sizeof)
//			/*0x000*/         struct _SLIST_ENTRY FreeListEntry;   // 1 elements, 0x10 bytes (sizeof)
//		};
//		union                                    // 2 elements, 0x1 bytes (sizeof)
//		{
//			struct                               // 4 elements, 0x1 bytes (sizeof)
//			{
//				/*0x010*/             UINT8        ReferenceCache : 1; // 0 BitPosition
//				/*0x010*/             UINT8        Lookaside : 1;      // 1 BitPosition
//				/*0x010*/             UINT8        Initializing : 1;   // 2 BitPosition
//				/*0x010*/             UINT8        Deleted : 1;        // 3 BitPosition
//			}s1;
//			/*0x010*/         UINT8        Flags;
//		}u1;
//		/*0x011*/     UINT8        ResourceId;
//		/*0x012*/     INT16        CachedReferences;
//		/*0x014*/     LONG32       ReferenceCount;
//		/*0x018*/     struct _EX_PUSH_LOCK Lock;               // 7 elements, 0x8 bytes (sizeof)
//	}BLOB, *PBLOB;
//
//	typedef struct _BLOB_TYPE                                                                                                                                                       // 9 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     enum _BLOB_ID ResourceId;
//		/*0x004*/     ULONG32      PoolTag;
//		/*0x008*/     ULONG32      Flags;
//		/*0x00C*/     ULONG32      CreatedObjects;
//		/*0x010*/     ULONG32      DeletedObjects;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//		/*0x018*/     FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* DeleteProcedure;
//		/*0x020*/     FUNCT_005B_07A2_IdleCheck_DestroyProcedure* DestroyProcedure;
//		/*0x028*/     UINT64       UsualSize;
//		/*0x030*/     ULONG32      LookasideIndex;
//		/*0x034*/     UINT8        _PADDING1_[0x4];
//	}BLOB_TYPE, *PBLOB_TYPE;
//
//	typedef struct _BUS_EXTENSION_LIST          // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        Next;
//		/*0x008*/     struct _PI_BUS_EXTENSION* BusExtension;
//	}BUS_EXTENSION_LIST, *PBUS_EXTENSION_LIST;
//
//	typedef struct _CACHE_DESCRIPTOR     // 5 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Level;
//		/*0x001*/     UINT8        Associativity;
//		/*0x002*/     UINT16       LineSize;
//		/*0x004*/     ULONG32      Size;
//		/*0x008*/     enum _PROCESSOR_CACHE_TYPE Type;
//	}CACHE_DESCRIPTOR, *PCACHE_DESCRIPTOR;
//
//	typedef struct _CACHE_MANAGER_CALLBACKS                                                                                                                                              // 4 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     FUNCT_0065_1A86_AcquireForLazyWrite_AcquireForReadAhead* AcquireForLazyWrite;
//		/*0x008*/     FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* ReleaseFromLazyWrite;
//		/*0x010*/     FUNCT_0065_1A86_AcquireForLazyWrite_AcquireForReadAhead* AcquireForReadAhead;
//		/*0x018*/     FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* ReleaseFromReadAhead;
//	}CACHE_MANAGER_CALLBACKS, *PCACHE_MANAGER_CALLBACKS;
//
//	typedef struct _DISPATCHER_HEADER                           // 29 elements, 0x18 bytes (sizeof)
//	{
//		union                                                   // 2 elements, 0x4 bytes (sizeof)
//		{
//			struct                                              // 4 elements, 0x4 bytes (sizeof)
//			{
//				/*0x000*/             UINT8        Type;
//				union                                           // 4 elements, 0x1 bytes (sizeof)
//				{
//					/*0x001*/                 UINT8        TimerControlFlags;
//					struct                                      // 4 elements, 0x1 bytes (sizeof)
//					{
//						/*0x001*/                     UINT8        Absolute : 1;              // 0 BitPosition
//						/*0x001*/                     UINT8        Coalescable : 1;           // 1 BitPosition
//						/*0x001*/                     UINT8        KeepShifting : 1;          // 2 BitPosition
//						/*0x001*/                     UINT8        EncodedTolerableDelay : 5; // 3 BitPosition
//					};
//					/*0x001*/                 UINT8        Abandoned;
//					/*0x001*/                 UINT8        Signalling;
//				};
//				union                                           // 4 elements, 0x1 bytes (sizeof)
//				{
//					/*0x002*/                 UINT8        ThreadControlFlags;
//					struct                                      // 4 elements, 0x1 bytes (sizeof)
//					{
//						/*0x002*/                     UINT8        CpuThrottled : 1;          // 0 BitPosition
//						/*0x002*/                     UINT8        CycleProfiling : 1;        // 1 BitPosition
//						/*0x002*/                     UINT8        CounterProfiling : 1;      // 2 BitPosition
//						/*0x002*/                     UINT8        Reserved : 5;              // 3 BitPosition
//					};
//					/*0x002*/                 UINT8        Hand;
//					/*0x002*/                 UINT8        Size;
//				};
//				union                                           // 5 elements, 0x1 bytes (sizeof)
//				{
//					/*0x003*/                 UINT8        TimerMiscFlags;
//					struct                                      // 3 elements, 0x1 bytes (sizeof)
//					{
//						/*0x003*/                     UINT8        Index : 6;                 // 0 BitPosition
//						/*0x003*/                     UINT8        Inserted : 1;              // 6 BitPosition
//						/*0x003*/                     UINT8        Expired : 1;               // 7 BitPosition
//					};
//					/*0x003*/                 UINT8        DebugActive;
//					struct                                      // 5 elements, 0x1 bytes (sizeof)
//					{
//						/*0x003*/                     UINT8        ActiveDR7 : 1;             // 0 BitPosition
//						/*0x003*/                     UINT8        Instrumented : 1;          // 1 BitPosition
//						/*0x003*/                     UINT8        Reserved2 : 4;             // 2 BitPosition
//						/*0x003*/                     UINT8        UmsScheduled : 1;          // 6 BitPosition
//						/*0x003*/                     UINT8        UmsPrimary : 1;            // 7 BitPosition
//					};
//					/*0x003*/                 UINT8        DpcActive;
//				};
//			};
//			/*0x000*/         LONG32       Lock;
//		};
//		/*0x004*/     LONG32       SignalState;
//		/*0x008*/     struct _LIST_ENTRY WaitListHead;                        // 2 elements, 0x10 bytes (sizeof)
//	}DISPATCHER_HEADER, *PDISPATCHER_HEADER;
//
//	typedef struct _KEVENT                // 1 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _DISPATCHER_HEADER Header; // 29 elements, 0x18 bytes (sizeof)
//	}KEVENT, *PKEVENT;
//
//	typedef struct _CACHE_UNINITIALIZE_EVENT    // 2 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _CACHE_UNINITIALIZE_EVENT* Next;
//		/*0x008*/     struct _KEVENT Event;                   // 1 elements, 0x18 bytes (sizeof)
//	}CACHE_UNINITIALIZE_EVENT, *PCACHE_UNINITIALIZE_EVENT;
//
//	typedef struct _CACHED_CHILD_LIST              // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Count;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		union                                      // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x008*/         UINT64       ValueList;
//			/*0x008*/         struct _CM_KEY_CONTROL_BLOCK* RealKcb;
//		};
//	}CACHED_CHILD_LIST, *PCACHED_CHILD_LIST;
//
//	typedef union _SLIST_HEADER              // 5 elements, 0x10 bytes (sizeof)
//	{
//		struct                               // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x000*/         UINT64       Alignment;
//			/*0x008*/         UINT64       Region;
//		};
//		struct                               // 7 elements, 0x10 bytes (sizeof)
//		{
//			struct                           // 3 elements, 0x8 bytes (sizeof)
//			{
//				/*0x000*/             UINT64       Depth : 16;     // 0 BitPosition
//				/*0x000*/             UINT64       Sequence : 9;   // 16 BitPosition
//				/*0x000*/             UINT64       NextEntry : 39; // 25 BitPosition
//			};
//			struct                           // 4 elements, 0x8 bytes (sizeof)
//			{
//				/*0x008*/             UINT64       HeaderType : 1; // 0 BitPosition
//				/*0x008*/             UINT64       Init : 1;       // 1 BitPosition
//				/*0x008*/             UINT64       Reserved : 59;  // 2 BitPosition
//				/*0x008*/             UINT64       Region : 3;     // 61 BitPosition
//			};
//		}Header8;
//		struct                               // 6 elements, 0x10 bytes (sizeof)
//		{
//			struct                           // 2 elements, 0x8 bytes (sizeof)
//			{
//				/*0x000*/             UINT64       Depth : 16;     // 0 BitPosition
//				/*0x000*/             UINT64       Sequence : 48;  // 16 BitPosition
//			};
//			struct                           // 4 elements, 0x8 bytes (sizeof)
//			{
//				/*0x008*/             UINT64       HeaderType : 1; // 0 BitPosition
//				/*0x008*/             UINT64       Init : 1;       // 1 BitPosition
//				/*0x008*/             UINT64       Reserved : 2;   // 2 BitPosition
//				/*0x008*/             UINT64       NextEntry : 60; // 4 BitPosition
//			};
//		}Header16;
//		struct                               // 5 elements, 0x10 bytes (sizeof)
//		{
//			struct                           // 2 elements, 0x8 bytes (sizeof)
//			{
//				/*0x000*/             UINT64       Depth : 16;     // 0 BitPosition
//				/*0x000*/             UINT64       Sequence : 48;  // 16 BitPosition
//			};
//			struct                           // 3 elements, 0x8 bytes (sizeof)
//			{
//				/*0x008*/             UINT64       HeaderType : 1; // 0 BitPosition
//				/*0x008*/             UINT64       Reserved : 3;   // 1 BitPosition
//				/*0x008*/             UINT64       NextEntry : 60; // 4 BitPosition
//			};
//		}HeaderX64;
//	}SLIST_HEADER, *PSLIST_HEADER;
//
//	typedef struct _CACHED_KSTACK_LIST // 5 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     union _SLIST_HEADER SListHead; // 5 elements, 0x10 bytes (sizeof)
//		/*0x010*/     LONG32       MinimumFree;
//		/*0x014*/     ULONG32      Misses;
//		/*0x018*/     ULONG32      MissesLast;
//		/*0x01C*/     ULONG32      Pad0;
//	}CACHED_KSTACK_LIST, *PCACHED_KSTACK_LIST;
//
//	typedef struct _CALL_HASH_ENTRY   // 4 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY ListEntry; // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     VOID*        CallersAddress;
//		/*0x018*/     VOID*        CallersCaller;
//		/*0x020*/     ULONG32      CallCount;
//		/*0x024*/     UINT8        _PADDING0_[0x4];
//	}CALL_HASH_ENTRY, *PCALL_HASH_ENTRY;
//
//	typedef struct _CALL_PERFORMANCE_DATA // 2 elements, 0x408 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       SpinLock;
//		/*0x008*/     struct _LIST_ENTRY HashTable[64];
//	}CALL_PERFORMANCE_DATA, *PCALL_PERFORMANCE_DATA;
//
//	typedef struct _CALLBACK_OBJECT // 0 elements, 0x0 bytes (sizeof)
//	{
//	}CALLBACK_OBJECT, *PCALLBACK_OBJECT;
//
//	typedef union _LARGE_INTEGER   // 4 elements, 0x8 bytes (sizeof)
//	{
//		struct                     // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      LowPart;
//			/*0x004*/         LONG32       HighPart;
//		};
//		struct                     // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      LowPart;
//			/*0x004*/         LONG32       HighPart;
//		}u;
//		/*0x000*/     INT64        QuadPart;
//	}LARGE_INTEGER, *PLARGE_INTEGER;
//
//	typedef struct _CHILD_LIST // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Count;
//		/*0x004*/     ULONG32      List;
//	}CHILD_LIST, *PCHILD_LIST;
//
//	typedef struct _CM_KEY_REFERENCE  // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      KeyCell;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _HHIVE* KeyHive;
//	}CM_KEY_REFERENCE, *PCM_KEY_REFERENCE;
//
//	typedef struct _CM_KEY_NODE                          // 22 elements, 0x50 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Signature;
//		/*0x002*/     UINT16       Flags;
//		/*0x004*/     union _LARGE_INTEGER LastWriteTime;              // 4 elements, 0x8 bytes (sizeof)
//		/*0x00C*/     ULONG32      Spare;
//		/*0x010*/     ULONG32      Parent;
//		/*0x014*/     ULONG32      SubKeyCounts[2];
//		union                                            // 2 elements, 0x10 bytes (sizeof)
//		{
//			struct                                       // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x01C*/             ULONG32      SubKeyLists[2];
//				/*0x024*/             struct _CHILD_LIST ValueList;            // 2 elements, 0x8 bytes (sizeof)
//			};
//			/*0x01C*/         struct _CM_KEY_REFERENCE ChildHiveReference; // 2 elements, 0x10 bytes (sizeof)
//		};
//		/*0x02C*/     ULONG32      Security;
//		/*0x030*/     ULONG32      Class;
//		struct                                           // 4 elements, 0x4 bytes (sizeof)
//		{
//			/*0x034*/         ULONG32      MaxNameLen : 16;                // 0 BitPosition
//			/*0x034*/         ULONG32      UserFlags : 4;                  // 16 BitPosition
//			/*0x034*/         ULONG32      VirtControlFlags : 4;           // 20 BitPosition
//			/*0x034*/         ULONG32      Debug : 8;                      // 24 BitPosition
//		};
//		/*0x038*/     ULONG32      MaxClassLen;
//		/*0x03C*/     ULONG32      MaxValueNameLen;
//		/*0x040*/     ULONG32      MaxValueDataLen;
//		/*0x044*/     ULONG32      WorkVar;
//		/*0x048*/     UINT16       NameLength;
//		/*0x04A*/     UINT16       ClassLength;
//		/*0x04C*/     WCHAR        Name[1];
//		/*0x04E*/     UINT8        _PADDING0_[0x2];
//	}CM_KEY_NODE, *PCM_KEY_NODE;
//
//	typedef struct _CM_KEY_VALUE      // 8 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Signature;
//		/*0x002*/     UINT16       NameLength;
//		/*0x004*/     ULONG32      DataLength;
//		/*0x008*/     ULONG32      Data;
//		/*0x00C*/     ULONG32      Type;
//		/*0x010*/     UINT16       Flags;
//		/*0x012*/     UINT16       Spare;
//		/*0x014*/     WCHAR        Name[1];
//		/*0x016*/     UINT8        _PADDING0_[0x2];
//	}CM_KEY_VALUE, *PCM_KEY_VALUE;
//
//	typedef struct _SECURITY_DESCRIPTOR_RELATIVE // 7 elements, 0x14 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Revision;
//		/*0x001*/     UINT8        Sbz1;
//		/*0x002*/     UINT16       Control;
//		/*0x004*/     ULONG32      Owner;
//		/*0x008*/     ULONG32      Group;
//		/*0x00C*/     ULONG32      Sacl;
//		/*0x010*/     ULONG32      Dacl;
//	}SECURITY_DESCRIPTOR_RELATIVE, *PSECURITY_DESCRIPTOR_RELATIVE;
//
//	typedef struct _CM_KEY_SECURITY                      // 7 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Signature;
//		/*0x002*/     UINT16       Reserved;
//		/*0x004*/     ULONG32      Flink;
//		/*0x008*/     ULONG32      Blink;
//		/*0x00C*/     ULONG32      ReferenceCount;
//		/*0x010*/     ULONG32      DescriptorLength;
//		/*0x014*/     struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor; // 7 elements, 0x14 bytes (sizeof)
//	}CM_KEY_SECURITY, *PCM_KEY_SECURITY;
//
//	typedef struct _CM_KEY_INDEX // 3 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Signature;
//		/*0x002*/     UINT16       Count;
//		/*0x004*/     ULONG32      List[1];
//	}CM_KEY_INDEX, *PCM_KEY_INDEX;
//
//	typedef struct _CM_BIG_DATA // 3 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Signature;
//		/*0x002*/     UINT16       Count;
//		/*0x004*/     ULONG32      List;
//	}CM_BIG_DATA, *PCM_BIG_DATA;
//
//	typedef struct _CELL_DATA                    // 1 elements, 0x50 bytes (sizeof)
//	{
//		union                                    // 7 elements, 0x50 bytes (sizeof)
//		{
//			/*0x000*/         struct _CM_KEY_NODE KeyNode;         // 22 elements, 0x50 bytes (sizeof)
//			/*0x000*/         struct _CM_KEY_VALUE KeyValue;       // 8 elements, 0x18 bytes (sizeof)
//			/*0x000*/         struct _CM_KEY_SECURITY KeySecurity; // 7 elements, 0x28 bytes (sizeof)
//			/*0x000*/         struct _CM_KEY_INDEX KeyIndex;       // 3 elements, 0x8 bytes (sizeof)
//			/*0x000*/         struct _CM_BIG_DATA ValueData;       // 3 elements, 0x8 bytes (sizeof)
//			/*0x000*/         ULONG32      KeyList[1];
//			/*0x000*/         WCHAR        KeyString[1];
//		}u;
//	}CELL_DATA, *PCELL_DATA;
//
//	typedef struct _CLIENT_ID       // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        UniqueProcess;
//		/*0x008*/     VOID*        UniqueThread;
//	}CLIENT_ID, *PCLIENT_ID;
//
//	typedef struct _CLIENT_ID32     // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      UniqueProcess;
//		/*0x004*/     ULONG32      UniqueThread;
//	}CLIENT_ID32, *PCLIENT_ID32;
//
//	typedef struct _CLIENT_ID64     // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       UniqueProcess;
//		/*0x008*/     UINT64       UniqueThread;
//	}CLIENT_ID64, *PCLIENT_ID64;
//
//	typedef union _CLS_LSN             // 2 elements, 0x8 bytes (sizeof)
//	{
//		struct                         // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         UINT32       idxRecord;
//			/*0x004*/         ULONG32      cidContainer;
//		}offset;
//		/*0x000*/     UINT64       ullOffset;
//	}CLS_LSN, *PCLS_LSN;
//
//	typedef struct _CM_CACHED_VALUE_INDEX // 2 elements, 0x58 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      CellIndex;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		union                             // 2 elements, 0x50 bytes (sizeof)
//		{
//			/*0x008*/         struct _CELL_DATA CellData;   // 1 elements, 0x50 bytes (sizeof)
//			/*0x008*/         UINT64       List[1];
//		}Data;
//	}CM_CACHED_VALUE_INDEX, *PCM_CACHED_VALUE_INDEX;
//
//	typedef struct _CM_CELL_REMAP_BLOCK // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      OldCell;
//		/*0x004*/     ULONG32      NewCell;
//	}CM_CELL_REMAP_BLOCK, *PCM_CELL_REMAP_BLOCK;
//
//	typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR // 4 elements, 0x14 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Type;
//		/*0x001*/     UINT8        ShareDisposition;
//		/*0x002*/     UINT16       Flags;
//		union                                      // 12 elements, 0x10 bytes (sizeof)
//		{
//			struct                                 // 2 elements, 0xC bytes (sizeof)
//			{
//				/*0x004*/             union _LARGE_INTEGER Start;        // 4 elements, 0x8 bytes (sizeof)
//				/*0x00C*/             ULONG32      Length;
//			}Generic;
//			struct                                 // 2 elements, 0xC bytes (sizeof)
//			{
//				/*0x004*/             union _LARGE_INTEGER Start;        // 4 elements, 0x8 bytes (sizeof)
//				/*0x00C*/             ULONG32      Length;
//			}Port;
//			struct                                 // 4 elements, 0x10 bytes (sizeof)
//			{
//				/*0x004*/             UINT16       Level;
//				/*0x006*/             UINT16       Group;
//				/*0x008*/             ULONG32      Vector;
//				/*0x00C*/             UINT64       Affinity;
//			}Interrupt;
//			struct                                 // 2 elements, 0x10 bytes (sizeof)
//			{
//				union                              // 2 elements, 0x10 bytes (sizeof)
//				{
//					struct                         // 4 elements, 0x10 bytes (sizeof)
//					{
//						/*0x004*/                     UINT16       Group;
//						/*0x006*/                     UINT16       MessageCount;
//						/*0x008*/                     ULONG32      Vector;
//						/*0x00C*/                     UINT64       Affinity;
//					}Raw;
//					struct                         // 4 elements, 0x10 bytes (sizeof)
//					{
//						/*0x004*/                     UINT16       Level;
//						/*0x006*/                     UINT16       Group;
//						/*0x008*/                     ULONG32      Vector;
//						/*0x00C*/                     UINT64       Affinity;
//					}Translated;
//				};
//			}MessageInterrupt;
//			struct                                 // 2 elements, 0xC bytes (sizeof)
//			{
//				/*0x004*/             union _LARGE_INTEGER Start;        // 4 elements, 0x8 bytes (sizeof)
//				/*0x00C*/             ULONG32      Length;
//			}Memory;
//			struct                                 // 3 elements, 0xC bytes (sizeof)
//			{
//				/*0x004*/             ULONG32      Channel;
//				/*0x008*/             ULONG32      Port;
//				/*0x00C*/             ULONG32      Reserved1;
//			}Dma;
//			struct                                 // 1 elements, 0xC bytes (sizeof)
//			{
//				/*0x004*/             ULONG32      Data[3];
//			}DevicePrivate;
//			struct                                 // 3 elements, 0xC bytes (sizeof)
//			{
//				/*0x004*/             ULONG32      Start;
//				/*0x008*/             ULONG32      Length;
//				/*0x00C*/             ULONG32      Reserved;
//			}BusNumber;
//			struct                                 // 3 elements, 0xC bytes (sizeof)
//			{
//				/*0x004*/             ULONG32      DataSize;
//				/*0x008*/             ULONG32      Reserved1;
//				/*0x00C*/             ULONG32      Reserved2;
//			}DeviceSpecificData;
//			struct                                 // 2 elements, 0xC bytes (sizeof)
//			{
//				/*0x004*/             union _LARGE_INTEGER Start;        // 4 elements, 0x8 bytes (sizeof)
//				/*0x00C*/             ULONG32      Length40;
//			}Memory40;
//			struct                                 // 2 elements, 0xC bytes (sizeof)
//			{
//				/*0x004*/             union _LARGE_INTEGER Start;        // 4 elements, 0x8 bytes (sizeof)
//				/*0x00C*/             ULONG32      Length48;
//			}Memory48;
//			struct                                 // 2 elements, 0xC bytes (sizeof)
//			{
//				/*0x004*/             union _LARGE_INTEGER Start;        // 4 elements, 0x8 bytes (sizeof)
//				/*0x00C*/             ULONG32      Length64;
//			}Memory64;
//		}u;
//	}CM_PARTIAL_RESOURCE_DESCRIPTOR, *PCM_PARTIAL_RESOURCE_DESCRIPTOR;
//
//	typedef struct _CM_PARTIAL_RESOURCE_LIST                          // 4 elements, 0x1C bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Version;
//		/*0x002*/     UINT16       Revision;
//		/*0x004*/     ULONG32      Count;
//		/*0x008*/     struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
//	}CM_PARTIAL_RESOURCE_LIST, *PCM_PARTIAL_RESOURCE_LIST;
//
//	typedef struct _CM_FULL_RESOURCE_DESCRIPTOR               // 3 elements, 0x24 bytes (sizeof)
//	{
//		/*0x000*/     enum _INTERFACE_TYPE InterfaceType;
//		/*0x004*/     ULONG32      BusNumber;
//		/*0x008*/     struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList; // 4 elements, 0x1C bytes (sizeof)
//	}CM_FULL_RESOURCE_DESCRIPTOR, *PCM_FULL_RESOURCE_DESCRIPTOR;
//
//	typedef struct _CM_INDEX_HINT_BLOCK // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Count;
//		/*0x004*/     ULONG32      HashKey[1];
//	}CM_INDEX_HINT_BLOCK, *PCM_INDEX_HINT_BLOCK;
//
//	typedef struct _CM_INTENT_LOCK       // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      OwnerCount;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _CM_KCB_UOW** OwnerTable;
//	}CM_INTENT_LOCK, *PCM_INTENT_LOCK;
//
//	typedef struct _CM_KCB_UOW                               // 20 elements, 0x60 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY TransactionListEntry;             // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _CM_INTENT_LOCK* KCBLock;
//		/*0x018*/     struct _CM_INTENT_LOCK* KeyLock;
//		/*0x020*/     struct _LIST_ENTRY KCBListEntry;                     // 2 elements, 0x10 bytes (sizeof)
//		/*0x030*/     struct _CM_KEY_CONTROL_BLOCK* KeyControlBlock;
//		/*0x038*/     struct _CM_TRANS* Transaction;
//		/*0x040*/     ULONG32      UoWState;
//		/*0x044*/     enum _UoWActionType ActionType;
//		/*0x048*/     enum _HSTORAGE_TYPE StorageType;
//		/*0x04C*/     UINT8        _PADDING0_[0x4];
//		union                                                // 8 elements, 0x10 bytes (sizeof)
//		{
//			/*0x050*/         struct _CM_KEY_CONTROL_BLOCK* ChildKCB;
//			/*0x050*/         ULONG32      VolatileKeyCell;
//			struct                                           // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x050*/             ULONG32      OldValueCell;
//				/*0x054*/             ULONG32      NewValueCell;
//				/*0x058*/             UINT8        _PADDING1_[0x8];
//			};
//			/*0x050*/         ULONG32      UserFlags;
//			/*0x050*/         union _LARGE_INTEGER LastWriteTime;              // 4 elements, 0x8 bytes (sizeof)
//			/*0x050*/         ULONG32      TxSecurityCell;
//			struct                                           // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x050*/             struct _CM_KEY_CONTROL_BLOCK* OldChildKCB;
//				/*0x058*/             struct _CM_KEY_CONTROL_BLOCK* NewChildKCB;
//			};
//			struct                                           // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x050*/             struct _CM_KEY_CONTROL_BLOCK* OtherChildKCB;
//				/*0x058*/             ULONG32      ThisVolatileKeyCell;
//				/*0x05C*/             UINT8        _PADDING2_[0x4];
//			};
//		};
//	}CM_KCB_UOW, *PCM_KCB_UOW;
//
//	typedef struct _CM_KEY_BODY                        // 10 elements, 0x58 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Type;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _CM_KEY_CONTROL_BLOCK* KeyControlBlock;
//		/*0x010*/     struct _CM_NOTIFY_BLOCK* NotifyBlock;
//		/*0x018*/     VOID*        ProcessID;
//		/*0x020*/     struct _LIST_ENTRY KeyBodyList;                // 2 elements, 0x10 bytes (sizeof)
//		struct                                         // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x030*/         ULONG32      Flags : 16;                   // 0 BitPosition
//			/*0x030*/         ULONG32      HandleTags : 16;              // 16 BitPosition
//		};
//		/*0x038*/     VOID*        KtmTrans;
//		/*0x040*/     struct _GUID* KtmUow;
//		/*0x048*/     struct _LIST_ENTRY ContextListHead;            // 2 elements, 0x10 bytes (sizeof)
//	}CM_KEY_BODY, *PCM_KEY_BODY;
//
//	typedef struct _CM_KEY_HASH        // 4 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      ConvKey;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _CM_KEY_HASH* NextHash;
//		/*0x010*/     struct _HHIVE* KeyHive;
//		/*0x018*/     ULONG32      KeyCell;
//		/*0x01C*/     UINT8        _PADDING1_[0x4];
//	}CM_KEY_HASH, *PCM_KEY_HASH;
//
//	typedef struct _CM_KEY_CONTROL_BLOCK               // 48 elements, 0x128 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      RefCount;
//		struct                                         // 7 elements, 0x4 bytes (sizeof)
//		{
//			/*0x004*/         ULONG32      ExtFlags : 16;                // 0 BitPosition
//			/*0x004*/         ULONG32      PrivateAlloc : 1;             // 16 BitPosition
//			/*0x004*/         ULONG32      Delete : 1;                   // 17 BitPosition
//			/*0x004*/         ULONG32      HiveUnloaded : 1;             // 18 BitPosition
//			/*0x004*/         ULONG32      Decommissioned : 1;           // 19 BitPosition
//			/*0x004*/         ULONG32      LockTablePresent : 1;         // 20 BitPosition
//			/*0x004*/         ULONG32      TotalLevels : 10;             // 21 BitPosition
//		};
//		struct                                         // 3 elements, 0x4 bytes (sizeof)
//		{
//			/*0x008*/         ULONG32      DelayedDeref : 1;             // 0 BitPosition
//			/*0x008*/         ULONG32      DelayedClose : 1;             // 1 BitPosition
//			/*0x008*/         ULONG32      Parking : 1;                  // 2 BitPosition
//		};
//		union                                          // 2 elements, 0x20 bytes (sizeof)
//		{
//			/*0x010*/         struct _CM_KEY_HASH KeyHash;               // 4 elements, 0x20 bytes (sizeof)
//			struct                                     // 4 elements, 0x20 bytes (sizeof)
//			{
//				/*0x010*/             ULONG32      ConvKey;
//				/*0x014*/             UINT8        _PADDING0_[0x4];
//				/*0x018*/             struct _CM_KEY_HASH* NextHash;
//				/*0x020*/             struct _HHIVE* KeyHive;
//				/*0x028*/             ULONG32      KeyCell;
//				/*0x02C*/             UINT8        _PADDING1_[0x4];
//			};
//		};
//		/*0x030*/     struct _EX_PUSH_LOCK KcbPushlock;              // 7 elements, 0x8 bytes (sizeof)
//		union                                          // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x038*/         struct _KTHREAD* Owner;
//			/*0x038*/         LONG32       SharedCount;
//		};
//		/*0x040*/     ULONG32      SlotHint;
//		/*0x044*/     UINT8        _PADDING2_[0x4];
//		/*0x048*/     struct _CM_KEY_CONTROL_BLOCK* ParentKcb;
//		/*0x050*/     struct _CM_NAME_CONTROL_BLOCK* NameBlock;
//		/*0x058*/     struct _CM_KEY_SECURITY_CACHE* CachedSecurity;
//		/*0x060*/     struct _CACHED_CHILD_LIST ValueCache;          // 3 elements, 0x10 bytes (sizeof)
//		union                                          // 3 elements, 0x8 bytes (sizeof)
//		{
//			/*0x070*/         struct _CM_INDEX_HINT_BLOCK* IndexHint;
//			/*0x070*/         ULONG32      HashKey;
//			/*0x070*/         ULONG32      SubKeyCount;
//		};
//		union                                          // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x078*/         struct _LIST_ENTRY KeyBodyListHead;        // 2 elements, 0x10 bytes (sizeof)
//			/*0x078*/         struct _LIST_ENTRY FreeListEntry;          // 2 elements, 0x10 bytes (sizeof)
//		};
//		/*0x088*/     struct _CM_KEY_BODY* KeyBodyArray[4];
//		/*0x0A8*/     union _LARGE_INTEGER KcbLastWriteTime;         // 4 elements, 0x8 bytes (sizeof)
//		/*0x0B0*/     UINT16       KcbMaxNameLen;
//		/*0x0B2*/     UINT16       KcbMaxValueNameLen;
//		/*0x0B4*/     ULONG32      KcbMaxValueDataLen;
//		struct                                         // 4 elements, 0x4 bytes (sizeof)
//		{
//			/*0x0B8*/         ULONG32      KcbUserFlags : 4;             // 0 BitPosition
//			/*0x0B8*/         ULONG32      KcbVirtControlFlags : 4;      // 4 BitPosition
//			/*0x0B8*/         ULONG32      KcbDebug : 8;                 // 8 BitPosition
//			/*0x0B8*/         ULONG32      Flags : 16;                   // 16 BitPosition
//		};
//		/*0x0C0*/     CHAR*        RealKeyName;
//		/*0x0C8*/     struct _LIST_ENTRY KCBUoWListHead;             // 2 elements, 0x10 bytes (sizeof)
//		union                                          // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x0D8*/         struct _LIST_ENTRY DelayQueueEntry;        // 2 elements, 0x10 bytes (sizeof)
//			/*0x0D8*/         UINT8*       Stolen;
//		};
//		/*0x0E8*/     struct _CM_TRANS* TransKCBOwner;
//		/*0x0F0*/     struct _CM_INTENT_LOCK KCBLock;                // 2 elements, 0x10 bytes (sizeof)
//		/*0x100*/     struct _CM_INTENT_LOCK KeyLock;                // 2 elements, 0x10 bytes (sizeof)
//		/*0x110*/     struct _CHILD_LIST TransValueCache;            // 2 elements, 0x8 bytes (sizeof)
//		/*0x118*/     struct _CM_TRANS* TransValueListOwner;
//		/*0x120*/     struct _UNICODE_STRING* FullKCBName;
//	}CM_KEY_CONTROL_BLOCK, *PCM_KEY_CONTROL_BLOCK;
//
//	typedef struct _CM_KEY_HASH_TABLE_ENTRY // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _EX_PUSH_LOCK Lock;          // 7 elements, 0x8 bytes (sizeof)
//		/*0x008*/     struct _KTHREAD* Owner;
//		/*0x010*/     struct _CM_KEY_HASH* Entry;
//	}CM_KEY_HASH_TABLE_ENTRY, *PCM_KEY_HASH_TABLE_ENTRY;
//
//	typedef struct _CM_KEY_SECURITY_CACHE                // 6 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Cell;
//		/*0x004*/     ULONG32      ConvKey;
//		/*0x008*/     struct _LIST_ENTRY List;                         // 2 elements, 0x10 bytes (sizeof)
//		/*0x018*/     ULONG32      DescriptorLength;
//		/*0x01C*/     ULONG32      RealRefCount;
//		/*0x020*/     struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor; // 7 elements, 0x14 bytes (sizeof)
//		/*0x034*/     UINT8        _PADDING0_[0x4];
//	}CM_KEY_SECURITY_CACHE, *PCM_KEY_SECURITY_CACHE;
//
//	typedef struct _CM_KEY_SECURITY_CACHE_ENTRY        // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Cell;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _CM_KEY_SECURITY_CACHE* CachedSecurity;
//	}CM_KEY_SECURITY_CACHE_ENTRY, *PCM_KEY_SECURITY_CACHE_ENTRY;
//
//	typedef struct _CM_NAME_HASH        // 4 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      ConvKey;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _CM_NAME_HASH* NextHash;
//		/*0x010*/     UINT16       NameLength;
//		/*0x012*/     WCHAR        Name[1];
//		/*0x014*/     UINT8        _PADDING1_[0x4];
//	}CM_NAME_HASH, *PCM_NAME_HASH;
//
//	typedef struct _CM_NAME_CONTROL_BLOCK      // 7 elements, 0x20 bytes (sizeof)
//	{
//		struct                                 // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      Compressed : 1;       // 0 BitPosition
//			/*0x000*/         ULONG32      RefCount : 31;        // 1 BitPosition
//		};
//		union                                  // 2 elements, 0x18 bytes (sizeof)
//		{
//			/*0x008*/         struct _CM_NAME_HASH NameHash;     // 4 elements, 0x18 bytes (sizeof)
//			struct                             // 4 elements, 0x18 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      ConvKey;
//				/*0x00C*/             UINT8        _PADDING0_[0x4];
//				/*0x010*/             struct _CM_KEY_HASH* NextHash;
//				/*0x018*/             UINT16       NameLength;
//				/*0x01A*/             WCHAR        Name[1];
//				/*0x01C*/             UINT8        _PADDING1_[0x4];
//			};
//		};
//	}CM_NAME_CONTROL_BLOCK, *PCM_NAME_CONTROL_BLOCK;
//
//	typedef struct _CM_NOTIFY_BLOCK                      // 8 elements, 0x58 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY HiveList;                     // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _LIST_ENTRY PostList;                     // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     struct _CM_KEY_CONTROL_BLOCK* KeyControlBlock;
//		/*0x028*/     struct _CM_KEY_BODY* KeyBody;
//		struct                                           // 3 elements, 0x4 bytes (sizeof)
//		{
//			/*0x030*/         ULONG32      Filter : 30;                    // 0 BitPosition
//			/*0x030*/         ULONG32      WatchTree : 1;                  // 30 BitPosition
//			/*0x030*/         ULONG32      NotifyPending : 1;              // 31 BitPosition
//		};
//		/*0x038*/     struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // 4 elements, 0x20 bytes (sizeof)
//	}CM_NOTIFY_BLOCK, *PCM_NOTIFY_BLOCK;
//
//	typedef struct _CM_RESOURCE_LIST                 // 2 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Count;
//		/*0x004*/     struct _CM_FULL_RESOURCE_DESCRIPTOR List[1];
//	}CM_RESOURCE_LIST, *PCM_RESOURCE_LIST;
//
//	typedef struct _CM_RM                       // 17 elements, 0x88 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY RmListEntry;         // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _LIST_ENTRY TransactionListHead; // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     VOID*        TmHandle;
//		/*0x028*/     VOID*        Tm;
//		/*0x030*/     VOID*        RmHandle;
//		/*0x038*/     VOID*        KtmRm;
//		/*0x040*/     ULONG32      RefCount;
//		/*0x044*/     ULONG32      ContainerNum;
//		/*0x048*/     UINT64       ContainerSize;
//		/*0x050*/     struct _CMHIVE* CmHive;
//		/*0x058*/     VOID*        LogFileObject;
//		/*0x060*/     VOID*        MarshallingContext;
//		/*0x068*/     ULONG32      RmFlags;
//		/*0x06C*/     LONG32       LogStartStatus1;
//		/*0x070*/     LONG32       LogStartStatus2;
//		/*0x074*/     UINT8        _PADDING0_[0x4];
//		/*0x078*/     UINT64       BaseLsn;
//		/*0x080*/     struct _ERESOURCE* RmLock;
//	}CM_RM, *PCM_RM;
//
//	typedef struct _CM_TRANS                      // 12 elements, 0xA8 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY TransactionListEntry;  // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _LIST_ENTRY KCBUoWListHead;        // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     struct _LIST_ENTRY LazyCommitListEntry;   // 2 elements, 0x10 bytes (sizeof)
//		/*0x030*/     VOID*        KtmTrans;
//		/*0x038*/     struct _CM_RM* CmRm;
//		/*0x040*/     struct _KENLISTMENT* KtmEnlistmentObject;
//		/*0x048*/     VOID*        KtmEnlistmentHandle;
//		/*0x050*/     struct _GUID KtmUow;                      // 4 elements, 0x10 bytes (sizeof)
//		/*0x060*/     UINT64       StartLsn;
//		/*0x068*/     ULONG32      TransState;
//		/*0x06C*/     ULONG32      HiveCount;
//		/*0x070*/     struct _CMHIVE* HiveArray[7];
//	}CM_TRANS, *PCM_TRANS;
//
//	typedef struct _CM_VIEW_OF_FILE          // 9 elements, 0x58 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY MappedViewLinks;  // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _LIST_ENTRY PinnedViewLinks;  // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     struct _LIST_ENTRY FlushedViewLinks; // 2 elements, 0x10 bytes (sizeof)
//		/*0x030*/     struct _CMHIVE* CmHive;
//		/*0x038*/     VOID*        Bcb;
//		/*0x040*/     VOID*        ViewAddress;
//		/*0x048*/     ULONG32      FileOffset;
//		/*0x04C*/     ULONG32      Size;
//		/*0x050*/     ULONG32      UseCount;
//		/*0x054*/     UINT8        _PADDING0_[0x4];
//	}CM_VIEW_OF_FILE, *PCM_VIEW_OF_FILE;
//
//	typedef struct _CM_WORKITEM                                                                                                                                                   // 4 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY ListEntry;                                                                                                                                             // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     ULONG32      Private;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//		/*0x018*/     FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* WorkerRoutine;
//		/*0x020*/     VOID*        Parameter;
//	}CM_WORKITEM, *PCM_WORKITEM;
//
//	typedef struct _RTL_BITMAP        // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      SizeOfBitMap;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     ULONG32*     Buffer;
//	}RTL_BITMAP, *PRTL_BITMAP;
//
//	typedef struct _FREE_DISPLAY      // 2 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      RealVectorSize;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _RTL_BITMAP Display;   // 2 elements, 0x10 bytes (sizeof)
//	}FREE_DISPLAY, *PFREE_DISPLAY;
//
//	typedef struct _DUAL                      // 7 elements, 0x278 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Length;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _HMAP_DIRECTORY* Map;
//		/*0x010*/     struct _HMAP_TABLE* SmallDir;
//		/*0x018*/     ULONG32      Guard;
//		/*0x01C*/     UINT8        _PADDING1_[0x4];
//		/*0x020*/     struct _FREE_DISPLAY FreeDisplay[24];
//		/*0x260*/     ULONG32      FreeSummary;
//		/*0x264*/     UINT8        _PADDING2_[0x4];
//		/*0x268*/     struct _LIST_ENTRY FreeBins;          // 2 elements, 0x10 bytes (sizeof)
//	}DUAL, *PDUAL;
//
//	typedef struct _HHIVE                                       // 30 elements, 0x598 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Signature;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     FUNCT_142D_142C_GetCellRoutine* GetCellRoutine;
//		/*0x010*/     FUNCT_00A3_147B_ReleaseCellRoutine* ReleaseCellRoutine;
//		/*0x018*/     FUNCT_00A6_147D_Allocate* Allocate;
//		/*0x020*/     FUNCT_00A3_1482_Free* Free;
//		/*0x028*/     FUNCT_0065_1486_FileSetSize* FileSetSize;
//		/*0x030*/     FUNCT_0065_148C_FileWrite* FileWrite;
//		/*0x038*/     FUNCT_0065_1498_FileRead* FileRead;
//		/*0x040*/     FUNCT_0065_149F_FileFlush* FileFlush;
//		/*0x048*/     VOID*        HiveLoadFailure;
//		/*0x050*/     struct _HBASE_BLOCK* BaseBlock;
//		/*0x058*/     struct _RTL_BITMAP DirtyVector;                         // 2 elements, 0x10 bytes (sizeof)
//		/*0x068*/     ULONG32      DirtyCount;
//		/*0x06C*/     ULONG32      DirtyAlloc;
//		/*0x070*/     ULONG32      BaseBlockAlloc;
//		/*0x074*/     ULONG32      Cluster;
//		/*0x078*/     UINT8        Flat;
//		/*0x079*/     UINT8        ReadOnly;
//		/*0x07A*/     UINT8        DirtyFlag;
//		/*0x07B*/     UINT8        _PADDING1_[0x1];
//		/*0x07C*/     ULONG32      HvBinHeadersUse;
//		/*0x080*/     ULONG32      HvFreeCellsUse;
//		/*0x084*/     ULONG32      HvUsedCellsUse;
//		/*0x088*/     ULONG32      CmUsedCellsUse;
//		/*0x08C*/     ULONG32      HiveFlags;
//		/*0x090*/     ULONG32      CurrentLog;
//		/*0x094*/     ULONG32      LogSize[2];
//		/*0x09C*/     ULONG32      RefreshCount;
//		/*0x0A0*/     ULONG32      StorageTypeCount;
//		/*0x0A4*/     ULONG32      Version;
//		/*0x0A8*/     struct _DUAL Storage[2];
//	}HHIVE, *PHHIVE;
//
//	typedef struct _EX_RUNDOWN_REF // 2 elements, 0x8 bytes (sizeof)
//	{
//		union                      // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         UINT64       Count;
//			/*0x000*/         VOID*        Ptr;
//		};
//	}EX_RUNDOWN_REF, *PEX_RUNDOWN_REF;
//
//	typedef struct _CMHIVE                                  // 61 elements, 0xBE8 bytes (sizeof)
//	{
//		/*0x000*/     struct _HHIVE Hive;                                 // 30 elements, 0x598 bytes (sizeof)
//		/*0x598*/     VOID*        FileHandles[6];
//		/*0x5C8*/     struct _LIST_ENTRY NotifyList;                      // 2 elements, 0x10 bytes (sizeof)
//		/*0x5D8*/     struct _LIST_ENTRY HiveList;                        // 2 elements, 0x10 bytes (sizeof)
//		/*0x5E8*/     struct _LIST_ENTRY PreloadedHiveList;               // 2 elements, 0x10 bytes (sizeof)
//		/*0x5F8*/     struct _EX_RUNDOWN_REF HiveRundown;                 // 2 elements, 0x8 bytes (sizeof)
//		/*0x600*/     struct _LIST_ENTRY ParseCacheEntries;               // 2 elements, 0x10 bytes (sizeof)
//		/*0x610*/     struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;
//		/*0x618*/     ULONG32      KcbCacheTableSize;
//		/*0x61C*/     ULONG32      Identity;
//		/*0x620*/     struct _FAST_MUTEX* HiveLock;
//		/*0x628*/     struct _EX_PUSH_LOCK ViewLock;                      // 7 elements, 0x8 bytes (sizeof)
//		/*0x630*/     struct _KTHREAD* ViewLockOwner;
//		/*0x638*/     ULONG32      ViewLockLast;
//		/*0x63C*/     ULONG32      ViewUnLockLast;
//		/*0x640*/     struct _FAST_MUTEX* WriterLock;
//		/*0x648*/     struct _ERESOURCE* FlusherLock;
//		/*0x650*/     struct _RTL_BITMAP FlushDirtyVector;                // 2 elements, 0x10 bytes (sizeof)
//		/*0x660*/     struct _CMP_OFFSET_ARRAY* FlushOffsetArray;
//		/*0x668*/     ULONG32      FlushOffsetArrayCount;
//		/*0x66C*/     ULONG32      FlushHiveTruncated;
//		/*0x670*/     struct _FAST_MUTEX* FlushLock2;
//		/*0x678*/     struct _EX_PUSH_LOCK SecurityLock;                  // 7 elements, 0x8 bytes (sizeof)
//		/*0x680*/     struct _LIST_ENTRY MappedViewList;                  // 2 elements, 0x10 bytes (sizeof)
//		/*0x690*/     struct _LIST_ENTRY PinnedViewList;                  // 2 elements, 0x10 bytes (sizeof)
//		/*0x6A0*/     struct _LIST_ENTRY FlushedViewList;                 // 2 elements, 0x10 bytes (sizeof)
//		/*0x6B0*/     UINT16       MappedViewCount;
//		/*0x6B2*/     UINT16       PinnedViewCount;
//		/*0x6B4*/     ULONG32      UseCount;
//		/*0x6B8*/     ULONG32      ViewsPerHive;
//		/*0x6BC*/     UINT8        _PADDING0_[0x4];
//		/*0x6C0*/     struct _FILE_OBJECT* FileObject;
//		/*0x6C8*/     ULONG32      LastShrinkHiveSize;
//		/*0x6CC*/     UINT8        _PADDING1_[0x4];
//		/*0x6D0*/     union _LARGE_INTEGER ActualFileSize;                // 4 elements, 0x8 bytes (sizeof)
//		/*0x6D8*/     struct _UNICODE_STRING FileFullPath;                // 3 elements, 0x10 bytes (sizeof)
//		/*0x6E8*/     struct _UNICODE_STRING FileUserName;                // 3 elements, 0x10 bytes (sizeof)
//		/*0x6F8*/     struct _UNICODE_STRING HiveRootPath;                // 3 elements, 0x10 bytes (sizeof)
//		/*0x708*/     ULONG32      SecurityCount;
//		/*0x70C*/     ULONG32      SecurityCacheSize;
//		/*0x710*/     LONG32       SecurityHitHint;
//		/*0x714*/     UINT8        _PADDING2_[0x4];
//		/*0x718*/     struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;
//		/*0x720*/     struct _LIST_ENTRY SecurityHash[64];
//		/*0xB20*/     ULONG32      UnloadEventCount;
//		/*0xB24*/     UINT8        _PADDING3_[0x4];
//		/*0xB28*/     struct _KEVENT** UnloadEventArray;
//		/*0xB30*/     struct _CM_KEY_CONTROL_BLOCK* RootKcb;
//		/*0xB38*/     UINT8        Frozen;
//		/*0xB39*/     UINT8        _PADDING4_[0x7];
//		/*0xB40*/     struct _CM_WORKITEM* UnloadWorkItem;
//		/*0xB48*/     struct _CM_WORKITEM UnloadWorkItemHolder;           // 4 elements, 0x28 bytes (sizeof)
//		/*0xB70*/     UINT8        GrowOnlyMode;
//		/*0xB71*/     UINT8        _PADDING5_[0x3];
//		/*0xB74*/     ULONG32      GrowOffset;
//		/*0xB78*/     struct _LIST_ENTRY KcbConvertListHead;              // 2 elements, 0x10 bytes (sizeof)
//		/*0xB88*/     struct _LIST_ENTRY KnodeConvertListHead;            // 2 elements, 0x10 bytes (sizeof)
//		/*0xB98*/     struct _CM_CELL_REMAP_BLOCK* CellRemapArray;
//		/*0xBA0*/     ULONG32      Flags;
//		/*0xBA4*/     UINT8        _PADDING6_[0x4];
//		/*0xBA8*/     struct _LIST_ENTRY TrustClassEntry;                 // 2 elements, 0x10 bytes (sizeof)
//		/*0xBB8*/     ULONG32      FlushCount;
//		/*0xBBC*/     UINT8        _PADDING7_[0x4];
//		/*0xBC0*/     struct _CM_RM* CmRm;
//		/*0xBC8*/     ULONG32      CmRmInitFailPoint;
//		/*0xBCC*/     LONG32       CmRmInitFailStatus;
//		/*0xBD0*/     struct _KTHREAD* CreatorOwner;
//		/*0xBD8*/     struct _KTHREAD* RundownThread;
//		/*0xBE0*/     union _LARGE_INTEGER LastWriteTime;                 // 4 elements, 0x8 bytes (sizeof)
//	}CMHIVE, *PCMHIVE;
//
//	typedef struct _CMP_OFFSET_ARRAY  // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      FileOffset;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     VOID*        DataBuffer;
//		/*0x010*/     ULONG32      DataLength;
//		/*0x014*/     UINT8        _PADDING1_[0x4];
//	}CMP_OFFSET_ARRAY, *PCMP_OFFSET_ARRAY;
//
//	typedef struct _COMPRESSED_DATA_INFO         // 7 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     UINT16       CompressionFormatAndEngine;
//		/*0x002*/     UINT8        CompressionUnitShift;
//		/*0x003*/     UINT8        ChunkShift;
//		/*0x004*/     UINT8        ClusterShift;
//		/*0x005*/     UINT8        Reserved;
//		/*0x006*/     UINT16       NumberOfChunks;
//		/*0x008*/     ULONG32      CompressedChunkSizes[1];
//	}COMPRESSED_DATA_INFO, *PCOMPRESSED_DATA_INFO;
//
//	typedef struct _DEVICE_FLAGS     // 7 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Failed : 1;     // 0 BitPosition
//		/*0x000*/     ULONG32      ReadOnly : 1;   // 1 BitPosition
//		/*0x000*/     ULONG32      Removable : 1;  // 2 BitPosition
//		/*0x000*/     ULONG32      ConsoleIn : 1;  // 3 BitPosition
//		/*0x000*/     ULONG32      ConsoleOut : 1; // 4 BitPosition
//		/*0x000*/     ULONG32      Input : 1;      // 5 BitPosition
//		/*0x000*/     ULONG32      Output : 1;     // 6 BitPosition
//	}DEVICE_FLAGS, *PDEVICE_FLAGS;
//
//	typedef struct _CONFIGURATION_COMPONENT   // 12 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     enum _CONFIGURATION_CLASS Class;
//		/*0x004*/     enum _CONFIGURATION_TYPE Type;
//		/*0x008*/     struct _DEVICE_FLAGS Flags;           // 7 elements, 0x4 bytes (sizeof)
//		/*0x00C*/     UINT16       Version;
//		/*0x00E*/     UINT16       Revision;
//		/*0x010*/     ULONG32      Key;
//		union                                 // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x014*/         ULONG32      AffinityMask;
//			struct                            // 2 elements, 0x4 bytes (sizeof)
//			{
//				/*0x014*/             UINT16       Group;
//				/*0x016*/             UINT16       GroupIndex;
//			};
//		};
//		/*0x018*/     ULONG32      ConfigurationDataLength;
//		/*0x01C*/     ULONG32      IdentifierLength;
//		/*0x020*/     CHAR*        Identifier;
//	}CONFIGURATION_COMPONENT, *PCONFIGURATION_COMPONENT;
//
//	typedef struct _CONFIGURATION_COMPONENT_DATA        // 5 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     struct _CONFIGURATION_COMPONENT_DATA* Parent;
//		/*0x008*/     struct _CONFIGURATION_COMPONENT_DATA* Child;
//		/*0x010*/     struct _CONFIGURATION_COMPONENT_DATA* Sibling;
//		/*0x018*/     struct _CONFIGURATION_COMPONENT ComponentEntry; // 12 elements, 0x28 bytes (sizeof)
//		/*0x040*/     VOID*        ConfigurationData;
//	}CONFIGURATION_COMPONENT_DATA, *PCONFIGURATION_COMPONENT_DATA;
//
//	typedef struct _M128A  // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Low;
//		/*0x008*/     INT64        High;
//	}M128A, *PM128A;
//
//	typedef struct _XSAVE_FORMAT         // 16 elements, 0x200 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       ControlWord;
//		/*0x002*/     UINT16       StatusWord;
//		/*0x004*/     UINT8        TagWord;
//		/*0x005*/     UINT8        Reserved1;
//		/*0x006*/     UINT16       ErrorOpcode;
//		/*0x008*/     ULONG32      ErrorOffset;
//		/*0x00C*/     UINT16       ErrorSelector;
//		/*0x00E*/     UINT16       Reserved2;
//		/*0x010*/     ULONG32      DataOffset;
//		/*0x014*/     UINT16       DataSelector;
//		/*0x016*/     UINT16       Reserved3;
//		/*0x018*/     ULONG32      MxCsr;
//		/*0x01C*/     ULONG32      MxCsr_Mask;
//		/*0x020*/     struct _M128A FloatRegisters[8];
//		/*0x0A0*/     struct _M128A XmmRegisters[16];
//		/*0x1A0*/     UINT8        Reserved4[96];
//	}XSAVE_FORMAT, *PXSAVE_FORMAT;
//
//	typedef struct _CONTEXT                    // 64 elements, 0x4D0 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       P1Home;
//		/*0x008*/     UINT64       P2Home;
//		/*0x010*/     UINT64       P3Home;
//		/*0x018*/     UINT64       P4Home;
//		/*0x020*/     UINT64       P5Home;
//		/*0x028*/     UINT64       P6Home;
//		/*0x030*/     ULONG32      ContextFlags;
//		/*0x034*/     ULONG32      MxCsr;
//		/*0x038*/     UINT16       SegCs;
//		/*0x03A*/     UINT16       SegDs;
//		/*0x03C*/     UINT16       SegEs;
//		/*0x03E*/     UINT16       SegFs;
//		/*0x040*/     UINT16       SegGs;
//		/*0x042*/     UINT16       SegSs;
//		/*0x044*/     ULONG32      EFlags;
//		/*0x048*/     UINT64       Dr0;
//		/*0x050*/     UINT64       Dr1;
//		/*0x058*/     UINT64       Dr2;
//		/*0x060*/     UINT64       Dr3;
//		/*0x068*/     UINT64       Dr6;
//		/*0x070*/     UINT64       Dr7;
//		/*0x078*/     UINT64       Rax;
//		/*0x080*/     UINT64       Rcx;
//		/*0x088*/     UINT64       Rdx;
//		/*0x090*/     UINT64       Rbx;
//		/*0x098*/     UINT64       Rsp;
//		/*0x0A0*/     UINT64       Rbp;
//		/*0x0A8*/     UINT64       Rsi;
//		/*0x0B0*/     UINT64       Rdi;
//		/*0x0B8*/     UINT64       R8;
//		/*0x0C0*/     UINT64       R9;
//		/*0x0C8*/     UINT64       R10;
//		/*0x0D0*/     UINT64       R11;
//		/*0x0D8*/     UINT64       R12;
//		/*0x0E0*/     UINT64       R13;
//		/*0x0E8*/     UINT64       R14;
//		/*0x0F0*/     UINT64       R15;
//		/*0x0F8*/     UINT64       Rip;
//		union                                  // 2 elements, 0x200 bytes (sizeof)
//		{
//			/*0x100*/         struct _XSAVE_FORMAT FltSave;      // 16 elements, 0x200 bytes (sizeof)
//			struct                             // 18 elements, 0x200 bytes (sizeof)
//			{
//				/*0x100*/             struct _M128A Header[2];
//				/*0x120*/             struct _M128A Legacy[8];
//				/*0x1A0*/             struct _M128A Xmm0;            // 2 elements, 0x10 bytes (sizeof)
//				/*0x1B0*/             struct _M128A Xmm1;            // 2 elements, 0x10 bytes (sizeof)
//				/*0x1C0*/             struct _M128A Xmm2;            // 2 elements, 0x10 bytes (sizeof)
//				/*0x1D0*/             struct _M128A Xmm3;            // 2 elements, 0x10 bytes (sizeof)
//				/*0x1E0*/             struct _M128A Xmm4;            // 2 elements, 0x10 bytes (sizeof)
//				/*0x1F0*/             struct _M128A Xmm5;            // 2 elements, 0x10 bytes (sizeof)
//				/*0x200*/             struct _M128A Xmm6;            // 2 elements, 0x10 bytes (sizeof)
//				/*0x210*/             struct _M128A Xmm7;            // 2 elements, 0x10 bytes (sizeof)
//				/*0x220*/             struct _M128A Xmm8;            // 2 elements, 0x10 bytes (sizeof)
//				/*0x230*/             struct _M128A Xmm9;            // 2 elements, 0x10 bytes (sizeof)
//				/*0x240*/             struct _M128A Xmm10;           // 2 elements, 0x10 bytes (sizeof)
//				/*0x250*/             struct _M128A Xmm11;           // 2 elements, 0x10 bytes (sizeof)
//				/*0x260*/             struct _M128A Xmm12;           // 2 elements, 0x10 bytes (sizeof)
//				/*0x270*/             struct _M128A Xmm13;           // 2 elements, 0x10 bytes (sizeof)
//				/*0x280*/             struct _M128A Xmm14;           // 2 elements, 0x10 bytes (sizeof)
//				/*0x290*/             struct _M128A Xmm15;           // 2 elements, 0x10 bytes (sizeof)
//				/*0x2A0*/             UINT8        _PADDING0_[0x60];
//			};
//		};
//		/*0x300*/     struct _M128A VectorRegister[26];
//		/*0x4A0*/     UINT64       VectorControl;
//		/*0x4A8*/     UINT64       DebugControl;
//		/*0x4B0*/     UINT64       LastBranchToRip;
//		/*0x4B8*/     UINT64       LastBranchFromRip;
//		/*0x4C0*/     UINT64       LastExceptionToRip;
//		/*0x4C8*/     UINT64       LastExceptionFromRip;
//	}CONTEXT, *PCONTEXT;
//
//	typedef struct _CONTEXT32_UPDATE // 1 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      NumberEntries;
//	}CONTEXT32_UPDATE, *PCONTEXT32_UPDATE;
//
//	typedef struct _MMSECTION_FLAGS               // 27 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     UINT32       BeingDeleted : 1;            // 0 BitPosition
//		/*0x000*/     UINT32       BeingCreated : 1;            // 1 BitPosition
//		/*0x000*/     UINT32       BeingPurged : 1;             // 2 BitPosition
//		/*0x000*/     UINT32       NoModifiedWriting : 1;       // 3 BitPosition
//		/*0x000*/     UINT32       FailAllIo : 1;               // 4 BitPosition
//		/*0x000*/     UINT32       Image : 1;                   // 5 BitPosition
//		/*0x000*/     UINT32       Based : 1;                   // 6 BitPosition
//		/*0x000*/     UINT32       File : 1;                    // 7 BitPosition
//		/*0x000*/     UINT32       Networked : 1;               // 8 BitPosition
//		/*0x000*/     UINT32       Rom : 1;                     // 9 BitPosition
//		/*0x000*/     UINT32       PhysicalMemory : 1;          // 10 BitPosition
//		/*0x000*/     UINT32       CopyOnWrite : 1;             // 11 BitPosition
//		/*0x000*/     UINT32       Reserve : 1;                 // 12 BitPosition
//		/*0x000*/     UINT32       Commit : 1;                  // 13 BitPosition
//		/*0x000*/     UINT32       Accessed : 1;                // 14 BitPosition
//		/*0x000*/     UINT32       WasPurged : 1;               // 15 BitPosition
//		/*0x000*/     UINT32       UserReference : 1;           // 16 BitPosition
//		/*0x000*/     UINT32       GlobalMemory : 1;            // 17 BitPosition
//		/*0x000*/     UINT32       DeleteOnClose : 1;           // 18 BitPosition
//		/*0x000*/     UINT32       FilePointerNull : 1;         // 19 BitPosition
//		/*0x000*/     UINT32       GlobalOnlyPerSession : 1;    // 20 BitPosition
//		/*0x000*/     UINT32       SetMappedFileIoComplete : 1; // 21 BitPosition
//		/*0x000*/     UINT32       CollidedFlush : 1;           // 22 BitPosition
//		/*0x000*/     UINT32       NoChange : 1;                // 23 BitPosition
//		/*0x000*/     UINT32       Spare : 1;                   // 24 BitPosition
//		/*0x000*/     UINT32       UserWritable : 1;            // 25 BitPosition
//		/*0x000*/     UINT32       PreferredNode : 6;           // 26 BitPosition
//	}MMSECTION_FLAGS, *PMMSECTION_FLAGS;
//
//	typedef struct _EX_FAST_REF      // 3 elements, 0x8 bytes (sizeof)
//	{
//		union                        // 3 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         VOID*        Object;
//			/*0x000*/         UINT64       RefCnt : 4; // 0 BitPosition
//			/*0x000*/         UINT64       Value;
//		};
//	}EX_FAST_REF, *PEX_FAST_REF;
//
//	typedef struct _CONTROL_AREA                                      // 16 elements, 0x80 bytes (sizeof)
//	{
//		/*0x000*/     struct _SEGMENT* Segment;
//		/*0x008*/     struct _LIST_ENTRY DereferenceList;                           // 2 elements, 0x10 bytes (sizeof)
//		/*0x018*/     UINT64       NumberOfSectionReferences;
//		/*0x020*/     UINT64       NumberOfPfnReferences;
//		/*0x028*/     UINT64       NumberOfMappedViews;
//		/*0x030*/     UINT64       NumberOfUserReferences;
//		union                                                         // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x038*/         ULONG32      LongFlags;
//			/*0x038*/         struct _MMSECTION_FLAGS Flags;                            // 27 elements, 0x4 bytes (sizeof)
//		}u;
//		/*0x03C*/     ULONG32      FlushInProgressCount;
//		/*0x040*/     struct _EX_FAST_REF FilePointer;                              // 3 elements, 0x8 bytes (sizeof)
//		/*0x048*/     LONG32       ControlAreaLock;
//		union                                                         // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x04C*/         ULONG32      ModifiedWriteCount;
//			/*0x04C*/         ULONG32      StartingFrame;
//		};
//		/*0x050*/     struct _MI_SECTION_CREATION_GATE* WaitingForDeletion;
//		union                                                         // 1 elements, 0x10 bytes (sizeof)
//		{
//			struct                                                    // 9 elements, 0x10 bytes (sizeof)
//			{
//				union                                                 // 2 elements, 0x4 bytes (sizeof)
//				{
//					/*0x058*/                 ULONG32      NumberOfSystemCacheViews;
//					/*0x058*/                 ULONG32      ImageRelocationStartBit;
//				};
//				union                                                 // 2 elements, 0x4 bytes (sizeof)
//				{
//					/*0x05C*/                 LONG32       WritableUserReferences;
//					struct                                            // 4 elements, 0x4 bytes (sizeof)
//					{
//						/*0x05C*/                     ULONG32      ImageRelocationSizeIn64k : 16;   // 0 BitPosition
//						/*0x05C*/                     ULONG32      Unused : 14;                     // 16 BitPosition
//						/*0x05C*/                     ULONG32      BitMap64 : 1;                    // 30 BitPosition
//						/*0x05C*/                     ULONG32      ImageActive : 1;                 // 31 BitPosition
//					};
//				};
//				union                                                 // 2 elements, 0x8 bytes (sizeof)
//				{
//					/*0x060*/                 struct _MM_SUBSECTION_AVL_TABLE* SubsectionRoot;
//					/*0x060*/                 struct _MI_IMAGE_SECURITY_REFERENCE* SeImageStub;
//				};
//			}e2;
//		}u2;
//		/*0x068*/     INT64        LockedPages;
//		/*0x070*/     struct _LIST_ENTRY ViewList;                                  // 2 elements, 0x10 bytes (sizeof)
//	}CONTROL_AREA, *PCONTROL_AREA;
//
//	typedef struct _COUNTER_READING       // 4 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     enum _HARDWARE_COUNTER_TYPE Type;
//		/*0x004*/     ULONG32      Index;
//		/*0x008*/     UINT64       Start;
//		/*0x010*/     UINT64       Total;
//	}COUNTER_READING, *PCOUNTER_READING;
//
//	typedef struct _CPU_INFO // 4 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Eax;
//		/*0x004*/     ULONG32      Ebx;
//		/*0x008*/     ULONG32      Ecx;
//		/*0x00C*/     ULONG32      Edx;
//	}CPU_INFO, *PCPU_INFO;
//
//	typedef struct _CURDIR              // 2 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _UNICODE_STRING DosPath; // 3 elements, 0x10 bytes (sizeof)
//		/*0x010*/     VOID*        Handle;
//	}CURDIR, *PCURDIR;
//
//	typedef struct _X86_DBGKD_CONTROL_SET // 4 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      TraceFlag;
//		/*0x004*/     ULONG32      Dr7;
//		/*0x008*/     ULONG32      CurrentSymbolStart;
//		/*0x00C*/     ULONG32      CurrentSymbolEnd;
//	}X86_DBGKD_CONTROL_SET, *PX86_DBGKD_CONTROL_SET;
//
//	typedef struct _IA64_DBGKD_CONTROL_SET // 3 elements, 0x14 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Continue;
//		/*0x004*/     UINT64       CurrentSymbolStart;
//		/*0x00C*/     UINT64       CurrentSymbolEnd;
//	}IA64_DBGKD_CONTROL_SET, *PIA64_DBGKD_CONTROL_SET;
//
//	typedef struct _PPC_DBGKD_CONTROL_SET // 3 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Continue;
//		/*0x004*/     ULONG32      CurrentSymbolStart;
//		/*0x008*/     ULONG32      CurrentSymbolEnd;
//	}PPC_DBGKD_CONTROL_SET, *PPPC_DBGKD_CONTROL_SET;
//
//	typedef struct _DBGKD_ANY_CONTROL_SET                    // 6 elements, 0x1C bytes (sizeof)
//	{
//		union                                                // 6 elements, 0x1C bytes (sizeof)
//		{
//			/*0x000*/         struct _X86_DBGKD_CONTROL_SET X86ControlSet;     // 4 elements, 0x10 bytes (sizeof)
//			/*0x000*/         ULONG32      AlphaControlSet;
//			/*0x000*/         struct _IA64_DBGKD_CONTROL_SET IA64ControlSet;   // 3 elements, 0x14 bytes (sizeof)
//			/*0x000*/         struct _AMD64_DBGKD_CONTROL_SET Amd64ControlSet; // 4 elements, 0x1C bytes (sizeof)
//			/*0x000*/         struct _ARM_DBGKD_CONTROL_SET ArmControlSet;     // 3 elements, 0xC bytes (sizeof)
//			/*0x000*/         struct _PPC_DBGKD_CONTROL_SET PpcControlSet;     // 3 elements, 0xC bytes (sizeof)
//		};
//	}DBGKD_ANY_CONTROL_SET, *PDBGKD_ANY_CONTROL_SET;
//
//	typedef struct _DBGKD_BREAKPOINTEX // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      BreakPointCount;
//		/*0x004*/     LONG32       ContinueStatus;
//	}DBGKD_BREAKPOINTEX, *PDBGKD_BREAKPOINTEX;
//
//	typedef struct _DBGKD_CONTINUE   // 1 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       ContinueStatus;
//	}DBGKD_CONTINUE, *PDBGKD_CONTINUE;
//
//	typedef struct _DBGKD_CONTINUE2                      // 3 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       ContinueStatus;
//		union                                            // 2 elements, 0x1C bytes (sizeof)
//		{
//			/*0x004*/         struct _AMD64_DBGKD_CONTROL_SET ControlSet;  // 4 elements, 0x1C bytes (sizeof)
//			/*0x004*/         struct _DBGKD_ANY_CONTROL_SET AnyControlSet; // 6 elements, 0x1C bytes (sizeof)
//		};
//	}DBGKD_CONTINUE2, *PDBGKD_CONTINUE2;
//
//	typedef struct _DBGKD_FILL_MEMORY // 4 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Address;
//		/*0x008*/     ULONG32      Length;
//		/*0x00C*/     UINT16       Flags;
//		/*0x00E*/     UINT16       PatternLength;
//	}DBGKD_FILL_MEMORY, *PDBGKD_FILL_MEMORY;
//
//	typedef struct _DBGKD_GET_CONTEXT // 1 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Unused;
//	}DBGKD_GET_CONTEXT, *PDBGKD_GET_CONTEXT;
//
//	typedef struct _DBGKD_GET_INTERNAL_BREAKPOINT32 // 7 elements, 0x1C bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      BreakpointAddress;
//		/*0x004*/     ULONG32      Flags;
//		/*0x008*/     ULONG32      Calls;
//		/*0x00C*/     ULONG32      MaxCallsPerPeriod;
//		/*0x010*/     ULONG32      MinInstructions;
//		/*0x014*/     ULONG32      MaxInstructions;
//		/*0x018*/     ULONG32      TotalInstructions;
//	}DBGKD_GET_INTERNAL_BREAKPOINT32, *PDBGKD_GET_INTERNAL_BREAKPOINT32;
//
//	typedef struct _DBGKD_GET_INTERNAL_BREAKPOINT64 // 7 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       BreakpointAddress;
//		/*0x008*/     ULONG32      Flags;
//		/*0x00C*/     ULONG32      Calls;
//		/*0x010*/     ULONG32      MaxCallsPerPeriod;
//		/*0x014*/     ULONG32      MinInstructions;
//		/*0x018*/     ULONG32      MaxInstructions;
//		/*0x01C*/     ULONG32      TotalInstructions;
//	}DBGKD_GET_INTERNAL_BREAKPOINT64, *PDBGKD_GET_INTERNAL_BREAKPOINT64;
//
//	typedef struct _DBGKD_GET_SET_BUS_DATA // 5 elements, 0x14 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      BusDataType;
//		/*0x004*/     ULONG32      BusNumber;
//		/*0x008*/     ULONG32      SlotNumber;
//		/*0x00C*/     ULONG32      Offset;
//		/*0x010*/     ULONG32      Length;
//	}DBGKD_GET_SET_BUS_DATA, *PDBGKD_GET_SET_BUS_DATA;
//
//	typedef struct _DBGKD_GET_VERSION32        // 14 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       MajorVersion;
//		/*0x002*/     UINT16       MinorVersion;
//		/*0x004*/     UINT16       ProtocolVersion;
//		/*0x006*/     UINT16       Flags;
//		/*0x008*/     ULONG32      KernBase;
//		/*0x00C*/     ULONG32      PsLoadedModuleList;
//		/*0x010*/     UINT16       MachineType;
//		/*0x012*/     UINT16       ThCallbackStack;
//		/*0x014*/     UINT16       NextCallback;
//		/*0x016*/     UINT16       FramePointer;
//		/*0x018*/     ULONG32      KiCallUserMode;
//		/*0x01C*/     ULONG32      KeUserCallbackDispatcher;
//		/*0x020*/     ULONG32      BreakpointWithStatus;
//		/*0x024*/     ULONG32      DebuggerDataList;
//	}DBGKD_GET_VERSION32, *PDBGKD_GET_VERSION32;
//
//	typedef struct _DBGKD_GET_VERSION64  // 14 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       MajorVersion;
//		/*0x002*/     UINT16       MinorVersion;
//		/*0x004*/     UINT8        ProtocolVersion;
//		/*0x005*/     UINT8        KdSecondaryVersion;
//		/*0x006*/     UINT16       Flags;
//		/*0x008*/     UINT16       MachineType;
//		/*0x00A*/     UINT8        MaxPacketType;
//		/*0x00B*/     UINT8        MaxStateChange;
//		/*0x00C*/     UINT8        MaxManipulate;
//		/*0x00D*/     UINT8        Simulation;
//		/*0x00E*/     UINT16       Unused[1];
//		/*0x010*/     UINT64       KernBase;
//		/*0x018*/     UINT64       PsLoadedModuleList;
//		/*0x020*/     UINT64       DebuggerDataList;
//	}DBGKD_GET_VERSION64, *PDBGKD_GET_VERSION64;
//
//	typedef struct _DBGKD_LOAD_SYMBOLS32 // 6 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      PathNameLength;
//		/*0x004*/     ULONG32      BaseOfDll;
//		/*0x008*/     ULONG32      ProcessId;
//		/*0x00C*/     ULONG32      CheckSum;
//		/*0x010*/     ULONG32      SizeOfImage;
//		/*0x014*/     UINT8        UnloadSymbols;
//		/*0x015*/     UINT8        _PADDING0_[0x3];
//	}DBGKD_LOAD_SYMBOLS32, *PDBGKD_LOAD_SYMBOLS32;
//
//	typedef struct _DBGKD_LOAD_SYMBOLS64 // 6 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      PathNameLength;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     UINT64       BaseOfDll;
//		/*0x010*/     UINT64       ProcessId;
//		/*0x018*/     ULONG32      CheckSum;
//		/*0x01C*/     ULONG32      SizeOfImage;
//		/*0x020*/     UINT8        UnloadSymbols;
//		/*0x021*/     UINT8        _PADDING1_[0x7];
//	}DBGKD_LOAD_SYMBOLS64, *PDBGKD_LOAD_SYMBOLS64;
//
//	typedef struct _DBGKD_READ_MEMORY32 // 3 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      TargetBaseAddress;
//		/*0x004*/     ULONG32      TransferCount;
//		/*0x008*/     ULONG32      ActualBytesRead;
//	}DBGKD_READ_MEMORY32, *PDBGKD_READ_MEMORY32;
//
//	typedef struct _DBGKD_WRITE_MEMORY32 // 3 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      TargetBaseAddress;
//		/*0x004*/     ULONG32      TransferCount;
//		/*0x008*/     ULONG32      ActualBytesWritten;
//	}DBGKD_WRITE_MEMORY32, *PDBGKD_WRITE_MEMORY32;
//
//	typedef struct _DBGKD_READ_MEMORY64 // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       TargetBaseAddress;
//		/*0x008*/     ULONG32      TransferCount;
//		/*0x00C*/     ULONG32      ActualBytesRead;
//	}DBGKD_READ_MEMORY64, *PDBGKD_READ_MEMORY64;
//
//	typedef struct _DBGKD_WRITE_MEMORY64 // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       TargetBaseAddress;
//		/*0x008*/     ULONG32      TransferCount;
//		/*0x00C*/     ULONG32      ActualBytesWritten;
//	}DBGKD_WRITE_MEMORY64, *PDBGKD_WRITE_MEMORY64;
//
//	typedef struct _DBGKD_SET_CONTEXT // 1 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      ContextFlags;
//	}DBGKD_SET_CONTEXT, *PDBGKD_SET_CONTEXT;
//
//	typedef struct _DBGKD_WRITE_BREAKPOINT32 // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      BreakPointAddress;
//		/*0x004*/     ULONG32      BreakPointHandle;
//	}DBGKD_WRITE_BREAKPOINT32, *PDBGKD_WRITE_BREAKPOINT32;
//
//	typedef struct _DBGKD_RESTORE_BREAKPOINT // 1 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      BreakPointHandle;
//	}DBGKD_RESTORE_BREAKPOINT, *PDBGKD_RESTORE_BREAKPOINT;
//
//	typedef struct _DBGKD_READ_WRITE_IO32 // 3 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      DataSize;
//		/*0x004*/     ULONG32      IoAddress;
//		/*0x008*/     ULONG32      DataValue;
//	}DBGKD_READ_WRITE_IO32, *PDBGKD_READ_WRITE_IO32;
//
//	typedef struct _DBGKD_READ_WRITE_IO_EXTENDED32 // 6 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      DataSize;
//		/*0x004*/     ULONG32      InterfaceType;
//		/*0x008*/     ULONG32      BusNumber;
//		/*0x00C*/     ULONG32      AddressSpace;
//		/*0x010*/     ULONG32      IoAddress;
//		/*0x014*/     ULONG32      DataValue;
//	}DBGKD_READ_WRITE_IO_EXTENDED32, *PDBGKD_READ_WRITE_IO_EXTENDED32;
//
//	typedef struct _DBGKD_QUERY_SPECIAL_CALLS // 1 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      NumberOfSpecialCalls;
//	}DBGKD_QUERY_SPECIAL_CALLS, *PDBGKD_QUERY_SPECIAL_CALLS;
//
//	typedef struct _DBGKD_SET_SPECIAL_CALL32 // 1 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      SpecialCall;
//	}DBGKD_SET_SPECIAL_CALL32, *PDBGKD_SET_SPECIAL_CALL32;
//
//	typedef struct _DBGKD_SET_INTERNAL_BREAKPOINT32 // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      BreakpointAddress;
//		/*0x004*/     ULONG32      Flags;
//	}DBGKD_SET_INTERNAL_BREAKPOINT32, *PDBGKD_SET_INTERNAL_BREAKPOINT32;
//
//	typedef struct _DBGKD_READ_WRITE_MSR // 3 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Msr;
//		/*0x004*/     ULONG32      DataValueLow;
//		/*0x008*/     ULONG32      DataValueHigh;
//	}DBGKD_READ_WRITE_MSR, *PDBGKD_READ_WRITE_MSR;
//
//	typedef struct _DBGKD_SEARCH_MEMORY // 4 elements, 0x18 bytes (sizeof)
//	{
//		union                           // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         UINT64       SearchAddress;
//			/*0x000*/         UINT64       FoundAddress;
//		};
//		/*0x008*/     UINT64       SearchLength;
//		/*0x010*/     ULONG32      PatternLength;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//	}DBGKD_SEARCH_MEMORY, *PDBGKD_SEARCH_MEMORY;
//
//	typedef struct _DBGKD_MANIPULATE_STATE32                               // 5 elements, 0x34 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      ApiNumber;
//		/*0x004*/     UINT16       ProcessorLevel;
//		/*0x006*/     UINT16       Processor;
//		/*0x008*/     LONG32       ReturnStatus;
//		union                                                              // 20 elements, 0x28 bytes (sizeof)
//		{
//			/*0x00C*/         struct _DBGKD_READ_MEMORY32 ReadMemory;                        // 3 elements, 0xC bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_WRITE_MEMORY32 WriteMemory;                      // 3 elements, 0xC bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_READ_MEMORY64 ReadMemory64;                      // 3 elements, 0x10 bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_WRITE_MEMORY64 WriteMemory64;                    // 3 elements, 0x10 bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_GET_CONTEXT GetContext;                          // 1 elements, 0x4 bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_SET_CONTEXT SetContext;                          // 1 elements, 0x4 bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_WRITE_BREAKPOINT32 WriteBreakPoint;              // 2 elements, 0x8 bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_RESTORE_BREAKPOINT RestoreBreakPoint;            // 1 elements, 0x4 bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_CONTINUE Continue;                               // 1 elements, 0x4 bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_CONTINUE2 Continue2;                             // 3 elements, 0x20 bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_READ_WRITE_IO32 ReadWriteIo;                     // 3 elements, 0xC bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_READ_WRITE_IO_EXTENDED32 ReadWriteIoExtended;    // 6 elements, 0x18 bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_QUERY_SPECIAL_CALLS QuerySpecialCalls;           // 1 elements, 0x4 bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_SET_SPECIAL_CALL32 SetSpecialCall;               // 1 elements, 0x4 bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_SET_INTERNAL_BREAKPOINT32 SetInternalBreakpoint; // 2 elements, 0x8 bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_GET_INTERNAL_BREAKPOINT32 GetInternalBreakpoint; // 7 elements, 0x1C bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_GET_VERSION32 GetVersion32;                      // 14 elements, 0x28 bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_BREAKPOINTEX BreakPointEx;                       // 2 elements, 0x8 bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_READ_WRITE_MSR ReadWriteMsr;                     // 3 elements, 0xC bytes (sizeof)
//			/*0x00C*/         struct _DBGKD_SEARCH_MEMORY SearchMemory;                      // 4 elements, 0x18 bytes (sizeof)
//		}u;
//	}DBGKD_MANIPULATE_STATE32, *PDBGKD_MANIPULATE_STATE32;
//
//	typedef struct _DBGKD_WRITE_BREAKPOINT64 // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       BreakPointAddress;
//		/*0x008*/     ULONG32      BreakPointHandle;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//	}DBGKD_WRITE_BREAKPOINT64, *PDBGKD_WRITE_BREAKPOINT64;
//
//	typedef struct _DBGKD_READ_WRITE_IO64 // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       IoAddress;
//		/*0x008*/     ULONG32      DataSize;
//		/*0x00C*/     ULONG32      DataValue;
//	}DBGKD_READ_WRITE_IO64, *PDBGKD_READ_WRITE_IO64;
//
//	typedef struct _DBGKD_READ_WRITE_IO_EXTENDED64 // 6 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      DataSize;
//		/*0x004*/     ULONG32      InterfaceType;
//		/*0x008*/     ULONG32      BusNumber;
//		/*0x00C*/     ULONG32      AddressSpace;
//		/*0x010*/     UINT64       IoAddress;
//		/*0x018*/     ULONG32      DataValue;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//	}DBGKD_READ_WRITE_IO_EXTENDED64, *PDBGKD_READ_WRITE_IO_EXTENDED64;
//
//	typedef struct _DBGKD_SET_SPECIAL_CALL64 // 1 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       SpecialCall;
//	}DBGKD_SET_SPECIAL_CALL64, *PDBGKD_SET_SPECIAL_CALL64;
//
//	typedef struct _DBGKD_SET_INTERNAL_BREAKPOINT64 // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       BreakpointAddress;
//		/*0x008*/     ULONG32      Flags;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//	}DBGKD_SET_INTERNAL_BREAKPOINT64, *PDBGKD_SET_INTERNAL_BREAKPOINT64;
//
//	typedef struct _DBGKD_QUERY_MEMORY // 4 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Address;
//		/*0x008*/     UINT64       Reserved;
//		/*0x010*/     ULONG32      AddressSpace;
//		/*0x014*/     ULONG32      Flags;
//	}DBGKD_QUERY_MEMORY, *PDBGKD_QUERY_MEMORY;
//
//	typedef struct _DBGKD_SWITCH_PARTITION // 1 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Partition;
//	}DBGKD_SWITCH_PARTITION, *PDBGKD_SWITCH_PARTITION;
//
//	typedef struct _DBGKD_MANIPULATE_STATE64                               // 5 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      ApiNumber;
//		/*0x004*/     UINT16       ProcessorLevel;
//		/*0x006*/     UINT16       Processor;
//		/*0x008*/     LONG32       ReturnStatus;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		union                                                              // 22 elements, 0x28 bytes (sizeof)
//		{
//			/*0x010*/         struct _DBGKD_READ_MEMORY64 ReadMemory;                        // 3 elements, 0x10 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_WRITE_MEMORY64 WriteMemory;                      // 3 elements, 0x10 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_GET_CONTEXT GetContext;                          // 1 elements, 0x4 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_SET_CONTEXT SetContext;                          // 1 elements, 0x4 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_WRITE_BREAKPOINT64 WriteBreakPoint;              // 2 elements, 0x10 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_RESTORE_BREAKPOINT RestoreBreakPoint;            // 1 elements, 0x4 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_CONTINUE Continue;                               // 1 elements, 0x4 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_CONTINUE2 Continue2;                             // 3 elements, 0x20 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_READ_WRITE_IO64 ReadWriteIo;                     // 3 elements, 0x10 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_READ_WRITE_IO_EXTENDED64 ReadWriteIoExtended;    // 6 elements, 0x20 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_QUERY_SPECIAL_CALLS QuerySpecialCalls;           // 1 elements, 0x4 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_SET_SPECIAL_CALL64 SetSpecialCall;               // 1 elements, 0x8 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_SET_INTERNAL_BREAKPOINT64 SetInternalBreakpoint; // 2 elements, 0x10 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_GET_INTERNAL_BREAKPOINT64 GetInternalBreakpoint; // 7 elements, 0x20 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_GET_VERSION64 GetVersion64;                      // 14 elements, 0x28 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_BREAKPOINTEX BreakPointEx;                       // 2 elements, 0x8 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_READ_WRITE_MSR ReadWriteMsr;                     // 3 elements, 0xC bytes (sizeof)
//			/*0x010*/         struct _DBGKD_SEARCH_MEMORY SearchMemory;                      // 4 elements, 0x18 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_GET_SET_BUS_DATA GetSetBusData;                  // 5 elements, 0x14 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_FILL_MEMORY FillMemory;                          // 4 elements, 0x10 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_QUERY_MEMORY QueryMemory;                        // 4 elements, 0x18 bytes (sizeof)
//			/*0x010*/         struct _DBGKD_SWITCH_PARTITION SwitchPartition;                // 1 elements, 0x4 bytes (sizeof)
//		}u;
//	}DBGKD_MANIPULATE_STATE64, *PDBGKD_MANIPULATE_STATE64;
//
//	typedef struct _EXCEPTION_RECORD32         // 6 elements, 0x50 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       ExceptionCode;
//		/*0x004*/     ULONG32      ExceptionFlags;
//		/*0x008*/     ULONG32      ExceptionRecord;
//		/*0x00C*/     ULONG32      ExceptionAddress;
//		/*0x010*/     ULONG32      NumberParameters;
//		/*0x014*/     ULONG32      ExceptionInformation[15];
//	}EXCEPTION_RECORD32, *PEXCEPTION_RECORD32;
//
//	typedef struct _DBGKM_EXCEPTION32               // 2 elements, 0x54 bytes (sizeof)
//	{
//		/*0x000*/     struct _EXCEPTION_RECORD32 ExceptionRecord; // 6 elements, 0x50 bytes (sizeof)
//		/*0x050*/     ULONG32      FirstChance;
//	}DBGKM_EXCEPTION32, *PDBGKM_EXCEPTION32;
//
//	typedef struct _EXCEPTION_RECORD64         // 7 elements, 0x98 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       ExceptionCode;
//		/*0x004*/     ULONG32      ExceptionFlags;
//		/*0x008*/     UINT64       ExceptionRecord;
//		/*0x010*/     UINT64       ExceptionAddress;
//		/*0x018*/     ULONG32      NumberParameters;
//		/*0x01C*/     ULONG32      __unusedAlignment;
//		/*0x020*/     UINT64       ExceptionInformation[15];
//	}EXCEPTION_RECORD64, *PEXCEPTION_RECORD64;
//
//	typedef struct _DBGKM_EXCEPTION64               // 2 elements, 0xA0 bytes (sizeof)
//	{
//		/*0x000*/     struct _EXCEPTION_RECORD64 ExceptionRecord; // 7 elements, 0x98 bytes (sizeof)
//		/*0x098*/     ULONG32      FirstChance;
//		/*0x09C*/     UINT8        _PADDING0_[0x4];
//	}DBGKM_EXCEPTION64, *PDBGKM_EXCEPTION64;
//
//	typedef struct _DEFERRED_WRITE                                                                   // 9 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     INT16        NodeTypeCode;
//		/*0x002*/     INT16        NodeByteSize;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _FILE_OBJECT* FileObject;
//		/*0x010*/     ULONG32      BytesToWrite;
//		/*0x014*/     UINT8        _PADDING1_[0x4];
//		/*0x018*/     struct _LIST_ENTRY DeferredWriteLinks;                                                       // 2 elements, 0x10 bytes (sizeof)
//		/*0x028*/     struct _KEVENT* Event;
//		/*0x030*/     FUNCT_00A3_00A2_CleanupGroupCancelCallback_DeRefSecurityDescriptor_PostRoutine* PostRoutine;
//		/*0x038*/     VOID*        Context1;
//		/*0x040*/     VOID*        Context2;
//	}DEFERRED_WRITE, *PDEFERRED_WRITE;
//
//	typedef struct _DEVICE_CAPABILITIES          // 30 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Size;
//		/*0x002*/     UINT16       Version;
//		struct                                   // 20 elements, 0x4 bytes (sizeof)
//		{
//			/*0x004*/         ULONG32      DeviceD1 : 1;           // 0 BitPosition
//			/*0x004*/         ULONG32      DeviceD2 : 1;           // 1 BitPosition
//			/*0x004*/         ULONG32      LockSupported : 1;      // 2 BitPosition
//			/*0x004*/         ULONG32      EjectSupported : 1;     // 3 BitPosition
//			/*0x004*/         ULONG32      Removable : 1;          // 4 BitPosition
//			/*0x004*/         ULONG32      DockDevice : 1;         // 5 BitPosition
//			/*0x004*/         ULONG32      UniqueID : 1;           // 6 BitPosition
//			/*0x004*/         ULONG32      SilentInstall : 1;      // 7 BitPosition
//			/*0x004*/         ULONG32      RawDeviceOK : 1;        // 8 BitPosition
//			/*0x004*/         ULONG32      SurpriseRemovalOK : 1;  // 9 BitPosition
//			/*0x004*/         ULONG32      WakeFromD0 : 1;         // 10 BitPosition
//			/*0x004*/         ULONG32      WakeFromD1 : 1;         // 11 BitPosition
//			/*0x004*/         ULONG32      WakeFromD2 : 1;         // 12 BitPosition
//			/*0x004*/         ULONG32      WakeFromD3 : 1;         // 13 BitPosition
//			/*0x004*/         ULONG32      HardwareDisabled : 1;   // 14 BitPosition
//			/*0x004*/         ULONG32      NonDynamic : 1;         // 15 BitPosition
//			/*0x004*/         ULONG32      WarmEjectSupported : 1; // 16 BitPosition
//			/*0x004*/         ULONG32      NoDisplayInUI : 1;      // 17 BitPosition
//			/*0x004*/         ULONG32      Reserved1 : 1;          // 18 BitPosition
//			/*0x004*/         ULONG32      Reserved : 13;          // 19 BitPosition
//		};
//		/*0x008*/     ULONG32      Address;
//		/*0x00C*/     ULONG32      UINumber;
//		/*0x010*/     enum _DEVICE_POWER_STATE DeviceState[7];
//		/*0x02C*/     enum _SYSTEM_POWER_STATE SystemWake;
//		/*0x030*/     enum _DEVICE_POWER_STATE DeviceWake;
//		/*0x034*/     ULONG32      D1Latency;
//		/*0x038*/     ULONG32      D2Latency;
//		/*0x03C*/     ULONG32      D3Latency;
//	}DEVICE_CAPABILITIES, *PDEVICE_CAPABILITIES;
//
//	typedef struct _DEVICE_MAP                               // 6 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     struct _OBJECT_DIRECTORY* DosDevicesDirectory;
//		/*0x008*/     struct _OBJECT_DIRECTORY* GlobalDosDevicesDirectory;
//		/*0x010*/     VOID*        DosDevicesDirectoryHandle;
//		/*0x018*/     ULONG32      ReferenceCount;
//		/*0x01C*/     ULONG32      DriveMap;
//		/*0x020*/     UINT8        DriveType[32];
//	}DEVICE_MAP, *PDEVICE_MAP;
//
//	typedef struct _PO_DEVICE_NOTIFY         // 12 elements, 0x68 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY Link;             // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _LIST_ENTRY PowerChildren;    // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     struct _LIST_ENTRY PowerParents;     // 2 elements, 0x10 bytes (sizeof)
//		/*0x030*/     struct _DEVICE_OBJECT* TargetDevice;
//		/*0x038*/     UINT8        OrderLevel;
//		/*0x039*/     UINT8        _PADDING0_[0x7];
//		/*0x040*/     struct _DEVICE_OBJECT* DeviceObject;
//		/*0x048*/     UINT16*      DeviceName;
//		/*0x050*/     UINT16*      DriverName;
//		/*0x058*/     ULONG32      ChildCount;
//		/*0x05C*/     ULONG32      ActiveChild;
//		/*0x060*/     ULONG32      ParentCount;
//		/*0x064*/     ULONG32      ActiveParent;
//	}PO_DEVICE_NOTIFY, *PPO_DEVICE_NOTIFY;
//
//	typedef struct _PO_IRP_QUEUE     // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _IRP* CurrentIrp;
//		/*0x008*/     struct _IRP* PendingIrpList;
//	}PO_IRP_QUEUE, *PPO_IRP_QUEUE;
//
//	typedef struct _PO_IRP_MANAGER           // 2 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _PO_IRP_QUEUE DeviceIrpQueue; // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _PO_IRP_QUEUE SystemIrpQueue; // 2 elements, 0x10 bytes (sizeof)
//	}PO_IRP_MANAGER, *PPO_IRP_MANAGER;
//
//	typedef struct _DEVICE_NODE                                      // 54 elements, 0x268 bytes (sizeof)
//	{
//		/*0x000*/     struct _DEVICE_NODE* Sibling;
//		/*0x008*/     struct _DEVICE_NODE* Child;
//		/*0x010*/     struct _DEVICE_NODE* Parent;
//		/*0x018*/     struct _DEVICE_NODE* LastChild;
//		/*0x020*/     struct _DEVICE_OBJECT* PhysicalDeviceObject;
//		/*0x028*/     struct _UNICODE_STRING InstancePath;                         // 3 elements, 0x10 bytes (sizeof)
//		/*0x038*/     struct _UNICODE_STRING ServiceName;                          // 3 elements, 0x10 bytes (sizeof)
//		/*0x048*/     struct _IRP* PendingIrp;
//		/*0x050*/     ULONG32      Level;
//		/*0x054*/     UINT8        _PADDING0_[0x4];
//		/*0x058*/     struct _PO_DEVICE_NOTIFY Notify;                             // 12 elements, 0x68 bytes (sizeof)
//		/*0x0C0*/     struct _PO_IRP_MANAGER PoIrpManager;                         // 2 elements, 0x20 bytes (sizeof)
//		/*0x0E0*/     enum _PNP_DEVNODE_STATE State;
//		/*0x0E4*/     enum _PNP_DEVNODE_STATE PreviousState;
//		/*0x0E8*/     enum _PNP_DEVNODE_STATE StateHistory[20];
//		/*0x138*/     ULONG32      StateHistoryEntry;
//		/*0x13C*/     LONG32       CompletionStatus;
//		/*0x140*/     ULONG32      Flags;
//		/*0x144*/     ULONG32      UserFlags;
//		/*0x148*/     ULONG32      Problem;
//		/*0x14C*/     UINT8        _PADDING1_[0x4];
//		/*0x150*/     struct _CM_RESOURCE_LIST* ResourceList;
//		/*0x158*/     struct _CM_RESOURCE_LIST* ResourceListTranslated;
//		/*0x160*/     struct _DEVICE_OBJECT* DuplicatePDO;
//		/*0x168*/     struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;
//		/*0x170*/     enum _INTERFACE_TYPE InterfaceType;
//		/*0x174*/     ULONG32      BusNumber;
//		/*0x178*/     enum _INTERFACE_TYPE ChildInterfaceType;
//		/*0x17C*/     ULONG32      ChildBusNumber;
//		/*0x180*/     UINT16       ChildBusTypeIndex;
//		/*0x182*/     UINT8        RemovalPolicy;
//		/*0x183*/     UINT8        HardwareRemovalPolicy;
//		/*0x184*/     UINT8        _PADDING2_[0x4];
//		/*0x188*/     struct _LIST_ENTRY TargetDeviceNotify;                       // 2 elements, 0x10 bytes (sizeof)
//		/*0x198*/     struct _LIST_ENTRY DeviceArbiterList;                        // 2 elements, 0x10 bytes (sizeof)
//		/*0x1A8*/     struct _LIST_ENTRY DeviceTranslatorList;                     // 2 elements, 0x10 bytes (sizeof)
//		/*0x1B8*/     UINT16       NoTranslatorMask;
//		/*0x1BA*/     UINT16       QueryTranslatorMask;
//		/*0x1BC*/     UINT16       NoArbiterMask;
//		/*0x1BE*/     UINT16       QueryArbiterMask;
//		union                                                        // 3 elements, 0x8 bytes (sizeof)
//		{
//			/*0x1C0*/         struct _DEVICE_NODE* LegacyDeviceNode;
//			/*0x1C0*/         struct _DEVICE_RELATIONS* PendingDeviceRelations;
//			/*0x1C0*/         VOID*        Information;
//		}OverUsed1;
//		union                                                        // 1 elements, 0x8 bytes (sizeof)
//		{
//			/*0x1C8*/         struct _DEVICE_NODE* NextResourceDeviceNode;
//		}OverUsed2;
//		/*0x1D0*/     struct _CM_RESOURCE_LIST* BootResources;
//		/*0x1D8*/     struct _CM_RESOURCE_LIST* BootResourcesTranslated;
//		/*0x1E0*/     ULONG32      CapabilityFlags;
//		/*0x1E4*/     UINT8        _PADDING3_[0x4];
//		struct                                                       // 3 elements, 0x20 bytes (sizeof)
//		{
//			/*0x1E8*/         enum _PROFILE_STATUS DockStatus;
//			/*0x1EC*/         UINT8        _PADDING4_[0x4];
//			/*0x1F0*/         struct _LIST_ENTRY ListEntry;                            // 2 elements, 0x10 bytes (sizeof)
//			/*0x200*/         UINT16*      SerialNumber;
//		}DockInfo;
//		/*0x208*/     ULONG32      DisableableDepends;
//		/*0x20C*/     UINT8        _PADDING4_[0x4];
//		/*0x210*/     struct _LIST_ENTRY PendedSetInterfaceState;                  // 2 elements, 0x10 bytes (sizeof)
//		/*0x220*/     struct _LIST_ENTRY LegacyBusListEntry;                       // 2 elements, 0x10 bytes (sizeof)
//		/*0x230*/     ULONG32      DriverUnloadRetryCount;
//		/*0x234*/     UINT8        _PADDING5_[0x4];
//		/*0x238*/     struct _DEVICE_NODE* PreviousParent;
//		/*0x240*/     ULONG32      DeletedChildren;
//		/*0x244*/     ULONG32      NumaNodeIndex;
//		/*0x248*/     struct _GUID ContainerID;                                    // 4 elements, 0x10 bytes (sizeof)
//		/*0x258*/     UINT8        OverrideFlags;
//		/*0x259*/     UINT8        RequiresUnloadedDriver;
//		/*0x25A*/     UINT8        _PADDING6_[0x6];
//		/*0x260*/     struct _PENDING_RELATIONS_LIST_ENTRY* PendingEjectRelations;
//	}DEVICE_NODE, *PDEVICE_NODE;
//
//	typedef struct _KDEVICE_QUEUE_ENTRY     // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY DeviceListEntry; // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     ULONG32      SortKey;
//		/*0x014*/     UINT8        Inserted;
//		/*0x015*/     UINT8        _PADDING0_[0x3];
//	}KDEVICE_QUEUE_ENTRY, *PKDEVICE_QUEUE_ENTRY;
//
//	typedef struct _WAIT_CONTEXT_BLOCK                // 7 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;   // 3 elements, 0x18 bytes (sizeof)
//		/*0x018*/     FUNCT_0F1F_0F1E_DeviceRoutine* DeviceRoutine;
//		/*0x020*/     VOID*        DeviceContext;
//		/*0x028*/     ULONG32      NumberOfMapRegisters;
//		/*0x02C*/     UINT8        _PADDING0_[0x4];
//		/*0x030*/     VOID*        DeviceObject;
//		/*0x038*/     VOID*        CurrentIrp;
//		/*0x040*/     struct _KDPC* BufferChainingDpc;
//	}WAIT_CONTEXT_BLOCK, *PWAIT_CONTEXT_BLOCK;
//
//	typedef struct _KDEVICE_QUEUE          // 7 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     INT16        Type;
//		/*0x002*/     INT16        Size;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _LIST_ENTRY DeviceListHead; // 2 elements, 0x10 bytes (sizeof)
//		/*0x018*/     UINT64       Lock;
//		union                              // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x020*/         UINT8        Busy;
//			struct                         // 2 elements, 0x8 bytes (sizeof)
//			{
//				/*0x020*/             INT64        Reserved : 8; // 0 BitPosition
//				/*0x020*/             INT64        Hint : 56;    // 8 BitPosition
//			};
//		};
//	}KDEVICE_QUEUE, *PKDEVICE_QUEUE;
//
//	typedef struct _KDPC                                  // 9 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Type;
//		/*0x001*/     UINT8        Importance;
//		/*0x002*/     UINT16       Number;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _LIST_ENTRY DpcListEntry;                  // 2 elements, 0x10 bytes (sizeof)
//		/*0x018*/     FUNCT_00A3_0587_DeferredRoutine* DeferredRoutine;
//		/*0x020*/     VOID*        DeferredContext;
//		/*0x028*/     VOID*        SystemArgument1;
//		/*0x030*/     VOID*        SystemArgument2;
//		/*0x038*/     VOID*        DpcData;
//	}KDPC, *PKDPC;
//
//	typedef struct _DEVICE_OBJECT                        // 25 elements, 0x150 bytes (sizeof)
//	{
//		/*0x000*/     INT16        Type;
//		/*0x002*/     UINT16       Size;
//		/*0x004*/     LONG32       ReferenceCount;
//		/*0x008*/     struct _DRIVER_OBJECT* DriverObject;
//		/*0x010*/     struct _DEVICE_OBJECT* NextDevice;
//		/*0x018*/     struct _DEVICE_OBJECT* AttachedDevice;
//		/*0x020*/     struct _IRP* CurrentIrp;
//		/*0x028*/     struct _IO_TIMER* Timer;
//		/*0x030*/     ULONG32      Flags;
//		/*0x034*/     ULONG32      Characteristics;
//		/*0x038*/     struct _VPB* Vpb;
//		/*0x040*/     VOID*        DeviceExtension;
//		/*0x048*/     ULONG32      DeviceType;
//		/*0x04C*/     CHAR         StackSize;
//		/*0x04D*/     UINT8        _PADDING0_[0x3];
//		union                                            // 2 elements, 0x48 bytes (sizeof)
//		{
//			/*0x050*/         struct _LIST_ENTRY ListEntry;                // 2 elements, 0x10 bytes (sizeof)
//			/*0x050*/         struct _WAIT_CONTEXT_BLOCK Wcb;              // 7 elements, 0x48 bytes (sizeof)
//		}Queue;
//		/*0x098*/     ULONG32      AlignmentRequirement;
//		/*0x09C*/     UINT8        _PADDING1_[0x4];
//		/*0x0A0*/     struct _KDEVICE_QUEUE DeviceQueue;               // 7 elements, 0x28 bytes (sizeof)
//		/*0x0C8*/     struct _KDPC Dpc;                                // 9 elements, 0x40 bytes (sizeof)
//		/*0x108*/     ULONG32      ActiveThreadCount;
//		/*0x10C*/     UINT8        _PADDING2_[0x4];
//		/*0x110*/     VOID*        SecurityDescriptor;
//		/*0x118*/     struct _KEVENT DeviceLock;                       // 1 elements, 0x18 bytes (sizeof)
//		/*0x130*/     UINT16       SectorSize;
//		/*0x132*/     UINT16       Spare1;
//		/*0x134*/     UINT8        _PADDING3_[0x4];
//		/*0x138*/     struct _DEVOBJ_EXTENSION* DeviceObjectExtension;
//		/*0x140*/     VOID*        Reserved;
//		/*0x148*/     UINT8        _PADDING4_[0x8];
//	}DEVICE_OBJECT, *PDEVICE_OBJECT;
//
//	typedef struct _DEVICE_OBJECT_POWER_EXTENSION // 13 elements, 0x58 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      IdleCount;
//		/*0x004*/     ULONG32      BusyCount;
//		/*0x008*/     ULONG32      BusyReference;
//		/*0x00C*/     ULONG32      TotalBusyCount;
//		/*0x010*/     ULONG32      ConservationIdleTime;
//		/*0x014*/     ULONG32      PerformanceIdleTime;
//		/*0x018*/     struct _DEVICE_OBJECT* DeviceObject;
//		/*0x020*/     struct _LIST_ENTRY IdleList;              // 2 elements, 0x10 bytes (sizeof)
//		/*0x030*/     enum _POP_DEVICE_IDLE_TYPE IdleType;
//		/*0x034*/     enum _DEVICE_POWER_STATE IdleState;
//		/*0x038*/     enum _DEVICE_POWER_STATE CurrentState;
//		/*0x03C*/     UINT8        _PADDING0_[0x4];
//		/*0x040*/     struct _LIST_ENTRY Volume;                // 2 elements, 0x10 bytes (sizeof)
//		union                                     // 1 elements, 0x8 bytes (sizeof)
//		{
//			struct                                // 2 elements, 0x8 bytes (sizeof)
//			{
//				/*0x050*/             ULONG32      IdleTime;
//				/*0x054*/             ULONG32      NonIdleTime;
//			}Disk;
//		}Specific;
//	}DEVICE_OBJECT_POWER_EXTENSION, *PDEVICE_OBJECT_POWER_EXTENSION;
//
//	typedef struct _DEVICE_RELATIONS       // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Count;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _DEVICE_OBJECT* Objects[1];
//	}DEVICE_RELATIONS, *PDEVICE_RELATIONS;
//
//	typedef struct _DEVOBJ_EXTENSION                 // 14 elements, 0x70 bytes (sizeof)
//	{
//		/*0x000*/     INT16        Type;
//		/*0x002*/     UINT16       Size;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _DEVICE_OBJECT* DeviceObject;
//		/*0x010*/     ULONG32      PowerFlags;
//		/*0x014*/     UINT8        _PADDING1_[0x4];
//		/*0x018*/     struct _DEVICE_OBJECT_POWER_EXTENSION* Dope;
//		/*0x020*/     ULONG32      ExtensionFlags;
//		/*0x024*/     UINT8        _PADDING2_[0x4];
//		/*0x028*/     VOID*        DeviceNode;
//		/*0x030*/     struct _DEVICE_OBJECT* AttachedTo;
//		/*0x038*/     LONG32       StartIoCount;
//		/*0x03C*/     LONG32       StartIoKey;
//		/*0x040*/     ULONG32      StartIoFlags;
//		/*0x044*/     UINT8        _PADDING3_[0x4];
//		/*0x048*/     struct _VPB* Vpb;
//		/*0x050*/     struct _LIST_ENTRY DependentList;            // 2 elements, 0x10 bytes (sizeof)
//		/*0x060*/     struct _LIST_ENTRY ProviderList;             // 2 elements, 0x10 bytes (sizeof)
//	}DEVOBJ_EXTENSION, *PDEVOBJ_EXTENSION;
//
//	typedef struct _DIAGNOSTIC_BUFFER                 // 8 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Size;
//		/*0x008*/     enum _REQUESTER_TYPE CallerType;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		union                                         // 2 elements, 0x10 bytes (sizeof)
//		{
//			struct                                    // 3 elements, 0x10 bytes (sizeof)
//			{
//				/*0x010*/             UINT64       ProcessImageNameOffset;
//				/*0x018*/             ULONG32      ProcessId;
//				/*0x01C*/             ULONG32      ServiceTag;
//			};
//			struct                                    // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x010*/             UINT64       DeviceDescriptionOffset;
//				/*0x018*/             UINT64       DevicePathOffset;
//			};
//		};
//		/*0x020*/     UINT64       ReasonOffset;
//	}DIAGNOSTIC_BUFFER, *PDIAGNOSTIC_BUFFER;
//
//	typedef struct _DIAGNOSTIC_CONTEXT           // 5 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     enum _REQUESTER_TYPE CallerType;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		union                                    // 2 elements, 0x10 bytes (sizeof)
//		{
//			struct                               // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x008*/             struct _EPROCESS* Process;
//				/*0x010*/             ULONG32      ServiceTag;
//				/*0x014*/             UINT8        _PADDING1_[0x4];
//			};
//			/*0x008*/         struct _DEVICE_OBJECT* DeviceObject;
//		};
//		/*0x018*/     UINT64       ReasonSize;
//	}DIAGNOSTIC_CONTEXT, *PDIAGNOSTIC_CONTEXT;
//
//	typedef struct _DISALLOWED_GUIDS  // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Count;
//		/*0x002*/     UINT8        _PADDING0_[0x6];
//		/*0x008*/     struct _GUID* Guids;
//	}DISALLOWED_GUIDS, *PDISALLOWED_GUIDS;
//
//	typedef struct _DOCK_INTERFACE                                                                                                                                                       // 7 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Size;
//		/*0x002*/     UINT16       Version;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     VOID*        Context;
//		/*0x010*/     FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* InterfaceReference;
//		/*0x018*/     FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* InterfaceDereference;
//		/*0x020*/     FUNCT_0009_18D4_ProfileDepartureSetMode* ProfileDepartureSetMode;
//		/*0x028*/     FUNCT_0009_18DD_ProfileDepartureUpdate* ProfileDepartureUpdate;
//	}DOCK_INTERFACE, *PDOCK_INTERFACE;
//
//	typedef struct _DRIVER_EXTENSION                        // 6 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     struct _DRIVER_OBJECT* DriverObject;
//		/*0x008*/     FUNCT_005B_0940_AddDevice* AddDevice;
//		/*0x010*/     ULONG32      Count;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//		/*0x018*/     struct _UNICODE_STRING ServiceKeyName;              // 3 elements, 0x10 bytes (sizeof)
//		/*0x028*/     struct _IO_CLIENT_EXTENSION* ClientDriverExtension;
//		/*0x030*/     struct _FS_FILTER_CALLBACKS* FsFilterCallbacks;
//	}DRIVER_EXTENSION, *PDRIVER_EXTENSION;
//
//	typedef struct _DRIVER_OBJECT                                   // 15 elements, 0x150 bytes (sizeof)
//	{
//		/*0x000*/     INT16        Type;
//		/*0x002*/     INT16        Size;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _DEVICE_OBJECT* DeviceObject;
//		/*0x010*/     ULONG32      Flags;
//		/*0x014*/     UINT8        _PADDING1_[0x4];
//		/*0x018*/     VOID*        DriverStart;
//		/*0x020*/     ULONG32      DriverSize;
//		/*0x024*/     UINT8        _PADDING2_[0x4];
//		/*0x028*/     VOID*        DriverSection;
//		/*0x030*/     struct _DRIVER_EXTENSION* DriverExtension;
//		/*0x038*/     struct _UNICODE_STRING DriverName;                          // 3 elements, 0x10 bytes (sizeof)
//		/*0x048*/     struct _UNICODE_STRING* HardwareDatabase;
//		/*0x050*/     struct _FAST_IO_DISPATCH* FastIoDispatch;
//		/*0x058*/     FUNCT_005B_0EFD_DriverInit* DriverInit;
//		/*0x060*/     FUNCT_00A3_0C6C_DriverStartIo_CancelRoutine* DriverStartIo;
//		/*0x068*/     FUNCT_00A3_0F01_DriverUnload* DriverUnload;
//		/*0x070*/     FUNCT_005B_0F05_MajorFunction* MajorFunction[28];
//	}DRIVER_OBJECT, *PDRIVER_OBJECT;
//
//	typedef struct _QUAD                     // 2 elements, 0x8 bytes (sizeof)
//	{
//		union                                // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         INT64        UseThisFieldToCopy;
//			/*0x000*/         FLOAT64      DoNotUseThisField;
//		};
//	}QUAD, *PQUAD;
//
//	typedef struct _OBJECT_HEADER                                // 12 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     INT64        PointerCount;
//		union                                                    // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x008*/         INT64        HandleCount;
//			/*0x008*/         VOID*        NextToFree;
//		};
//		/*0x010*/     struct _EX_PUSH_LOCK Lock;                               // 7 elements, 0x8 bytes (sizeof)
//		/*0x018*/     UINT8        TypeIndex;
//		/*0x019*/     UINT8        TraceFlags;
//		/*0x01A*/     UINT8        InfoMask;
//		/*0x01B*/     UINT8        Flags;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		union                                                    // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x020*/         struct _OBJECT_CREATE_INFORMATION* ObjectCreateInfo;
//			/*0x020*/         VOID*        QuotaBlockCharged;
//		};
//		/*0x028*/     VOID*        SecurityDescriptor;
//		/*0x030*/     struct _QUAD Body;                                       // 2 elements, 0x8 bytes (sizeof)
//	}OBJECT_HEADER, *POBJECT_HEADER;
//
//	typedef struct _DUMMY_FILE_OBJECT       // 2 elements, 0x110 bytes (sizeof)
//	{
//		/*0x000*/     struct _OBJECT_HEADER ObjectHeader; // 12 elements, 0x38 bytes (sizeof)
//		/*0x038*/     CHAR         FileObjectBody[216];
//	}DUMMY_FILE_OBJECT, *PDUMMY_FILE_OBJECT;
//
//	typedef struct _DUMP_INITIALIZATION_CONTEXT                                              // 19 elements, 0xA0 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Length;
//		/*0x004*/     ULONG32      Reserved;
//		/*0x008*/     VOID*        MemoryBlock;
//		/*0x010*/     VOID*        CommonBuffer[2];
//		/*0x020*/     union _LARGE_INTEGER PhysicalAddress[2];
//		/*0x030*/     FUNCT_00A3_07EE_BoostPolicyHandler_StallRoutine* StallRoutine;
//		/*0x038*/     FUNCT_0065_27AB_OpenRoutine* OpenRoutine;
//		/*0x040*/     FUNCT_005B_27AE_WriteRoutine* WriteRoutine;
//		/*0x048*/     FUNCT_00A3_0284_PostProcessInitRoutine_DispatchAddress_FinishRoutine* FinishRoutine;
//		/*0x050*/     struct _ADAPTER_OBJECT* AdapterObject;
//		/*0x058*/     VOID*        MappedRegisterBase;
//		/*0x060*/     VOID*        PortConfiguration;
//		/*0x068*/     UINT8        CrashDump;
//		/*0x069*/     UINT8        _PADDING0_[0x3];
//		/*0x06C*/     ULONG32      MaximumTransferSize;
//		/*0x070*/     ULONG32      CommonBufferSize;
//		/*0x074*/     UINT8        _PADDING1_[0x4];
//		/*0x078*/     VOID*        TargetAddress;
//		/*0x080*/     FUNCT_005B_27B4_WritePendingRoutine* WritePendingRoutine;
//		/*0x088*/     ULONG32      PartitionStyle;
//		union                                                                                // 2 elements, 0x10 bytes (sizeof)
//		{
//			struct                                                                           // 2 elements, 0x8 bytes (sizeof)
//			{
//				/*0x08C*/             ULONG32      Signature;
//				/*0x090*/             ULONG32      CheckSum;
//			}Mbr;
//			struct                                                                           // 1 elements, 0x10 bytes (sizeof)
//			{
//				/*0x08C*/             struct _GUID DiskId;                                                         // 4 elements, 0x10 bytes (sizeof)
//			}Gpt;
//		}DiskInfo;
//	}DUMP_INITIALIZATION_CONTEXT, *PDUMP_INITIALIZATION_CONTEXT;
//
//	typedef struct _STRING            // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Length;
//		/*0x002*/     UINT16       MaximumLength;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     CHAR*        Buffer;
//	}STRING, *PSTRING;
//
//	typedef struct _DUMP_STACK_CONTEXT                  // 11 elements, 0x110 bytes (sizeof)
//	{
//		/*0x000*/     struct _DUMP_INITIALIZATION_CONTEXT Init;       // 19 elements, 0xA0 bytes (sizeof)
//		/*0x0A0*/     union _LARGE_INTEGER PartitionOffset;           // 4 elements, 0x8 bytes (sizeof)
//		/*0x0A8*/     VOID*        DumpPointers;
//		/*0x0B0*/     ULONG32      PointersLength;
//		/*0x0B4*/     UINT8        _PADDING0_[0x4];
//		/*0x0B8*/     UINT16*      ModulePrefix;
//		/*0x0C0*/     struct _LIST_ENTRY DriverList;                  // 2 elements, 0x10 bytes (sizeof)
//		/*0x0D0*/     struct _STRING InitMsg;                         // 3 elements, 0x10 bytes (sizeof)
//		/*0x0E0*/     struct _STRING ProgMsg;                         // 3 elements, 0x10 bytes (sizeof)
//		/*0x0F0*/     struct _STRING DoneMsg;                         // 3 elements, 0x10 bytes (sizeof)
//		/*0x100*/     VOID*        FileObject;
//		/*0x108*/     enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType;
//		/*0x10C*/     UINT8        _PADDING1_[0x4];
//	}DUMP_STACK_CONTEXT, *PDUMP_STACK_CONTEXT;
//
//	typedef struct _ECP_LIST        // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Signature;
//		/*0x004*/     ULONG32      Flags;
//		/*0x008*/     struct _LIST_ENTRY EcpList; // 2 elements, 0x10 bytes (sizeof)
//	}ECP_LIST, *PECP_LIST;
//
//	typedef struct _EFI_FIRMWARE_INFORMATION                             // 4 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      FirmwareVersion;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _VIRTUAL_EFI_RUNTIME_SERVICES* VirtualEfiRuntimeServices;
//		/*0x010*/     LONG32       SetVirtualAddressMapStatus;
//		/*0x014*/     ULONG32      MissedMappingsCount;
//	}EFI_FIRMWARE_INFORMATION, *PEFI_FIRMWARE_INFORMATION;
//
//	typedef struct _OWNER_ENTRY                     // 5 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       OwnerThread;
//		union                                       // 2 elements, 0x8 bytes (sizeof)
//		{
//			struct                                  // 3 elements, 0x4 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      IoPriorityBoosted : 1; // 0 BitPosition
//				/*0x008*/             ULONG32      OwnerReferenced : 1;   // 1 BitPosition
//				/*0x008*/             ULONG32      OwnerCount : 30;       // 2 BitPosition
//			};
//			/*0x008*/         ULONG32      TableSize;
//		};
//	}OWNER_ENTRY, *POWNER_ENTRY;
//
//	typedef struct _ERESOURCE                   // 15 elements, 0x68 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY SystemResourcesList; // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _OWNER_ENTRY* OwnerTable;
//		/*0x018*/     INT16        ActiveCount;
//		/*0x01A*/     UINT16       Flag;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		/*0x020*/     struct _KSEMAPHORE* SharedWaiters;
//		/*0x028*/     struct _KEVENT* ExclusiveWaiters;
//		/*0x030*/     struct _OWNER_ENTRY OwnerEntry;         // 5 elements, 0x10 bytes (sizeof)
//		/*0x040*/     ULONG32      ActiveEntries;
//		/*0x044*/     ULONG32      ContentionCount;
//		/*0x048*/     ULONG32      NumberOfSharedWaiters;
//		/*0x04C*/     ULONG32      NumberOfExclusiveWaiters;
//		/*0x050*/     VOID*        Reserved2;
//		union                                   // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x058*/         VOID*        Address;
//			/*0x058*/         UINT64       CreatorBackTraceIndex;
//		};
//		/*0x060*/     UINT64       SpinLock;
//	}ERESOURCE, *PERESOURCE;
//
//	typedef struct _EJOB                                // 42 elements, 0x1C8 bytes (sizeof)
//	{
//		/*0x000*/     struct _KEVENT Event;                           // 1 elements, 0x18 bytes (sizeof)
//		/*0x018*/     struct _LIST_ENTRY JobLinks;                    // 2 elements, 0x10 bytes (sizeof)
//		/*0x028*/     struct _LIST_ENTRY ProcessListHead;             // 2 elements, 0x10 bytes (sizeof)
//		/*0x038*/     struct _ERESOURCE JobLock;                      // 15 elements, 0x68 bytes (sizeof)
//		/*0x0A0*/     union _LARGE_INTEGER TotalUserTime;             // 4 elements, 0x8 bytes (sizeof)
//		/*0x0A8*/     union _LARGE_INTEGER TotalKernelTime;           // 4 elements, 0x8 bytes (sizeof)
//		/*0x0B0*/     union _LARGE_INTEGER ThisPeriodTotalUserTime;   // 4 elements, 0x8 bytes (sizeof)
//		/*0x0B8*/     union _LARGE_INTEGER ThisPeriodTotalKernelTime; // 4 elements, 0x8 bytes (sizeof)
//		/*0x0C0*/     ULONG32      TotalPageFaultCount;
//		/*0x0C4*/     ULONG32      TotalProcesses;
//		/*0x0C8*/     ULONG32      ActiveProcesses;
//		/*0x0CC*/     ULONG32      TotalTerminatedProcesses;
//		/*0x0D0*/     union _LARGE_INTEGER PerProcessUserTimeLimit;   // 4 elements, 0x8 bytes (sizeof)
//		/*0x0D8*/     union _LARGE_INTEGER PerJobUserTimeLimit;       // 4 elements, 0x8 bytes (sizeof)
//		/*0x0E0*/     UINT64       MinimumWorkingSetSize;
//		/*0x0E8*/     UINT64       MaximumWorkingSetSize;
//		/*0x0F0*/     ULONG32      LimitFlags;
//		/*0x0F4*/     ULONG32      ActiveProcessLimit;
//		/*0x0F8*/     struct _KAFFINITY_EX Affinity;                  // 4 elements, 0x28 bytes (sizeof)
//		/*0x120*/     UINT8        PriorityClass;
//		/*0x121*/     UINT8        _PADDING0_[0x7];
//		/*0x128*/     struct _JOB_ACCESS_STATE* AccessState;
//		/*0x130*/     ULONG32      UIRestrictionsClass;
//		/*0x134*/     ULONG32      EndOfJobTimeAction;
//		/*0x138*/     VOID*        CompletionPort;
//		/*0x140*/     VOID*        CompletionKey;
//		/*0x148*/     ULONG32      SessionId;
//		/*0x14C*/     ULONG32      SchedulingClass;
//		/*0x150*/     UINT64       ReadOperationCount;
//		/*0x158*/     UINT64       WriteOperationCount;
//		/*0x160*/     UINT64       OtherOperationCount;
//		/*0x168*/     UINT64       ReadTransferCount;
//		/*0x170*/     UINT64       WriteTransferCount;
//		/*0x178*/     UINT64       OtherTransferCount;
//		/*0x180*/     UINT64       ProcessMemoryLimit;
//		/*0x188*/     UINT64       JobMemoryLimit;
//		/*0x190*/     UINT64       PeakProcessMemoryUsed;
//		/*0x198*/     UINT64       PeakJobMemoryUsed;
//		/*0x1A0*/     UINT64       CurrentJobMemoryUsed;
//		/*0x1A8*/     struct _EX_PUSH_LOCK MemoryLimitsLock;          // 7 elements, 0x8 bytes (sizeof)
//		/*0x1B0*/     struct _LIST_ENTRY JobSetLinks;                 // 2 elements, 0x10 bytes (sizeof)
//		/*0x1C0*/     ULONG32      MemberLevel;
//		/*0x1C4*/     ULONG32      JobFlags;
//	}EJOB, *PEJOB;
//
//	typedef union _KEXECUTE_OPTIONS                           // 9 elements, 0x1 bytes (sizeof)
//	{
//		struct                                                // 8 elements, 0x1 bytes (sizeof)
//		{
//			/*0x000*/         UINT8        ExecuteDisable : 1;                  // 0 BitPosition
//			/*0x000*/         UINT8        ExecuteEnable : 1;                   // 1 BitPosition
//			/*0x000*/         UINT8        DisableThunkEmulation : 1;           // 2 BitPosition
//			/*0x000*/         UINT8        Permanent : 1;                       // 3 BitPosition
//			/*0x000*/         UINT8        ExecuteDispatchEnable : 1;           // 4 BitPosition
//			/*0x000*/         UINT8        ImageDispatchEnable : 1;             // 5 BitPosition
//			/*0x000*/         UINT8        DisableExceptionChainValidation : 1; // 6 BitPosition
//			/*0x000*/         UINT8        Spare : 1;                           // 7 BitPosition
//		};
//		/*0x000*/     UINT8        ExecuteOptions;
//	}KEXECUTE_OPTIONS, *PKEXECUTE_OPTIONS;
//
//	typedef union _KSTACK_COUNT           // 3 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       Value;
//		struct                            // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      State : 3;       // 0 BitPosition
//			/*0x000*/         ULONG32      StackCount : 29; // 3 BitPosition
//		};
//	}KSTACK_COUNT, *PKSTACK_COUNT;
//
//	typedef union _KGDTENTRY64                    // 7 elements, 0x10 bytes (sizeof)
//	{
//		struct                                    // 5 elements, 0x10 bytes (sizeof)
//		{
//			/*0x000*/         UINT16       LimitLow;
//			/*0x002*/         UINT16       BaseLow;
//			union                                 // 2 elements, 0x4 bytes (sizeof)
//			{
//				struct                            // 4 elements, 0x4 bytes (sizeof)
//				{
//					/*0x004*/                 UINT8        BaseMiddle;
//					/*0x005*/                 UINT8        Flags1;
//					/*0x006*/                 UINT8        Flags2;
//					/*0x007*/                 UINT8        BaseHigh;
//				}Bytes;
//				struct                            // 10 elements, 0x4 bytes (sizeof)
//				{
//					/*0x004*/                 ULONG32      BaseMiddle : 8;  // 0 BitPosition
//					/*0x004*/                 ULONG32      Type : 5;        // 8 BitPosition
//					/*0x004*/                 ULONG32      Dpl : 2;         // 13 BitPosition
//					/*0x004*/                 ULONG32      Present : 1;     // 15 BitPosition
//					/*0x004*/                 ULONG32      LimitHigh : 4;   // 16 BitPosition
//					/*0x004*/                 ULONG32      System : 1;      // 20 BitPosition
//					/*0x004*/                 ULONG32      LongMode : 1;    // 21 BitPosition
//					/*0x004*/                 ULONG32      DefaultBig : 1;  // 22 BitPosition
//					/*0x004*/                 ULONG32      Granularity : 1; // 23 BitPosition
//					/*0x004*/                 ULONG32      BaseHigh : 8;    // 24 BitPosition
//				}Bits;
//			};
//			/*0x008*/         ULONG32      BaseUpper;
//			/*0x00C*/         ULONG32      MustBeZero;
//		};
//		/*0x000*/     UINT64       Alignment;
//	}KGDTENTRY64, *PKGDTENTRY64;
//
//	typedef struct _KGATE                 // 1 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _DISPATCHER_HEADER Header; // 29 elements, 0x18 bytes (sizeof)
//	}KGATE, *PKGATE;
//
//	typedef struct _KGUARDED_MUTEX              // 7 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       Count;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _KTHREAD* Owner;
//		/*0x010*/     ULONG32      Contention;
//		/*0x014*/     UINT8        _PADDING1_[0x4];
//		/*0x018*/     struct _KGATE Gate;                     // 1 elements, 0x18 bytes (sizeof)
//		union                                   // 2 elements, 0x8 bytes (sizeof)
//		{
//			struct                              // 2 elements, 0x8 bytes (sizeof)
//			{
//				/*0x030*/             INT16        KernelApcDisable;
//				/*0x032*/             INT16        SpecialApcDisable;
//				/*0x034*/             UINT8        _PADDING2_[0x4];
//			};
//			/*0x030*/         ULONG32      CombinedApcDisable;
//		};
//	}KGUARDED_MUTEX, *PKGUARDED_MUTEX;
//
//	typedef struct _KPROCESS                       // 37 elements, 0x160 bytes (sizeof)
//	{
//		/*0x000*/     struct _DISPATCHER_HEADER Header;          // 29 elements, 0x18 bytes (sizeof)
//		/*0x018*/     struct _LIST_ENTRY ProfileListHead;        // 2 elements, 0x10 bytes (sizeof)
//		/*0x028*/     UINT64       DirectoryTableBase;
//		/*0x030*/     struct _LIST_ENTRY ThreadListHead;         // 2 elements, 0x10 bytes (sizeof)
//		/*0x040*/     UINT64       ProcessLock;
//		/*0x048*/     struct _KAFFINITY_EX Affinity;             // 4 elements, 0x28 bytes (sizeof)
//		/*0x070*/     struct _LIST_ENTRY ReadyListHead;          // 2 elements, 0x10 bytes (sizeof)
//		/*0x080*/     struct _SINGLE_LIST_ENTRY SwapListEntry;   // 1 elements, 0x8 bytes (sizeof)
//		/*0x088*/     struct _KAFFINITY_EX ActiveProcessors;     // 4 elements, 0x28 bytes (sizeof)
//		union                                      // 2 elements, 0x4 bytes (sizeof)
//		{
//			struct                                 // 5 elements, 0x4 bytes (sizeof)
//			{
//				/*0x0B0*/             LONG32       AutoAlignment : 1;    // 0 BitPosition
//				/*0x0B0*/             LONG32       DisableBoost : 1;     // 1 BitPosition
//				/*0x0B0*/             LONG32       DisableQuantum : 1;   // 2 BitPosition
//				/*0x0B0*/             ULONG32      ActiveGroupsMask : 4; // 3 BitPosition
//				/*0x0B0*/             LONG32       ReservedFlags : 25;   // 7 BitPosition
//			};
//			/*0x0B0*/         LONG32       ProcessFlags;
//		};
//		/*0x0B4*/     CHAR         BasePriority;
//		/*0x0B5*/     CHAR         QuantumReset;
//		/*0x0B6*/     UINT8        Visited;
//		/*0x0B7*/     UINT8        Unused3;
//		/*0x0B8*/     ULONG32      ThreadSeed[4];
//		/*0x0C8*/     UINT16       IdealNode[4];
//		/*0x0D0*/     UINT16       IdealGlobalNode;
//		/*0x0D2*/     union _KEXECUTE_OPTIONS Flags;             // 9 elements, 0x1 bytes (sizeof)
//		/*0x0D3*/     UINT8        Unused1;
//		/*0x0D4*/     ULONG32      Unused2;
//		/*0x0D8*/     ULONG32      Unused4;
//		/*0x0DC*/     union _KSTACK_COUNT StackCount;            // 3 elements, 0x4 bytes (sizeof)
//		/*0x0E0*/     struct _LIST_ENTRY ProcessListEntry;       // 2 elements, 0x10 bytes (sizeof)
//		/*0x0F0*/     UINT64       CycleTime;
//		/*0x0F8*/     ULONG32      KernelTime;
//		/*0x0FC*/     ULONG32      UserTime;
//		/*0x100*/     VOID*        InstrumentationCallback;
//		/*0x108*/     union _KGDTENTRY64 LdtSystemDescriptor;    // 7 elements, 0x10 bytes (sizeof)
//		/*0x118*/     VOID*        LdtBaseAddress;
//		/*0x120*/     struct _KGUARDED_MUTEX LdtProcessLock;     // 7 elements, 0x38 bytes (sizeof)
//		/*0x158*/     UINT16       LdtFreeSelectorHint;
//		/*0x15A*/     UINT16       LdtTableLength;
//		/*0x15C*/     UINT8        _PADDING0_[0x4];
//	}KPROCESS, *PKPROCESS;
//
//	typedef struct _HARDWARE_PTE           // 16 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Valid : 1;            // 0 BitPosition
//		/*0x000*/     UINT64       Write : 1;            // 1 BitPosition
//		/*0x000*/     UINT64       Owner : 1;            // 2 BitPosition
//		/*0x000*/     UINT64       WriteThrough : 1;     // 3 BitPosition
//		/*0x000*/     UINT64       CacheDisable : 1;     // 4 BitPosition
//		/*0x000*/     UINT64       Accessed : 1;         // 5 BitPosition
//		/*0x000*/     UINT64       Dirty : 1;            // 6 BitPosition
//		/*0x000*/     UINT64       LargePage : 1;        // 7 BitPosition
//		/*0x000*/     UINT64       Global : 1;           // 8 BitPosition
//		/*0x000*/     UINT64       CopyOnWrite : 1;      // 9 BitPosition
//		/*0x000*/     UINT64       Prototype : 1;        // 10 BitPosition
//		/*0x000*/     UINT64       reserved0 : 1;        // 11 BitPosition
//		/*0x000*/     UINT64       PageFrameNumber : 36; // 12 BitPosition
//		/*0x000*/     UINT64       reserved1 : 4;        // 48 BitPosition
//		/*0x000*/     UINT64       SoftwareWsIndex : 11; // 52 BitPosition
//		/*0x000*/     UINT64       NoExecute : 1;        // 63 BitPosition
//	}HARDWARE_PTE, *PHARDWARE_PTE;
//
//	typedef struct _SE_AUDIT_PROCESS_CREATION_INFO      // 1 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     struct _OBJECT_NAME_INFORMATION* ImageFileName;
//	}SE_AUDIT_PROCESS_CREATION_INFO, *PSE_AUDIT_PROCESS_CREATION_INFO;
//
//	typedef struct _MMSUPPORT_FLAGS                 // 15 elements, 0x4 bytes (sizeof)
//	{
//		struct                                      // 6 elements, 0x1 bytes (sizeof)
//		{
//			/*0x000*/         UINT8        WorkingSetType : 3;        // 0 BitPosition
//			/*0x000*/         UINT8        ModwriterAttached : 1;     // 3 BitPosition
//			/*0x000*/         UINT8        TrimHard : 1;              // 4 BitPosition
//			/*0x000*/         UINT8        MaximumWorkingSetHard : 1; // 5 BitPosition
//			/*0x000*/         UINT8        ForceTrim : 1;             // 6 BitPosition
//			/*0x000*/         UINT8        MinimumWorkingSetHard : 1; // 7 BitPosition
//		};
//		struct                                      // 4 elements, 0x1 bytes (sizeof)
//		{
//			/*0x001*/         UINT8        SessionMaster : 1;         // 0 BitPosition
//			/*0x001*/         UINT8        TrimmerState : 2;          // 1 BitPosition
//			/*0x001*/         UINT8        Reserved : 1;              // 3 BitPosition
//			/*0x001*/         UINT8        PageStealers : 4;          // 4 BitPosition
//		};
//		/*0x002*/     UINT8        MemoryPriority : 8;            // 0 BitPosition
//		struct                                      // 4 elements, 0x1 bytes (sizeof)
//		{
//			/*0x003*/         UINT8        WsleDeleted : 1;           // 0 BitPosition
//			/*0x003*/         UINT8        VmExiting : 1;             // 1 BitPosition
//			/*0x003*/         UINT8        ExpansionFailed : 1;       // 2 BitPosition
//			/*0x003*/         UINT8        Available : 5;             // 3 BitPosition
//		};
//	}MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS;
//
//	typedef struct _MMSUPPORT                        // 21 elements, 0x88 bytes (sizeof)
//	{
//		/*0x000*/     struct _EX_PUSH_LOCK WorkingSetMutex;        // 7 elements, 0x8 bytes (sizeof)
//		/*0x008*/     struct _KGATE* ExitGate;
//		/*0x010*/     VOID*        AccessLog;
//		/*0x018*/     struct _LIST_ENTRY WorkingSetExpansionLinks; // 2 elements, 0x10 bytes (sizeof)
//		/*0x028*/     ULONG32      AgeDistribution[7];
//		/*0x044*/     ULONG32      MinimumWorkingSetSize;
//		/*0x048*/     ULONG32      WorkingSetSize;
//		/*0x04C*/     ULONG32      WorkingSetPrivateSize;
//		/*0x050*/     ULONG32      MaximumWorkingSetSize;
//		/*0x054*/     ULONG32      ChargedWslePages;
//		/*0x058*/     ULONG32      ActualWslePages;
//		/*0x05C*/     ULONG32      WorkingSetSizeOverhead;
//		/*0x060*/     ULONG32      PeakWorkingSetSize;
//		/*0x064*/     ULONG32      HardFaultCount;
//		/*0x068*/     struct _MMWSL* VmWorkingSetList;
//		/*0x070*/     UINT16       NextPageColor;
//		/*0x072*/     UINT16       LastTrimStamp;
//		/*0x074*/     ULONG32      PageFaultCount;
//		/*0x078*/     ULONG32      RepurposeCount;
//		/*0x07C*/     ULONG32      Spare[2];
//		/*0x084*/     struct _MMSUPPORT_FLAGS Flags;               // 15 elements, 0x4 bytes (sizeof)
//	}MMSUPPORT, *PMMSUPPORT;
//
//	typedef struct _MMADDRESS_NODE          // 5 elements, 0x28 bytes (sizeof)
//	{
//		union                               // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         INT64        Balance : 2;       // 0 BitPosition
//			/*0x000*/         struct _MMADDRESS_NODE* Parent;
//		}u1;
//		/*0x008*/     struct _MMADDRESS_NODE* LeftChild;
//		/*0x010*/     struct _MMADDRESS_NODE* RightChild;
//		/*0x018*/     UINT64       StartingVpn;
//		/*0x020*/     UINT64       EndingVpn;
//	}MMADDRESS_NODE, *PMMADDRESS_NODE;
//
//	typedef struct _MM_AVL_TABLE                          // 6 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     struct _MMADDRESS_NODE BalancedRoot;              // 5 elements, 0x28 bytes (sizeof)
//		struct                                            // 3 elements, 0x8 bytes (sizeof)
//		{
//			/*0x028*/         UINT64       DepthOfTree : 5;                 // 0 BitPosition
//			/*0x028*/         UINT64       Unused : 3;                      // 5 BitPosition
//			/*0x028*/         UINT64       NumberGenericTableElements : 56; // 8 BitPosition
//		};
//		/*0x030*/     VOID*        NodeHint;
//		/*0x038*/     VOID*        NodeFreeHint;
//	}MM_AVL_TABLE, *PMM_AVL_TABLE;
//
//	typedef struct _EPROCESS                                               // 142 elements, 0x4E8 bytes (sizeof)
//	{
//		/*0x000*/     struct _KPROCESS Pcb;                                              // 37 elements, 0x160 bytes (sizeof)
//		/*0x160*/     struct _EX_PUSH_LOCK ProcessLock;                                  // 7 elements, 0x8 bytes (sizeof)
//		/*0x168*/     union _LARGE_INTEGER CreateTime;                                   // 4 elements, 0x8 bytes (sizeof)
//		/*0x170*/     union _LARGE_INTEGER ExitTime;                                     // 4 elements, 0x8 bytes (sizeof)
//		/*0x178*/     struct _EX_RUNDOWN_REF RundownProtect;                             // 2 elements, 0x8 bytes (sizeof)
//		/*0x180*/     VOID*        UniqueProcessId;
//		/*0x188*/     struct _LIST_ENTRY ActiveProcessLinks;                             // 2 elements, 0x10 bytes (sizeof)
//		/*0x198*/     UINT64       ProcessQuotaUsage[2];
//		/*0x1A8*/     UINT64       ProcessQuotaPeak[2];
//		/*0x1B8*/     UINT64       CommitCharge;
//		/*0x1C0*/     struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;
//		/*0x1C8*/     struct _PS_CPU_QUOTA_BLOCK* CpuQuotaBlock;
//		/*0x1D0*/     UINT64       PeakVirtualSize;
//		/*0x1D8*/     UINT64       VirtualSize;
//		/*0x1E0*/     struct _LIST_ENTRY SessionProcessLinks;                            // 2 elements, 0x10 bytes (sizeof)
//		/*0x1F0*/     VOID*        DebugPort;
//		union                                                              // 3 elements, 0x8 bytes (sizeof)
//		{
//			/*0x1F8*/         VOID*        ExceptionPortData;
//			/*0x1F8*/         UINT64       ExceptionPortValue;
//			/*0x1F8*/         UINT64       ExceptionPortState : 3;                           // 0 BitPosition
//		};
//		/*0x200*/     struct _HANDLE_TABLE* ObjectTable;
//		/*0x208*/     struct _EX_FAST_REF Token;                                         // 3 elements, 0x8 bytes (sizeof)
//		/*0x210*/     UINT64       WorkingSetPage;
//		/*0x218*/     struct _EX_PUSH_LOCK AddressCreationLock;                          // 7 elements, 0x8 bytes (sizeof)
//		/*0x220*/     struct _ETHREAD* RotateInProgress;
//		/*0x228*/     struct _ETHREAD* ForkInProgress;
//		/*0x230*/     UINT64       HardwareTrigger;
//		/*0x238*/     struct _MM_AVL_TABLE* PhysicalVadRoot;
//		/*0x240*/     VOID*        CloneRoot;
//		/*0x248*/     UINT64       NumberOfPrivatePages;
//		/*0x250*/     UINT64       NumberOfLockedPages;
//		/*0x258*/     VOID*        Win32Process;
//		/*0x260*/     struct _EJOB* Job;
//		/*0x268*/     VOID*        SectionObject;
//		/*0x270*/     VOID*        SectionBaseAddress;
//		/*0x278*/     ULONG32      Cookie;
//		/*0x27C*/     ULONG32      UmsScheduledThreads;
//		/*0x280*/     struct _PAGEFAULT_HISTORY* WorkingSetWatch;
//		/*0x288*/     VOID*        Win32WindowStation;
//		/*0x290*/     VOID*        InheritedFromUniqueProcessId;
//		/*0x298*/     VOID*        LdtInformation;
//		/*0x2A0*/     VOID*        Spare;
//		/*0x2A8*/     UINT64       ConsoleHostProcess;
//		/*0x2B0*/     VOID*        DeviceMap;
//		/*0x2B8*/     VOID*        EtwDataSource;
//		/*0x2C0*/     VOID*        FreeTebHint;
//		/*0x2C8*/     VOID*        FreeUmsTebHint;
//		union                                                              // 2 elements, 0x8 bytes (sizeof)
//		{
//			UINT64 PageDirectoryPte;
//			/*0x2D0*/         //struct _HARDWARE_PTE PageDirectoryPte;                         // 16 elements, 0x8 bytes (sizeof)
//			/*0x2D0*/         UINT64       Filler;
//		};
//		/*0x2D8*/     VOID*        Session;
//		/*0x2E0*/     UINT8        ImageFileName[15];
//		/*0x2EF*/     UINT8        PriorityClass;
//		/*0x2F0*/     struct _LIST_ENTRY JobLinks;                                       // 2 elements, 0x10 bytes (sizeof)
//		/*0x300*/     VOID*        LockedPagesList;
//		/*0x308*/     struct _LIST_ENTRY ThreadListHead;                                 // 2 elements, 0x10 bytes (sizeof)
//		/*0x318*/     VOID*        SecurityPort;
//		/*0x320*/     VOID*        Wow64Process;
//		/*0x328*/     ULONG32      ActiveThreads;
//		/*0x32C*/     ULONG32      ImagePathHash;
//		/*0x330*/     ULONG32      DefaultHardErrorProcessing;
//		/*0x334*/     LONG32       LastThreadExitStatus;
//		/*0x338*/     struct _PEB* Peb;
//		/*0x340*/     struct _EX_FAST_REF PrefetchTrace;                                 // 3 elements, 0x8 bytes (sizeof)
//		/*0x348*/     union _LARGE_INTEGER ReadOperationCount;                           // 4 elements, 0x8 bytes (sizeof)
//		/*0x350*/     union _LARGE_INTEGER WriteOperationCount;                          // 4 elements, 0x8 bytes (sizeof)
//		/*0x358*/     union _LARGE_INTEGER OtherOperationCount;                          // 4 elements, 0x8 bytes (sizeof)
//		/*0x360*/     union _LARGE_INTEGER ReadTransferCount;                            // 4 elements, 0x8 bytes (sizeof)
//		/*0x368*/     union _LARGE_INTEGER WriteTransferCount;                           // 4 elements, 0x8 bytes (sizeof)
//		/*0x370*/     union _LARGE_INTEGER OtherTransferCount;                           // 4 elements, 0x8 bytes (sizeof)
//		/*0x378*/     UINT64       CommitChargeLimit;
//		/*0x380*/     UINT64       CommitChargePeak;
//		/*0x388*/     VOID*        AweInfo;
//		/*0x390*/     struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo; // 1 elements, 0x8 bytes (sizeof)
//		/*0x398*/     struct _MMSUPPORT Vm;                                              // 21 elements, 0x88 bytes (sizeof)
//		/*0x420*/     struct _LIST_ENTRY MmProcessLinks;                                 // 2 elements, 0x10 bytes (sizeof)
//		/*0x430*/     VOID*        HighestUserAddress;
//		/*0x438*/     ULONG32      ModifiedPageCount;
//		union                                                              // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x43C*/         ULONG32      Flags2;
//			struct                                                         // 24 elements, 0x4 bytes (sizeof)
//			{
//				/*0x43C*/             ULONG32      JobNotReallyActive : 1;                       // 0 BitPosition
//				/*0x43C*/             ULONG32      AccountingFolded : 1;                         // 1 BitPosition
//				/*0x43C*/             ULONG32      NewProcessReported : 1;                       // 2 BitPosition
//				/*0x43C*/             ULONG32      ExitProcessReported : 1;                      // 3 BitPosition
//				/*0x43C*/             ULONG32      ReportCommitChanges : 1;                      // 4 BitPosition
//				/*0x43C*/             ULONG32      LastReportMemory : 1;                         // 5 BitPosition
//				/*0x43C*/             ULONG32      ReportPhysicalPageChanges : 1;                // 6 BitPosition
//				/*0x43C*/             ULONG32      HandleTableRundown : 1;                       // 7 BitPosition
//				/*0x43C*/             ULONG32      NeedsHandleRundown : 1;                       // 8 BitPosition
//				/*0x43C*/             ULONG32      RefTraceEnabled : 1;                          // 9 BitPosition
//				/*0x43C*/             ULONG32      NumaAware : 1;                                // 10 BitPosition
//				/*0x43C*/             ULONG32      ProtectedProcess : 1;                         // 11 BitPosition
//				/*0x43C*/             ULONG32      DefaultPagePriority : 3;                      // 12 BitPosition
//				/*0x43C*/             ULONG32      PrimaryTokenFrozen : 1;                       // 15 BitPosition
//				/*0x43C*/             ULONG32      ProcessVerifierTarget : 1;                    // 16 BitPosition
//				/*0x43C*/             ULONG32      StackRandomizationDisabled : 1;               // 17 BitPosition
//				/*0x43C*/             ULONG32      AffinityPermanent : 1;                        // 18 BitPosition
//				/*0x43C*/             ULONG32      AffinityUpdateEnable : 1;                     // 19 BitPosition
//				/*0x43C*/             ULONG32      PropagateNode : 1;                            // 20 BitPosition
//				/*0x43C*/             ULONG32      ExplicitAffinity : 1;                         // 21 BitPosition
//				/*0x43C*/             ULONG32      Spare1 : 1;                                   // 22 BitPosition
//				/*0x43C*/             ULONG32      ForceRelocateImages : 1;                      // 23 BitPosition
//				/*0x43C*/             ULONG32      DisallowStrippedImages : 1;                   // 24 BitPosition
//				/*0x43C*/             ULONG32      LowVaAccessible : 1;                          // 25 BitPosition
//			};
//		};
//		union                                                              // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x440*/         ULONG32      Flags;
//			struct                                                         // 29 elements, 0x4 bytes (sizeof)
//			{
//				/*0x440*/             ULONG32      CreateReported : 1;                           // 0 BitPosition
//				/*0x440*/             ULONG32      NoDebugInherit : 1;                           // 1 BitPosition
//				/*0x440*/             ULONG32      ProcessExiting : 1;                           // 2 BitPosition
//				/*0x440*/             ULONG32      ProcessDelete : 1;                            // 3 BitPosition
//				/*0x440*/             ULONG32      Wow64SplitPages : 1;                          // 4 BitPosition
//				/*0x440*/             ULONG32      VmDeleted : 1;                                // 5 BitPosition
//				/*0x440*/             ULONG32      OutswapEnabled : 1;                           // 6 BitPosition
//				/*0x440*/             ULONG32      Outswapped : 1;                               // 7 BitPosition
//				/*0x440*/             ULONG32      ForkFailed : 1;                               // 8 BitPosition
//				/*0x440*/             ULONG32      Wow64VaSpace4Gb : 1;                          // 9 BitPosition
//				/*0x440*/             ULONG32      AddressSpaceInitialized : 2;                  // 10 BitPosition
//				/*0x440*/             ULONG32      SetTimerResolution : 1;                       // 12 BitPosition
//				/*0x440*/             ULONG32      BreakOnTermination : 1;                       // 13 BitPosition
//				/*0x440*/             ULONG32      DeprioritizeViews : 1;                        // 14 BitPosition
//				/*0x440*/             ULONG32      WriteWatch : 1;                               // 15 BitPosition
//				/*0x440*/             ULONG32      ProcessInSession : 1;                         // 16 BitPosition
//				/*0x440*/             ULONG32      OverrideAddressSpace : 1;                     // 17 BitPosition
//				/*0x440*/             ULONG32      HasAddressSpace : 1;                          // 18 BitPosition
//				/*0x440*/             ULONG32      LaunchPrefetched : 1;                         // 19 BitPosition
//				/*0x440*/             ULONG32      InjectInpageErrors : 1;                       // 20 BitPosition
//				/*0x440*/             ULONG32      VmTopDown : 1;                                // 21 BitPosition
//				/*0x440*/             ULONG32      ImageNotifyDone : 1;                          // 22 BitPosition
//				/*0x440*/             ULONG32      PdeUpdateNeeded : 1;                          // 23 BitPosition
//				/*0x440*/             ULONG32      VdmAllowed : 1;                               // 24 BitPosition
//				/*0x440*/             ULONG32      CrossSessionCreate : 1;                       // 25 BitPosition
//				/*0x440*/             ULONG32      ProcessInserted : 1;                          // 26 BitPosition
//				/*0x440*/             ULONG32      DefaultIoPriority : 3;                        // 27 BitPosition
//				/*0x440*/             ULONG32      ProcessSelfDelete : 1;                        // 30 BitPosition
//				/*0x440*/             ULONG32      SetTimerResolutionLink : 1;                   // 31 BitPosition
//			};
//		};
//		/*0x444*/     LONG32       ExitStatus;
//		/*0x448*/     struct _MM_AVL_TABLE VadRoot;                                      // 6 elements, 0x40 bytes (sizeof)
//		/*0x488*/     struct _ALPC_PROCESS_CONTEXT AlpcContext;                          // 3 elements, 0x20 bytes (sizeof)
//		/*0x4A8*/     struct _LIST_ENTRY TimerResolutionLink;                            // 2 elements, 0x10 bytes (sizeof)
//		/*0x4B8*/     ULONG32      RequestedTimerResolution;
//		/*0x4BC*/     ULONG32      ActiveThreadsHighWatermark;
//		/*0x4C0*/     ULONG32      SmallestTimerResolution;
//		/*0x4C4*/     UINT8        _PADDING0_[0x4];
//		/*0x4C8*/     struct _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;
//		/*0x4D0*/     UINT64       SequenceNumber;
//		/*0x4D8*/     UINT64       CreateInterruptTime;
//		/*0x4E0*/     UINT64       CreateUnbiasedInterruptTime;
//	}EPROCESS, *PEPROCESS;
//
//	typedef struct _EPROCESS_QUOTA_BLOCK // 0 elements, 0x0 bytes (sizeof)
//	{
//	}EPROCESS_QUOTA_BLOCK, *PEPROCESS_QUOTA_BLOCK;
//
//	typedef union _KWAIT_STATUS_REGISTER // 8 elements, 0x1 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Flags;
//		struct                           // 7 elements, 0x1 bytes (sizeof)
//		{
//			/*0x000*/         UINT8        State : 2;      // 0 BitPosition
//			/*0x000*/         UINT8        Affinity : 1;   // 2 BitPosition
//			/*0x000*/         UINT8        Priority : 1;   // 3 BitPosition
//			/*0x000*/         UINT8        Apc : 1;        // 4 BitPosition
//			/*0x000*/         UINT8        UserApc : 1;    // 5 BitPosition
//			/*0x000*/         UINT8        Alert : 1;      // 6 BitPosition
//			/*0x000*/         UINT8        Unused : 1;     // 7 BitPosition
//		};
//	}KWAIT_STATUS_REGISTER, *PKWAIT_STATUS_REGISTER;
//
//	typedef struct _KAPC_STATE             // 5 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY ApcListHead[2];
//		/*0x020*/     struct _KPROCESS* Process;
//		/*0x028*/     UINT8        KernelApcInProgress;
//		/*0x029*/     UINT8        KernelApcPending;
//		/*0x02A*/     UINT8        UserApcPending;
//		/*0x02B*/     UINT8        _PADDING0_[0x5];
//	}KAPC_STATE, *PKAPC_STATE;
//
//	typedef union _ULARGE_INTEGER  // 4 elements, 0x8 bytes (sizeof)
//	{
//		struct                     // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      LowPart;
//			/*0x004*/         ULONG32      HighPart;
//		};
//		struct                     // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      LowPart;
//			/*0x004*/         ULONG32      HighPart;
//		}u;
//		/*0x000*/     UINT64       QuadPart;
//	}ULARGE_INTEGER, *PULARGE_INTEGER;
//
//	typedef struct _KTIMER                 // 6 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     struct _DISPATCHER_HEADER Header;  // 29 elements, 0x18 bytes (sizeof)
//		/*0x018*/     union _ULARGE_INTEGER DueTime;     // 4 elements, 0x8 bytes (sizeof)
//		/*0x020*/     struct _LIST_ENTRY TimerListEntry; // 2 elements, 0x10 bytes (sizeof)
//		/*0x030*/     struct _KDPC* Dpc;
//		/*0x038*/     ULONG32      Processor;
//		/*0x03C*/     ULONG32      Period;
//	}KTIMER, *PKTIMER;
//
//	typedef struct _KWAIT_BLOCK             // 8 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY WaitListEntry;   // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _KTHREAD* Thread;
//		/*0x018*/     VOID*        Object;
//		/*0x020*/     struct _KWAIT_BLOCK* NextWaitBlock;
//		/*0x028*/     UINT16       WaitKey;
//		/*0x02A*/     UINT8        WaitType;
//		/*0x02B*/     UINT8        BlockState;
//		/*0x02C*/     LONG32       SpareLong;
//	}KWAIT_BLOCK, *PKWAIT_BLOCK;
//
//	typedef struct _GROUP_AFFINITY // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Mask;
//		/*0x008*/     UINT16       Group;
//		/*0x00A*/     UINT16       Reserved[3];
//	}GROUP_AFFINITY, *PGROUP_AFFINITY;
//
//	typedef struct _KAPC                                // 16 elements, 0x58 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Type;
//		/*0x001*/     UINT8        SpareByte0;
//		/*0x002*/     UINT8        Size;
//		/*0x003*/     UINT8        SpareByte1;
//		/*0x004*/     ULONG32      SpareLong0;
//		/*0x008*/     struct _KTHREAD* Thread;
//		/*0x010*/     struct _LIST_ENTRY ApcListEntry;                // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     FUNCT_00A3_065D_KernelRoutine* KernelRoutine;
//		/*0x028*/     FUNCT_00A3_066B_RundownRoutine* RundownRoutine;
//		/*0x030*/     FUNCT_00A3_0666_NormalRoutine* NormalRoutine;
//		/*0x038*/     VOID*        NormalContext;
//		/*0x040*/     VOID*        SystemArgument1;
//		/*0x048*/     VOID*        SystemArgument2;
//		/*0x050*/     CHAR         ApcStateIndex;
//		/*0x051*/     CHAR         ApcMode;
//		/*0x052*/     UINT8        Inserted;
//		/*0x053*/     UINT8        _PADDING0_[0x5];
//	}KAPC, *PKAPC;
//
//	typedef struct _KSEMAPHORE            // 2 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _DISPATCHER_HEADER Header; // 29 elements, 0x18 bytes (sizeof)
//		/*0x018*/     LONG32       Limit;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//	}KSEMAPHORE, *PKSEMAPHORE;
//
//	typedef struct _KTHREAD                                 // 130 elements, 0x368 bytes (sizeof)
//	{
//		/*0x000*/     struct _DISPATCHER_HEADER Header;                   // 29 elements, 0x18 bytes (sizeof)
//		/*0x018*/     UINT64       CycleTime;
//		/*0x020*/     UINT64       QuantumTarget;
//		/*0x028*/     VOID*        InitialStack;
//		/*0x030*/     VOID*        StackLimit;
//		/*0x038*/     VOID*        KernelStack;
//		/*0x040*/     UINT64       ThreadLock;
//		/*0x048*/     union _KWAIT_STATUS_REGISTER WaitRegister;          // 8 elements, 0x1 bytes (sizeof)
//		/*0x049*/     UINT8        Running;
//		/*0x04A*/     UINT8        Alerted[2];
//		union                                               // 2 elements, 0x4 bytes (sizeof)
//		{
//			struct                                          // 15 elements, 0x4 bytes (sizeof)
//			{
//				/*0x04C*/             ULONG32      KernelStackResident : 1;       // 0 BitPosition
//				/*0x04C*/             ULONG32      ReadyTransition : 1;           // 1 BitPosition
//				/*0x04C*/             ULONG32      ProcessReadyQueue : 1;         // 2 BitPosition
//				/*0x04C*/             ULONG32      WaitNext : 1;                  // 3 BitPosition
//				/*0x04C*/             ULONG32      SystemAffinityActive : 1;      // 4 BitPosition
//				/*0x04C*/             ULONG32      Alertable : 1;                 // 5 BitPosition
//				/*0x04C*/             ULONG32      GdiFlushActive : 1;            // 6 BitPosition
//				/*0x04C*/             ULONG32      UserStackWalkActive : 1;       // 7 BitPosition
//				/*0x04C*/             ULONG32      ApcInterruptRequest : 1;       // 8 BitPosition
//				/*0x04C*/             ULONG32      ForceDeferSchedule : 1;        // 9 BitPosition
//				/*0x04C*/             ULONG32      QuantumEndMigrate : 1;         // 10 BitPosition
//				/*0x04C*/             ULONG32      UmsDirectedSwitchEnable : 1;   // 11 BitPosition
//				/*0x04C*/             ULONG32      TimerActive : 1;               // 12 BitPosition
//				/*0x04C*/             ULONG32      SystemThread : 1;              // 13 BitPosition
//				/*0x04C*/             ULONG32      Reserved : 18;                 // 14 BitPosition
//			};
//			/*0x04C*/         LONG32       MiscFlags;
//		};
//		union                                               // 2 elements, 0x30 bytes (sizeof)
//		{
//			/*0x050*/         struct _KAPC_STATE ApcState;                    // 5 elements, 0x30 bytes (sizeof)
//			struct                                          // 3 elements, 0x30 bytes (sizeof)
//			{
//				/*0x050*/             UINT8        ApcStateFill[43];
//				/*0x07B*/             CHAR         Priority;
//				/*0x07C*/             ULONG32      NextProcessor;
//			};
//		};
//		/*0x080*/     ULONG32      DeferredProcessor;
//		/*0x084*/     UINT8        _PADDING0_[0x4];
//		/*0x088*/     UINT64       ApcQueueLock;
//		/*0x090*/     INT64        WaitStatus;
//		/*0x098*/     struct _KWAIT_BLOCK* WaitBlockList;
//		union                                               // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x0A0*/         struct _LIST_ENTRY WaitListEntry;               // 2 elements, 0x10 bytes (sizeof)
//			/*0x0A0*/         struct _SINGLE_LIST_ENTRY SwapListEntry;        // 1 elements, 0x8 bytes (sizeof)
//		};
//		/*0x0B0*/     struct _KQUEUE* Queue;
//		/*0x0B8*/     VOID*        Teb;
//		/*0x0C0*/     struct _KTIMER Timer;                               // 6 elements, 0x40 bytes (sizeof)
//		union                                               // 2 elements, 0x4 bytes (sizeof)
//		{
//			struct                                          // 12 elements, 0x4 bytes (sizeof)
//			{
//				/*0x100*/             ULONG32      AutoAlignment : 1;             // 0 BitPosition
//				/*0x100*/             ULONG32      DisableBoost : 1;              // 1 BitPosition
//				/*0x100*/             ULONG32      EtwStackTraceApc1Inserted : 1; // 2 BitPosition
//				/*0x100*/             ULONG32      EtwStackTraceApc2Inserted : 1; // 3 BitPosition
//				/*0x100*/             ULONG32      CalloutActive : 1;             // 4 BitPosition
//				/*0x100*/             ULONG32      ApcQueueable : 1;              // 5 BitPosition
//				/*0x100*/             ULONG32      EnableStackSwap : 1;           // 6 BitPosition
//				/*0x100*/             ULONG32      GuiThread : 1;                 // 7 BitPosition
//				/*0x100*/             ULONG32      UmsPerformingSyscall : 1;      // 8 BitPosition
//				/*0x100*/             ULONG32      VdmSafe : 1;                   // 9 BitPosition
//				/*0x100*/             ULONG32      UmsDispatched : 1;             // 10 BitPosition
//				/*0x100*/             ULONG32      ReservedFlags : 21;            // 11 BitPosition
//			};
//			/*0x100*/         LONG32       ThreadFlags;
//		};
//		/*0x104*/     ULONG32      Spare0;
//		union                                               // 6 elements, 0xC0 bytes (sizeof)
//		{
//			/*0x108*/         struct _KWAIT_BLOCK WaitBlock[4];
//			struct                                          // 2 elements, 0xC0 bytes (sizeof)
//			{
//				/*0x108*/             UINT8        WaitBlockFill4[44];
//				/*0x134*/             ULONG32      ContextSwitches;
//				/*0x138*/             UINT8        _PADDING1_[0x90];
//			};
//			struct                                          // 5 elements, 0xC0 bytes (sizeof)
//			{
//				/*0x108*/             UINT8        WaitBlockFill5[92];
//				/*0x164*/             UINT8        State;
//				/*0x165*/             CHAR         NpxState;
//				/*0x166*/             UINT8        WaitIrql;
//				/*0x167*/             CHAR         WaitMode;
//				/*0x168*/             UINT8        _PADDING2_[0x60];
//			};
//			struct                                          // 2 elements, 0xC0 bytes (sizeof)
//			{
//				/*0x108*/             UINT8        WaitBlockFill6[140];
//				/*0x194*/             ULONG32      WaitTime;
//				/*0x198*/             UINT8        _PADDING3_[0x30];
//			};
//			struct                                          // 3 elements, 0xC0 bytes (sizeof)
//			{
//				/*0x108*/             UINT8        WaitBlockFill7[168];
//				/*0x1B0*/             VOID*        TebMappedLowVa;
//				/*0x1B8*/             struct _UMS_CONTROL_BLOCK* Ucb;
//				/*0x1C0*/             UINT8        _PADDING4_[0x8];
//			};
//			struct                                          // 2 elements, 0xC0 bytes (sizeof)
//			{
//				/*0x108*/             UINT8        WaitBlockFill8[188];
//				union                                       // 2 elements, 0x4 bytes (sizeof)
//				{
//					struct                                  // 2 elements, 0x4 bytes (sizeof)
//					{
//						/*0x1C4*/                     INT16        KernelApcDisable;
//						/*0x1C6*/                     INT16        SpecialApcDisable;
//					};
//					/*0x1C4*/                 ULONG32      CombinedApcDisable;
//				};
//			};
//		};
//		/*0x1C8*/     struct _LIST_ENTRY QueueListEntry;                  // 2 elements, 0x10 bytes (sizeof)
//		/*0x1D8*/     struct _KTRAP_FRAME* TrapFrame;
//		/*0x1E0*/     VOID*        FirstArgument;
//		union                                               // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x1E8*/         VOID*        CallbackStack;
//			/*0x1E8*/         UINT64       CallbackDepth;
//		};
//		/*0x1F0*/     UINT8        ApcStateIndex;
//		/*0x1F1*/     CHAR         BasePriority;
//		union                                               // 2 elements, 0x1 bytes (sizeof)
//		{
//			/*0x1F2*/         CHAR         PriorityDecrement;
//			struct                                          // 2 elements, 0x1 bytes (sizeof)
//			{
//				/*0x1F2*/             UINT8        ForegroundBoost : 4;           // 0 BitPosition
//				/*0x1F2*/             UINT8        UnusualBoost : 4;              // 4 BitPosition
//			};
//		};
//		/*0x1F3*/     UINT8        Preempted;
//		/*0x1F4*/     UINT8        AdjustReason;
//		/*0x1F5*/     CHAR         AdjustIncrement;
//		/*0x1F6*/     CHAR         PreviousMode;
//		/*0x1F7*/     CHAR         Saturation;
//		/*0x1F8*/     ULONG32      SystemCallNumber;
//		/*0x1FC*/     ULONG32      FreezeCount;
//		/*0x200*/     struct _GROUP_AFFINITY UserAffinity;                // 3 elements, 0x10 bytes (sizeof)
//		/*0x210*/     struct _KPROCESS* Process;
//		/*0x218*/     struct _GROUP_AFFINITY Affinity;                    // 3 elements, 0x10 bytes (sizeof)
//		/*0x228*/     ULONG32      IdealProcessor;
//		/*0x22C*/     ULONG32      UserIdealProcessor;
//		/*0x230*/     struct _KAPC_STATE* ApcStatePointer[2];
//		union                                               // 2 elements, 0x30 bytes (sizeof)
//		{
//			/*0x240*/         struct _KAPC_STATE SavedApcState;               // 5 elements, 0x30 bytes (sizeof)
//			struct                                          // 5 elements, 0x30 bytes (sizeof)
//			{
//				/*0x240*/             UINT8        SavedApcStateFill[43];
//				/*0x26B*/             UINT8        WaitReason;
//				/*0x26C*/             CHAR         SuspendCount;
//				/*0x26D*/             CHAR         Spare1;
//				/*0x26E*/             UINT8        CodePatchInProgress;
//				/*0x26F*/             UINT8        _PADDING5_[0x1];
//			};
//		};
//		/*0x270*/     VOID*        Win32Thread;
//		/*0x278*/     VOID*        StackBase;
//		union                                               // 7 elements, 0x58 bytes (sizeof)
//		{
//			/*0x280*/         struct _KAPC SuspendApc;                        // 16 elements, 0x58 bytes (sizeof)
//			struct                                          // 2 elements, 0x58 bytes (sizeof)
//			{
//				/*0x280*/             UINT8        SuspendApcFill0[1];
//				/*0x281*/             UINT8        ResourceIndex;
//				/*0x282*/             UINT8        _PADDING6_[0x56];
//			};
//			struct                                          // 2 elements, 0x58 bytes (sizeof)
//			{
//				/*0x280*/             UINT8        SuspendApcFill1[3];
//				/*0x283*/             UINT8        QuantumReset;
//				/*0x284*/             UINT8        _PADDING7_[0x54];
//			};
//			struct                                          // 2 elements, 0x58 bytes (sizeof)
//			{
//				/*0x280*/             UINT8        SuspendApcFill2[4];
//				/*0x284*/             ULONG32      KernelTime;
//				/*0x288*/             UINT8        _PADDING8_[0x50];
//			};
//			struct                                          // 2 elements, 0x58 bytes (sizeof)
//			{
//				/*0x280*/             UINT8        SuspendApcFill3[64];
//				/*0x2C0*/             struct _KPRCB* WaitPrcb;
//				/*0x2C8*/             UINT8        _PADDING9_[0x10];
//			};
//			struct                                          // 2 elements, 0x58 bytes (sizeof)
//			{
//				/*0x280*/             UINT8        SuspendApcFill4[72];
//				/*0x2C8*/             VOID*        LegoData;
//				/*0x2D0*/             UINT8        _PADDING10_[0x8];
//			};
//			struct                                          // 3 elements, 0x58 bytes (sizeof)
//			{
//				/*0x280*/             UINT8        SuspendApcFill5[83];
//				/*0x2D3*/             UINT8        LargeStack;
//				/*0x2D4*/             ULONG32      UserTime;
//			};
//		};
//		union                                               // 2 elements, 0x20 bytes (sizeof)
//		{
//			/*0x2D8*/         struct _KSEMAPHORE SuspendSemaphore;            // 2 elements, 0x20 bytes (sizeof)
//			struct                                          // 2 elements, 0x20 bytes (sizeof)
//			{
//				/*0x2D8*/             UINT8        SuspendSemaphorefill[28];
//				/*0x2F4*/             ULONG32      SListFaultCount;
//			};
//		};
//		/*0x2F8*/     struct _LIST_ENTRY ThreadListEntry;                 // 2 elements, 0x10 bytes (sizeof)
//		/*0x308*/     struct _LIST_ENTRY MutantListHead;                  // 2 elements, 0x10 bytes (sizeof)
//		/*0x318*/     VOID*        SListFaultAddress;
//		/*0x320*/     INT64        ReadOperationCount;
//		/*0x328*/     INT64        WriteOperationCount;
//		/*0x330*/     INT64        OtherOperationCount;
//		/*0x338*/     INT64        ReadTransferCount;
//		/*0x340*/     INT64        WriteTransferCount;
//		/*0x348*/     INT64        OtherTransferCount;
//		/*0x350*/     struct _KTHREAD_COUNTERS* ThreadCounters;
//		/*0x358*/     struct _XSAVE_FORMAT* StateSaveArea;
//		/*0x360*/     struct _XSTATE_SAVE* XStateSave;
//	}KTHREAD, *PKTHREAD;
//
//	typedef union _PS_CLIENT_SECURITY_CONTEXT    // 4 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       ImpersonationData;
//		/*0x000*/     VOID*        ImpersonationToken;
//		struct                                   // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         UINT64       ImpersonationLevel : 2; // 0 BitPosition
//			/*0x000*/         UINT64       EffectiveOnly : 1;      // 2 BitPosition
//		};
//	}PS_CLIENT_SECURITY_CONTEXT, *PPS_CLIENT_SECURITY_CONTEXT;
//
//	typedef struct _ETHREAD                                              // 89 elements, 0x4A8 bytes (sizeof)
//	{
//		/*0x000*/     struct _KTHREAD Tcb;                                             // 130 elements, 0x368 bytes (sizeof)
//		/*0x368*/     union _LARGE_INTEGER CreateTime;                                 // 4 elements, 0x8 bytes (sizeof)
//		union                                                            // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x370*/         union _LARGE_INTEGER ExitTime;                               // 4 elements, 0x8 bytes (sizeof)
//			/*0x370*/         struct _LIST_ENTRY KeyedWaitChain;                           // 2 elements, 0x10 bytes (sizeof)
//		};
//		/*0x380*/     LONG32       ExitStatus;
//		/*0x384*/     UINT8        _PADDING0_[0x4];
//		union                                                            // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x388*/         struct _LIST_ENTRY PostBlockList;                            // 2 elements, 0x10 bytes (sizeof)
//			struct                                                       // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x388*/             VOID*        ForwardLinkShadow;
//				/*0x390*/             VOID*        StartAddress;
//			};
//		};
//		union                                                            // 3 elements, 0x8 bytes (sizeof)
//		{
//			/*0x398*/         struct _TERMINATION_PORT* TerminationPort;
//			/*0x398*/         struct _ETHREAD* ReaperLink;
//			/*0x398*/         VOID*        KeyedWaitValue;
//		};
//		/*0x3A0*/     UINT64       ActiveTimerListLock;
//		/*0x3A8*/     struct _LIST_ENTRY ActiveTimerListHead;                          // 2 elements, 0x10 bytes (sizeof)
//		/*0x3B8*/     struct _CLIENT_ID Cid;                                           // 2 elements, 0x10 bytes (sizeof)
//		union                                                            // 2 elements, 0x20 bytes (sizeof)
//		{
//			/*0x3C8*/         struct _KSEMAPHORE KeyedWaitSemaphore;                       // 2 elements, 0x20 bytes (sizeof)
//			/*0x3C8*/         struct _KSEMAPHORE AlpcWaitSemaphore;                        // 2 elements, 0x20 bytes (sizeof)
//		};
//		/*0x3E8*/     union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                // 4 elements, 0x8 bytes (sizeof)
//		/*0x3F0*/     struct _LIST_ENTRY IrpList;                                      // 2 elements, 0x10 bytes (sizeof)
//		/*0x400*/     UINT64       TopLevelIrp;
//		/*0x408*/     struct _DEVICE_OBJECT* DeviceToVerify;
//		/*0x410*/     union _PSP_CPU_QUOTA_APC* CpuQuotaApc;
//		/*0x418*/     VOID*        Win32StartAddress;
//		/*0x420*/     VOID*        LegacyPowerObject;
//		/*0x428*/     struct _LIST_ENTRY ThreadListEntry;                              // 2 elements, 0x10 bytes (sizeof)
//		/*0x438*/     struct _EX_RUNDOWN_REF RundownProtect;                           // 2 elements, 0x8 bytes (sizeof)
//		/*0x440*/     struct _EX_PUSH_LOCK ThreadLock;                                 // 7 elements, 0x8 bytes (sizeof)
//		/*0x448*/     ULONG32      ReadClusterSize;
//		/*0x44C*/     LONG32       MmLockOrdering;
//		union                                                            // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x450*/         ULONG32      CrossThreadFlags;
//			struct                                                       // 14 elements, 0x4 bytes (sizeof)
//			{
//				/*0x450*/             ULONG32      Terminated : 1;                             // 0 BitPosition
//				/*0x450*/             ULONG32      ThreadInserted : 1;                         // 1 BitPosition
//				/*0x450*/             ULONG32      HideFromDebugger : 1;                       // 2 BitPosition
//				/*0x450*/             ULONG32      ActiveImpersonationInfo : 1;                // 3 BitPosition
//				/*0x450*/             ULONG32      Reserved : 1;                               // 4 BitPosition
//				/*0x450*/             ULONG32      HardErrorsAreDisabled : 1;                  // 5 BitPosition
//				/*0x450*/             ULONG32      BreakOnTermination : 1;                     // 6 BitPosition
//				/*0x450*/             ULONG32      SkipCreationMsg : 1;                        // 7 BitPosition
//				/*0x450*/             ULONG32      SkipTerminationMsg : 1;                     // 8 BitPosition
//				/*0x450*/             ULONG32      CopyTokenOnOpen : 1;                        // 9 BitPosition
//				/*0x450*/             ULONG32      ThreadIoPriority : 3;                       // 10 BitPosition
//				/*0x450*/             ULONG32      ThreadPagePriority : 3;                     // 13 BitPosition
//				/*0x450*/             ULONG32      RundownFail : 1;                            // 16 BitPosition
//				/*0x450*/             ULONG32      NeedsWorkingSetAging : 1;                   // 17 BitPosition
//			};
//		};
//		union                                                            // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x454*/         ULONG32      SameThreadPassiveFlags;
//			struct                                                       // 7 elements, 0x4 bytes (sizeof)
//			{
//				/*0x454*/             ULONG32      ActiveExWorker : 1;                         // 0 BitPosition
//				/*0x454*/             ULONG32      ExWorkerCanWaitUser : 1;                    // 1 BitPosition
//				/*0x454*/             ULONG32      MemoryMaker : 1;                            // 2 BitPosition
//				/*0x454*/             ULONG32      ClonedThread : 1;                           // 3 BitPosition
//				/*0x454*/             ULONG32      KeyedEventInUse : 1;                        // 4 BitPosition
//				/*0x454*/             ULONG32      RateApcState : 2;                           // 5 BitPosition
//				/*0x454*/             ULONG32      SelfTerminate : 1;                          // 7 BitPosition
//			};
//		};
//		union                                                            // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x458*/         ULONG32      SameThreadApcFlags;
//			struct                                                       // 4 elements, 0x4 bytes (sizeof)
//			{
//				struct                                                   // 8 elements, 0x1 bytes (sizeof)
//				{
//					/*0x458*/                 UINT8        Spare : 1;                              // 0 BitPosition
//					/*0x458*/                 UINT8        StartAddressInvalid : 1;                // 1 BitPosition
//					/*0x458*/                 UINT8        EtwPageFaultCalloutActive : 1;          // 2 BitPosition
//					/*0x458*/                 UINT8        OwnsProcessWorkingSetExclusive : 1;     // 3 BitPosition
//					/*0x458*/                 UINT8        OwnsProcessWorkingSetShared : 1;        // 4 BitPosition
//					/*0x458*/                 UINT8        OwnsSystemCacheWorkingSetExclusive : 1; // 5 BitPosition
//					/*0x458*/                 UINT8        OwnsSystemCacheWorkingSetShared : 1;    // 6 BitPosition
//					/*0x458*/                 UINT8        OwnsSessionWorkingSetExclusive : 1;     // 7 BitPosition
//				};
//				struct                                                   // 8 elements, 0x1 bytes (sizeof)
//				{
//					/*0x459*/                 UINT8        OwnsSessionWorkingSetShared : 1;        // 0 BitPosition
//					/*0x459*/                 UINT8        OwnsProcessAddressSpaceExclusive : 1;   // 1 BitPosition
//					/*0x459*/                 UINT8        OwnsProcessAddressSpaceShared : 1;      // 2 BitPosition
//					/*0x459*/                 UINT8        SuppressSymbolLoad : 1;                 // 3 BitPosition
//					/*0x459*/                 UINT8        Prefetching : 1;                        // 4 BitPosition
//					/*0x459*/                 UINT8        OwnsDynamicMemoryShared : 1;            // 5 BitPosition
//					/*0x459*/                 UINT8        OwnsChangeControlAreaExclusive : 1;     // 6 BitPosition
//					/*0x459*/                 UINT8        OwnsChangeControlAreaShared : 1;        // 7 BitPosition
//				};
//				struct                                                   // 6 elements, 0x1 bytes (sizeof)
//				{
//					/*0x45A*/                 UINT8        OwnsPagedPoolWorkingSetExclusive : 1;   // 0 BitPosition
//					/*0x45A*/                 UINT8        OwnsPagedPoolWorkingSetShared : 1;      // 1 BitPosition
//					/*0x45A*/                 UINT8        OwnsSystemPtesWorkingSetExclusive : 1;  // 2 BitPosition
//					/*0x45A*/                 UINT8        OwnsSystemPtesWorkingSetShared : 1;     // 3 BitPosition
//					/*0x45A*/                 UINT8        TrimTrigger : 2;                        // 4 BitPosition
//					/*0x45A*/                 UINT8        Spare1 : 2;                             // 6 BitPosition
//				};
//				/*0x45B*/             UINT8        PriorityRegionActive;
//			};
//		};
//		/*0x45C*/     UINT8        CacheManagerActive;
//		/*0x45D*/     UINT8        DisablePageFaultClustering;
//		/*0x45E*/     UINT8        ActiveFaultCount;
//		/*0x45F*/     UINT8        LockOrderState;
//		/*0x460*/     UINT64       AlpcMessageId;
//		union                                                            // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x468*/         VOID*        AlpcMessage;
//			/*0x468*/         ULONG32      AlpcReceiveAttributeSet;
//		};
//		/*0x470*/     struct _LIST_ENTRY AlpcWaitListEntry;                            // 2 elements, 0x10 bytes (sizeof)
//		/*0x480*/     ULONG32      CacheManagerCount;
//		/*0x484*/     ULONG32      IoBoostCount;
//		/*0x488*/     UINT64       IrpListLock;
//		/*0x490*/     VOID*        ReservedForSynchTracking;
//		/*0x498*/     struct _SINGLE_LIST_ENTRY CmCallbackListHead;                    // 1 elements, 0x8 bytes (sizeof)
//		/*0x4A0*/     ULONG32      KernelStackReference;
//		/*0x4A4*/     UINT8        _PADDING1_[0x4];
//	}ETHREAD, *PETHREAD;
//
//	typedef struct _ETIMER                       // 9 elements, 0x110 bytes (sizeof)
//	{
//		/*0x000*/     struct _KTIMER KeTimer;                  // 6 elements, 0x40 bytes (sizeof)
//		/*0x040*/     struct _KAPC TimerApc;                   // 16 elements, 0x58 bytes (sizeof)
//		/*0x098*/     struct _KDPC TimerDpc;                   // 9 elements, 0x40 bytes (sizeof)
//		/*0x0D8*/     struct _LIST_ENTRY ActiveTimerListEntry; // 2 elements, 0x10 bytes (sizeof)
//		/*0x0E8*/     UINT64       Lock;
//		/*0x0F0*/     LONG32       Period;
//		/*0x0F4*/     UINT8        ApcAssociated;
//		/*0x0F5*/     UINT8        _PADDING0_[0x3];
//		/*0x0F8*/     struct _DIAGNOSTIC_CONTEXT* WakeReason;
//		/*0x100*/     struct _LIST_ENTRY WakeTimerListEntry;   // 2 elements, 0x10 bytes (sizeof)
//	}ETIMER, *PETIMER;
//
//	typedef struct _ETW_BUFFER_CONTEXT        // 4 elements, 0x4 bytes (sizeof)
//	{
//		union                                 // 2 elements, 0x2 bytes (sizeof)
//		{
//			struct                            // 2 elements, 0x2 bytes (sizeof)
//			{
//				/*0x000*/             UINT8        ProcessorNumber;
//				/*0x001*/             UINT8        Alignment;
//			};
//			/*0x000*/         UINT16       ProcessorIndex;
//		};
//		/*0x002*/     UINT16       LoggerId;
//	}ETW_BUFFER_CONTEXT, *PETW_BUFFER_CONTEXT;
//
//	typedef struct _ETW_BUFFER_HANDLE           // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _WMI_BUFFER_HEADER* TraceBuffer;
//		/*0x008*/     struct _EX_FAST_REF* BufferFastRef;
//	}ETW_BUFFER_HANDLE, *PETW_BUFFER_HANDLE;
//
//	typedef struct _ETW_LAST_ENABLE_INFO   // 5 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     union _LARGE_INTEGER EnableFlags;  // 4 elements, 0x8 bytes (sizeof)
//		/*0x008*/     UINT16       LoggerId;
//		/*0x00A*/     UINT8        Level;
//		struct                             // 2 elements, 0x1 bytes (sizeof)
//		{
//			/*0x00B*/         UINT8        Enabled : 1;      // 0 BitPosition
//			/*0x00B*/         UINT8        InternalFlag : 7; // 1 BitPosition
//		};
//	}ETW_LAST_ENABLE_INFO, *PETW_LAST_ENABLE_INFO;
//
//	typedef struct _TRACE_ENABLE_INFO // 8 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      IsEnabled;
//		/*0x004*/     UINT8        Level;
//		/*0x005*/     UINT8        Reserved1;
//		/*0x006*/     UINT16       LoggerId;
//		/*0x008*/     ULONG32      EnableProperty;
//		/*0x00C*/     ULONG32      Reserved2;
//		/*0x010*/     UINT64       MatchAnyKeyword;
//		/*0x018*/     UINT64       MatchAllKeyword;
//	}TRACE_ENABLE_INFO, *PTRACE_ENABLE_INFO;
//
//	typedef struct _ETW_GUID_ENTRY                    // 10 elements, 0x1B0 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY GuidList;                  // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     LONG32       RefCount;
//		/*0x014*/     struct _GUID Guid;                            // 4 elements, 0x10 bytes (sizeof)
//		/*0x024*/     UINT8        _PADDING0_[0x4];
//		/*0x028*/     struct _LIST_ENTRY RegListHead;               // 2 elements, 0x10 bytes (sizeof)
//		/*0x038*/     VOID*        SecurityDescriptor;
//		union                                         // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x040*/         struct _ETW_LAST_ENABLE_INFO LastEnable;  // 5 elements, 0x10 bytes (sizeof)
//			/*0x040*/         UINT64       MatchId;
//		};
//		/*0x050*/     struct _TRACE_ENABLE_INFO ProviderEnableInfo; // 8 elements, 0x20 bytes (sizeof)
//		/*0x070*/     struct _TRACE_ENABLE_INFO EnableInfo[8];
//		/*0x170*/     struct _EVENT_FILTER_HEADER* FilterData[8];
//	}ETW_GUID_ENTRY, *PETW_GUID_ENTRY;
//
//	typedef struct _ETW_LOGGER_HANDLE     // 1 elements, 0x1 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        DereferenceAndLeave;
//	}ETW_LOGGER_HANDLE, *PETW_LOGGER_HANDLE;
//
//	typedef struct _ETW_PERF_COUNTERS               // 6 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       TotalActiveSessions;
//		/*0x004*/     LONG32       TotalBufferMemoryNonPagedPool;
//		/*0x008*/     LONG32       TotalBufferMemoryPagedPool;
//		/*0x00C*/     LONG32       TotalGuidsEnabled;
//		/*0x010*/     LONG32       TotalGuidsNotEnabled;
//		/*0x014*/     LONG32       TotalGuidsPreEnabled;
//	}ETW_PERF_COUNTERS, *PETW_PERF_COUNTERS;
//
//	typedef struct _ETW_PROVIDER_TABLE_ENTRY // 4 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       RefCount;
//		/*0x004*/     enum _ETW_PROVIDER_STATE State;
//		/*0x008*/     struct _ETW_REG_ENTRY* RegEntry;
//		/*0x010*/     VOID*        Caller;
//	}ETW_PROVIDER_TABLE_ENTRY, *PETW_PROVIDER_TABLE_ENTRY;
//
//	typedef struct _RTL_BALANCED_NODE               // 6 elements, 0x18 bytes (sizeof)
//	{
//		union                                       // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x000*/         struct _RTL_BALANCED_NODE* Children[2];
//			struct                                  // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x000*/             struct _RTL_BALANCED_NODE* Left;
//				/*0x008*/             struct _RTL_BALANCED_NODE* Right;
//			};
//		};
//		union                                       // 2 elements, 0x8 bytes (sizeof)
//		{
//			struct                                  // 2 elements, 0x1 bytes (sizeof)
//			{
//				/*0x010*/             UINT8        Red : 1;               // 0 BitPosition
//				/*0x010*/             UINT8        Balance : 2;           // 0 BitPosition
//			};
//			/*0x010*/         UINT64       ParentValue;
//		};
//	}RTL_BALANCED_NODE, *PRTL_BALANCED_NODE;
//
//	typedef struct _ETW_PROVIDER_TRAITS // 3 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _RTL_BALANCED_NODE Node; // 6 elements, 0x18 bytes (sizeof)
//		/*0x018*/     ULONG32      ReferenceCount;
//		/*0x01C*/     UINT8        Traits[1];
//		/*0x01D*/     UINT8        _PADDING0_[0x3];
//	}ETW_PROVIDER_TRAITS, *PETW_PROVIDER_TRAITS;
//
//	typedef struct _ETW_REALTIME_CONSUMER              // 21 elements, 0x88 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY Links;                      // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     VOID*        ProcessHandle;
//		/*0x018*/     struct _EPROCESS* ProcessObject;
//		/*0x020*/     VOID*        NextNotDelivered;
//		/*0x028*/     VOID*        RealtimeConnectContext;
//		/*0x030*/     struct _KEVENT* DisconnectEvent;
//		/*0x038*/     struct _KEVENT* DataAvailableEvent;
//		/*0x040*/     ULONG32*     UserBufferCount;
//		/*0x048*/     struct _SINGLE_LIST_ENTRY* UserBufferListHead;
//		/*0x050*/     ULONG32      BuffersLost;
//		/*0x054*/     ULONG32      EmptyBuffersCount;
//		/*0x058*/     ULONG32      LoggerId;
//		/*0x05C*/     UINT8        ShutDownRequested;
//		/*0x05D*/     UINT8        NewBuffersLost;
//		/*0x05E*/     UINT8        Disconnected;
//		/*0x05F*/     UINT8        _PADDING0_[0x1];
//		/*0x060*/     struct _RTL_BITMAP ReservedBufferSpaceBitMap;  // 2 elements, 0x10 bytes (sizeof)
//		/*0x070*/     UINT8*       ReservedBufferSpace;
//		/*0x078*/     ULONG32      ReservedBufferSpaceSize;
//		/*0x07C*/     ULONG32      UserPagesAllocated;
//		/*0x080*/     ULONG32      UserPagesReused;
//		/*0x084*/     UINT8        Wow;
//		/*0x085*/     UINT8        _PADDING1_[0x3];
//	}ETW_REALTIME_CONSUMER, *PETW_REALTIME_CONSUMER;
//
//	typedef struct _ETW_REF_CLOCK            // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     union _LARGE_INTEGER StartTime;      // 4 elements, 0x8 bytes (sizeof)
//		/*0x008*/     union _LARGE_INTEGER StartPerfClock; // 4 elements, 0x8 bytes (sizeof)
//	}ETW_REF_CLOCK, *PETW_REF_CLOCK;
//
//	typedef struct _ETW_REG_ENTRY                // 16 elements, 0x70 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY RegList;              // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _LIST_ENTRY GroupRegList;         // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     struct _ETW_GUID_ENTRY* GuidEntry;
//		/*0x028*/     struct _ETW_GUID_ENTRY* GroupEntry;
//		/*0x030*/     UINT16       Index;
//		/*0x032*/     UINT16       Flags;
//		/*0x034*/     UINT8        EnableMask;
//		/*0x035*/     UINT8        GroupEnableMask;
//		/*0x036*/     UINT8        UseDescriptorType;
//		/*0x037*/     UINT8        _PADDING0_[0x1];
//		union                                    // 3 elements, 0x20 bytes (sizeof)
//		{
//			/*0x038*/         ULONG32      SessionId;
//			/*0x038*/         struct _ETW_REPLY_QUEUE* ReplyQueue;
//			/*0x038*/         struct _ETW_REG_ENTRY* ReplySlot[4];
//		};
//		union                                    // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x058*/         struct _EPROCESS* Process;
//			/*0x058*/         VOID*        Callback;
//		};
//		/*0x060*/     VOID*        CallbackContext;
//		/*0x068*/     struct _ETW_PROVIDER_TRAITS* Traits;
//	}ETW_REG_ENTRY, *PETW_REG_ENTRY;
//
//	typedef struct _KQUEUE                 // 5 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     struct _DISPATCHER_HEADER Header;  // 29 elements, 0x18 bytes (sizeof)
//		/*0x018*/     struct _LIST_ENTRY EntryListHead;  // 2 elements, 0x10 bytes (sizeof)
//		/*0x028*/     ULONG32      CurrentCount;
//		/*0x02C*/     ULONG32      MaximumCount;
//		/*0x030*/     struct _LIST_ENTRY ThreadListHead; // 2 elements, 0x10 bytes (sizeof)
//	}KQUEUE, *PKQUEUE;
//
//	typedef struct _ETW_REPLY_QUEUE   // 2 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     struct _KQUEUE Queue;         // 5 elements, 0x40 bytes (sizeof)
//		/*0x040*/     LONG32       EventsLost;
//		/*0x044*/     UINT8        _PADDING0_[0x4];
//	}ETW_REPLY_QUEUE, *PETW_REPLY_QUEUE;
//
//	typedef struct _ETW_SESSION_PERF_COUNTERS  // 5 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       BufferMemoryPagedPool;
//		/*0x004*/     LONG32       BufferMemoryNonPagedPool;
//		/*0x008*/     UINT64       EventsLoggedCount;
//		/*0x010*/     LONG32       EventsLost;
//		/*0x014*/     LONG32       NumConsumers;
//	}ETW_SESSION_PERF_COUNTERS, *PETW_SESSION_PERF_COUNTERS;
//
//	typedef struct _ETW_SYSTEMTIME // 8 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Year;
//		/*0x002*/     UINT16       Month;
//		/*0x004*/     UINT16       DayOfWeek;
//		/*0x006*/     UINT16       Day;
//		/*0x008*/     UINT16       Hour;
//		/*0x00A*/     UINT16       Minute;
//		/*0x00C*/     UINT16       Second;
//		/*0x00E*/     UINT16       Milliseconds;
//	}ETW_SYSTEMTIME, *PETW_SYSTEMTIME;
//
//	typedef struct _ETW_WMITRACE_WORK          // 15 elements, 0xF0 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      LoggerId;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		union                                  // 2 elements, 0xE0 bytes (sizeof)
//		{
//			struct                             // 8 elements, 0xE0 bytes (sizeof)
//			{
//				/*0x008*/             CHAR         LoggerName[65];
//				/*0x049*/             CHAR         FileName[129];
//				/*0x0CA*/             UINT8        _PADDING1_[0x2];
//				/*0x0CC*/             ULONG32      MaximumFileSize;
//				/*0x0D0*/             ULONG32      MinBuffers;
//				/*0x0D4*/             ULONG32      MaxBuffers;
//				/*0x0D8*/             ULONG32      BufferSize;
//				/*0x0DC*/             ULONG32      Mode;
//				/*0x0E0*/             ULONG32      FlushTimer;
//				/*0x0E4*/             UINT8        _PADDING2_[0x4];
//			};
//			struct                             // 5 elements, 0xE0 bytes (sizeof)
//			{
//				/*0x008*/             UINT64       MatchAny;
//				/*0x010*/             UINT64       MatchAll;
//				/*0x018*/             ULONG32      EnableProperty;
//				/*0x01C*/             struct _GUID Guid;             // 4 elements, 0x10 bytes (sizeof)
//				/*0x02C*/             UINT8        Level;
//				/*0x02D*/             UINT8        _PADDING3_[0xBB];
//			};
//		};
//		/*0x0E8*/     LONG32       Status;
//		/*0x0EC*/     UINT8        _PADDING4_[0x4];
//	}ETW_WMITRACE_WORK, *PETW_WMITRACE_WORK;
//
//	typedef struct _EVENT_DATA_DESCRIPTOR // 6 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Ptr;
//		/*0x008*/     ULONG32      Size;
//		union                             // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x00C*/         ULONG32      Reserved;
//			struct                        // 3 elements, 0x4 bytes (sizeof)
//			{
//				/*0x00C*/             UINT8        Type;
//				/*0x00D*/             UINT8        Reserved1;
//				/*0x00E*/             UINT16       Reserved2;
//			};
//		};
//	}EVENT_DATA_DESCRIPTOR, *PEVENT_DATA_DESCRIPTOR;
//
//	typedef struct _EVENT_DESCRIPTOR // 7 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Id;
//		/*0x002*/     UINT8        Version;
//		/*0x003*/     UINT8        Channel;
//		/*0x004*/     UINT8        Level;
//		/*0x005*/     UINT8        Opcode;
//		/*0x006*/     UINT16       Task;
//		/*0x008*/     UINT64       Keyword;
//	}EVENT_DESCRIPTOR, *PEVENT_DESCRIPTOR;
//
//	typedef struct _EVENT_FILTER_DESCRIPTOR // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Ptr;
//		/*0x008*/     ULONG32      Size;
//		/*0x00C*/     ULONG32      Type;
//	}EVENT_FILTER_DESCRIPTOR, *PEVENT_FILTER_DESCRIPTOR;
//
//	typedef struct _EVENT_FILTER_HEADER // 6 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Id;
//		/*0x002*/     UINT8        Version;
//		/*0x003*/     UINT8        Reserved[5];
//		/*0x008*/     UINT64       InstanceId;
//		/*0x010*/     ULONG32      Size;
//		/*0x014*/     ULONG32      NextOffset;
//	}EVENT_FILTER_HEADER, *PEVENT_FILTER_HEADER;
//
//	typedef struct _EX_PUSH_LOCK_CACHE_AWARE // 1 elements, 0x100 bytes (sizeof)
//	{
//		/*0x000*/     struct _EX_PUSH_LOCK* Locks[32];
//	}EX_PUSH_LOCK_CACHE_AWARE, *PEX_PUSH_LOCK_CACHE_AWARE;
//
//	typedef struct _EX_PUSH_LOCK_WAIT_BLOCK        // 6 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     struct _KEVENT WakeEvent;                  // 1 elements, 0x18 bytes (sizeof)
//		/*0x018*/     struct _EX_PUSH_LOCK_WAIT_BLOCK* Next;
//		/*0x020*/     struct _EX_PUSH_LOCK_WAIT_BLOCK* Last;
//		/*0x028*/     struct _EX_PUSH_LOCK_WAIT_BLOCK* Previous;
//		/*0x030*/     LONG32       ShareCount;
//		/*0x034*/     LONG32       Flags;
//		/*0x038*/     UINT8        _PADDING0_[0x8];
//	}EX_PUSH_LOCK_WAIT_BLOCK, *PEX_PUSH_LOCK_WAIT_BLOCK;
//
//	typedef union _EX_QUEUE_WORKER_INFO              // 5 elements, 0x4 bytes (sizeof)
//	{
//		struct                                       // 4 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      QueueDisabled : 1;          // 0 BitPosition
//			/*0x000*/         ULONG32      MakeThreadsAsNecessary : 1; // 1 BitPosition
//			/*0x000*/         ULONG32      WaitMode : 1;               // 2 BitPosition
//			/*0x000*/         ULONG32      WorkerCount : 29;           // 3 BitPosition
//		};
//		/*0x000*/     LONG32       QueueWorkerInfo;
//	}EX_QUEUE_WORKER_INFO, *PEX_QUEUE_WORKER_INFO;
//
//	typedef struct _EX_WORK_QUEUE                // 6 elements, 0x58 bytes (sizeof)
//	{
//		/*0x000*/     struct _KQUEUE WorkerQueue;              // 5 elements, 0x40 bytes (sizeof)
//		/*0x040*/     ULONG32      DynamicThreadCount;
//		/*0x044*/     ULONG32      WorkItemsProcessed;
//		/*0x048*/     ULONG32      WorkItemsProcessedLastPass;
//		/*0x04C*/     ULONG32      QueueDepthLastPass;
//		/*0x050*/     union _EX_QUEUE_WORKER_INFO Info;        // 5 elements, 0x4 bytes (sizeof)
//		/*0x054*/     UINT8        _PADDING0_[0x4];
//	}EX_WORK_QUEUE, *PEX_WORK_QUEUE;
//
//	typedef struct _EXCEPTION_POINTERS             // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _EXCEPTION_RECORD* ExceptionRecord;
//		/*0x008*/     struct _CONTEXT* ContextRecord;
//	}EXCEPTION_POINTERS, *PEXCEPTION_POINTERS;
//
//	typedef struct _EXCEPTION_RECORD               // 6 elements, 0x98 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       ExceptionCode;
//		/*0x004*/     ULONG32      ExceptionFlags;
//		/*0x008*/     struct _EXCEPTION_RECORD* ExceptionRecord;
//		/*0x010*/     VOID*        ExceptionAddress;
//		/*0x018*/     ULONG32      NumberParameters;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		/*0x020*/     UINT64       ExceptionInformation[15];
//	}EXCEPTION_RECORD, *PEXCEPTION_RECORD;
//
//	typedef struct _EXCEPTION_REGISTRATION_RECORD    // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _EXCEPTION_REGISTRATION_RECORD* Next;
//		/*0x008*/     FUNCT_0160_015F_Handler* Handler;
//	}EXCEPTION_REGISTRATION_RECORD, *PEXCEPTION_REGISTRATION_RECORD;
//
//	typedef struct _FAST_IO_DISPATCH                                                                                // 28 elements, 0xE0 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      SizeOfFastIoDispatch;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     FUNCT_0065_09F5_FastIoCheckIfPossible* FastIoCheckIfPossible;
//		/*0x010*/     FUNCT_0065_09FF_FastIoRead_FastIoWrite* FastIoRead;
//		/*0x018*/     FUNCT_0065_09FF_FastIoRead_FastIoWrite* FastIoWrite;
//		/*0x020*/     FUNCT_0065_0A09_FastIoQueryBasicInfo* FastIoQueryBasicInfo;
//		/*0x028*/     FUNCT_0065_0A17_FastIoQueryStandardInfo* FastIoQueryStandardInfo;
//		/*0x030*/     FUNCT_0065_0A25_FastIoLock* FastIoLock;
//		/*0x038*/     FUNCT_0065_0BCE_FastIoUnlockSingle* FastIoUnlockSingle;
//		/*0x040*/     FUNCT_0065_0BD7_FastIoUnlockAll* FastIoUnlockAll;
//		/*0x048*/     FUNCT_0065_0BDD_FastIoUnlockAllByKey* FastIoUnlockAllByKey;
//		/*0x050*/     FUNCT_0065_0BE4_FastIoDeviceControl* FastIoDeviceControl;
//		/*0x058*/     FUNCT_00A3_0BEF_AcquireFileForNtCreateSection_ReleaseFileForNtCreateSection* AcquireFileForNtCreateSection;
//		/*0x060*/     FUNCT_00A3_0BEF_AcquireFileForNtCreateSection_ReleaseFileForNtCreateSection* ReleaseFileForNtCreateSection;
//		/*0x068*/     FUNCT_00A3_0BF2_FastIoDetachDevice* FastIoDetachDevice;
//		/*0x070*/     FUNCT_0065_0BF6_FastIoQueryNetworkOpenInfo* FastIoQueryNetworkOpenInfo;
//		/*0x078*/     FUNCT_005B_0C06_AcquireForModWrite* AcquireForModWrite;
//		/*0x080*/     FUNCT_0065_0C0C_MdlRead_PrepareMdlWrite* MdlRead;
//		/*0x088*/     FUNCT_0065_0C20_MdlReadComplete_MdlReadCompleteCompressed* MdlReadComplete;
//		/*0x090*/     FUNCT_0065_0C0C_MdlRead_PrepareMdlWrite* PrepareMdlWrite;
//		/*0x098*/     FUNCT_0065_0C25_MdlWriteComplete_MdlWriteCompleteCompressed* MdlWriteComplete;
//		/*0x0A0*/     FUNCT_0065_0C2B_FastIoReadCompressed_FastIoWriteCompressed* FastIoReadCompressed;
//		/*0x0A8*/     FUNCT_0065_0C2B_FastIoReadCompressed_FastIoWriteCompressed* FastIoWriteCompressed;
//		/*0x0B0*/     FUNCT_0065_0C20_MdlReadComplete_MdlReadCompleteCompressed* MdlReadCompleteCompressed;
//		/*0x0B8*/     FUNCT_0065_0C25_MdlWriteComplete_MdlWriteCompleteCompressed* MdlWriteCompleteCompressed;
//		/*0x0C0*/     FUNCT_0065_0C40_FastIoQueryOpen* FastIoQueryOpen;
//		/*0x0C8*/     FUNCT_005B_0EF4_ReleaseForModWrite* ReleaseForModWrite;
//		/*0x0D0*/     FUNCT_005B_0EF9_AcquireForCcFlush_ReleaseForCcFlush* AcquireForCcFlush;
//		/*0x0D8*/     FUNCT_005B_0EF9_AcquireForCcFlush_ReleaseForCcFlush* ReleaseForCcFlush;
//	}FAST_IO_DISPATCH, *PFAST_IO_DISPATCH;
//
//	typedef struct _FAST_MUTEX        // 5 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       Count;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _KTHREAD* Owner;
//		/*0x010*/     ULONG32      Contention;
//		/*0x014*/     UINT8        _PADDING1_[0x4];
//		/*0x018*/     struct _KEVENT Event;         // 1 elements, 0x18 bytes (sizeof)
//		/*0x030*/     ULONG32      OldIrql;
//		/*0x034*/     UINT8        _PADDING2_[0x4];
//	}FAST_MUTEX, *PFAST_MUTEX;
//
//	typedef struct _FILE_BASIC_INFORMATION   // 5 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     union _LARGE_INTEGER CreationTime;   // 4 elements, 0x8 bytes (sizeof)
//		/*0x008*/     union _LARGE_INTEGER LastAccessTime; // 4 elements, 0x8 bytes (sizeof)
//		/*0x010*/     union _LARGE_INTEGER LastWriteTime;  // 4 elements, 0x8 bytes (sizeof)
//		/*0x018*/     union _LARGE_INTEGER ChangeTime;     // 4 elements, 0x8 bytes (sizeof)
//		/*0x020*/     ULONG32      FileAttributes;
//		/*0x024*/     UINT8        _PADDING0_[0x4];
//	}FILE_BASIC_INFORMATION, *PFILE_BASIC_INFORMATION;
//
//	typedef struct _SID_IDENTIFIER_AUTHORITY // 1 elements, 0x6 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Value[6];
//	}SID_IDENTIFIER_AUTHORITY, *PSID_IDENTIFIER_AUTHORITY;
//
//	typedef struct _SID                                       // 4 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Revision;
//		/*0x001*/     UINT8        SubAuthorityCount;
//		/*0x002*/     struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // 1 elements, 0x6 bytes (sizeof)
//		/*0x008*/     ULONG32      SubAuthority[1];
//	}SID, *PSID;
//
//	typedef struct _FILE_GET_QUOTA_INFORMATION // 3 elements, 0x14 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      NextEntryOffset;
//		/*0x004*/     ULONG32      SidLength;
//		/*0x008*/     struct _SID  Sid;                      // 4 elements, 0xC bytes (sizeof)
//	}FILE_GET_QUOTA_INFORMATION, *PFILE_GET_QUOTA_INFORMATION;
//
//	typedef struct _FILE_NETWORK_OPEN_INFORMATION // 7 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     union _LARGE_INTEGER CreationTime;        // 4 elements, 0x8 bytes (sizeof)
//		/*0x008*/     union _LARGE_INTEGER LastAccessTime;      // 4 elements, 0x8 bytes (sizeof)
//		/*0x010*/     union _LARGE_INTEGER LastWriteTime;       // 4 elements, 0x8 bytes (sizeof)
//		/*0x018*/     union _LARGE_INTEGER ChangeTime;          // 4 elements, 0x8 bytes (sizeof)
//		/*0x020*/     union _LARGE_INTEGER AllocationSize;      // 4 elements, 0x8 bytes (sizeof)
//		/*0x028*/     union _LARGE_INTEGER EndOfFile;           // 4 elements, 0x8 bytes (sizeof)
//		/*0x030*/     ULONG32      FileAttributes;
//		/*0x034*/     UINT8        _PADDING0_[0x4];
//	}FILE_NETWORK_OPEN_INFORMATION, *PFILE_NETWORK_OPEN_INFORMATION;
//
//	typedef struct _FILE_OBJECT                                // 30 elements, 0xD8 bytes (sizeof)
//	{
//		/*0x000*/     INT16        Type;
//		/*0x002*/     INT16        Size;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _DEVICE_OBJECT* DeviceObject;
//		/*0x010*/     struct _VPB* Vpb;
//		/*0x018*/     VOID*        FsContext;
//		/*0x020*/     VOID*        FsContext2;
//		/*0x028*/     struct _SECTION_OBJECT_POINTERS* SectionObjectPointer;
//		/*0x030*/     VOID*        PrivateCacheMap;
//		/*0x038*/     LONG32       FinalStatus;
//		/*0x03C*/     UINT8        _PADDING1_[0x4];
//		/*0x040*/     struct _FILE_OBJECT* RelatedFileObject;
//		/*0x048*/     UINT8        LockOperation;
//		/*0x049*/     UINT8        DeletePending;
//		/*0x04A*/     UINT8        ReadAccess;
//		/*0x04B*/     UINT8        WriteAccess;
//		/*0x04C*/     UINT8        DeleteAccess;
//		/*0x04D*/     UINT8        SharedRead;
//		/*0x04E*/     UINT8        SharedWrite;
//		/*0x04F*/     UINT8        SharedDelete;
//		/*0x050*/     ULONG32      Flags;
//		/*0x054*/     UINT8        _PADDING2_[0x4];
//		/*0x058*/     struct _UNICODE_STRING FileName;                       // 3 elements, 0x10 bytes (sizeof)
//		/*0x068*/     union _LARGE_INTEGER CurrentByteOffset;                // 4 elements, 0x8 bytes (sizeof)
//		/*0x070*/     ULONG32      Waiters;
//		/*0x074*/     ULONG32      Busy;
//		/*0x078*/     VOID*        LastLock;
//		/*0x080*/     struct _KEVENT Lock;                                   // 1 elements, 0x18 bytes (sizeof)
//		/*0x098*/     struct _KEVENT Event;                                  // 1 elements, 0x18 bytes (sizeof)
//		/*0x0B0*/     struct _IO_COMPLETION_CONTEXT* CompletionContext;
//		/*0x0B8*/     UINT64       IrpListLock;
//		/*0x0C0*/     struct _LIST_ENTRY IrpList;                            // 2 elements, 0x10 bytes (sizeof)
//		/*0x0D0*/     VOID*        FileObjectExtension;
//	}FILE_OBJECT, *PFILE_OBJECT;
//
//	typedef union _FILE_SEGMENT_ELEMENT // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        Buffer;
//		/*0x000*/     UINT64       Alignment;
//	}FILE_SEGMENT_ELEMENT, *PFILE_SEGMENT_ELEMENT;
//
//	typedef struct _FILE_STANDARD_INFORMATION // 5 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     union _LARGE_INTEGER AllocationSize;  // 4 elements, 0x8 bytes (sizeof)
//		/*0x008*/     union _LARGE_INTEGER EndOfFile;       // 4 elements, 0x8 bytes (sizeof)
//		/*0x010*/     ULONG32      NumberOfLinks;
//		/*0x014*/     UINT8        DeletePending;
//		/*0x015*/     UINT8        Directory;
//		/*0x016*/     UINT8        _PADDING0_[0x2];
//	}FILE_STANDARD_INFORMATION, *PFILE_STANDARD_INFORMATION;
//
//	typedef struct _PCAT_FIRMWARE_INFORMATION // 1 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      PlaceHolder;
//	}PCAT_FIRMWARE_INFORMATION, *PPCAT_FIRMWARE_INFORMATION;
//
//	typedef struct _FIRMWARE_INFORMATION_LOADER_BLOCK          // 3 elements, 0x20 bytes (sizeof)
//	{
//		struct                                                 // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      FirmwareTypeEfi : 1;                  // 0 BitPosition
//			/*0x000*/         ULONG32      Reserved : 31;                        // 1 BitPosition
//		};
//		union                                                  // 2 elements, 0x18 bytes (sizeof)
//		{
//			/*0x008*/         struct _EFI_FIRMWARE_INFORMATION EfiInformation;   // 4 elements, 0x18 bytes (sizeof)
//			/*0x008*/         struct _PCAT_FIRMWARE_INFORMATION PcatInformation; // 1 elements, 0x4 bytes (sizeof)
//		}u;
//	}FIRMWARE_INFORMATION_LOADER_BLOCK, *PFIRMWARE_INFORMATION_LOADER_BLOCK;
//
//	typedef struct _flags                      // 5 elements, 0x1 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Removable : 1;            // 0 BitPosition
//		/*0x000*/     UINT8        GroupAssigned : 1;        // 1 BitPosition
//		/*0x000*/     UINT8        GroupCommitted : 1;       // 2 BitPosition
//		/*0x000*/     UINT8        GroupAssignmentFixed : 1; // 3 BitPosition
//		/*0x000*/     UINT8        Fill : 4;                 // 4 BitPosition
//	}flags, *Pflags;
//
//	typedef struct _FLS_CALLBACK_INFO // 0 elements, 0x0 bytes (sizeof)
//	{
//	}FLS_CALLBACK_INFO, *PFLS_CALLBACK_INFO;
//
//	typedef union _FS_FILTER_PARAMETERS                                   // 5 elements, 0x28 bytes (sizeof)
//	{
//		struct                                                            // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x000*/         union _LARGE_INTEGER* EndingOffset;
//			/*0x008*/         struct _ERESOURCE** ResourceToRelease;
//		}AcquireForModifiedPageWriter;
//		struct                                                            // 1 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         struct _ERESOURCE* ResourceToRelease;
//		}ReleaseForModifiedPageWriter;
//		struct                                                            // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         enum _FS_FILTER_SECTION_SYNC_TYPE SyncType;
//			/*0x004*/         ULONG32      PageProtection;
//		}AcquireForSectionSynchronization;
//		struct                                                            // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x000*/         enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE NotificationType;
//			/*0x004*/         UINT8        _PADDING0_[0x4];
//			/*0x008*/         UINT8        SafeToRecurse;
//			/*0x009*/         UINT8        _PADDING1_[0x7];
//		}NotifyStreamFileObject;
//		struct                                                            // 5 elements, 0x28 bytes (sizeof)
//		{
//			/*0x000*/         VOID*        Argument1;
//			/*0x008*/         VOID*        Argument2;
//			/*0x010*/         VOID*        Argument3;
//			/*0x018*/         VOID*        Argument4;
//			/*0x020*/         VOID*        Argument5;
//		}Others;
//	}FS_FILTER_PARAMETERS, *PFS_FILTER_PARAMETERS;
//
//	typedef struct _FS_FILTER_CALLBACK_DATA      // 6 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      SizeOfFsFilterCallbackData;
//		/*0x004*/     UINT8        Operation;
//		/*0x005*/     UINT8        Reserved;
//		/*0x006*/     UINT8        _PADDING0_[0x2];
//		/*0x008*/     struct _DEVICE_OBJECT* DeviceObject;
//		/*0x010*/     struct _FILE_OBJECT* FileObject;
//		/*0x018*/     union _FS_FILTER_PARAMETERS Parameters;  // 5 elements, 0x28 bytes (sizeof)
//	}FS_FILTER_CALLBACK_DATA, *PFS_FILTER_CALLBACK_DATA;
//
//	typedef struct _FS_FILTER_CALLBACKS                                                                                                                                                                                                                // 14 elements, 0x68 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      SizeOfFsFilterCallbacks;
//		/*0x004*/     ULONG32      Reserved;
//		/*0x008*/     FUNCT_005B_0958_PreAcquireForSectionSynchronization_PreReleaseForSectionSynchronization_PreAcquireForCcFlush_PreReleaseForCcFlush_PreAcquireForModifiedPageWriter_PreReleaseForModifiedPageWriter* PreAcquireForSectionSynchronization;
//		/*0x010*/     FUNCT_00A3_09D1_PostAcquireForSectionSynchronization_PostReleaseForSectionSynchronization_PostAcquireForCcFlush_PostReleaseForCcFlush_PostAcquireForModifiedPageWriter_PostReleaseForModifiedPageWriter* PostAcquireForSectionSynchronization;
//		/*0x018*/     FUNCT_005B_0958_PreAcquireForSectionSynchronization_PreReleaseForSectionSynchronization_PreAcquireForCcFlush_PreReleaseForCcFlush_PreAcquireForModifiedPageWriter_PreReleaseForModifiedPageWriter* PreReleaseForSectionSynchronization;
//		/*0x020*/     FUNCT_00A3_09D1_PostAcquireForSectionSynchronization_PostReleaseForSectionSynchronization_PostAcquireForCcFlush_PostReleaseForCcFlush_PostAcquireForModifiedPageWriter_PostReleaseForModifiedPageWriter* PostReleaseForSectionSynchronization;
//		/*0x028*/     FUNCT_005B_0958_PreAcquireForSectionSynchronization_PreReleaseForSectionSynchronization_PreAcquireForCcFlush_PreReleaseForCcFlush_PreAcquireForModifiedPageWriter_PreReleaseForModifiedPageWriter* PreAcquireForCcFlush;
//		/*0x030*/     FUNCT_00A3_09D1_PostAcquireForSectionSynchronization_PostReleaseForSectionSynchronization_PostAcquireForCcFlush_PostReleaseForCcFlush_PostAcquireForModifiedPageWriter_PostReleaseForModifiedPageWriter* PostAcquireForCcFlush;
//		/*0x038*/     FUNCT_005B_0958_PreAcquireForSectionSynchronization_PreReleaseForSectionSynchronization_PreAcquireForCcFlush_PreReleaseForCcFlush_PreAcquireForModifiedPageWriter_PreReleaseForModifiedPageWriter* PreReleaseForCcFlush;
//		/*0x040*/     FUNCT_00A3_09D1_PostAcquireForSectionSynchronization_PostReleaseForSectionSynchronization_PostAcquireForCcFlush_PostReleaseForCcFlush_PostAcquireForModifiedPageWriter_PostReleaseForModifiedPageWriter* PostReleaseForCcFlush;
//		/*0x048*/     FUNCT_005B_0958_PreAcquireForSectionSynchronization_PreReleaseForSectionSynchronization_PreAcquireForCcFlush_PreReleaseForCcFlush_PreAcquireForModifiedPageWriter_PreReleaseForModifiedPageWriter* PreAcquireForModifiedPageWriter;
//		/*0x050*/     FUNCT_00A3_09D1_PostAcquireForSectionSynchronization_PostReleaseForSectionSynchronization_PostAcquireForCcFlush_PostReleaseForCcFlush_PostAcquireForModifiedPageWriter_PostReleaseForModifiedPageWriter* PostAcquireForModifiedPageWriter;
//		/*0x058*/     FUNCT_005B_0958_PreAcquireForSectionSynchronization_PreReleaseForSectionSynchronization_PreAcquireForCcFlush_PreReleaseForCcFlush_PreAcquireForModifiedPageWriter_PreReleaseForModifiedPageWriter* PreReleaseForModifiedPageWriter;
//		/*0x060*/     FUNCT_00A3_09D1_PostAcquireForSectionSynchronization_PostReleaseForSectionSynchronization_PostAcquireForCcFlush_PostReleaseForCcFlush_PostAcquireForModifiedPageWriter_PostReleaseForModifiedPageWriter* PostReleaseForModifiedPageWriter;
//	}FS_FILTER_CALLBACKS, *PFS_FILTER_CALLBACKS;
//
//	typedef struct _FSRTL_ADVANCED_FCB_HEADER   // 16 elements, 0x58 bytes (sizeof)
//	{
//		/*0x000*/     INT16        NodeTypeCode;
//		/*0x002*/     INT16        NodeByteSize;
//		/*0x004*/     UINT8        Flags;
//		/*0x005*/     UINT8        IsFastIoPossible;
//		/*0x006*/     UINT8        Flags2;
//		struct                                  // 2 elements, 0x1 bytes (sizeof)
//		{
//			/*0x007*/         UINT8        Reserved : 4;          // 0 BitPosition
//			/*0x007*/         UINT8        Version : 4;           // 4 BitPosition
//		};
//		/*0x008*/     struct _ERESOURCE* Resource;
//		/*0x010*/     struct _ERESOURCE* PagingIoResource;
//		/*0x018*/     union _LARGE_INTEGER AllocationSize;    // 4 elements, 0x8 bytes (sizeof)
//		/*0x020*/     union _LARGE_INTEGER FileSize;          // 4 elements, 0x8 bytes (sizeof)
//		/*0x028*/     union _LARGE_INTEGER ValidDataLength;   // 4 elements, 0x8 bytes (sizeof)
//		/*0x030*/     struct _FAST_MUTEX* FastMutex;
//		/*0x038*/     struct _LIST_ENTRY FilterContexts;      // 2 elements, 0x10 bytes (sizeof)
//		/*0x048*/     struct _EX_PUSH_LOCK PushLock;          // 7 elements, 0x8 bytes (sizeof)
//		/*0x050*/     VOID**       FileContextSupportPointer;
//	}FSRTL_ADVANCED_FCB_HEADER, *PFSRTL_ADVANCED_FCB_HEADER;
//
//	typedef struct _GDI_TEB_BATCH     // 3 elements, 0x4E8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Offset;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     UINT64       HDC;
//		/*0x010*/     ULONG32      Buffer[310];
//	}GDI_TEB_BATCH, *PGDI_TEB_BATCH;
//
//	typedef struct _GDI_TEB_BATCH32 // 3 elements, 0x4E0 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Offset;
//		/*0x004*/     ULONG32      HDC;
//		/*0x008*/     ULONG32      Buffer[310];
//	}GDI_TEB_BATCH32, *PGDI_TEB_BATCH32;
//
//	typedef struct _GDI_TEB_BATCH64   // 3 elements, 0x4E8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Offset;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     UINT64       HDC;
//		/*0x010*/     ULONG32      Buffer[310];
//	}GDI_TEB_BATCH64, *PGDI_TEB_BATCH64;
//
//	typedef struct _GENERAL_LOOKASIDE                                                                                                                                        // 22 elements, 0x80 bytes (sizeof)
//	{
//		union                                                                                                                                                                // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x000*/         union _SLIST_HEADER ListHead;                                                                                                                                    // 5 elements, 0x10 bytes (sizeof)
//			/*0x000*/         struct _SINGLE_LIST_ENTRY SingleListHead;                                                                                                                        // 1 elements, 0x8 bytes (sizeof)
//		};
//		/*0x010*/     UINT16       Depth;
//		/*0x012*/     UINT16       MaximumDepth;
//		/*0x014*/     ULONG32      TotalAllocates;
//		union                                                                                                                                                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x018*/         ULONG32      AllocateMisses;
//			/*0x018*/         ULONG32      AllocateHits;
//		};
//		/*0x01C*/     ULONG32      TotalFrees;
//		union                                                                                                                                                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x020*/         ULONG32      FreeMisses;
//			/*0x020*/         ULONG32      FreeHits;
//		};
//		/*0x024*/     enum _POOL_TYPE Type;
//		/*0x028*/     ULONG32      Tag;
//		/*0x02C*/     ULONG32      Size;
//		union                                                                                                                                                                // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x030*/         FUNCT_00A6_071A_AllocateEx* AllocateEx;
//			/*0x030*/         FUNCT_00A6_0724_Allocate* Allocate;
//		};
//		union                                                                                                                                                                // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x038*/         FUNCT_00A3_0729_FreeEx* FreeEx;
//			/*0x038*/         FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* Free;
//		};
//		/*0x040*/     struct _LIST_ENTRY ListEntry;                                                                                                                                        // 2 elements, 0x10 bytes (sizeof)
//		/*0x050*/     ULONG32      LastTotalAllocates;
//		union                                                                                                                                                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x054*/         ULONG32      LastAllocateMisses;
//			/*0x054*/         ULONG32      LastAllocateHits;
//		};
//		/*0x058*/     ULONG32      Future[2];
//		/*0x060*/     UINT8        _PADDING0_[0x20];
//	}GENERAL_LOOKASIDE, *PGENERAL_LOOKASIDE;
//
//	typedef struct _GENERAL_LOOKASIDE_POOL                                                                                                                                   // 22 elements, 0x60 bytes (sizeof)
//	{
//		union                                                                                                                                                                // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x000*/         union _SLIST_HEADER ListHead;                                                                                                                                    // 5 elements, 0x10 bytes (sizeof)
//			/*0x000*/         struct _SINGLE_LIST_ENTRY SingleListHead;                                                                                                                        // 1 elements, 0x8 bytes (sizeof)
//		};
//		/*0x010*/     UINT16       Depth;
//		/*0x012*/     UINT16       MaximumDepth;
//		/*0x014*/     ULONG32      TotalAllocates;
//		union                                                                                                                                                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x018*/         ULONG32      AllocateMisses;
//			/*0x018*/         ULONG32      AllocateHits;
//		};
//		/*0x01C*/     ULONG32      TotalFrees;
//		union                                                                                                                                                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x020*/         ULONG32      FreeMisses;
//			/*0x020*/         ULONG32      FreeHits;
//		};
//		/*0x024*/     enum _POOL_TYPE Type;
//		/*0x028*/     ULONG32      Tag;
//		/*0x02C*/     ULONG32      Size;
//		union                                                                                                                                                                // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x030*/         FUNCT_00A6_071A_AllocateEx* AllocateEx;
//			/*0x030*/         FUNCT_00A6_0724_Allocate* Allocate;
//		};
//		union                                                                                                                                                                // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x038*/         FUNCT_00A3_0729_FreeEx* FreeEx;
//			/*0x038*/         FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* Free;
//		};
//		/*0x040*/     struct _LIST_ENTRY ListEntry;                                                                                                                                        // 2 elements, 0x10 bytes (sizeof)
//		/*0x050*/     ULONG32      LastTotalAllocates;
//		union                                                                                                                                                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x054*/         ULONG32      LastAllocateMisses;
//			/*0x054*/         ULONG32      LastAllocateHits;
//		};
//		/*0x058*/     ULONG32      Future[2];
//	}GENERAL_LOOKASIDE_POOL, *PGENERAL_LOOKASIDE_POOL;
//
//	typedef struct _HANDLE_TABLE                         // 15 elements, 0x68 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       TableCode;
//		/*0x008*/     struct _EPROCESS* QuotaProcess;
//		/*0x010*/     VOID*        UniqueProcessId;
//		/*0x018*/     struct _EX_PUSH_LOCK HandleLock;                 // 7 elements, 0x8 bytes (sizeof)
//		/*0x020*/     struct _LIST_ENTRY HandleTableList;              // 2 elements, 0x10 bytes (sizeof)
//		/*0x030*/     struct _EX_PUSH_LOCK HandleContentionEvent;      // 7 elements, 0x8 bytes (sizeof)
//		/*0x038*/     struct _HANDLE_TRACE_DEBUG_INFO* DebugInfo;
//		/*0x040*/     LONG32       ExtraInfoPages;
//		union                                            // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x044*/         ULONG32      Flags;
//			/*0x044*/         UINT8        StrictFIFO : 1;                 // 0 BitPosition
//		};
//		/*0x048*/     ULONG32      FirstFreeHandle;
//		/*0x04C*/     UINT8        _PADDING0_[0x4];
//		/*0x050*/     struct _HANDLE_TABLE_ENTRY* LastFreeHandleEntry;
//		/*0x058*/     ULONG32      HandleCount;
//		/*0x05C*/     ULONG32      NextHandleNeedingPool;
//		/*0x060*/     ULONG32      HandleCountHighWatermark;
//		/*0x064*/     UINT8        _PADDING1_[0x4];
//	}HANDLE_TABLE, *PHANDLE_TABLE;
//
//	typedef struct _HANDLE_TABLE_ENTRY                  // 8 elements, 0x10 bytes (sizeof)
//	{
//		union                                           // 4 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         VOID*        Object;
//			/*0x000*/         ULONG32      ObAttributes;
//			/*0x000*/         struct _HANDLE_TABLE_ENTRY_INFO* InfoTable;
//			/*0x000*/         UINT64       Value;
//		};
//		union                                           // 3 elements, 0x8 bytes (sizeof)
//		{
//			/*0x008*/         ULONG32      GrantedAccess;
//			struct                                      // 2 elements, 0x8 bytes (sizeof)
//			{
//				/*0x008*/             UINT16       GrantedAccessIndex;
//				/*0x00A*/             UINT16       CreatorBackTraceIndex;
//				/*0x00C*/             UINT8        _PADDING0_[0x4];
//			};
//			/*0x008*/         ULONG32      NextFreeTableEntry;
//		};
//	}HANDLE_TABLE_ENTRY, *PHANDLE_TABLE_ENTRY;
//
//	typedef struct _HANDLE_TABLE_ENTRY_INFO // 1 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      AuditMask;
//	}HANDLE_TABLE_ENTRY_INFO, *PHANDLE_TABLE_ENTRY_INFO;
//
//	typedef struct _HANDLE_TRACE_DB_ENTRY // 4 elements, 0xA0 bytes (sizeof)
//	{
//		/*0x000*/     struct _CLIENT_ID ClientId;       // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     VOID*        Handle;
//		/*0x018*/     ULONG32      Type;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		/*0x020*/     VOID*        StackTrace[16];
//	}HANDLE_TRACE_DB_ENTRY, *PHANDLE_TRACE_DB_ENTRY;
//
//	typedef struct _HANDLE_TRACE_DEBUG_INFO       // 6 elements, 0xF0 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       RefCount;
//		/*0x004*/     ULONG32      TableSize;
//		/*0x008*/     ULONG32      BitMaskFlags;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     struct _FAST_MUTEX CloseCompactionLock;   // 5 elements, 0x38 bytes (sizeof)
//		/*0x048*/     ULONG32      CurrentStackIndex;
//		/*0x04C*/     UINT8        _PADDING1_[0x4];
//		/*0x050*/     struct _HANDLE_TRACE_DB_ENTRY TraceDb[1];
//	}HANDLE_TRACE_DEBUG_INFO, *PHANDLE_TRACE_DEBUG_INFO;
//
//	typedef struct _HBASE_BLOCK         // 25 elements, 0x1000 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Signature;
//		/*0x004*/     ULONG32      Sequence1;
//		/*0x008*/     ULONG32      Sequence2;
//		/*0x00C*/     union _LARGE_INTEGER TimeStamp; // 4 elements, 0x8 bytes (sizeof)
//		/*0x014*/     ULONG32      Major;
//		/*0x018*/     ULONG32      Minor;
//		/*0x01C*/     ULONG32      Type;
//		/*0x020*/     ULONG32      Format;
//		/*0x024*/     ULONG32      RootCell;
//		/*0x028*/     ULONG32      Length;
//		/*0x02C*/     ULONG32      Cluster;
//		/*0x030*/     UINT8        FileName[64];
//		/*0x070*/     struct _GUID RmId;              // 4 elements, 0x10 bytes (sizeof)
//		/*0x080*/     struct _GUID LogId;             // 4 elements, 0x10 bytes (sizeof)
//		/*0x090*/     ULONG32      Flags;
//		/*0x094*/     struct _GUID TmId;              // 4 elements, 0x10 bytes (sizeof)
//		/*0x0A4*/     ULONG32      GuidSignature;
//		/*0x0A8*/     ULONG32      Reserved1[85];
//		/*0x1FC*/     ULONG32      CheckSum;
//		/*0x200*/     ULONG32      Reserved2[882];
//		/*0xFC8*/     struct _GUID ThawTmId;          // 4 elements, 0x10 bytes (sizeof)
//		/*0xFD8*/     struct _GUID ThawRmId;          // 4 elements, 0x10 bytes (sizeof)
//		/*0xFE8*/     struct _GUID ThawLogId;         // 4 elements, 0x10 bytes (sizeof)
//		/*0xFF8*/     ULONG32      BootType;
//		/*0xFFC*/     ULONG32      BootRecover;
//	}HBASE_BLOCK, *PHBASE_BLOCK;
//
//	typedef struct _HBIN                // 6 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Signature;
//		/*0x004*/     ULONG32      FileOffset;
//		/*0x008*/     ULONG32      Size;
//		/*0x00C*/     ULONG32      Reserved1[2];
//		/*0x014*/     union _LARGE_INTEGER TimeStamp; // 4 elements, 0x8 bytes (sizeof)
//		/*0x01C*/     ULONG32      Spare;
//	}HBIN, *PHBIN;
//
//	typedef struct _HCELL                  // 2 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     LONG32       Size;
//		union                              // 2 elements, 0x8 bytes (sizeof)
//		{
//			struct                         // 2 elements, 0x8 bytes (sizeof)
//			{
//				/*0x004*/             ULONG32      Last;
//				union                      // 2 elements, 0x4 bytes (sizeof)
//				{
//					/*0x008*/                 ULONG32      UserData;
//					/*0x008*/                 ULONG32      Next;
//				}u;
//			}OldCell;
//			struct                         // 1 elements, 0x4 bytes (sizeof)
//			{
//				union                      // 2 elements, 0x4 bytes (sizeof)
//				{
//					/*0x004*/                 ULONG32      UserData;
//					/*0x004*/                 ULONG32      Next;
//				}u;
//			}NewCell;
//		}u;
//	}HCELL, *PHCELL;
//
//	typedef struct _HEADLESS_LOADER_BLOCK // 17 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        UsedBiosSettings;
//		/*0x001*/     UINT8        DataBits;
//		/*0x002*/     UINT8        StopBits;
//		/*0x003*/     UINT8        Parity;
//		/*0x004*/     ULONG32      BaudRate;
//		/*0x008*/     ULONG32      PortNumber;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     UINT8*       PortAddress;
//		/*0x018*/     UINT16       PciDeviceId;
//		/*0x01A*/     UINT16       PciVendorId;
//		/*0x01C*/     UINT8        PciBusNumber;
//		/*0x01D*/     UINT8        _PADDING1_[0x1];
//		/*0x01E*/     UINT16       PciBusSegment;
//		/*0x020*/     UINT8        PciSlotNumber;
//		/*0x021*/     UINT8        PciFunctionNumber;
//		/*0x022*/     UINT8        _PADDING2_[0x2];
//		/*0x024*/     ULONG32      PciFlags;
//		/*0x028*/     struct _GUID SystemGUID;          // 4 elements, 0x10 bytes (sizeof)
//		/*0x038*/     UINT8        IsMMIODevice;
//		/*0x039*/     UINT8        TerminalType;
//		/*0x03A*/     UINT8        _PADDING3_[0x6];
//	}HEADLESS_LOADER_BLOCK, *PHEADLESS_LOADER_BLOCK;
//
//	typedef struct _HEAP_ENTRY                          // 22 elements, 0x10 bytes (sizeof)
//	{
//		union                                           // 3 elements, 0x10 bytes (sizeof)
//		{
//			struct                                      // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x000*/             VOID*        PreviousBlockPrivateData;
//				union                                   // 2 elements, 0x8 bytes (sizeof)
//				{
//					struct                              // 6 elements, 0x8 bytes (sizeof)
//					{
//						/*0x008*/                     UINT16       Size;
//						/*0x00A*/                     UINT8        Flags;
//						/*0x00B*/                     UINT8        SmallTagIndex;
//						/*0x00C*/                     UINT16       PreviousSize;
//						union                           // 2 elements, 0x1 bytes (sizeof)
//						{
//							/*0x00E*/                         UINT8        SegmentOffset;
//							/*0x00E*/                         UINT8        LFHFlags;
//						};
//						/*0x00F*/                     UINT8        UnusedBytes;
//					};
//					/*0x008*/                 UINT64       CompactHeader;
//				};
//			};
//			struct                                      // 5 elements, 0x10 bytes (sizeof)
//			{
//				/*0x000*/             VOID*        Reserved;
//				union                                   // 2 elements, 0x4 bytes (sizeof)
//				{
//					struct                              // 2 elements, 0x4 bytes (sizeof)
//					{
//						/*0x008*/                     UINT16       FunctionIndex;
//						/*0x00A*/                     UINT16       ContextValue;
//					};
//					/*0x008*/                 ULONG32      InterceptorValue;
//				};
//				/*0x00C*/             UINT16       UnusedBytesLength;
//				/*0x00E*/             UINT8        EntryOffset;
//				/*0x00F*/             UINT8        ExtendedBlockSignature;
//			};
//			struct                                      // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x000*/             VOID*        ReservedForAlignment;
//				union                                   // 2 elements, 0x8 bytes (sizeof)
//				{
//					struct                              // 4 elements, 0x8 bytes (sizeof)
//					{
//						/*0x008*/                     ULONG32      Code1;
//						/*0x00C*/                     UINT16       Code2;
//						/*0x00E*/                     UINT8        Code3;
//						/*0x00F*/                     UINT8        Code4;
//					};
//					/*0x008*/                 UINT64       AgregateCode;
//				};
//			};
//		};
//	}HEAP_ENTRY, *PHEAP_ENTRY;
//
//	typedef struct _HEAP_COUNTERS              // 21 elements, 0x70 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       TotalMemoryReserved;
//		/*0x008*/     UINT64       TotalMemoryCommitted;
//		/*0x010*/     UINT64       TotalMemoryLargeUCR;
//		/*0x018*/     UINT64       TotalSizeInVirtualBlocks;
//		/*0x020*/     ULONG32      TotalSegments;
//		/*0x024*/     ULONG32      TotalUCRs;
//		/*0x028*/     ULONG32      CommittOps;
//		/*0x02C*/     ULONG32      DeCommitOps;
//		/*0x030*/     ULONG32      LockAcquires;
//		/*0x034*/     ULONG32      LockCollisions;
//		/*0x038*/     ULONG32      CommitRate;
//		/*0x03C*/     ULONG32      DecommittRate;
//		/*0x040*/     ULONG32      CommitFailures;
//		/*0x044*/     ULONG32      InBlockCommitFailures;
//		/*0x048*/     ULONG32      CompactHeapCalls;
//		/*0x04C*/     ULONG32      CompactedUCRs;
//		/*0x050*/     ULONG32      AllocAndFreeOps;
//		/*0x054*/     ULONG32      InBlockDeccommits;
//		/*0x058*/     UINT64       InBlockDeccomitSize;
//		/*0x060*/     UINT64       HighWatermarkSize;
//		/*0x068*/     UINT64       LastPolledSize;
//	}HEAP_COUNTERS, *PHEAP_COUNTERS;
//
//	typedef struct _HEAP_TUNING_PARAMETERS   // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      CommittThresholdShift;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     UINT64       MaxPreCommittThreshold;
//	}HEAP_TUNING_PARAMETERS, *PHEAP_TUNING_PARAMETERS;
//
//	typedef struct _HEAP                                 // 53 elements, 0x208 bytes (sizeof)
//	{
//		/*0x000*/     struct _HEAP_ENTRY Entry;                        // 22 elements, 0x10 bytes (sizeof)
//		/*0x010*/     ULONG32      SegmentSignature;
//		/*0x014*/     ULONG32      SegmentFlags;
//		/*0x018*/     struct _LIST_ENTRY SegmentListEntry;             // 2 elements, 0x10 bytes (sizeof)
//		/*0x028*/     struct _HEAP* Heap;
//		/*0x030*/     VOID*        BaseAddress;
//		/*0x038*/     ULONG32      NumberOfPages;
//		/*0x03C*/     UINT8        _PADDING0_[0x4];
//		/*0x040*/     struct _HEAP_ENTRY* FirstEntry;
//		/*0x048*/     struct _HEAP_ENTRY* LastValidEntry;
//		/*0x050*/     ULONG32      NumberOfUnCommittedPages;
//		/*0x054*/     ULONG32      NumberOfUnCommittedRanges;
//		/*0x058*/     UINT16       SegmentAllocatorBackTraceIndex;
//		/*0x05A*/     UINT16       Reserved;
//		/*0x05C*/     UINT8        _PADDING1_[0x4];
//		/*0x060*/     struct _LIST_ENTRY UCRSegmentList;               // 2 elements, 0x10 bytes (sizeof)
//		/*0x070*/     ULONG32      Flags;
//		/*0x074*/     ULONG32      ForceFlags;
//		/*0x078*/     ULONG32      CompatibilityFlags;
//		/*0x07C*/     ULONG32      EncodeFlagMask;
//		/*0x080*/     struct _HEAP_ENTRY Encoding;                     // 22 elements, 0x10 bytes (sizeof)
//		/*0x090*/     UINT64       PointerKey;
//		/*0x098*/     ULONG32      Interceptor;
//		/*0x09C*/     ULONG32      VirtualMemoryThreshold;
//		/*0x0A0*/     ULONG32      Signature;
//		/*0x0A4*/     UINT8        _PADDING2_[0x4];
//		/*0x0A8*/     UINT64       SegmentReserve;
//		/*0x0B0*/     UINT64       SegmentCommit;
//		/*0x0B8*/     UINT64       DeCommitFreeBlockThreshold;
//		/*0x0C0*/     UINT64       DeCommitTotalFreeThreshold;
//		/*0x0C8*/     UINT64       TotalFreeSize;
//		/*0x0D0*/     UINT64       MaximumAllocationSize;
//		/*0x0D8*/     UINT16       ProcessHeapsListIndex;
//		/*0x0DA*/     UINT16       HeaderValidateLength;
//		/*0x0DC*/     UINT8        _PADDING3_[0x4];
//		/*0x0E0*/     VOID*        HeaderValidateCopy;
//		/*0x0E8*/     UINT16       NextAvailableTagIndex;
//		/*0x0EA*/     UINT16       MaximumTagIndex;
//		/*0x0EC*/     UINT8        _PADDING4_[0x4];
//		/*0x0F0*/     struct _HEAP_TAG_ENTRY* TagEntries;
//		/*0x0F8*/     struct _LIST_ENTRY UCRList;                      // 2 elements, 0x10 bytes (sizeof)
//		/*0x108*/     UINT64       AlignRound;
//		/*0x110*/     UINT64       AlignMask;
//		/*0x118*/     struct _LIST_ENTRY VirtualAllocdBlocks;          // 2 elements, 0x10 bytes (sizeof)
//		/*0x128*/     struct _LIST_ENTRY SegmentList;                  // 2 elements, 0x10 bytes (sizeof)
//		/*0x138*/     UINT16       AllocatorBackTraceIndex;
//		/*0x13A*/     UINT8        _PADDING5_[0x2];
//		/*0x13C*/     ULONG32      NonDedicatedListLength;
//		/*0x140*/     VOID*        BlocksIndex;
//		/*0x148*/     VOID*        UCRIndex;
//		/*0x150*/     struct _HEAP_PSEUDO_TAG_ENTRY* PseudoTagEntries;
//		/*0x158*/     struct _LIST_ENTRY FreeLists;                    // 2 elements, 0x10 bytes (sizeof)
//		/*0x168*/     struct _HEAP_LOCK* LockVariable;
//		/*0x170*/     FUNCT_005B_1B38_CommitRoutine* CommitRoutine;
//		/*0x178*/     VOID*        FrontEndHeap;
//		/*0x180*/     UINT16       FrontHeapLockCount;
//		/*0x182*/     UINT8        FrontEndHeapType;
//		/*0x183*/     UINT8        _PADDING6_[0x5];
//		/*0x188*/     struct _HEAP_COUNTERS Counters;                  // 21 elements, 0x70 bytes (sizeof)
//		/*0x1F8*/     struct _HEAP_TUNING_PARAMETERS TuningParameters; // 2 elements, 0x10 bytes (sizeof)
//	}HEAP, *PHEAP;
//
//	typedef struct _HEAP_DEBUGGING_INFORMATION                                  // 7 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        InterceptorFunction;
//		/*0x008*/     UINT16       InterceptorValue;
//		/*0x00A*/     UINT8        _PADDING0_[0x2];
//		/*0x00C*/     ULONG32      ExtendedOptions;
//		/*0x010*/     ULONG32      StackTraceDepth;
//		/*0x014*/     UINT8        _PADDING1_[0x4];
//		/*0x018*/     UINT64       MinTotalBlockSize;
//		/*0x020*/     UINT64       MaxTotalBlockSize;
//		/*0x028*/     FUNCT_005B_2688_HeapLeakEnumerationRoutine* HeapLeakEnumerationRoutine;
//	}HEAP_DEBUGGING_INFORMATION, *PHEAP_DEBUGGING_INFORMATION;
//
//	typedef struct _HEAP_ENTRY_EXTRA                  // 5 elements, 0x10 bytes (sizeof)
//	{
//		union                                         // 2 elements, 0x10 bytes (sizeof)
//		{
//			struct                                    // 3 elements, 0x10 bytes (sizeof)
//			{
//				/*0x000*/             UINT16       AllocatorBackTraceIndex;
//				/*0x002*/             UINT16       TagIndex;
//				/*0x004*/             UINT8        _PADDING0_[0x4];
//				/*0x008*/             UINT64       Settable;
//			};
//			struct                                    // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x000*/             UINT64       ZeroInit;
//				/*0x008*/             UINT64       ZeroInit1;
//			};
//		};
//	}HEAP_ENTRY_EXTRA, *PHEAP_ENTRY_EXTRA;
//
//	typedef struct _HEAP_FREE_ENTRY                     // 23 elements, 0x20 bytes (sizeof)
//	{
//		union                                           // 3 elements, 0x10 bytes (sizeof)
//		{
//			struct                                      // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x000*/             VOID*        PreviousBlockPrivateData;
//				union                                   // 2 elements, 0x8 bytes (sizeof)
//				{
//					struct                              // 6 elements, 0x8 bytes (sizeof)
//					{
//						/*0x008*/                     UINT16       Size;
//						/*0x00A*/                     UINT8        Flags;
//						/*0x00B*/                     UINT8        SmallTagIndex;
//						/*0x00C*/                     UINT16       PreviousSize;
//						union                           // 2 elements, 0x1 bytes (sizeof)
//						{
//							/*0x00E*/                         UINT8        SegmentOffset;
//							/*0x00E*/                         UINT8        LFHFlags;
//						};
//						/*0x00F*/                     UINT8        UnusedBytes;
//					};
//					/*0x008*/                 UINT64       CompactHeader;
//				};
//			};
//			struct                                      // 5 elements, 0x10 bytes (sizeof)
//			{
//				/*0x000*/             VOID*        Reserved;
//				union                                   // 2 elements, 0x4 bytes (sizeof)
//				{
//					struct                              // 2 elements, 0x4 bytes (sizeof)
//					{
//						/*0x008*/                     UINT16       FunctionIndex;
//						/*0x00A*/                     UINT16       ContextValue;
//					};
//					/*0x008*/                 ULONG32      InterceptorValue;
//				};
//				/*0x00C*/             UINT16       UnusedBytesLength;
//				/*0x00E*/             UINT8        EntryOffset;
//				/*0x00F*/             UINT8        ExtendedBlockSignature;
//			};
//			struct                                      // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x000*/             VOID*        ReservedForAlignment;
//				union                                   // 2 elements, 0x8 bytes (sizeof)
//				{
//					struct                              // 4 elements, 0x8 bytes (sizeof)
//					{
//						/*0x008*/                     ULONG32      Code1;
//						/*0x00C*/                     UINT16       Code2;
//						/*0x00E*/                     UINT8        Code3;
//						/*0x00F*/                     UINT8        Code4;
//					};
//					/*0x008*/                 UINT64       AgregateCode;
//				};
//			};
//		};
//		/*0x010*/     struct _LIST_ENTRY FreeList;                    // 2 elements, 0x10 bytes (sizeof)
//	}HEAP_FREE_ENTRY, *PHEAP_FREE_ENTRY;
//
//	typedef struct _HEAP_FREE_ENTRY_EXTRA // 2 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       TagIndex;
//		/*0x002*/     UINT16       FreeBackTraceIndex;
//	}HEAP_FREE_ENTRY_EXTRA, *PHEAP_FREE_ENTRY_EXTRA;
//
//	typedef struct _HEAP_LIST_LOOKUP              // 9 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     struct _HEAP_LIST_LOOKUP* ExtendedLookup;
//		/*0x008*/     ULONG32      ArraySize;
//		/*0x00C*/     ULONG32      ExtraItem;
//		/*0x010*/     ULONG32      ItemCount;
//		/*0x014*/     ULONG32      OutOfRangeItems;
//		/*0x018*/     ULONG32      BaseIndex;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		/*0x020*/     struct _LIST_ENTRY* ListHead;
//		/*0x028*/     ULONG32*     ListsInUseUlong;
//		/*0x030*/     struct _LIST_ENTRY** ListHints;
//	}HEAP_LIST_LOOKUP, *PHEAP_LIST_LOOKUP;
//
//	typedef struct _HEAP_LOCAL_SEGMENT_INFO // 0 elements, 0x0 bytes (sizeof)
//	{
//	}HEAP_LOCAL_SEGMENT_INFO, *PHEAP_LOCAL_SEGMENT_INFO;
//
//	typedef struct _RTL_CRITICAL_SECTION               // 6 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
//		/*0x008*/     LONG32       LockCount;
//		/*0x00C*/     LONG32       RecursionCount;
//		/*0x010*/     VOID*        OwningThread;
//		/*0x018*/     VOID*        LockSemaphore;
//		/*0x020*/     UINT64       SpinCount;
//	}RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION;
//
//	typedef struct _HEAP_LOCK                             // 1 elements, 0x28 bytes (sizeof)
//	{
//		union                                             // 1 elements, 0x28 bytes (sizeof)
//		{
//			/*0x000*/         struct _RTL_CRITICAL_SECTION CriticalSection; // 6 elements, 0x28 bytes (sizeof)
//		}Lock;
//	}HEAP_LOCK, *PHEAP_LOCK;
//
//	typedef struct _HEAP_LOOKASIDE       // 10 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     union _SLIST_HEADER ListHead;    // 5 elements, 0x10 bytes (sizeof)
//		/*0x010*/     UINT16       Depth;
//		/*0x012*/     UINT16       MaximumDepth;
//		/*0x014*/     ULONG32      TotalAllocates;
//		/*0x018*/     ULONG32      AllocateMisses;
//		/*0x01C*/     ULONG32      TotalFrees;
//		/*0x020*/     ULONG32      FreeMisses;
//		/*0x024*/     ULONG32      LastTotalAllocates;
//		/*0x028*/     ULONG32      LastAllocateMisses;
//		/*0x02C*/     ULONG32      Counters[2];
//		/*0x034*/     UINT8        _PADDING0_[0xC];
//	}HEAP_LOOKASIDE, *PHEAP_LOOKASIDE;
//
//	typedef struct _HEAP_PSEUDO_TAG_ENTRY // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Allocs;
//		/*0x004*/     ULONG32      Frees;
//		/*0x008*/     UINT64       Size;
//	}HEAP_PSEUDO_TAG_ENTRY, *PHEAP_PSEUDO_TAG_ENTRY;
//
//	typedef struct _HEAP_SEGMENT                     // 14 elements, 0x70 bytes (sizeof)
//	{
//		/*0x000*/     struct _HEAP_ENTRY Entry;                    // 22 elements, 0x10 bytes (sizeof)
//		/*0x010*/     ULONG32      SegmentSignature;
//		/*0x014*/     ULONG32      SegmentFlags;
//		/*0x018*/     struct _LIST_ENTRY SegmentListEntry;         // 2 elements, 0x10 bytes (sizeof)
//		/*0x028*/     struct _HEAP* Heap;
//		/*0x030*/     VOID*        BaseAddress;
//		/*0x038*/     ULONG32      NumberOfPages;
//		/*0x03C*/     UINT8        _PADDING0_[0x4];
//		/*0x040*/     struct _HEAP_ENTRY* FirstEntry;
//		/*0x048*/     struct _HEAP_ENTRY* LastValidEntry;
//		/*0x050*/     ULONG32      NumberOfUnCommittedPages;
//		/*0x054*/     ULONG32      NumberOfUnCommittedRanges;
//		/*0x058*/     UINT16       SegmentAllocatorBackTraceIndex;
//		/*0x05A*/     UINT16       Reserved;
//		/*0x05C*/     UINT8        _PADDING1_[0x4];
//		/*0x060*/     struct _LIST_ENTRY UCRSegmentList;           // 2 elements, 0x10 bytes (sizeof)
//	}HEAP_SEGMENT, *PHEAP_SEGMENT;
//
//	typedef struct _HEAP_STOP_ON_TAG      // 3 elements, 0x4 bytes (sizeof)
//	{
//		union                             // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      HeapAndTagIndex;
//			struct                        // 2 elements, 0x4 bytes (sizeof)
//			{
//				/*0x000*/             UINT16       TagIndex;
//				/*0x002*/             UINT16       HeapIndex;
//			};
//		};
//	}HEAP_STOP_ON_TAG, *PHEAP_STOP_ON_TAG;
//
//	typedef struct _HEAP_STOP_ON_VALUES      // 6 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       AllocAddress;
//		/*0x008*/     struct _HEAP_STOP_ON_TAG AllocTag;   // 3 elements, 0x4 bytes (sizeof)
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     UINT64       ReAllocAddress;
//		/*0x018*/     struct _HEAP_STOP_ON_TAG ReAllocTag; // 3 elements, 0x4 bytes (sizeof)
//		/*0x01C*/     UINT8        _PADDING1_[0x4];
//		/*0x020*/     UINT64       FreeAddress;
//		/*0x028*/     struct _HEAP_STOP_ON_TAG FreeTag;    // 3 elements, 0x4 bytes (sizeof)
//		/*0x02C*/     UINT8        _PADDING2_[0x4];
//	}HEAP_STOP_ON_VALUES, *PHEAP_STOP_ON_VALUES;
//
//	typedef struct _INTERLOCK_SEQ             // 5 elements, 0x8 bytes (sizeof)
//	{
//		union                                 // 3 elements, 0x8 bytes (sizeof)
//		{
//			struct                            // 2 elements, 0x8 bytes (sizeof)
//			{
//				/*0x000*/             UINT16       Depth;
//				/*0x002*/             UINT16       FreeEntryOffset;
//				/*0x004*/             UINT8        _PADDING0_[0x4];
//			};
//			struct                            // 2 elements, 0x8 bytes (sizeof)
//			{
//				/*0x000*/             ULONG32      OffsetAndDepth;
//				/*0x004*/             ULONG32      Sequence;
//			};
//			/*0x000*/         INT64        Exchg;
//		};
//	}INTERLOCK_SEQ, *PINTERLOCK_SEQ;
//
//	typedef struct _HEAP_SUBSEGMENT                 // 11 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     struct _HEAP_LOCAL_SEGMENT_INFO* LocalInfo;
//		/*0x008*/     struct _HEAP_USERDATA_HEADER* UserBlocks;
//		/*0x010*/     struct _INTERLOCK_SEQ AggregateExchg;       // 5 elements, 0x8 bytes (sizeof)
//		union                                       // 2 elements, 0x8 bytes (sizeof)
//		{
//			struct                                  // 5 elements, 0x8 bytes (sizeof)
//			{
//				/*0x018*/             UINT16       BlockSize;
//				/*0x01A*/             UINT16       Flags;
//				/*0x01C*/             UINT16       BlockCount;
//				/*0x01E*/             UINT8        SizeIndex;
//				/*0x01F*/             UINT8        AffinityIndex;
//			};
//			/*0x018*/         ULONG32      Alignment[2];
//		};
//		/*0x020*/     struct _SINGLE_LIST_ENTRY SFreeListEntry;   // 1 elements, 0x8 bytes (sizeof)
//		/*0x028*/     ULONG32      Lock;
//		/*0x02C*/     UINT8        _PADDING0_[0x4];
//	}HEAP_SUBSEGMENT, *PHEAP_SUBSEGMENT;
//
//	typedef struct _HEAP_TAG_ENTRY          // 6 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Allocs;
//		/*0x004*/     ULONG32      Frees;
//		/*0x008*/     UINT64       Size;
//		/*0x010*/     UINT16       TagIndex;
//		/*0x012*/     UINT16       CreatorBackTraceIndex;
//		/*0x014*/     WCHAR        TagName[24];
//		/*0x044*/     UINT8        _PADDING0_[0x4];
//	}HEAP_TAG_ENTRY, *PHEAP_TAG_ENTRY;
//
//	typedef struct _HEAP_UCR_DESCRIPTOR  // 4 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY ListEntry;    // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _LIST_ENTRY SegmentEntry; // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     VOID*        Address;
//		/*0x028*/     UINT64       Size;
//	}HEAP_UCR_DESCRIPTOR, *PHEAP_UCR_DESCRIPTOR;
//
//	typedef struct _HEAP_USERDATA_HEADER              // 5 elements, 0x20 bytes (sizeof)
//	{
//		union                                         // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         struct _SINGLE_LIST_ENTRY SFreeListEntry; // 1 elements, 0x8 bytes (sizeof)
//			/*0x000*/         struct _HEAP_SUBSEGMENT* SubSegment;
//		};
//		/*0x008*/     VOID*        Reserved;
//		/*0x010*/     UINT64       SizeIndex;
//		/*0x018*/     UINT64       Signature;
//	}HEAP_USERDATA_HEADER, *PHEAP_USERDATA_HEADER;
//
//	typedef struct _HEAP_VIRTUAL_ALLOC_ENTRY // 5 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY Entry;            // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _HEAP_ENTRY_EXTRA ExtraStuff; // 5 elements, 0x10 bytes (sizeof)
//		/*0x020*/     UINT64       CommitSize;
//		/*0x028*/     UINT64       ReserveSize;
//		/*0x030*/     struct _HEAP_ENTRY BusyBlock;        // 22 elements, 0x10 bytes (sizeof)
//	}HEAP_VIRTUAL_ALLOC_ENTRY, *PHEAP_VIRTUAL_ALLOC_ENTRY;
//
//	typedef struct _HIVE_LIST_ENTRY   // 16 elements, 0x88 bytes (sizeof)
//	{
//		/*0x000*/     UINT16*      FileName;
//		/*0x008*/     UINT16*      BaseName;
//		/*0x010*/     UINT16*      RegRootName;
//		/*0x018*/     struct _CMHIVE* CmHive;
//		/*0x020*/     ULONG32      HHiveFlags;
//		/*0x024*/     ULONG32      CmHiveFlags;
//		/*0x028*/     ULONG32      CmKcbCacheSize;
//		/*0x02C*/     UINT8        _PADDING0_[0x4];
//		/*0x030*/     struct _CMHIVE* CmHive2;
//		/*0x038*/     UINT8        HiveMounted;
//		/*0x039*/     UINT8        ThreadFinished;
//		/*0x03A*/     UINT8        ThreadStarted;
//		/*0x03B*/     UINT8        Allocate;
//		/*0x03C*/     UINT8        WinPERequired;
//		/*0x03D*/     UINT8        _PADDING1_[0x3];
//		/*0x040*/     struct _KEVENT StartEvent;    // 1 elements, 0x18 bytes (sizeof)
//		/*0x058*/     struct _KEVENT FinishedEvent; // 1 elements, 0x18 bytes (sizeof)
//		/*0x070*/     struct _KEVENT MountLock;     // 1 elements, 0x18 bytes (sizeof)
//	}HIVE_LIST_ENTRY, *PHIVE_LIST_ENTRY;
//
//	typedef struct __2015110902002400E98D2E8A98F3422B7_Locations_RecoverableLocations // 3 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     enum _CM_LOAD_FAILURE_TYPE Failure;
//		/*0x004*/     LONG32       Status;
//		/*0x008*/     ULONG32      Point;
//	}_2015110902002400E98D2E8A98F3422B7_Locations_RecoverableLocations, *P_2015110902002400E98D2E8A98F3422B7_Locations_RecoverableLocations;
//
//	typedef struct _HIVE_LOAD_FAILURE                                                                      // 13 elements, 0x160 bytes (sizeof)
//	{
//		/*0x000*/     struct _HHIVE* Hive;
//		/*0x008*/     ULONG32      Index;
//		/*0x00C*/     ULONG32      RecoverableIndex;
//		/*0x010*/     struct __2015110902002400E98D2E8A98F3422B7_Locations_RecoverableLocations Locations[8];
//		/*0x070*/     struct __2015110902002400E98D2E8A98F3422B7_Locations_RecoverableLocations RecoverableLocations[8];
//		struct                                                                                             // 3 elements, 0x18 bytes (sizeof)
//		{
//			/*0x0D0*/         ULONG32      Action;
//			/*0x0D4*/         UINT8        _PADDING0_[0x4];
//			/*0x0D8*/         VOID*        Handle;
//			/*0x0E0*/         LONG32       Status;
//			/*0x0E4*/         UINT8        _PADDING1_[0x4];
//		}RegistryIO;
//		struct                                                                                             // 1 elements, 0x8 bytes (sizeof)
//		{
//			/*0x0E8*/         VOID*        CheckStack;
//		}CheckRegistry2;
//		struct                                                                                             // 4 elements, 0x20 bytes (sizeof)
//		{
//			/*0x0F0*/         ULONG32      Cell;
//			/*0x0F4*/         UINT8        _PADDING0_[0x4];
//			/*0x0F8*/         struct _CELL_DATA* CellPoint;
//			/*0x100*/         VOID*        RootPoint;
//			/*0x108*/         ULONG32      Index;
//			/*0x10C*/         UINT8        _PADDING1_[0x4];
//		}CheckKey;
//		struct                                                                                             // 4 elements, 0x18 bytes (sizeof)
//		{
//			/*0x110*/         struct _CELL_DATA* List;
//			/*0x118*/         ULONG32      Index;
//			/*0x11C*/         ULONG32      Cell;
//			/*0x120*/         struct _CELL_DATA* CellPoint;
//		}CheckValueList;
//		struct                                                                                             // 3 elements, 0x10 bytes (sizeof)
//		{
//			/*0x128*/         ULONG32      Space;
//			/*0x12C*/         ULONG32      MapPoint;
//			/*0x130*/         struct _HBIN* BinPoint;
//		}CheckHive;
//		struct                                                                                             // 3 elements, 0x10 bytes (sizeof)
//		{
//			/*0x138*/         ULONG32      Space;
//			/*0x13C*/         ULONG32      MapPoint;
//			/*0x140*/         struct _HBIN* BinPoint;
//		}CheckHive1;
//		struct                                                                                             // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x148*/         struct _HBIN* Bin;
//			/*0x150*/         struct _HCELL* CellPoint;
//		}CheckBin;
//		struct                                                                                             // 1 elements, 0x4 bytes (sizeof)
//		{
//			/*0x158*/         ULONG32      FileOffset;
//		}RecoverData;
//	}HIVE_LOAD_FAILURE, *PHIVE_LOAD_FAILURE;
//
//	typedef struct _HMAP_DIRECTORY           // 1 elements, 0x2000 bytes (sizeof)
//	{
//		/*0x000*/     struct _HMAP_TABLE* Directory[1024];
//	}HMAP_DIRECTORY, *PHMAP_DIRECTORY;
//
//	typedef struct _HMAP_ENTRY           // 4 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       BlockAddress;
//		/*0x008*/     UINT64       BinAddress;
//		/*0x010*/     struct _CM_VIEW_OF_FILE* CmView;
//		/*0x018*/     ULONG32      MemAlloc;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//	}HMAP_ENTRY, *PHMAP_ENTRY;
//
//	typedef struct _HMAP_TABLE         // 1 elements, 0x4000 bytes (sizeof)
//	{
//		/*0x000*/     struct _HMAP_ENTRY Table[512];
//	}HMAP_TABLE, *PHMAP_TABLE;
//
//	typedef struct _I386_LOADER_BLOCK // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        CommonDataArea;
//		/*0x008*/     ULONG32      MachineType;
//		/*0x00C*/     ULONG32      VirtualBias;
//	}I386_LOADER_BLOCK, *PI386_LOADER_BLOCK;
//
//	typedef struct _IA64_LOADER_BLOCK // 1 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      PlaceHolder;
//	}IA64_LOADER_BLOCK, *PIA64_LOADER_BLOCK;
//
//	typedef struct _IMAGE_DATA_DIRECTORY // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      VirtualAddress;
//		/*0x004*/     ULONG32      Size;
//	}IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;
//
//	typedef struct _IMAGE_DEBUG_DIRECTORY // 8 elements, 0x1C bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Characteristics;
//		/*0x004*/     ULONG32      TimeDateStamp;
//		/*0x008*/     UINT16       MajorVersion;
//		/*0x00A*/     UINT16       MinorVersion;
//		/*0x00C*/     ULONG32      Type;
//		/*0x010*/     ULONG32      SizeOfData;
//		/*0x014*/     ULONG32      AddressOfRawData;
//		/*0x018*/     ULONG32      PointerToRawData;
//	}IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;
//
//	typedef struct _IMAGE_DOS_HEADER // 19 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       e_magic;
//		/*0x002*/     UINT16       e_cblp;
//		/*0x004*/     UINT16       e_cp;
//		/*0x006*/     UINT16       e_crlc;
//		/*0x008*/     UINT16       e_cparhdr;
//		/*0x00A*/     UINT16       e_minalloc;
//		/*0x00C*/     UINT16       e_maxalloc;
//		/*0x00E*/     UINT16       e_ss;
//		/*0x010*/     UINT16       e_sp;
//		/*0x012*/     UINT16       e_csum;
//		/*0x014*/     UINT16       e_ip;
//		/*0x016*/     UINT16       e_cs;
//		/*0x018*/     UINT16       e_lfarlc;
//		/*0x01A*/     UINT16       e_ovno;
//		/*0x01C*/     UINT16       e_res[4];
//		/*0x024*/     UINT16       e_oemid;
//		/*0x026*/     UINT16       e_oeminfo;
//		/*0x028*/     UINT16       e_res2[10];
//		/*0x03C*/     LONG32       e_lfanew;
//	}IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;
//
//	typedef struct _IMAGE_FILE_HEADER      // 7 elements, 0x14 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Machine;
//		/*0x002*/     UINT16       NumberOfSections;
//		/*0x004*/     ULONG32      TimeDateStamp;
//		/*0x008*/     ULONG32      PointerToSymbolTable;
//		/*0x00C*/     ULONG32      NumberOfSymbols;
//		/*0x010*/     UINT16       SizeOfOptionalHeader;
//		/*0x012*/     UINT16       Characteristics;
//	}IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;
//
//	typedef struct _IMAGE_OPTIONAL_HEADER64             // 30 elements, 0xF0 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Magic;
//		/*0x002*/     UINT8        MajorLinkerVersion;
//		/*0x003*/     UINT8        MinorLinkerVersion;
//		/*0x004*/     ULONG32      SizeOfCode;
//		/*0x008*/     ULONG32      SizeOfInitializedData;
//		/*0x00C*/     ULONG32      SizeOfUninitializedData;
//		/*0x010*/     ULONG32      AddressOfEntryPoint;
//		/*0x014*/     ULONG32      BaseOfCode;
//		/*0x018*/     UINT64       ImageBase;
//		/*0x020*/     ULONG32      SectionAlignment;
//		/*0x024*/     ULONG32      FileAlignment;
//		/*0x028*/     UINT16       MajorOperatingSystemVersion;
//		/*0x02A*/     UINT16       MinorOperatingSystemVersion;
//		/*0x02C*/     UINT16       MajorImageVersion;
//		/*0x02E*/     UINT16       MinorImageVersion;
//		/*0x030*/     UINT16       MajorSubsystemVersion;
//		/*0x032*/     UINT16       MinorSubsystemVersion;
//		/*0x034*/     ULONG32      Win32VersionValue;
//		/*0x038*/     ULONG32      SizeOfImage;
//		/*0x03C*/     ULONG32      SizeOfHeaders;
//		/*0x040*/     ULONG32      CheckSum;
//		/*0x044*/     UINT16       Subsystem;
//		/*0x046*/     UINT16       DllCharacteristics;
//		/*0x048*/     UINT64       SizeOfStackReserve;
//		/*0x050*/     UINT64       SizeOfStackCommit;
//		/*0x058*/     UINT64       SizeOfHeapReserve;
//		/*0x060*/     UINT64       SizeOfHeapCommit;
//		/*0x068*/     ULONG32      LoaderFlags;
//		/*0x06C*/     ULONG32      NumberOfRvaAndSizes;
//		/*0x070*/     struct _IMAGE_DATA_DIRECTORY DataDirectory[16];
//	}IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;
//
//	typedef struct _IMAGE_NT_HEADERS64                  // 3 elements, 0x108 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Signature;
//		/*0x004*/     struct _IMAGE_FILE_HEADER FileHeader;           // 7 elements, 0x14 bytes (sizeof)
//		/*0x018*/     struct _IMAGE_OPTIONAL_HEADER64 OptionalHeader; // 30 elements, 0xF0 bytes (sizeof)
//	}IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;
//
//	typedef struct _IMAGE_ROM_OPTIONAL_HEADER // 13 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Magic;
//		/*0x002*/     UINT8        MajorLinkerVersion;
//		/*0x003*/     UINT8        MinorLinkerVersion;
//		/*0x004*/     ULONG32      SizeOfCode;
//		/*0x008*/     ULONG32      SizeOfInitializedData;
//		/*0x00C*/     ULONG32      SizeOfUninitializedData;
//		/*0x010*/     ULONG32      AddressOfEntryPoint;
//		/*0x014*/     ULONG32      BaseOfCode;
//		/*0x018*/     ULONG32      BaseOfData;
//		/*0x01C*/     ULONG32      BaseOfBss;
//		/*0x020*/     ULONG32      GprMask;
//		/*0x024*/     ULONG32      CprMask[4];
//		/*0x034*/     ULONG32      GpValue;
//	}IMAGE_ROM_OPTIONAL_HEADER, *PIMAGE_ROM_OPTIONAL_HEADER;
//
//	typedef struct _IMAGE_SECTION_HEADER   // 10 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Name[8];
//		union                              // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x008*/         ULONG32      PhysicalAddress;
//			/*0x008*/         ULONG32      VirtualSize;
//		}Misc;
//		/*0x00C*/     ULONG32      VirtualAddress;
//		/*0x010*/     ULONG32      SizeOfRawData;
//		/*0x014*/     ULONG32      PointerToRawData;
//		/*0x018*/     ULONG32      PointerToRelocations;
//		/*0x01C*/     ULONG32      PointerToLinenumbers;
//		/*0x020*/     UINT16       NumberOfRelocations;
//		/*0x022*/     UINT16       NumberOfLinenumbers;
//		/*0x024*/     ULONG32      Characteristics;
//	}IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;
//
//	typedef struct _IMAGE_SECURITY_CONTEXT             // 6 elements, 0x8 bytes (sizeof)
//	{
//		union                                          // 3 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         VOID*        PageHashes;
//			/*0x000*/         UINT64       Value;
//			struct                                     // 4 elements, 0x8 bytes (sizeof)
//			{
//				/*0x000*/             UINT64       SecurityBeingCreated : 1; // 0 BitPosition
//				/*0x000*/             UINT64       SecurityMandatory : 1;    // 1 BitPosition
//				/*0x000*/             UINT64       Unused : 1;               // 2 BitPosition
//				/*0x000*/             UINT64       PageHashPointer : 61;     // 3 BitPosition
//			};
//		};
//	}IMAGE_SECURITY_CONTEXT, *PIMAGE_SECURITY_CONTEXT;
//
//	typedef struct _INTERFACE                                                                                                                                                            // 5 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Size;
//		/*0x002*/     UINT16       Version;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     VOID*        Context;
//		/*0x010*/     FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* InterfaceReference;
//		/*0x018*/     FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* InterfaceDereference;
//	}INTERFACE, *PINTERFACE;
//
//	typedef struct _IO_CLIENT_EXTENSION             // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _IO_CLIENT_EXTENSION* NextExtension;
//		/*0x008*/     VOID*        ClientIdentificationAddress;
//	}IO_CLIENT_EXTENSION, *PIO_CLIENT_EXTENSION;
//
//	typedef struct _IO_COMPLETION_CONTEXT // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        Port;
//		/*0x008*/     VOID*        Key;
//	}IO_COMPLETION_CONTEXT, *PIO_COMPLETION_CONTEXT;
//
//	typedef struct _IO_DRIVER_CREATE_CONTEXT        // 4 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     INT16        Size;
//		/*0x002*/     UINT8        _PADDING0_[0x6];
//		/*0x008*/     struct _ECP_LIST* ExtraCreateParameter;
//		/*0x010*/     VOID*        DeviceObjectHint;
//		/*0x018*/     struct _TXN_PARAMETER_BLOCK* TxnParameters;
//	}IO_DRIVER_CREATE_CONTEXT, *PIO_DRIVER_CREATE_CONTEXT;
//
//	typedef struct _IO_MINI_COMPLETION_PACKET_USER              // 9 elements, 0x50 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY ListEntry;                           // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     ULONG32      PacketType;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//		/*0x018*/     VOID*        KeyContext;
//		/*0x020*/     VOID*        ApcContext;
//		/*0x028*/     LONG32       IoStatus;
//		/*0x02C*/     UINT8        _PADDING1_[0x4];
//		/*0x030*/     UINT64       IoStatusInformation;
//		/*0x038*/     FUNCT_00A3_1C68_MiniPacketCallback* MiniPacketCallback;
//		/*0x040*/     VOID*        Context;
//		/*0x048*/     UINT8        Allocated;
//		/*0x049*/     UINT8        _PADDING2_[0x7];
//	}IO_MINI_COMPLETION_PACKET_USER, *PIO_MINI_COMPLETION_PACKET_USER;
//
//	typedef struct _IO_PRIORITY_INFO       // 4 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Size;
//		/*0x004*/     ULONG32      ThreadPriority;
//		/*0x008*/     ULONG32      PagePriority;
//		/*0x00C*/     enum _IO_PRIORITY_HINT IoPriority;
//	}IO_PRIORITY_INFO, *PIO_PRIORITY_INFO;
//
//	typedef struct _IO_RESOURCE_DESCRIPTOR           // 7 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Option;
//		/*0x001*/     UINT8        Type;
//		/*0x002*/     UINT8        ShareDisposition;
//		/*0x003*/     UINT8        Spare1;
//		/*0x004*/     UINT16       Flags;
//		/*0x006*/     UINT16       Spare2;
//		union                                        // 11 elements, 0x18 bytes (sizeof)
//		{
//			struct                                   // 4 elements, 0x18 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//				/*0x00C*/             ULONG32      Alignment;
//				/*0x010*/             union _LARGE_INTEGER MinimumAddress; // 4 elements, 0x8 bytes (sizeof)
//				/*0x018*/             union _LARGE_INTEGER MaximumAddress; // 4 elements, 0x8 bytes (sizeof)
//			}Port;
//			struct                                   // 4 elements, 0x18 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//				/*0x00C*/             ULONG32      Alignment;
//				/*0x010*/             union _LARGE_INTEGER MinimumAddress; // 4 elements, 0x8 bytes (sizeof)
//				/*0x018*/             union _LARGE_INTEGER MaximumAddress; // 4 elements, 0x8 bytes (sizeof)
//			}Memory;
//			struct                                   // 6 elements, 0x18 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      MinimumVector;
//				/*0x00C*/             ULONG32      MaximumVector;
//				/*0x010*/             UINT16       AffinityPolicy;
//				/*0x012*/             UINT16       Group;
//				/*0x014*/             enum _IRQ_PRIORITY PriorityPolicy;
//				/*0x018*/             UINT64       TargetedProcessors;
//			}Interrupt;
//			struct                                   // 2 elements, 0x8 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      MinimumChannel;
//				/*0x00C*/             ULONG32      MaximumChannel;
//			}Dma;
//			struct                                   // 4 elements, 0x18 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//				/*0x00C*/             ULONG32      Alignment;
//				/*0x010*/             union _LARGE_INTEGER MinimumAddress; // 4 elements, 0x8 bytes (sizeof)
//				/*0x018*/             union _LARGE_INTEGER MaximumAddress; // 4 elements, 0x8 bytes (sizeof)
//			}Generic;
//			struct                                   // 1 elements, 0xC bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Data[3];
//			}DevicePrivate;
//			struct                                   // 4 elements, 0x10 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//				/*0x00C*/             ULONG32      MinBusNumber;
//				/*0x010*/             ULONG32      MaxBusNumber;
//				/*0x014*/             ULONG32      Reserved;
//			}BusNumber;
//			struct                                   // 3 elements, 0xC bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Priority;
//				/*0x00C*/             ULONG32      Reserved1;
//				/*0x010*/             ULONG32      Reserved2;
//			}ConfigData;
//			struct                                   // 4 elements, 0x18 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length40;
//				/*0x00C*/             ULONG32      Alignment40;
//				/*0x010*/             union _LARGE_INTEGER MinimumAddress; // 4 elements, 0x8 bytes (sizeof)
//				/*0x018*/             union _LARGE_INTEGER MaximumAddress; // 4 elements, 0x8 bytes (sizeof)
//			}Memory40;
//			struct                                   // 4 elements, 0x18 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length48;
//				/*0x00C*/             ULONG32      Alignment48;
//				/*0x010*/             union _LARGE_INTEGER MinimumAddress; // 4 elements, 0x8 bytes (sizeof)
//				/*0x018*/             union _LARGE_INTEGER MaximumAddress; // 4 elements, 0x8 bytes (sizeof)
//			}Memory48;
//			struct                                   // 4 elements, 0x18 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length64;
//				/*0x00C*/             ULONG32      Alignment64;
//				/*0x010*/             union _LARGE_INTEGER MinimumAddress; // 4 elements, 0x8 bytes (sizeof)
//				/*0x018*/             union _LARGE_INTEGER MaximumAddress; // 4 elements, 0x8 bytes (sizeof)
//			}Memory64;
//		}u;
//	}IO_RESOURCE_DESCRIPTOR, *PIO_RESOURCE_DESCRIPTOR;
//
//	typedef struct _IO_RESOURCE_LIST                   // 4 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Version;
//		/*0x002*/     UINT16       Revision;
//		/*0x004*/     ULONG32      Count;
//		/*0x008*/     struct _IO_RESOURCE_DESCRIPTOR Descriptors[1];
//	}IO_RESOURCE_LIST, *PIO_RESOURCE_LIST;
//
//	typedef struct _IO_RESOURCE_REQUIREMENTS_LIST // 7 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      ListSize;
//		/*0x004*/     enum _INTERFACE_TYPE InterfaceType;
//		/*0x008*/     ULONG32      BusNumber;
//		/*0x00C*/     ULONG32      SlotNumber;
//		/*0x010*/     ULONG32      Reserved[3];
//		/*0x01C*/     ULONG32      AlternativeLists;
//		/*0x020*/     struct _IO_RESOURCE_LIST List[1];
//	}IO_RESOURCE_REQUIREMENTS_LIST, *PIO_RESOURCE_REQUIREMENTS_LIST;
//
//	typedef struct _IO_SECURITY_CONTEXT                   // 4 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _SECURITY_QUALITY_OF_SERVICE* SecurityQos;
//		/*0x008*/     struct _ACCESS_STATE* AccessState;
//		/*0x010*/     ULONG32      DesiredAccess;
//		/*0x014*/     ULONG32      FullCreateOptions;
//	}IO_SECURITY_CONTEXT, *PIO_SECURITY_CONTEXT;
//
//	typedef struct _SYSTEM_POWER_STATE_CONTEXT          // 8 elements, 0x4 bytes (sizeof)
//	{
//		union                                           // 2 elements, 0x4 bytes (sizeof)
//		{
//			struct                                      // 7 elements, 0x4 bytes (sizeof)
//			{
//				/*0x000*/             ULONG32      Reserved1 : 8;             // 0 BitPosition
//				/*0x000*/             ULONG32      TargetSystemState : 4;     // 8 BitPosition
//				/*0x000*/             ULONG32      EffectiveSystemState : 4;  // 12 BitPosition
//				/*0x000*/             ULONG32      CurrentSystemState : 4;    // 16 BitPosition
//				/*0x000*/             ULONG32      IgnoreHibernationPath : 1; // 20 BitPosition
//				/*0x000*/             ULONG32      PseudoTransition : 1;      // 21 BitPosition
//				/*0x000*/             ULONG32      Reserved2 : 10;            // 22 BitPosition
//			};
//			/*0x000*/         ULONG32      ContextAsUlong;
//		};
//	}SYSTEM_POWER_STATE_CONTEXT, *PSYSTEM_POWER_STATE_CONTEXT;
//
//	typedef union _POWER_STATE                // 2 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     enum _SYSTEM_POWER_STATE SystemState;
//		/*0x000*/     enum _DEVICE_POWER_STATE DeviceState;
//	}POWER_STATE, *PPOWER_STATE;
//
//	typedef struct _IO_STACK_LOCATION                                             // 9 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        MajorFunction;
//		/*0x001*/     UINT8        MinorFunction;
//		/*0x002*/     UINT8        Flags;
//		/*0x003*/     UINT8        Control;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		union                                                                     // 38 elements, 0x20 bytes (sizeof)
//		{
//			struct                                                                // 5 elements, 0x20 bytes (sizeof)
//			{
//				/*0x008*/             struct _IO_SECURITY_CONTEXT* SecurityContext;
//				/*0x010*/             ULONG32      Options;
//				/*0x014*/             UINT8        _PADDING1_[0x4];
//				/*0x018*/             UINT16       FileAttributes;
//				/*0x01A*/             UINT16       ShareAccess;
//				/*0x01C*/             UINT8        _PADDING2_[0x4];
//				/*0x020*/             ULONG32      EaLength;
//				/*0x024*/             UINT8        _PADDING3_[0x4];
//			}Create;
//			struct                                                                // 5 elements, 0x20 bytes (sizeof)
//			{
//				/*0x008*/             struct _IO_SECURITY_CONTEXT* SecurityContext;
//				/*0x010*/             ULONG32      Options;
//				/*0x014*/             UINT8        _PADDING1_[0x4];
//				/*0x018*/             UINT16       Reserved;
//				/*0x01A*/             UINT16       ShareAccess;
//				/*0x01C*/             UINT8        _PADDING2_[0x4];
//				/*0x020*/             struct _NAMED_PIPE_CREATE_PARAMETERS* Parameters;
//			}CreatePipe;
//			struct                                                                // 5 elements, 0x20 bytes (sizeof)
//			{
//				/*0x008*/             struct _IO_SECURITY_CONTEXT* SecurityContext;
//				/*0x010*/             ULONG32      Options;
//				/*0x014*/             UINT8        _PADDING1_[0x4];
//				/*0x018*/             UINT16       Reserved;
//				/*0x01A*/             UINT16       ShareAccess;
//				/*0x01C*/             UINT8        _PADDING2_[0x4];
//				/*0x020*/             struct _MAILSLOT_CREATE_PARAMETERS* Parameters;
//			}CreateMailslot;
//			struct                                                                // 3 elements, 0x18 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             ULONG32      Key;
//				/*0x014*/             UINT8        _PADDING2_[0x4];
//				/*0x018*/             union _LARGE_INTEGER ByteOffset;                                  // 4 elements, 0x8 bytes (sizeof)
//			}Read;
//			struct                                                                // 3 elements, 0x18 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             ULONG32      Key;
//				/*0x014*/             UINT8        _PADDING2_[0x4];
//				/*0x018*/             union _LARGE_INTEGER ByteOffset;                                  // 4 elements, 0x8 bytes (sizeof)
//			}Write;
//			struct                                                                // 4 elements, 0x20 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             struct _UNICODE_STRING* FileName;
//				/*0x018*/             enum _FILE_INFORMATION_CLASS FileInformationClass;
//				/*0x01C*/             UINT8        _PADDING2_[0x4];
//				/*0x020*/             ULONG32      FileIndex;
//				/*0x024*/             UINT8        _PADDING3_[0x4];
//			}QueryDirectory;
//			struct                                                                // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             ULONG32      CompletionFilter;
//				/*0x014*/             UINT8        _PADDING2_[0x4];
//			}NotifyDirectory;
//			struct                                                                // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             enum _FILE_INFORMATION_CLASS FileInformationClass;
//				/*0x014*/             UINT8        _PADDING2_[0x4];
//			}QueryFile;
//			struct                                                                // 7 elements, 0x20 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             enum _FILE_INFORMATION_CLASS FileInformationClass;
//				/*0x014*/             UINT8        _PADDING2_[0x4];
//				/*0x018*/             struct _FILE_OBJECT* FileObject;
//				union                                                             // 3 elements, 0x8 bytes (sizeof)
//				{
//					struct                                                        // 2 elements, 0x8 bytes (sizeof)
//					{
//						/*0x020*/                     UINT8        ReplaceIfExists;
//						/*0x021*/                     UINT8        AdvanceOnly;
//						/*0x022*/                     UINT8        _PADDING3_[0x6];
//					};
//					/*0x020*/                 ULONG32      ClusterCount;
//					/*0x020*/                 VOID*        DeleteHandle;
//				};
//			}SetFile;
//			struct                                                                // 4 elements, 0x20 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             VOID*        EaList;
//				/*0x018*/             ULONG32      EaListLength;
//				/*0x01C*/             UINT8        _PADDING2_[0x4];
//				/*0x020*/             ULONG32      EaIndex;
//				/*0x024*/             UINT8        _PADDING3_[0x4];
//			}QueryEa;
//			struct                                                                // 1 elements, 0x4 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//			}SetEa;
//			struct                                                                // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             enum _FSINFOCLASS FsInformationClass;
//				/*0x014*/             UINT8        _PADDING2_[0x4];
//			}QueryVolume;
//			struct                                                                // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             enum _FSINFOCLASS FsInformationClass;
//				/*0x014*/             UINT8        _PADDING2_[0x4];
//			}SetVolume;
//			struct                                                                // 4 elements, 0x20 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      OutputBufferLength;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             ULONG32      InputBufferLength;
//				/*0x014*/             UINT8        _PADDING2_[0x4];
//				/*0x018*/             ULONG32      FsControlCode;
//				/*0x01C*/             UINT8        _PADDING3_[0x4];
//				/*0x020*/             VOID*        Type3InputBuffer;
//			}FileSystemControl;
//			struct                                                                // 3 elements, 0x18 bytes (sizeof)
//			{
//				/*0x008*/             union _LARGE_INTEGER* Length;
//				/*0x010*/             ULONG32      Key;
//				/*0x014*/             UINT8        _PADDING1_[0x4];
//				/*0x018*/             union _LARGE_INTEGER ByteOffset;                                  // 4 elements, 0x8 bytes (sizeof)
//			}LockControl;
//			struct                                                                // 4 elements, 0x20 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      OutputBufferLength;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             ULONG32      InputBufferLength;
//				/*0x014*/             UINT8        _PADDING2_[0x4];
//				/*0x018*/             ULONG32      IoControlCode;
//				/*0x01C*/             UINT8        _PADDING3_[0x4];
//				/*0x020*/             VOID*        Type3InputBuffer;
//			}DeviceIoControl;
//			struct                                                                // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      SecurityInformation;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             ULONG32      Length;
//				/*0x014*/             UINT8        _PADDING2_[0x4];
//			}QuerySecurity;
//			struct                                                                // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      SecurityInformation;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             VOID*        SecurityDescriptor;
//			}SetSecurity;
//			struct                                                                // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x008*/             struct _VPB* Vpb;
//				/*0x010*/             struct _DEVICE_OBJECT* DeviceObject;
//			}MountVolume;
//			struct                                                                // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x008*/             struct _VPB* Vpb;
//				/*0x010*/             struct _DEVICE_OBJECT* DeviceObject;
//			}VerifyVolume;
//			struct                                                                // 1 elements, 0x8 bytes (sizeof)
//			{
//				/*0x008*/             struct _SCSI_REQUEST_BLOCK* Srb;
//			}Scsi;
//			struct                                                                // 4 elements, 0x20 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             VOID*        StartSid;
//				/*0x018*/             struct _FILE_GET_QUOTA_INFORMATION* SidList;
//				/*0x020*/             ULONG32      SidListLength;
//				/*0x024*/             UINT8        _PADDING2_[0x4];
//			}QueryQuota;
//			struct                                                                // 1 elements, 0x4 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      Length;
//			}SetQuota;
//			struct                                                                // 1 elements, 0x4 bytes (sizeof)
//			{
//				/*0x008*/             enum _DEVICE_RELATION_TYPE Type;
//			}QueryDeviceRelations;
//			struct                                                                // 5 elements, 0x20 bytes (sizeof)
//			{
//				/*0x008*/             struct _GUID* InterfaceType;
//				/*0x010*/             UINT16       Size;
//				/*0x012*/             UINT16       Version;
//				/*0x014*/             UINT8        _PADDING1_[0x4];
//				/*0x018*/             struct _INTERFACE* Interface;
//				/*0x020*/             VOID*        InterfaceSpecificData;
//			}QueryInterface;
//			struct                                                                // 1 elements, 0x8 bytes (sizeof)
//			{
//				/*0x008*/             struct _DEVICE_CAPABILITIES* Capabilities;
//			}DeviceCapabilities;
//			struct                                                                // 1 elements, 0x8 bytes (sizeof)
//			{
//				/*0x008*/             struct _IO_RESOURCE_REQUIREMENTS_LIST* IoResourceRequirementList;
//			}FilterResourceRequirements;
//			struct                                                                // 4 elements, 0x20 bytes (sizeof)
//			{
//				/*0x008*/             ULONG32      WhichSpace;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             VOID*        Buffer;
//				/*0x018*/             ULONG32      Offset;
//				/*0x01C*/             UINT8        _PADDING2_[0x4];
//				/*0x020*/             ULONG32      Length;
//				/*0x024*/             UINT8        _PADDING3_[0x4];
//			}ReadWriteConfig;
//			struct                                                                // 1 elements, 0x1 bytes (sizeof)
//			{
//				/*0x008*/             UINT8        Lock;
//			}SetLock;
//			struct                                                                // 1 elements, 0x4 bytes (sizeof)
//			{
//				/*0x008*/             enum _BUS_QUERY_ID_TYPE IdType;
//			}QueryId;
//			struct                                                                // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x008*/             enum _DEVICE_TEXT_TYPE DeviceTextType;
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             ULONG32      LocaleId;
//				/*0x014*/             UINT8        _PADDING2_[0x4];
//			}QueryDeviceText;
//			struct                                                                // 3 elements, 0x10 bytes (sizeof)
//			{
//				/*0x008*/             UINT8        InPath;
//				/*0x009*/             UINT8        Reserved[3];
//				/*0x00C*/             UINT8        _PADDING1_[0x4];
//				/*0x010*/             enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;
//				/*0x014*/             UINT8        _PADDING2_[0x4];
//			}UsageNotification;
//			struct                                                                // 1 elements, 0x4 bytes (sizeof)
//			{
//				/*0x008*/             enum _SYSTEM_POWER_STATE PowerState;
//			}WaitWake;
//			struct                                                                // 1 elements, 0x8 bytes (sizeof)
//			{
//				/*0x008*/             struct _POWER_SEQUENCE* PowerSequence;
//			}PowerSequence;
//			struct                                                                // 5 elements, 0x20 bytes (sizeof)
//			{
//				union                                                             // 2 elements, 0x8 bytes (sizeof)
//				{
//					/*0x008*/                 ULONG32      SystemContext;
//					/*0x008*/                 struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;   // 8 elements, 0x4 bytes (sizeof)
//				};
//				/*0x010*/             enum _POWER_STATE_TYPE Type;
//				/*0x014*/             UINT8        _PADDING1_[0x4];
//				/*0x018*/             union _POWER_STATE State;                                         // 2 elements, 0x4 bytes (sizeof)
//				/*0x01C*/             UINT8        _PADDING2_[0x4];
//				/*0x020*/             enum _POWER_ACTION ShutdownType;
//				/*0x024*/             UINT8        _PADDING3_[0x4];
//			}Power;
//			struct                                                                // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x008*/             struct _CM_RESOURCE_LIST* AllocatedResources;
//				/*0x010*/             struct _CM_RESOURCE_LIST* AllocatedResourcesTranslated;
//			}StartDevice;
//			struct                                                                // 4 elements, 0x20 bytes (sizeof)
//			{
//				/*0x008*/             UINT64       ProviderId;
//				/*0x010*/             VOID*        DataPath;
//				/*0x018*/             ULONG32      BufferSize;
//				/*0x01C*/             UINT8        _PADDING1_[0x4];
//				/*0x020*/             VOID*        Buffer;
//			}WMI;
//			struct                                                                // 4 elements, 0x20 bytes (sizeof)
//			{
//				/*0x008*/             VOID*        Argument1;
//				/*0x010*/             VOID*        Argument2;
//				/*0x018*/             VOID*        Argument3;
//				/*0x020*/             VOID*        Argument4;
//			}Others;
//		}Parameters;
//		/*0x028*/     struct _DEVICE_OBJECT* DeviceObject;
//		/*0x030*/     struct _FILE_OBJECT* FileObject;
//		/*0x038*/     FUNCT_005B_0EEF_CompletionRoutine* CompletionRoutine;
//		/*0x040*/     VOID*        Context;
//	}IO_STACK_LOCATION, *PIO_STACK_LOCATION;
//
//	typedef struct _IO_STATUS_BLOCK // 3 elements, 0x10 bytes (sizeof)
//	{
//		union                       // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         LONG32       Status;
//			/*0x000*/         VOID*        Pointer;
//		};
//		/*0x008*/     UINT64       Information;
//	}IO_STATUS_BLOCK, *PIO_STATUS_BLOCK;
//
//	typedef struct _IO_STATUS_BLOCK32 // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       Status;
//		/*0x004*/     ULONG32      Information;
//	}IO_STATUS_BLOCK32, *PIO_STATUS_BLOCK32;
//
//	typedef struct _IO_TIMER                        // 6 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     INT16        Type;
//		/*0x002*/     INT16        TimerFlag;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _LIST_ENTRY TimerList;               // 2 elements, 0x10 bytes (sizeof)
//		/*0x018*/     FUNCT_00A3_0F0F_TimerRoutine* TimerRoutine;
//		/*0x020*/     VOID*        Context;
//		/*0x028*/     struct _DEVICE_OBJECT* DeviceObject;
//	}IO_TIMER, *PIO_TIMER;
//
//	typedef struct _WORK_QUEUE_ITEM                                                                                                                                               // 3 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY List;                                                                                                                                                  // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* WorkerRoutine;
//		/*0x018*/     VOID*        Parameter;
//	}WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM;
//
//	typedef struct _IO_WORKITEM           // 5 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     struct _WORK_QUEUE_ITEM WorkItem; // 3 elements, 0x20 bytes (sizeof)
//		/*0x020*/     FUNCT_00A3_2173_Routine* Routine;
//		/*0x028*/     VOID*        IoObject;
//		/*0x030*/     VOID*        Context;
//		/*0x038*/     ULONG32      Type;
//		/*0x03C*/     UINT8        _PADDING0_[0x4];
//	}IO_WORKITEM, *PIO_WORKITEM;
//
//	typedef struct _iobuf             // 8 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     CHAR*        _ptr;
//		/*0x008*/     INT32        _cnt;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     CHAR*        _base;
//		/*0x018*/     INT32        _flag;
//		/*0x01C*/     INT32        _file;
//		/*0x020*/     INT32        _charbuf;
//		/*0x024*/     INT32        _bufsiz;
//		/*0x028*/     CHAR*        _tmpfname;
//	}iobuf, *Piobuf;
//
//	typedef struct _IOP_FILE_OBJECT_EXTENSION     // 3 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      FoExtFlags;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     VOID*        FoExtPerTypeExtension[7];
//		/*0x040*/     enum _IOP_PRIORITY_HINT FoIoPriorityHint;
//		/*0x044*/     UINT8        _PADDING1_[0x4];
//	}IOP_FILE_OBJECT_EXTENSION, *PIOP_FILE_OBJECT_EXTENSION;
//
//	typedef struct _IOV_FORCED_PENDING_TRACE // 3 elements, 0x200 bytes (sizeof)
//	{
//		/*0x000*/     struct _IRP* Irp;
//		/*0x008*/     struct _ETHREAD* Thread;
//		/*0x010*/     VOID*        StackTrace[62];
//	}IOV_FORCED_PENDING_TRACE, *PIOV_FORCED_PENDING_TRACE;
//
//	typedef struct _IRP                                              // 21 elements, 0xD0 bytes (sizeof)
//	{
//		/*0x000*/     INT16        Type;
//		/*0x002*/     UINT16       Size;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _MDL* MdlAddress;
//		/*0x010*/     ULONG32      Flags;
//		/*0x014*/     UINT8        _PADDING1_[0x4];
//		union                                                        // 3 elements, 0x8 bytes (sizeof)
//		{
//			/*0x018*/         struct _IRP* MasterIrp;
//			/*0x018*/         LONG32       IrpCount;
//			/*0x018*/         VOID*        SystemBuffer;
//		}AssociatedIrp;
//		/*0x020*/     struct _LIST_ENTRY ThreadListEntry;                          // 2 elements, 0x10 bytes (sizeof)
//		/*0x030*/     struct _IO_STATUS_BLOCK IoStatus;                            // 3 elements, 0x10 bytes (sizeof)
//		/*0x040*/     CHAR         RequestorMode;
//		/*0x041*/     UINT8        PendingReturned;
//		/*0x042*/     CHAR         StackCount;
//		/*0x043*/     CHAR         CurrentLocation;
//		/*0x044*/     UINT8        Cancel;
//		/*0x045*/     UINT8        CancelIrql;
//		/*0x046*/     CHAR         ApcEnvironment;
//		/*0x047*/     UINT8        AllocationFlags;
//		/*0x048*/     struct _IO_STATUS_BLOCK* UserIosb;
//		/*0x050*/     struct _KEVENT* UserEvent;
//		union                                                        // 2 elements, 0x10 bytes (sizeof)
//		{
//			struct                                                   // 3 elements, 0x10 bytes (sizeof)
//			{
//				union                                                // 2 elements, 0x8 bytes (sizeof)
//				{
//					/*0x058*/                 FUNCT_00A3_0C67_UserApcRoutine* UserApcRoutine;
//					/*0x058*/                 VOID*        IssuingProcess;
//				};
//				/*0x060*/             VOID*        UserApcContext;
//			}AsynchronousParameters;
//			/*0x058*/         union _LARGE_INTEGER AllocationSize;                     // 4 elements, 0x8 bytes (sizeof)
//		}Overlay;
//		/*0x068*/     FUNCT_00A3_0C6C_DriverStartIo_CancelRoutine* CancelRoutine;
//		/*0x070*/     VOID*        UserBuffer;
//		union                                                        // 3 elements, 0x58 bytes (sizeof)
//		{
//			struct                                                   // 8 elements, 0x50 bytes (sizeof)
//			{
//				union                                                // 2 elements, 0x20 bytes (sizeof)
//				{
//					/*0x078*/                 struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;    // 3 elements, 0x18 bytes (sizeof)
//					/*0x078*/                 VOID*        DriverContext[4];
//				};
//				/*0x098*/             struct _ETHREAD* Thread;
//				/*0x0A0*/             CHAR*        AuxiliaryBuffer;
//				/*0x0A8*/             struct _LIST_ENTRY ListEntry;                        // 2 elements, 0x10 bytes (sizeof)
//				union                                                // 2 elements, 0x8 bytes (sizeof)
//				{
//					/*0x0B8*/                 struct _IO_STACK_LOCATION* CurrentStackLocation;
//					/*0x0B8*/                 ULONG32      PacketType;
//				};
//				/*0x0C0*/             struct _FILE_OBJECT* OriginalFileObject;
//			}Overlay;
//			/*0x078*/         struct _KAPC Apc;                                        // 16 elements, 0x58 bytes (sizeof)
//			/*0x078*/         VOID*        CompletionKey;
//		}Tail;
//	}IRP, *PIRP;
//
//	typedef struct _JOB_ACCESS_STATE // 0 elements, 0x0 bytes (sizeof)
//	{
//	}JOB_ACCESS_STATE, *PJOB_ACCESS_STATE;
//
//	typedef struct _KAFFINITY_ENUMERATION_CONTEXT // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _KAFFINITY_EX* Affinity;
//		/*0x008*/     UINT64       CurrentMask;
//		/*0x010*/     UINT16       CurrentIndex;
//		/*0x012*/     UINT8        _PADDING0_[0x6];
//	}KAFFINITY_ENUMERATION_CONTEXT, *PKAFFINITY_ENUMERATION_CONTEXT;
//
//	typedef struct _KALPC_HANDLE_DATA                        // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Flags;
//		/*0x004*/     ULONG32      ObjectType;
//		/*0x008*/     struct _OB_DUPLICATE_OBJECT_STATE* DuplicateContext;
//	}KALPC_HANDLE_DATA, *PKALPC_HANDLE_DATA;
//
//	typedef struct _KALPC_MESSAGE_ATTRIBUTES       // 7 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        ClientContext;
//		/*0x008*/     VOID*        ServerContext;
//		/*0x010*/     VOID*        PortContext;
//		/*0x018*/     VOID*        CancelPortContext;
//		/*0x020*/     struct _KALPC_SECURITY_DATA* SecurityData;
//		/*0x028*/     struct _KALPC_VIEW* View;
//		/*0x030*/     struct _KALPC_HANDLE_DATA* HandleData;
//	}KALPC_MESSAGE_ATTRIBUTES, *PKALPC_MESSAGE_ATTRIBUTES;
//
//	typedef struct _PORT_MESSAGE             // 7 elements, 0x28 bytes (sizeof)
//	{
//		union                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			struct                           // 2 elements, 0x4 bytes (sizeof)
//			{
//				/*0x000*/             INT16        DataLength;
//				/*0x002*/             INT16        TotalLength;
//			}s1;
//			/*0x000*/         ULONG32      Length;
//		}u1;
//		union                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			struct                           // 2 elements, 0x4 bytes (sizeof)
//			{
//				/*0x004*/             INT16        Type;
//				/*0x006*/             INT16        DataInfoOffset;
//			}s2;
//			/*0x004*/         ULONG32      ZeroInit;
//		}u2;
//		union                                // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x008*/         struct _CLIENT_ID ClientId;      // 2 elements, 0x10 bytes (sizeof)
//			/*0x008*/         FLOAT64      DoNotUseThisField;
//		};
//		/*0x018*/     ULONG32      MessageId;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		union                                // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x020*/         UINT64       ClientViewSize;
//			/*0x020*/         ULONG32      CallbackId;
//		};
//	}PORT_MESSAGE, *PPORT_MESSAGE;
//
//	typedef struct _KALPC_MESSAGE                           // 22 elements, 0x100 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY Entry;                           // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     VOID*        ExtensionBuffer;
//		/*0x018*/     UINT64       ExtensionBufferSize;
//		union                                               // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x020*/         struct _EPROCESS* QuotaProcess;
//			/*0x020*/         VOID*        QuotaBlock;
//		};
//		/*0x028*/     LONG32       SequenceNo;
//		union                                               // 2 elements, 0x4 bytes (sizeof)
//		{
//			struct                                          // 12 elements, 0x4 bytes (sizeof)
//			{
//				/*0x02C*/             ULONG32      QueueType : 2;                 // 0 BitPosition
//				/*0x02C*/             ULONG32      QueuePortType : 4;             // 2 BitPosition
//				/*0x02C*/             ULONG32      Canceled : 1;                  // 6 BitPosition
//				/*0x02C*/             ULONG32      Ready : 1;                     // 7 BitPosition
//				/*0x02C*/             ULONG32      ReleaseMessage : 1;            // 8 BitPosition
//				/*0x02C*/             ULONG32      SharedQuota : 1;               // 9 BitPosition
//				/*0x02C*/             ULONG32      ReplyWaitReply : 1;            // 10 BitPosition
//				/*0x02C*/             ULONG32      OwnerPortReference : 1;        // 11 BitPosition
//				/*0x02C*/             ULONG32      ReserveReference : 1;          // 12 BitPosition
//				/*0x02C*/             ULONG32      ReceiverReference : 1;         // 13 BitPosition
//				/*0x02C*/             ULONG32      ViewAttributeRetrieved : 1;    // 14 BitPosition
//				/*0x02C*/             ULONG32      InDispatch : 1;                // 15 BitPosition
//			}s1;
//			/*0x02C*/         ULONG32      State;
//		}u1;
//		/*0x030*/     struct _ALPC_PORT* CancelSequencePort;
//		/*0x038*/     struct _ALPC_PORT* CancelQueuePort;
//		/*0x040*/     LONG32       CancelSequenceNo;
//		/*0x044*/     UINT8        _PADDING0_[0x4];
//		/*0x048*/     struct _LIST_ENTRY CancelListEntry;                 // 2 elements, 0x10 bytes (sizeof)
//		/*0x058*/     struct _ETHREAD* WaitingThread;
//		/*0x060*/     struct _KALPC_RESERVE* Reserve;
//		/*0x068*/     struct _ALPC_PORT* PortQueue;
//		/*0x070*/     struct _ALPC_PORT* OwnerPort;
//		/*0x078*/     struct _KALPC_MESSAGE_ATTRIBUTES MessageAttributes; // 7 elements, 0x38 bytes (sizeof)
//		/*0x0B0*/     VOID*        DataUserVa;
//		/*0x0B8*/     VOID*        DataSystemVa;
//		/*0x0C0*/     struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;
//		/*0x0C8*/     struct _ALPC_PORT* ConnectionPort;
//		/*0x0D0*/     struct _ETHREAD* ServerThread;
//		/*0x0D8*/     struct _PORT_MESSAGE PortMessage;                   // 7 elements, 0x28 bytes (sizeof)
//	}KALPC_MESSAGE, *PKALPC_MESSAGE;
//
//	typedef struct _KALPC_REGION            // 10 elements, 0x58 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY RegionListEntry; // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _KALPC_SECTION* Section;
//		/*0x018*/     UINT64       Offset;
//		/*0x020*/     UINT64       Size;
//		/*0x028*/     UINT64       ViewSize;
//		union                               // 1 elements, 0x4 bytes (sizeof)
//		{
//			struct                          // 1 elements, 0x4 bytes (sizeof)
//			{
//				/*0x030*/             ULONG32      Secure : 1;    // 0 BitPosition
//			}s1;
//		}u1;
//		/*0x034*/     ULONG32      NumberOfViews;
//		/*0x038*/     struct _LIST_ENTRY ViewListHead;    // 2 elements, 0x10 bytes (sizeof)
//		/*0x048*/     struct _KALPC_VIEW* ReadOnlyView;
//		/*0x050*/     struct _KALPC_VIEW* ReadWriteView;
//	}KALPC_REGION, *PKALPC_REGION;
//
//	typedef struct _KALPC_RESERVE               // 5 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _ALPC_PORT* OwnerPort;
//		/*0x008*/     struct _ALPC_HANDLE_TABLE* HandleTable;
//		/*0x010*/     VOID*        Handle;
//		/*0x018*/     struct _KALPC_MESSAGE* Message;
//		/*0x020*/     LONG32       Active;
//		/*0x024*/     UINT8        _PADDING0_[0x4];
//	}KALPC_RESERVE, *PKALPC_RESERVE;
//
//	typedef struct _KALPC_SECTION               // 9 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        SectionObject;
//		/*0x008*/     UINT64       Size;
//		/*0x010*/     struct _ALPC_HANDLE_TABLE* HandleTable;
//		/*0x018*/     VOID*        SectionHandle;
//		/*0x020*/     struct _EPROCESS* OwnerProcess;
//		/*0x028*/     struct _ALPC_PORT* OwnerPort;
//		union                                   // 1 elements, 0x4 bytes (sizeof)
//		{
//			struct                              // 2 elements, 0x4 bytes (sizeof)
//			{
//				/*0x030*/             ULONG32      Internal : 1;      // 0 BitPosition
//				/*0x030*/             ULONG32      Secure : 1;        // 1 BitPosition
//			}s1;
//		}u1;
//		/*0x034*/     ULONG32      NumberOfRegions;
//		/*0x038*/     struct _LIST_ENTRY RegionListHead;      // 2 elements, 0x10 bytes (sizeof)
//	}KALPC_SECTION, *PKALPC_SECTION;
//
//	typedef struct _KALPC_SECURITY_DATA                  // 6 elements, 0x70 bytes (sizeof)
//	{
//		/*0x000*/     struct _ALPC_HANDLE_TABLE* HandleTable;
//		/*0x008*/     VOID*        ContextHandle;
//		/*0x010*/     struct _EPROCESS* OwningProcess;
//		/*0x018*/     struct _ALPC_PORT* OwnerPort;
//		/*0x020*/     struct _SECURITY_CLIENT_CONTEXT DynamicSecurity; // 6 elements, 0x48 bytes (sizeof)
//		union                                            // 1 elements, 0x4 bytes (sizeof)
//		{
//			struct                                       // 2 elements, 0x4 bytes (sizeof)
//			{
//				/*0x068*/             ULONG32      Revoked : 1;                // 0 BitPosition
//				/*0x068*/             ULONG32      Impersonated : 1;           // 1 BitPosition
//			}s1;
//		}u1;
//	}KALPC_SECURITY_DATA, *PKALPC_SECURITY_DATA;
//
//	typedef struct _KALPC_VIEW                   // 11 elements, 0x60 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY ViewListEntry;        // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _KALPC_REGION* Region;
//		/*0x018*/     struct _ALPC_PORT* OwnerPort;
//		/*0x020*/     struct _EPROCESS* OwnerProcess;
//		/*0x028*/     VOID*        Address;
//		/*0x030*/     UINT64       Size;
//		/*0x038*/     VOID*        SecureViewHandle;
//		/*0x040*/     VOID*        WriteAccessHandle;
//		union                                    // 1 elements, 0x4 bytes (sizeof)
//		{
//			struct                               // 3 elements, 0x4 bytes (sizeof)
//			{
//				/*0x048*/             ULONG32      WriteAccess : 1;    // 0 BitPosition
//				/*0x048*/             ULONG32      AutoRelease : 1;    // 1 BitPosition
//				/*0x048*/             ULONG32      ForceUnlink : 1;    // 2 BitPosition
//			}s1;
//		}u1;
//		/*0x04C*/     ULONG32      NumberOfOwnerMessages;
//		/*0x050*/     struct _LIST_ENTRY ProcessViewListEntry; // 2 elements, 0x10 bytes (sizeof)
//	}KALPC_VIEW, *PKALPC_VIEW;
//
//	typedef union _KBUGCHECK_ACTIVE_STATE    // 4 elements, 0x4 bytes (sizeof)
//	{
//		struct                               // 3 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      BugCheckState : 2;  // 0 BitPosition
//			/*0x000*/         ULONG32      RecursionCount : 2; // 2 BitPosition
//			/*0x000*/         ULONG32      BugCheckOwner : 28; // 4 BitPosition
//		};
//		/*0x000*/     LONG32       Value;
//	}KBUGCHECK_ACTIVE_STATE, *PKBUGCHECK_ACTIVE_STATE;
//
//	typedef struct _KDESCRIPTOR // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Pad[3];
//		/*0x006*/     UINT16       Limit;
//		/*0x008*/     VOID*        Base;
//	}KDESCRIPTOR, *PKDESCRIPTOR;
//
//	typedef struct _KDPC_DATA           // 4 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY DpcListHead; // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     UINT64       DpcLock;
//		/*0x018*/     LONG32       DpcQueueDepth;
//		/*0x01C*/     ULONG32      DpcCount;
//	}KDPC_DATA, *PKDPC_DATA;
//
//	typedef struct _RTL_BALANCED_LINKS          // 5 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _RTL_BALANCED_LINKS* Parent;
//		/*0x008*/     struct _RTL_BALANCED_LINKS* LeftChild;
//		/*0x010*/     struct _RTL_BALANCED_LINKS* RightChild;
//		/*0x018*/     CHAR         Balance;
//		/*0x019*/     UINT8        Reserved[3];
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//	}RTL_BALANCED_LINKS, *PRTL_BALANCED_LINKS;
//
//	typedef struct _KTMOBJECT_NAMESPACE_LINK // 2 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _RTL_BALANCED_LINKS Links;    // 5 elements, 0x20 bytes (sizeof)
//		/*0x020*/     UINT8        Expired;
//		/*0x021*/     UINT8        _PADDING0_[0x7];
//	}KTMOBJECT_NAMESPACE_LINK, *PKTMOBJECT_NAMESPACE_LINK;
//
//	typedef struct _KMUTANT                 // 5 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     struct _DISPATCHER_HEADER Header;   // 29 elements, 0x18 bytes (sizeof)
//		/*0x018*/     struct _LIST_ENTRY MutantListEntry; // 2 elements, 0x10 bytes (sizeof)
//		/*0x028*/     struct _KTHREAD* OwnerThread;
//		/*0x030*/     UINT8        Abandoned;
//		/*0x031*/     UINT8        ApcDisable;
//		/*0x032*/     UINT8        _PADDING0_[0x6];
//	}KMUTANT, *PKMUTANT;
//
//	typedef struct _KENLISTMENT_HISTORY   // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Notification;
//		/*0x004*/     enum _KENLISTMENT_STATE NewState;
//	}KENLISTMENT_HISTORY, *PKENLISTMENT_HISTORY;
//
//	typedef struct _KENLISTMENT                            // 26 elements, 0x1E0 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      cookie;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;    // 2 elements, 0x28 bytes (sizeof)
//		/*0x030*/     struct _GUID EnlistmentId;                         // 4 elements, 0x10 bytes (sizeof)
//		/*0x040*/     struct _KMUTANT Mutex;                             // 5 elements, 0x38 bytes (sizeof)
//		/*0x078*/     struct _LIST_ENTRY NextSameTx;                     // 2 elements, 0x10 bytes (sizeof)
//		/*0x088*/     struct _LIST_ENTRY NextSameRm;                     // 2 elements, 0x10 bytes (sizeof)
//		/*0x098*/     struct _KRESOURCEMANAGER* ResourceManager;
//		/*0x0A0*/     struct _KTRANSACTION* Transaction;
//		/*0x0A8*/     enum _KENLISTMENT_STATE State;
//		/*0x0AC*/     ULONG32      Flags;
//		/*0x0B0*/     ULONG32      NotificationMask;
//		/*0x0B4*/     UINT8        _PADDING1_[0x4];
//		/*0x0B8*/     VOID*        Key;
//		/*0x0C0*/     ULONG32      KeyRefCount;
//		/*0x0C4*/     UINT8        _PADDING2_[0x4];
//		/*0x0C8*/     VOID*        RecoveryInformation;
//		/*0x0D0*/     ULONG32      RecoveryInformationLength;
//		/*0x0D4*/     UINT8        _PADDING3_[0x4];
//		/*0x0D8*/     VOID*        DynamicNameInformation;
//		/*0x0E0*/     ULONG32      DynamicNameInformationLength;
//		/*0x0E4*/     UINT8        _PADDING4_[0x4];
//		/*0x0E8*/     struct _KTMNOTIFICATION_PACKET* FinalNotification;
//		/*0x0F0*/     struct _KENLISTMENT* SupSubEnlistment;
//		/*0x0F8*/     VOID*        SupSubEnlHandle;
//		/*0x100*/     VOID*        SubordinateTxHandle;
//		/*0x108*/     struct _GUID CrmEnlistmentEnId;                    // 4 elements, 0x10 bytes (sizeof)
//		/*0x118*/     struct _GUID CrmEnlistmentTmId;                    // 4 elements, 0x10 bytes (sizeof)
//		/*0x128*/     struct _GUID CrmEnlistmentRmId;                    // 4 elements, 0x10 bytes (sizeof)
//		/*0x138*/     ULONG32      NextHistory;
//		/*0x13C*/     struct _KENLISTMENT_HISTORY History[20];
//		/*0x1DC*/     UINT8        _PADDING5_[0x4];
//	}KENLISTMENT, *PKENLISTMENT;
//
//	typedef struct _KERNEL_STACK_SEGMENT // 5 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       StackBase;
//		/*0x008*/     UINT64       StackLimit;
//		/*0x010*/     UINT64       KernelStack;
//		/*0x018*/     UINT64       InitialStack;
//		/*0x020*/     UINT64       ActualLimit;
//	}KERNEL_STACK_SEGMENT, *PKERNEL_STACK_SEGMENT;
//
//	typedef struct _KERNEL_STACK_CONTROL       // 2 elements, 0x50 bytes (sizeof)
//	{
//		/*0x000*/     struct _KERNEL_STACK_SEGMENT Current;  // 5 elements, 0x28 bytes (sizeof)
//		/*0x028*/     struct _KERNEL_STACK_SEGMENT Previous; // 5 elements, 0x28 bytes (sizeof)
//	}KERNEL_STACK_CONTROL, *PKERNEL_STACK_CONTROL;
//
//	typedef struct _KEXCEPTION_FRAME // 30 elements, 0x140 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       P1Home;
//		/*0x008*/     UINT64       P2Home;
//		/*0x010*/     UINT64       P3Home;
//		/*0x018*/     UINT64       P4Home;
//		/*0x020*/     UINT64       P5;
//		/*0x028*/     UINT64       InitialStack;
//		/*0x030*/     struct _M128A Xmm6;          // 2 elements, 0x10 bytes (sizeof)
//		/*0x040*/     struct _M128A Xmm7;          // 2 elements, 0x10 bytes (sizeof)
//		/*0x050*/     struct _M128A Xmm8;          // 2 elements, 0x10 bytes (sizeof)
//		/*0x060*/     struct _M128A Xmm9;          // 2 elements, 0x10 bytes (sizeof)
//		/*0x070*/     struct _M128A Xmm10;         // 2 elements, 0x10 bytes (sizeof)
//		/*0x080*/     struct _M128A Xmm11;         // 2 elements, 0x10 bytes (sizeof)
//		/*0x090*/     struct _M128A Xmm12;         // 2 elements, 0x10 bytes (sizeof)
//		/*0x0A0*/     struct _M128A Xmm13;         // 2 elements, 0x10 bytes (sizeof)
//		/*0x0B0*/     struct _M128A Xmm14;         // 2 elements, 0x10 bytes (sizeof)
//		/*0x0C0*/     struct _M128A Xmm15;         // 2 elements, 0x10 bytes (sizeof)
//		/*0x0D0*/     UINT64       TrapFrame;
//		/*0x0D8*/     UINT64       CallbackStack;
//		/*0x0E0*/     UINT64       OutputBuffer;
//		/*0x0E8*/     UINT64       OutputLength;
//		/*0x0F0*/     UINT64       MxCsr;
//		/*0x0F8*/     UINT64       Rbp;
//		/*0x100*/     UINT64       Rbx;
//		/*0x108*/     UINT64       Rdi;
//		/*0x110*/     UINT64       Rsi;
//		/*0x118*/     UINT64       R12;
//		/*0x120*/     UINT64       R13;
//		/*0x128*/     UINT64       R14;
//		/*0x130*/     UINT64       R15;
//		/*0x138*/     UINT64       Return;
//	}KEXCEPTION_FRAME, *PKEXCEPTION_FRAME;
//
//	typedef union _KIDTENTRY64              // 11 elements, 0x10 bytes (sizeof)
//	{
//		struct                              // 6 elements, 0x10 bytes (sizeof)
//		{
//			/*0x000*/         UINT16       OffsetLow;
//			/*0x002*/         UINT16       Selector;
//			struct                          // 5 elements, 0x2 bytes (sizeof)
//			{
//				/*0x004*/             UINT16       IstIndex : 3;  // 0 BitPosition
//				/*0x004*/             UINT16       Reserved0 : 5; // 3 BitPosition
//				/*0x004*/             UINT16       Type : 5;      // 8 BitPosition
//				/*0x004*/             UINT16       Dpl : 2;       // 13 BitPosition
//				/*0x004*/             UINT16       Present : 1;   // 15 BitPosition
//			};
//			/*0x006*/         UINT16       OffsetMiddle;
//			/*0x008*/         ULONG32      OffsetHigh;
//			/*0x00C*/         ULONG32      Reserved1;
//		};
//		/*0x000*/     UINT64       Alignment;
//	}KIDTENTRY64, *PKIDTENTRY64;
//
//	typedef struct _KINTERRUPT                                                                 // 27 elements, 0xA0 bytes (sizeof)
//	{
//		/*0x000*/     INT16        Type;
//		/*0x002*/     INT16        Size;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _LIST_ENTRY InterruptListEntry;                                                 // 2 elements, 0x10 bytes (sizeof)
//		/*0x018*/     FUNCT_0065_2116_ServiceRoutine* ServiceRoutine;
//		/*0x020*/     FUNCT_0065_211B_MessageServiceRoutine* MessageServiceRoutine;
//		/*0x028*/     ULONG32      MessageIndex;
//		/*0x02C*/     UINT8        _PADDING1_[0x4];
//		/*0x030*/     VOID*        ServiceContext;
//		/*0x038*/     UINT64       SpinLock;
//		/*0x040*/     ULONG32      TickCount;
//		/*0x044*/     UINT8        _PADDING2_[0x4];
//		/*0x048*/     UINT64*      ActualLock;
//		/*0x050*/     FUNCT_00A3_0284_PostProcessInitRoutine_DispatchAddress_FinishRoutine* DispatchAddress;
//		/*0x058*/     ULONG32      Vector;
//		/*0x05C*/     UINT8        Irql;
//		/*0x05D*/     UINT8        SynchronizeIrql;
//		/*0x05E*/     UINT8        FloatingSave;
//		/*0x05F*/     UINT8        Connected;
//		/*0x060*/     ULONG32      Number;
//		/*0x064*/     UINT8        ShareVector;
//		/*0x065*/     CHAR         Pad[3];
//		/*0x068*/     enum _KINTERRUPT_MODE Mode;
//		/*0x06C*/     enum _KINTERRUPT_POLARITY Polarity;
//		/*0x070*/     ULONG32      ServiceCount;
//		/*0x074*/     ULONG32      DispatchCount;
//		/*0x078*/     UINT64       Rsvd1;
//		/*0x080*/     struct _KTRAP_FRAME* TrapFrame;
//		/*0x088*/     VOID*        Reserved;
//		/*0x090*/     ULONG32      DispatchCode[4];
//	}KINTERRUPT, *PKINTERRUPT;
//
//	typedef struct _KSPIN_LOCK_QUEUE    // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _KSPIN_LOCK_QUEUE* Next;
//		/*0x008*/     UINT64*      Lock;
//	}KSPIN_LOCK_QUEUE, *PKSPIN_LOCK_QUEUE;
//
//	typedef struct _KLOCK_QUEUE_HANDLE      // 2 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _KSPIN_LOCK_QUEUE LockQueue; // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     UINT8        OldIrql;
//		/*0x011*/     UINT8        _PADDING0_[0x7];
//	}KLOCK_QUEUE_HANDLE, *PKLOCK_QUEUE_HANDLE;
//
//	typedef struct _KNODE                              // 18 elements, 0xC0 bytes (sizeof)
//	{
//		/*0x000*/     union _SLIST_HEADER PagedPoolSListHead;        // 5 elements, 0x10 bytes (sizeof)
//		/*0x010*/     union _SLIST_HEADER NonPagedPoolSListHead[3];
//		/*0x040*/     struct _GROUP_AFFINITY Affinity;               // 3 elements, 0x10 bytes (sizeof)
//		/*0x050*/     ULONG32      ProximityId;
//		/*0x054*/     UINT16       NodeNumber;
//		/*0x056*/     UINT16       PrimaryNodeNumber;
//		/*0x058*/     UINT8        MaximumProcessors;
//		/*0x059*/     UINT8        Color;
//		/*0x05A*/     struct _flags Flags;                           // 5 elements, 0x1 bytes (sizeof)
//		/*0x05B*/     UINT8        NodePad0;
//		/*0x05C*/     ULONG32      Seed;
//		/*0x060*/     ULONG32      MmShiftedColor;
//		/*0x064*/     UINT8        _PADDING0_[0x4];
//		/*0x068*/     UINT64       FreeCount[2];
//		/*0x078*/     ULONG32      Right;
//		/*0x07C*/     ULONG32      Left;
//		/*0x080*/     struct _CACHED_KSTACK_LIST CachedKernelStacks; // 5 elements, 0x20 bytes (sizeof)
//		/*0x0A0*/     LONG32       ParkLock;
//		/*0x0A4*/     ULONG32      NodePad1;
//		/*0x0A8*/     UINT8        _PADDING1_[0x18];
//	}KNODE, *PKNODE;
//
//	typedef struct _NT_TIB                                    // 8 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
//		/*0x008*/     VOID*        StackBase;
//		/*0x010*/     VOID*        StackLimit;
//		/*0x018*/     VOID*        SubSystemTib;
//		union                                                 // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x020*/         VOID*        FiberData;
//			/*0x020*/         ULONG32      Version;
//		};
//		/*0x028*/     VOID*        ArbitraryUserPointer;
//		/*0x030*/     struct _NT_TIB* Self;
//	}NT_TIB, *PNT_TIB;
//
//	typedef struct _KSPECIAL_REGISTERS     // 27 elements, 0xD8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Cr0;
//		/*0x008*/     UINT64       Cr2;
//		/*0x010*/     UINT64       Cr3;
//		/*0x018*/     UINT64       Cr4;
//		/*0x020*/     UINT64       KernelDr0;
//		/*0x028*/     UINT64       KernelDr1;
//		/*0x030*/     UINT64       KernelDr2;
//		/*0x038*/     UINT64       KernelDr3;
//		/*0x040*/     UINT64       KernelDr6;
//		/*0x048*/     UINT64       KernelDr7;
//		/*0x050*/     struct _KDESCRIPTOR Gdtr;          // 3 elements, 0x10 bytes (sizeof)
//		/*0x060*/     struct _KDESCRIPTOR Idtr;          // 3 elements, 0x10 bytes (sizeof)
//		/*0x070*/     UINT16       Tr;
//		/*0x072*/     UINT16       Ldtr;
//		/*0x074*/     ULONG32      MxCsr;
//		/*0x078*/     UINT64       DebugControl;
//		/*0x080*/     UINT64       LastBranchToRip;
//		/*0x088*/     UINT64       LastBranchFromRip;
//		/*0x090*/     UINT64       LastExceptionToRip;
//		/*0x098*/     UINT64       LastExceptionFromRip;
//		/*0x0A0*/     UINT64       Cr8;
//		/*0x0A8*/     UINT64       MsrGsBase;
//		/*0x0B0*/     UINT64       MsrGsSwap;
//		/*0x0B8*/     UINT64       MsrStar;
//		/*0x0C0*/     UINT64       MsrLStar;
//		/*0x0C8*/     UINT64       MsrCStar;
//		/*0x0D0*/     UINT64       MsrSyscallMask;
//	}KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS;
//
//	typedef struct _KPROCESSOR_STATE                 // 2 elements, 0x5B0 bytes (sizeof)
//	{
//		/*0x000*/     struct _KSPECIAL_REGISTERS SpecialRegisters; // 27 elements, 0xD8 bytes (sizeof)
//		/*0x0D8*/     UINT8        _PADDING0_[0x8];
//		/*0x0E0*/     struct _CONTEXT ContextFrame;                // 64 elements, 0x4D0 bytes (sizeof)
//	}KPROCESSOR_STATE, *PKPROCESSOR_STATE;
//
//	typedef struct _PP_LOOKASIDE_LIST // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _GENERAL_LOOKASIDE* P;
//		/*0x008*/     struct _GENERAL_LOOKASIDE* L;
//	}PP_LOOKASIDE_LIST, *PPP_LOOKASIDE_LIST;
//
//	typedef struct _KTIMER_TABLE_ENTRY // 3 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Lock;
//		/*0x008*/     struct _LIST_ENTRY Entry;      // 2 elements, 0x10 bytes (sizeof)
//		/*0x018*/     union _ULARGE_INTEGER Time;    // 4 elements, 0x8 bytes (sizeof)
//	}KTIMER_TABLE_ENTRY, *PKTIMER_TABLE_ENTRY;
//
//	typedef struct _KTIMER_TABLE                      // 2 elements, 0x2200 bytes (sizeof)
//	{
//		/*0x000*/     struct _KTIMER* TimerExpiry[64];
//		/*0x200*/     struct _KTIMER_TABLE_ENTRY TimerEntries[256];
//	}KTIMER_TABLE, *PKTIMER_TABLE;
//
//	typedef struct _PPM_FFH_THROTTLE_STATE_INFO // 5 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        EnableLogging;
//		/*0x001*/     UINT8        _PADDING0_[0x3];
//		/*0x004*/     ULONG32      MismatchCount;
//		/*0x008*/     UINT8        Initialized;
//		/*0x009*/     UINT8        _PADDING1_[0x7];
//		/*0x010*/     UINT64       LastValue;
//		/*0x018*/     union _LARGE_INTEGER LastLogTickCount;  // 4 elements, 0x8 bytes (sizeof)
//	}PPM_FFH_THROTTLE_STATE_INFO, *PPPM_FFH_THROTTLE_STATE_INFO;
//
//	typedef struct _PROC_IDLE_SNAP // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Time;
//		/*0x008*/     UINT64       Idle;
//	}PROC_IDLE_SNAP, *PPROC_IDLE_SNAP;
//
//	typedef struct _PROCESSOR_POWER_STATE                         // 27 elements, 0x100 bytes (sizeof)
//	{
//		/*0x000*/     struct _PPM_IDLE_STATES* IdleStates;
//		/*0x008*/     UINT64       IdleTimeLast;
//		/*0x010*/     UINT64       IdleTimeTotal;
//		/*0x018*/     UINT64       IdleTimeEntry;
//		/*0x020*/     struct _PROC_IDLE_ACCOUNTING* IdleAccounting;
//		/*0x028*/     enum _PROC_HYPERVISOR_STATE Hypervisor;
//		/*0x02C*/     ULONG32      PerfHistoryTotal;
//		/*0x030*/     UINT8        ThermalConstraint;
//		/*0x031*/     UINT8        PerfHistoryCount;
//		/*0x032*/     UINT8        PerfHistorySlot;
//		/*0x033*/     UINT8        Reserved;
//		/*0x034*/     ULONG32      LastSysTime;
//		/*0x038*/     UINT64       WmiDispatchPtr;
//		/*0x040*/     LONG32       WmiInterfaceEnabled;
//		/*0x044*/     UINT8        _PADDING0_[0x4];
//		/*0x048*/     struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo; // 5 elements, 0x20 bytes (sizeof)
//		/*0x068*/     struct _KDPC PerfActionDpc;                               // 9 elements, 0x40 bytes (sizeof)
//		/*0x0A8*/     LONG32       PerfActionMask;
//		/*0x0AC*/     UINT8        _PADDING1_[0x4];
//		/*0x0B0*/     struct _PROC_IDLE_SNAP IdleCheck;                         // 2 elements, 0x10 bytes (sizeof)
//		/*0x0C0*/     struct _PROC_IDLE_SNAP PerfCheck;                         // 2 elements, 0x10 bytes (sizeof)
//		/*0x0D0*/     struct _PROC_PERF_DOMAIN* Domain;
//		/*0x0D8*/     struct _PROC_PERF_CONSTRAINT* PerfConstraint;
//		/*0x0E0*/     struct _PROC_PERF_LOAD* Load;
//		/*0x0E8*/     struct _PROC_HISTORY_ENTRY* PerfHistory;
//		/*0x0F0*/     ULONG32      Utility;
//		/*0x0F4*/     ULONG32      OverUtilizedHistory;
//		/*0x0F8*/     ULONG32      AffinityCount;
//		/*0x0FC*/     ULONG32      AffinityHistory;
//	}PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE;
//
//	typedef struct _KREQUEST_PACKET                   // 2 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        CurrentPacket[3];
//		/*0x018*/     FUNCT_00A3_082B_WorkerRoutine* WorkerRoutine;
//	}KREQUEST_PACKET, *PKREQUEST_PACKET;
//
//	typedef struct _REQUEST_MAILBOX            // 3 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     struct _REQUEST_MAILBOX* Next;
//		/*0x008*/     INT64        RequestSummary;
//		/*0x010*/     struct _KREQUEST_PACKET RequestPacket; // 2 elements, 0x20 bytes (sizeof)
//		/*0x030*/     UINT8        _PADDING0_[0x10];
//	}REQUEST_MAILBOX, *PREQUEST_MAILBOX;
//
//	typedef struct _KPRCB                                                   // 242 elements, 0x4D00 bytes (sizeof)
//	{
//		/*0x000*/      ULONG32      MxCsr;
//		/*0x004*/      UINT8        LegacyNumber;
//		/*0x005*/      UINT8        ReservedMustBeZero;
//		/*0x006*/      UINT8        InterruptRequest;
//		/*0x007*/      UINT8        IdleHalt;
//		/*0x008*/      struct _KTHREAD* CurrentThread;
//		/*0x010*/      struct _KTHREAD* NextThread;
//		/*0x018*/      struct _KTHREAD* IdleThread;
//		/*0x020*/      UINT8        NestingLevel;
//		/*0x021*/      UINT8        PrcbPad00[3];
//		/*0x024*/      ULONG32      Number;
//		/*0x028*/      UINT64       RspBase;
//		/*0x030*/      UINT64       PrcbLock;
//		/*0x038*/      UINT64       PrcbPad01;
//		/*0x040*/      struct _KPROCESSOR_STATE ProcessorState;                            // 2 elements, 0x5B0 bytes (sizeof)
//		/*0x5F0*/      CHAR         CpuType;
//		/*0x5F1*/      CHAR         CpuID;
//		union                                                               // 2 elements, 0x2 bytes (sizeof)
//		{
//			/*0x5F2*/          UINT16       CpuStep;
//			struct                                                          // 2 elements, 0x2 bytes (sizeof)
//			{
//				/*0x5F2*/              UINT8        CpuStepping;
//				/*0x5F3*/              UINT8        CpuModel;
//			};
//		};
//		/*0x5F4*/      ULONG32      MHz;
//		/*0x5F8*/      UINT64       HalReserved[8];
//		/*0x638*/      UINT16       MinorVersion;
//		/*0x63A*/      UINT16       MajorVersion;
//		/*0x63C*/      UINT8        BuildType;
//		/*0x63D*/      UINT8        CpuVendor;
//		/*0x63E*/      UINT8        CoresPerPhysicalProcessor;
//		/*0x63F*/      UINT8        LogicalProcessorsPerCore;
//		/*0x640*/      ULONG32      ApicMask;
//		/*0x644*/      ULONG32      CFlushSize;
//		/*0x648*/      VOID*        AcpiReserved;
//		/*0x650*/      ULONG32      InitialApicId;
//		/*0x654*/      ULONG32      Stride;
//		/*0x658*/      UINT16       Group;
//		/*0x65A*/      UINT8        _PADDING0_[0x6];
//		/*0x660*/      UINT64       GroupSetMember;
//		/*0x668*/      UINT8        GroupIndex;
//		/*0x669*/      UINT8        _PADDING1_[0x7];
//		/*0x670*/      struct _KSPIN_LOCK_QUEUE LockQueue[17];
//		/*0x780*/      struct _PP_LOOKASIDE_LIST PPLookasideList[16];
//		/*0x880*/      struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];
//		/*0x1480*/     struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];
//		/*0x2080*/     LONG32       PacketBarrier;
//		/*0x2084*/     UINT8        _PADDING2_[0x4];
//		/*0x2088*/     struct _SINGLE_LIST_ENTRY DeferredReadyListHead;                    // 1 elements, 0x8 bytes (sizeof)
//		/*0x2090*/     LONG32       MmPageFaultCount;
//		/*0x2094*/     LONG32       MmCopyOnWriteCount;
//		/*0x2098*/     LONG32       MmTransitionCount;
//		/*0x209C*/     LONG32       MmDemandZeroCount;
//		/*0x20A0*/     LONG32       MmPageReadCount;
//		/*0x20A4*/     LONG32       MmPageReadIoCount;
//		/*0x20A8*/     LONG32       MmDirtyPagesWriteCount;
//		/*0x20AC*/     LONG32       MmDirtyWriteIoCount;
//		/*0x20B0*/     LONG32       MmMappedPagesWriteCount;
//		/*0x20B4*/     LONG32       MmMappedWriteIoCount;
//		/*0x20B8*/     ULONG32      KeSystemCalls;
//		/*0x20BC*/     ULONG32      KeContextSwitches;
//		/*0x20C0*/     ULONG32      CcFastReadNoWait;
//		/*0x20C4*/     ULONG32      CcFastReadWait;
//		/*0x20C8*/     ULONG32      CcFastReadNotPossible;
//		/*0x20CC*/     ULONG32      CcCopyReadNoWait;
//		/*0x20D0*/     ULONG32      CcCopyReadWait;
//		/*0x20D4*/     ULONG32      CcCopyReadNoWaitMiss;
//		/*0x20D8*/     LONG32       LookasideIrpFloat;
//		/*0x20DC*/     LONG32       IoReadOperationCount;
//		/*0x20E0*/     LONG32       IoWriteOperationCount;
//		/*0x20E4*/     LONG32       IoOtherOperationCount;
//		/*0x20E8*/     union _LARGE_INTEGER IoReadTransferCount;                           // 4 elements, 0x8 bytes (sizeof)
//		/*0x20F0*/     union _LARGE_INTEGER IoWriteTransferCount;                          // 4 elements, 0x8 bytes (sizeof)
//		/*0x20F8*/     union _LARGE_INTEGER IoOtherTransferCount;                          // 4 elements, 0x8 bytes (sizeof)
//		/*0x2100*/     LONG32       TargetCount;
//		/*0x2104*/     ULONG32      IpiFrozen;
//		/*0x2108*/     UINT8        _PADDING3_[0x78];
//		/*0x2180*/     struct _KDPC_DATA DpcData[2];
//		/*0x21C0*/     VOID*        DpcStack;
//		/*0x21C8*/     LONG32       MaximumDpcQueueDepth;
//		/*0x21CC*/     ULONG32      DpcRequestRate;
//		/*0x21D0*/     ULONG32      MinimumDpcRate;
//		/*0x21D4*/     ULONG32      DpcLastCount;
//		/*0x21D8*/     UINT8        ThreadDpcEnable;
//		/*0x21D9*/     UINT8        QuantumEnd;
//		/*0x21DA*/     UINT8        DpcRoutineActive;
//		/*0x21DB*/     UINT8        IdleSchedule;
//		union                                                               // 3 elements, 0x4 bytes (sizeof)
//		{
//			/*0x21DC*/         LONG32       DpcRequestSummary;
//			/*0x21DC*/         INT16        DpcRequestSlot[2];
//			struct                                                          // 2 elements, 0x4 bytes (sizeof)
//			{
//				/*0x21DC*/             INT16        NormalDpcState;
//				union                                                       // 2 elements, 0x2 bytes (sizeof)
//				{
//					/*0x21DE*/                 UINT16       DpcThreadActive : 1;                       // 0 BitPosition
//					/*0x21DE*/                 INT16        ThreadDpcState;
//				};
//			};
//		};
//		/*0x21E0*/     ULONG32      TimerHand;
//		/*0x21E4*/     LONG32       MasterOffset;
//		/*0x21E8*/     ULONG32      LastTick;
//		/*0x21EC*/     ULONG32      UnusedPad;
//		/*0x21F0*/     UINT64       PrcbPad50[2];
//		/*0x2200*/     struct _KTIMER_TABLE TimerTable;                                    // 2 elements, 0x2200 bytes (sizeof)
//		/*0x4400*/     struct _KGATE DpcGate;                                              // 1 elements, 0x18 bytes (sizeof)
//		/*0x4418*/     VOID*        PrcbPad52;
//		/*0x4420*/     struct _KDPC CallDpc;                                               // 9 elements, 0x40 bytes (sizeof)
//		/*0x4460*/     LONG32       ClockKeepAlive;
//		/*0x4464*/     UINT8        ClockCheckSlot;
//		/*0x4465*/     UINT8        ClockPollCycle;
//		/*0x4466*/     UINT16       NmiActive;
//		/*0x4468*/     LONG32       DpcWatchdogPeriod;
//		/*0x446C*/     LONG32       DpcWatchdogCount;
//		/*0x4470*/     UINT64       TickOffset;
//		/*0x4478*/     LONG32       KeSpinLockOrdering;
//		/*0x447C*/     ULONG32      PrcbPad70;
//		/*0x4480*/     struct _LIST_ENTRY WaitListHead;                                    // 2 elements, 0x10 bytes (sizeof)
//		/*0x4490*/     UINT64       WaitLock;
//		/*0x4498*/     ULONG32      ReadySummary;
//		/*0x449C*/     ULONG32      QueueIndex;
//		/*0x44A0*/     struct _KDPC TimerExpirationDpc;                                    // 9 elements, 0x40 bytes (sizeof)
//		/*0x44E0*/     UINT64       PrcbPad72[4];
//		/*0x4500*/     struct _LIST_ENTRY DispatcherReadyListHead[32];
//		/*0x4700*/     ULONG32      InterruptCount;
//		/*0x4704*/     ULONG32      KernelTime;
//		/*0x4708*/     ULONG32      UserTime;
//		/*0x470C*/     ULONG32      DpcTime;
//		/*0x4710*/     ULONG32      InterruptTime;
//		/*0x4714*/     ULONG32      AdjustDpcThreshold;
//		/*0x4718*/     UINT8        DebuggerSavedIRQL;
//		/*0x4719*/     UINT8        PrcbPad80[7];
//		/*0x4720*/     ULONG32      DpcTimeCount;
//		/*0x4724*/     ULONG32      DpcTimeLimit;
//		/*0x4728*/     ULONG32      PeriodicCount;
//		/*0x472C*/     ULONG32      PeriodicBias;
//		/*0x4730*/     ULONG32      AvailableTime;
//		/*0x4734*/     ULONG32      KeExceptionDispatchCount;
//		/*0x4738*/     struct _KNODE* ParentNode;
//		/*0x4740*/     UINT64       StartCycles;
//		/*0x4748*/     UINT64       PrcbPad82[3];
//		/*0x4760*/     LONG32       MmSpinLockOrdering;
//		/*0x4764*/     ULONG32      PageColor;
//		/*0x4768*/     ULONG32      NodeColor;
//		/*0x476C*/     ULONG32      NodeShiftedColor;
//		/*0x4770*/     ULONG32      SecondaryColorMask;
//		/*0x4774*/     ULONG32      PrcbPad83;
//		/*0x4778*/     UINT64       CycleTime;
//		/*0x4780*/     ULONG32      CcFastMdlReadNoWait;
//		/*0x4784*/     ULONG32      CcFastMdlReadWait;
//		/*0x4788*/     ULONG32      CcFastMdlReadNotPossible;
//		/*0x478C*/     ULONG32      CcMapDataNoWait;
//		/*0x4790*/     ULONG32      CcMapDataWait;
//		/*0x4794*/     ULONG32      CcPinMappedDataCount;
//		/*0x4798*/     ULONG32      CcPinReadNoWait;
//		/*0x479C*/     ULONG32      CcPinReadWait;
//		/*0x47A0*/     ULONG32      CcMdlReadNoWait;
//		/*0x47A4*/     ULONG32      CcMdlReadWait;
//		/*0x47A8*/     ULONG32      CcLazyWriteHotSpots;
//		/*0x47AC*/     ULONG32      CcLazyWriteIos;
//		/*0x47B0*/     ULONG32      CcLazyWritePages;
//		/*0x47B4*/     ULONG32      CcDataFlushes;
//		/*0x47B8*/     ULONG32      CcDataPages;
//		/*0x47BC*/     ULONG32      CcLostDelayedWrites;
//		/*0x47C0*/     ULONG32      CcFastReadResourceMiss;
//		/*0x47C4*/     ULONG32      CcCopyReadWaitMiss;
//		/*0x47C8*/     ULONG32      CcFastMdlReadResourceMiss;
//		/*0x47CC*/     ULONG32      CcMapDataNoWaitMiss;
//		/*0x47D0*/     ULONG32      CcMapDataWaitMiss;
//		/*0x47D4*/     ULONG32      CcPinReadNoWaitMiss;
//		/*0x47D8*/     ULONG32      CcPinReadWaitMiss;
//		/*0x47DC*/     ULONG32      CcMdlReadNoWaitMiss;
//		/*0x47E0*/     ULONG32      CcMdlReadWaitMiss;
//		/*0x47E4*/     ULONG32      CcReadAheadIos;
//		/*0x47E8*/     LONG32       MmCacheTransitionCount;
//		/*0x47EC*/     LONG32       MmCacheReadCount;
//		/*0x47F0*/     LONG32       MmCacheIoCount;
//		/*0x47F4*/     ULONG32      PrcbPad91[1];
//		/*0x47F8*/     UINT64       RuntimeAccumulation;
//		/*0x4800*/     struct _PROCESSOR_POWER_STATE PowerState;                           // 27 elements, 0x100 bytes (sizeof)
//		/*0x4900*/     UINT8        PrcbPad92[16];
//		/*0x4910*/     ULONG32      KeAlignmentFixupCount;
//		/*0x4914*/     UINT8        _PADDING4_[0x4];
//		/*0x4918*/     struct _KDPC DpcWatchdogDpc;                                        // 9 elements, 0x40 bytes (sizeof)
//		/*0x4958*/     struct _KTIMER DpcWatchdogTimer;                                    // 6 elements, 0x40 bytes (sizeof)
//		/*0x4998*/     struct _CACHE_DESCRIPTOR Cache[5];
//		/*0x49D4*/     ULONG32      CacheCount;
//		/*0x49D8*/     ULONG32      CachedCommit;
//		/*0x49DC*/     ULONG32      CachedResidentAvailable;
//		/*0x49E0*/     VOID*        HyperPte;
//		/*0x49E8*/     VOID*        WheaInfo;
//		/*0x49F0*/     VOID*        EtwSupport;
//		/*0x49F8*/     UINT8        _PADDING5_[0x8];
//		/*0x4A00*/     union _SLIST_HEADER InterruptObjectPool;                            // 5 elements, 0x10 bytes (sizeof)
//		/*0x4A10*/     union _SLIST_HEADER HypercallPageList;                              // 5 elements, 0x10 bytes (sizeof)
//		/*0x4A20*/     VOID*        HypercallPageVirtual;
//		/*0x4A28*/     VOID*        VirtualApicAssist;
//		/*0x4A30*/     UINT64*      StatisticsPage;
//		/*0x4A38*/     VOID*        RateControl;
//		/*0x4A40*/     UINT64       CacheProcessorMask[5];
//		/*0x4A68*/     struct _KAFFINITY_EX PackageProcessorSet;                           // 4 elements, 0x28 bytes (sizeof)
//		/*0x4A90*/     UINT64       CoreProcessorSet;
//		/*0x4A98*/     VOID*        PebsIndexAddress;
//		/*0x4AA0*/     UINT64       PrcbPad93[12];
//		/*0x4B00*/     ULONG32      SpinLockAcquireCount;
//		/*0x4B04*/     ULONG32      SpinLockContentionCount;
//		/*0x4B08*/     ULONG32      SpinLockSpinCount;
//		/*0x4B0C*/     ULONG32      IpiSendRequestBroadcastCount;
//		/*0x4B10*/     ULONG32      IpiSendRequestRoutineCount;
//		/*0x4B14*/     ULONG32      IpiSendSoftwareInterruptCount;
//		/*0x4B18*/     ULONG32      ExInitializeResourceCount;
//		/*0x4B1C*/     ULONG32      ExReInitializeResourceCount;
//		/*0x4B20*/     ULONG32      ExDeleteResourceCount;
//		/*0x4B24*/     ULONG32      ExecutiveResourceAcquiresCount;
//		/*0x4B28*/     ULONG32      ExecutiveResourceContentionsCount;
//		/*0x4B2C*/     ULONG32      ExecutiveResourceReleaseExclusiveCount;
//		/*0x4B30*/     ULONG32      ExecutiveResourceReleaseSharedCount;
//		/*0x4B34*/     ULONG32      ExecutiveResourceConvertsCount;
//		/*0x4B38*/     ULONG32      ExAcqResExclusiveAttempts;
//		/*0x4B3C*/     ULONG32      ExAcqResExclusiveAcquiresExclusive;
//		/*0x4B40*/     ULONG32      ExAcqResExclusiveAcquiresExclusiveRecursive;
//		/*0x4B44*/     ULONG32      ExAcqResExclusiveWaits;
//		/*0x4B48*/     ULONG32      ExAcqResExclusiveNotAcquires;
//		/*0x4B4C*/     ULONG32      ExAcqResSharedAttempts;
//		/*0x4B50*/     ULONG32      ExAcqResSharedAcquiresExclusive;
//		/*0x4B54*/     ULONG32      ExAcqResSharedAcquiresShared;
//		/*0x4B58*/     ULONG32      ExAcqResSharedAcquiresSharedRecursive;
//		/*0x4B5C*/     ULONG32      ExAcqResSharedWaits;
//		/*0x4B60*/     ULONG32      ExAcqResSharedNotAcquires;
//		/*0x4B64*/     ULONG32      ExAcqResSharedStarveExclusiveAttempts;
//		/*0x4B68*/     ULONG32      ExAcqResSharedStarveExclusiveAcquiresExclusive;
//		/*0x4B6C*/     ULONG32      ExAcqResSharedStarveExclusiveAcquiresShared;
//		/*0x4B70*/     ULONG32      ExAcqResSharedStarveExclusiveAcquiresSharedRecursive;
//		/*0x4B74*/     ULONG32      ExAcqResSharedStarveExclusiveWaits;
//		/*0x4B78*/     ULONG32      ExAcqResSharedStarveExclusiveNotAcquires;
//		/*0x4B7C*/     ULONG32      ExAcqResSharedWaitForExclusiveAttempts;
//		/*0x4B80*/     ULONG32      ExAcqResSharedWaitForExclusiveAcquiresExclusive;
//		/*0x4B84*/     ULONG32      ExAcqResSharedWaitForExclusiveAcquiresShared;
//		/*0x4B88*/     ULONG32      ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive;
//		/*0x4B8C*/     ULONG32      ExAcqResSharedWaitForExclusiveWaits;
//		/*0x4B90*/     ULONG32      ExAcqResSharedWaitForExclusiveNotAcquires;
//		/*0x4B94*/     ULONG32      ExSetResOwnerPointerExclusive;
//		/*0x4B98*/     ULONG32      ExSetResOwnerPointerSharedNew;
//		/*0x4B9C*/     ULONG32      ExSetResOwnerPointerSharedOld;
//		/*0x4BA0*/     ULONG32      ExTryToAcqExclusiveAttempts;
//		/*0x4BA4*/     ULONG32      ExTryToAcqExclusiveAcquires;
//		/*0x4BA8*/     ULONG32      ExBoostExclusiveOwner;
//		/*0x4BAC*/     ULONG32      ExBoostSharedOwners;
//		/*0x4BB0*/     ULONG32      ExEtwSynchTrackingNotificationsCount;
//		/*0x4BB4*/     ULONG32      ExEtwSynchTrackingNotificationsAccountedCount;
//		/*0x4BB8*/     UINT8        VendorString[13];
//		/*0x4BC5*/     UINT8        PrcbPad10[3];
//		/*0x4BC8*/     ULONG32      FeatureBits;
//		/*0x4BCC*/     UINT8        _PADDING6_[0x4];
//		/*0x4BD0*/     union _LARGE_INTEGER UpdateSignature;                               // 4 elements, 0x8 bytes (sizeof)
//		/*0x4BD8*/     struct _CONTEXT* Context;
//		/*0x4BE0*/     ULONG32      ContextFlags;
//		/*0x4BE4*/     UINT8        _PADDING7_[0x4];
//		/*0x4BE8*/     struct _XSAVE_AREA* ExtendedState;
//		/*0x4BF0*/     UINT8        _PADDING8_[0x10];
//		/*0x4C00*/     struct _REQUEST_MAILBOX* Mailbox;
//		/*0x4C08*/     UINT8        _PADDING9_[0x78];
//		/*0x4C80*/     struct _REQUEST_MAILBOX RequestMailbox[1];
//		/*0x4CC0*/     UINT8        _PADDING10_[0x40];
//	}KPRCB, *PKPRCB;
//
//	typedef struct _KPCR                             // 27 elements, 0x4E80 bytes (sizeof)
//	{
//		union                                        // 2 elements, 0x38 bytes (sizeof)
//		{
//			/*0x000*/         struct _NT_TIB NtTib;                    // 8 elements, 0x38 bytes (sizeof)
//			struct                                   // 7 elements, 0x38 bytes (sizeof)
//			{
//				/*0x000*/             union _KGDTENTRY64* GdtBase;
//				/*0x008*/             struct _KTSS64* TssBase;
//				/*0x010*/             UINT64       UserRsp;
//				/*0x018*/             struct _KPCR* Self;
//				/*0x020*/             struct _KPRCB* CurrentPrcb;
//				/*0x028*/             struct _KSPIN_LOCK_QUEUE* LockArray;
//				/*0x030*/             VOID*        Used_Self;
//			};
//		};
//		/*0x038*/     union _KIDTENTRY64* IdtBase;
//		/*0x040*/     UINT64       Unused[2];
//		/*0x050*/     UINT8        Irql;
//		/*0x051*/     UINT8        SecondLevelCacheAssociativity;
//		/*0x052*/     UINT8        ObsoleteNumber;
//		/*0x053*/     UINT8        Fill0;
//		/*0x054*/     ULONG32      Unused0[3];
//		/*0x060*/     UINT16       MajorVersion;
//		/*0x062*/     UINT16       MinorVersion;
//		/*0x064*/     ULONG32      StallScaleFactor;
//		/*0x068*/     VOID*        Unused1[3];
//		/*0x080*/     ULONG32      KernelReserved[15];
//		/*0x0BC*/     ULONG32      SecondLevelCacheSize;
//		/*0x0C0*/     ULONG32      HalReserved[16];
//		/*0x100*/     ULONG32      Unused2;
//		/*0x104*/     UINT8        _PADDING0_[0x4];
//		/*0x108*/     VOID*        KdVersionBlock;
//		/*0x110*/     VOID*        Unused3;
//		/*0x118*/     ULONG32      PcrAlign1[24];
//		/*0x178*/     UINT8        _PADDING1_[0x8];
//		/*0x180*/     struct _KPRCB Prcb;                          // 242 elements, 0x4D00 bytes (sizeof)
//	}KPCR, *PKPCR;
//
//	typedef struct _RTL_AVL_TABLE                         // 11 elements, 0x68 bytes (sizeof)
//	{
//		/*0x000*/     struct _RTL_BALANCED_LINKS BalancedRoot;          // 5 elements, 0x20 bytes (sizeof)
//		/*0x020*/     VOID*        OrderedPointer;
//		/*0x028*/     ULONG32      WhichOrderedElement;
//		/*0x02C*/     ULONG32      NumberGenericTableElements;
//		/*0x030*/     ULONG32      DepthOfTree;
//		/*0x034*/     UINT8        _PADDING0_[0x4];
//		/*0x038*/     struct _RTL_BALANCED_LINKS* RestartKey;
//		/*0x040*/     ULONG32      DeleteCount;
//		/*0x044*/     UINT8        _PADDING1_[0x4];
//		/*0x048*/     FUNCT_164B_164A_CompareRoutine* CompareRoutine;
//		/*0x050*/     FUNCT_00A6_1654_AllocateRoutine* AllocateRoutine;
//		/*0x058*/     FUNCT_00A3_1658_FreeRoutine* FreeRoutine;
//		/*0x060*/     VOID*        TableContext;
//	}RTL_AVL_TABLE, *PRTL_AVL_TABLE;
//
//	typedef struct _KTMOBJECT_NAMESPACE // 5 elements, 0xA8 bytes (sizeof)
//	{
//		/*0x000*/     struct _RTL_AVL_TABLE Table;    // 11 elements, 0x68 bytes (sizeof)
//		/*0x068*/     struct _KMUTANT Mutex;          // 5 elements, 0x38 bytes (sizeof)
//		/*0x0A0*/     UINT16       LinksOffset;
//		/*0x0A2*/     UINT16       GuidOffset;
//		/*0x0A4*/     UINT8        Expired;
//		/*0x0A5*/     UINT8        _PADDING0_[0x3];
//	}KTMOBJECT_NAMESPACE, *PKTMOBJECT_NAMESPACE;
//
//	typedef struct _KRESOURCEMANAGER_COMPLETION_BINDING // 4 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY NotificationListHead;        // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     VOID*        Port;
//		/*0x018*/     UINT64       Key;
//		/*0x020*/     struct _EPROCESS* BindingProcess;
//	}KRESOURCEMANAGER_COMPLETION_BINDING, *PKRESOURCEMANAGER_COMPLETION_BINDING;
//
//	typedef struct _KRESOURCEMANAGER                                   // 20 elements, 0x250 bytes (sizeof)
//	{
//		/*0x000*/     struct _KEVENT NotificationAvailable;                          // 1 elements, 0x18 bytes (sizeof)
//		/*0x018*/     ULONG32      cookie;
//		/*0x01C*/     enum _KRESOURCEMANAGER_STATE State;
//		/*0x020*/     ULONG32      Flags;
//		/*0x024*/     UINT8        _PADDING0_[0x4];
//		/*0x028*/     struct _KMUTANT Mutex;                                         // 5 elements, 0x38 bytes (sizeof)
//		/*0x060*/     struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;                // 2 elements, 0x28 bytes (sizeof)
//		/*0x088*/     struct _GUID RmId;                                             // 4 elements, 0x10 bytes (sizeof)
//		/*0x098*/     struct _KQUEUE NotificationQueue;                              // 5 elements, 0x40 bytes (sizeof)
//		/*0x0D8*/     struct _KMUTANT NotificationMutex;                             // 5 elements, 0x38 bytes (sizeof)
//		/*0x110*/     struct _LIST_ENTRY EnlistmentHead;                             // 2 elements, 0x10 bytes (sizeof)
//		/*0x120*/     ULONG32      EnlistmentCount;
//		/*0x124*/     UINT8        _PADDING1_[0x4];
//		/*0x128*/     FUNCT_005B_1605_NotificationRoutine* NotificationRoutine;
//		/*0x130*/     VOID*        Key;
//		/*0x138*/     struct _LIST_ENTRY ProtocolListHead;                           // 2 elements, 0x10 bytes (sizeof)
//		/*0x148*/     struct _LIST_ENTRY PendingPropReqListHead;                     // 2 elements, 0x10 bytes (sizeof)
//		/*0x158*/     struct _LIST_ENTRY CRMListEntry;                               // 2 elements, 0x10 bytes (sizeof)
//		/*0x168*/     struct _KTM* Tm;
//		/*0x170*/     struct _UNICODE_STRING Description;                            // 3 elements, 0x10 bytes (sizeof)
//		/*0x180*/     struct _KTMOBJECT_NAMESPACE Enlistments;                       // 5 elements, 0xA8 bytes (sizeof)
//		/*0x228*/     struct _KRESOURCEMANAGER_COMPLETION_BINDING CompletionBinding; // 4 elements, 0x28 bytes (sizeof)
//	}KRESOURCEMANAGER, *PKRESOURCEMANAGER;
//
//	typedef struct _KSYSTEM_TIME // 3 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      LowPart;
//		/*0x004*/     LONG32       High1Time;
//		/*0x008*/     LONG32       High2Time;
//	}KSYSTEM_TIME, *PKSYSTEM_TIME;
//
//	typedef struct _KTHREAD_COUNTERS               // 7 elements, 0x1A8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       WaitReasonBitMap;
//		/*0x008*/     struct _THREAD_PERFORMANCE_DATA* UserData;
//		/*0x010*/     ULONG32      Flags;
//		/*0x014*/     ULONG32      ContextSwitches;
//		/*0x018*/     UINT64       CycleTimeBias;
//		/*0x020*/     UINT64       HardwareCounters;
//		/*0x028*/     struct _COUNTER_READING HwCounter[16];
//	}KTHREAD_COUNTERS, *PKTHREAD_COUNTERS;
//
//	typedef struct _KTM                                   // 33 elements, 0x3C0 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      cookie;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _KMUTANT Mutex;                            // 5 elements, 0x38 bytes (sizeof)
//		/*0x040*/     enum _KTM_STATE State;
//		/*0x044*/     UINT8        _PADDING1_[0x4];
//		/*0x048*/     struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;   // 2 elements, 0x28 bytes (sizeof)
//		/*0x070*/     struct _GUID TmIdentity;                          // 4 elements, 0x10 bytes (sizeof)
//		/*0x080*/     ULONG32      Flags;
//		/*0x084*/     ULONG32      VolatileFlags;
//		/*0x088*/     struct _UNICODE_STRING LogFileName;               // 3 elements, 0x10 bytes (sizeof)
//		/*0x098*/     struct _FILE_OBJECT* LogFileObject;
//		/*0x0A0*/     VOID*        MarshallingContext;
//		/*0x0A8*/     VOID*        LogManagementContext;
//		/*0x0B0*/     struct _KTMOBJECT_NAMESPACE Transactions;         // 5 elements, 0xA8 bytes (sizeof)
//		/*0x158*/     struct _KTMOBJECT_NAMESPACE ResourceManagers;     // 5 elements, 0xA8 bytes (sizeof)
//		/*0x200*/     struct _KMUTANT LsnOrderedMutex;                  // 5 elements, 0x38 bytes (sizeof)
//		/*0x238*/     struct _LIST_ENTRY LsnOrderedList;                // 2 elements, 0x10 bytes (sizeof)
//		/*0x248*/     union _LARGE_INTEGER CommitVirtualClock;          // 4 elements, 0x8 bytes (sizeof)
//		/*0x250*/     struct _FAST_MUTEX CommitVirtualClockMutex;       // 5 elements, 0x38 bytes (sizeof)
//		/*0x288*/     union _CLS_LSN BaseLsn;                           // 2 elements, 0x8 bytes (sizeof)
//		/*0x290*/     union _CLS_LSN CurrentReadLsn;                    // 2 elements, 0x8 bytes (sizeof)
//		/*0x298*/     union _CLS_LSN LastRecoveredLsn;                  // 2 elements, 0x8 bytes (sizeof)
//		/*0x2A0*/     VOID*        TmRmHandle;
//		/*0x2A8*/     struct _KRESOURCEMANAGER* TmRm;
//		/*0x2B0*/     struct _KEVENT LogFullNotifyEvent;                // 1 elements, 0x18 bytes (sizeof)
//		/*0x2C8*/     struct _WORK_QUEUE_ITEM CheckpointWorkItem;       // 3 elements, 0x20 bytes (sizeof)
//		/*0x2E8*/     union _CLS_LSN CheckpointTargetLsn;               // 2 elements, 0x8 bytes (sizeof)
//		/*0x2F0*/     struct _WORK_QUEUE_ITEM LogFullCompletedWorkItem; // 3 elements, 0x20 bytes (sizeof)
//		/*0x310*/     struct _ERESOURCE LogWriteResource;               // 15 elements, 0x68 bytes (sizeof)
//		/*0x378*/     ULONG32      LogFlags;
//		/*0x37C*/     LONG32       LogFullStatus;
//		/*0x380*/     LONG32       RecoveryStatus;
//		/*0x384*/     UINT8        _PADDING2_[0x4];
//		/*0x388*/     union _CLS_LSN LastCheckBaseLsn;                  // 2 elements, 0x8 bytes (sizeof)
//		/*0x390*/     struct _LIST_ENTRY RestartOrderedList;            // 2 elements, 0x10 bytes (sizeof)
//		/*0x3A0*/     struct _WORK_QUEUE_ITEM OfflineWorkItem;          // 3 elements, 0x20 bytes (sizeof)
//	}KTM, *PKTM;
//
//	typedef struct _KTMNOTIFICATION_PACKET // 0 elements, 0x0 bytes (sizeof)
//	{
//	}KTMNOTIFICATION_PACKET, *PKTMNOTIFICATION_PACKET;
//
//	typedef struct _KTRANSACTION_HISTORY                                 // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     enum ___2015110902002400E38D2E8A98F333853_RecordType RecordType;
//		/*0x004*/     ULONG32      Payload;
//	}KTRANSACTION_HISTORY, *PKTRANSACTION_HISTORY;
//
//	typedef struct _KTRANSACTION                              // 41 elements, 0x2D8 bytes (sizeof)
//	{
//		/*0x000*/     struct _KEVENT OutcomeEvent;                          // 1 elements, 0x18 bytes (sizeof)
//		/*0x018*/     ULONG32      cookie;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		/*0x020*/     struct _KMUTANT Mutex;                                // 5 elements, 0x38 bytes (sizeof)
//		/*0x058*/     struct _KTRANSACTION* TreeTx;
//		/*0x060*/     struct _KTMOBJECT_NAMESPACE_LINK GlobalNamespaceLink; // 2 elements, 0x28 bytes (sizeof)
//		/*0x088*/     struct _KTMOBJECT_NAMESPACE_LINK TmNamespaceLink;     // 2 elements, 0x28 bytes (sizeof)
//		/*0x0B0*/     struct _GUID UOW;                                     // 4 elements, 0x10 bytes (sizeof)
//		/*0x0C0*/     enum _KTRANSACTION_STATE State;
//		/*0x0C4*/     ULONG32      Flags;
//		/*0x0C8*/     struct _LIST_ENTRY EnlistmentHead;                    // 2 elements, 0x10 bytes (sizeof)
//		/*0x0D8*/     ULONG32      EnlistmentCount;
//		/*0x0DC*/     ULONG32      RecoverableEnlistmentCount;
//		/*0x0E0*/     ULONG32      PrePrepareRequiredEnlistmentCount;
//		/*0x0E4*/     ULONG32      PrepareRequiredEnlistmentCount;
//		/*0x0E8*/     ULONG32      OutcomeRequiredEnlistmentCount;
//		/*0x0EC*/     ULONG32      PendingResponses;
//		/*0x0F0*/     struct _KENLISTMENT* SuperiorEnlistment;
//		/*0x0F8*/     union _CLS_LSN LastLsn;                               // 2 elements, 0x8 bytes (sizeof)
//		/*0x100*/     struct _LIST_ENTRY PromotedEntry;                     // 2 elements, 0x10 bytes (sizeof)
//		/*0x110*/     struct _KTRANSACTION* PromoterTransaction;
//		/*0x118*/     VOID*        PromotePropagation;
//		/*0x120*/     ULONG32      IsolationLevel;
//		/*0x124*/     ULONG32      IsolationFlags;
//		/*0x128*/     union _LARGE_INTEGER Timeout;                         // 4 elements, 0x8 bytes (sizeof)
//		/*0x130*/     struct _UNICODE_STRING Description;                   // 3 elements, 0x10 bytes (sizeof)
//		/*0x140*/     struct _KTHREAD* RollbackThread;
//		/*0x148*/     struct _WORK_QUEUE_ITEM RollbackWorkItem;             // 3 elements, 0x20 bytes (sizeof)
//		/*0x168*/     struct _KDPC RollbackDpc;                             // 9 elements, 0x40 bytes (sizeof)
//		/*0x1A8*/     struct _KTIMER RollbackTimer;                         // 6 elements, 0x40 bytes (sizeof)
//		/*0x1E8*/     struct _LIST_ENTRY LsnOrderedEntry;                   // 2 elements, 0x10 bytes (sizeof)
//		/*0x1F8*/     enum _KTRANSACTION_OUTCOME Outcome;
//		/*0x1FC*/     UINT8        _PADDING1_[0x4];
//		/*0x200*/     struct _KTM* Tm;
//		/*0x208*/     INT64        CommitReservation;
//		/*0x210*/     struct _KTRANSACTION_HISTORY TransactionHistory[10];
//		/*0x260*/     ULONG32      TransactionHistoryCount;
//		/*0x264*/     UINT8        _PADDING2_[0x4];
//		/*0x268*/     VOID*        DTCPrivateInformation;
//		/*0x270*/     ULONG32      DTCPrivateInformationLength;
//		/*0x274*/     UINT8        _PADDING3_[0x4];
//		/*0x278*/     struct _KMUTANT DTCPrivateInformationMutex;           // 5 elements, 0x38 bytes (sizeof)
//		/*0x2B0*/     VOID*        PromotedTxSelfHandle;
//		/*0x2B8*/     ULONG32      PendingPromotionCount;
//		/*0x2BC*/     UINT8        _PADDING4_[0x4];
//		/*0x2C0*/     struct _KEVENT PromotionCompletedEvent;               // 1 elements, 0x18 bytes (sizeof)
//	}KTRANSACTION, *PKTRANSACTION;
//
//	typedef struct _KTRAP_FRAME                    // 64 elements, 0x190 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       P1Home;
//		/*0x008*/     UINT64       P2Home;
//		/*0x010*/     UINT64       P3Home;
//		/*0x018*/     UINT64       P4Home;
//		/*0x020*/     UINT64       P5;
//		/*0x028*/     CHAR         PreviousMode;
//		/*0x029*/     UINT8        PreviousIrql;
//		/*0x02A*/     UINT8        FaultIndicator;
//		/*0x02B*/     UINT8        ExceptionActive;
//		/*0x02C*/     ULONG32      MxCsr;
//		/*0x030*/     UINT64       Rax;
//		/*0x038*/     UINT64       Rcx;
//		/*0x040*/     UINT64       Rdx;
//		/*0x048*/     UINT64       R8;
//		/*0x050*/     UINT64       R9;
//		/*0x058*/     UINT64       R10;
//		/*0x060*/     UINT64       R11;
//		union                                      // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x068*/         UINT64       GsBase;
//			/*0x068*/         UINT64       GsSwap;
//		};
//		/*0x070*/     struct _M128A Xmm0;                        // 2 elements, 0x10 bytes (sizeof)
//		/*0x080*/     struct _M128A Xmm1;                        // 2 elements, 0x10 bytes (sizeof)
//		/*0x090*/     struct _M128A Xmm2;                        // 2 elements, 0x10 bytes (sizeof)
//		/*0x0A0*/     struct _M128A Xmm3;                        // 2 elements, 0x10 bytes (sizeof)
//		/*0x0B0*/     struct _M128A Xmm4;                        // 2 elements, 0x10 bytes (sizeof)
//		/*0x0C0*/     struct _M128A Xmm5;                        // 2 elements, 0x10 bytes (sizeof)
//		union                                      // 3 elements, 0x8 bytes (sizeof)
//		{
//			/*0x0D0*/         UINT64       FaultAddress;
//			/*0x0D0*/         UINT64       ContextRecord;
//			/*0x0D0*/         UINT64       TimeStampCKCL;
//		};
//		/*0x0D8*/     UINT64       Dr0;
//		/*0x0E0*/     UINT64       Dr1;
//		/*0x0E8*/     UINT64       Dr2;
//		/*0x0F0*/     UINT64       Dr3;
//		/*0x0F8*/     UINT64       Dr6;
//		/*0x100*/     UINT64       Dr7;
//		union                                      // 2 elements, 0x28 bytes (sizeof)
//		{
//			struct                                 // 5 elements, 0x28 bytes (sizeof)
//			{
//				/*0x108*/             UINT64       DebugControl;
//				/*0x110*/             UINT64       LastBranchToRip;
//				/*0x118*/             UINT64       LastBranchFromRip;
//				/*0x120*/             UINT64       LastExceptionToRip;
//				/*0x128*/             UINT64       LastExceptionFromRip;
//			};
//			struct                                 // 2 elements, 0x28 bytes (sizeof)
//			{
//				/*0x108*/             UINT64       LastBranchControl;
//				/*0x110*/             ULONG32      LastBranchMSR;
//				/*0x114*/             UINT8        _PADDING0_[0x1C];
//			};
//		};
//		/*0x130*/     UINT16       SegDs;
//		/*0x132*/     UINT16       SegEs;
//		/*0x134*/     UINT16       SegFs;
//		/*0x136*/     UINT16       SegGs;
//		/*0x138*/     UINT64       TrapFrame;
//		/*0x140*/     UINT64       Rbx;
//		/*0x148*/     UINT64       Rdi;
//		/*0x150*/     UINT64       Rsi;
//		/*0x158*/     UINT64       Rbp;
//		union                                      // 3 elements, 0x8 bytes (sizeof)
//		{
//			/*0x160*/         UINT64       ErrorCode;
//			/*0x160*/         UINT64       ExceptionFrame;
//			/*0x160*/         UINT64       TimeStampKlog;
//		};
//		/*0x168*/     UINT64       Rip;
//		/*0x170*/     UINT16       SegCs;
//		/*0x172*/     UINT8        Fill0;
//		/*0x173*/     UINT8        Logging;
//		/*0x174*/     UINT16       Fill1[2];
//		/*0x178*/     ULONG32      EFlags;
//		/*0x17C*/     ULONG32      Fill2;
//		/*0x180*/     UINT64       Rsp;
//		/*0x188*/     UINT16       SegSs;
//		/*0x18A*/     UINT16       Fill3;
//		/*0x18C*/     LONG32       CodePatchCycle;
//	}KTRAP_FRAME, *PKTRAP_FRAME;
//
//	typedef struct _KTSS64      // 8 elements, 0x68 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Reserved0;
//		/*0x004*/     UINT64       Rsp0;
//		/*0x00C*/     UINT64       Rsp1;
//		/*0x014*/     UINT64       Rsp2;
//		/*0x01C*/     UINT64       Ist[8];
//		/*0x05C*/     UINT64       Reserved1;
//		/*0x064*/     UINT16       Reserved2;
//		/*0x066*/     UINT16       IoMapBase;
//	}KTSS64, *PKTSS64;
//
//	typedef struct _KUMS_CONTEXT_HEADER           // 16 elements, 0x70 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       P1Home;
//		/*0x008*/     UINT64       P2Home;
//		/*0x010*/     UINT64       P3Home;
//		/*0x018*/     UINT64       P4Home;
//		/*0x020*/     VOID*        StackTop;
//		/*0x028*/     UINT64       StackSize;
//		/*0x030*/     UINT64       RspOffset;
//		/*0x038*/     UINT64       Rip;
//		/*0x040*/     struct _XSAVE_FORMAT* FltSave;
//		union                                     // 2 elements, 0x8 bytes (sizeof)
//		{
//			struct                                // 2 elements, 0x8 bytes (sizeof)
//			{
//				/*0x048*/             UINT64       Volatile : 1;        // 0 BitPosition
//				/*0x048*/             UINT64       Reserved : 63;       // 1 BitPosition
//			};
//			/*0x048*/         UINT64       Flags;
//		};
//		/*0x050*/     struct _KTRAP_FRAME* TrapFrame;
//		/*0x058*/     struct _KEXCEPTION_FRAME* ExceptionFrame;
//		/*0x060*/     struct _KTHREAD* SourceThread;
//		/*0x068*/     UINT64       Return;
//	}KUMS_CONTEXT_HEADER, *PKUMS_CONTEXT_HEADER;
//
//	typedef struct _XSTATE_FEATURE // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Offset;
//		/*0x004*/     ULONG32      Size;
//	}XSTATE_FEATURE, *PXSTATE_FEATURE;
//
//	typedef struct _XSTATE_CONFIGURATION     // 4 elements, 0x210 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       EnabledFeatures;
//		/*0x008*/     ULONG32      Size;
//		/*0x00C*/     ULONG32      OptimizedSave : 1;      // 0 BitPosition
//		/*0x010*/     struct _XSTATE_FEATURE Features[64];
//	}XSTATE_CONFIGURATION, *PXSTATE_CONFIGURATION;
//
//	typedef struct _KUSER_SHARED_DATA                                // 75 elements, 0x5F0 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      TickCountLowDeprecated;
//		/*0x004*/     ULONG32      TickCountMultiplier;
//		/*0x008*/     struct _KSYSTEM_TIME InterruptTime;                          // 3 elements, 0xC bytes (sizeof)
//		/*0x014*/     struct _KSYSTEM_TIME SystemTime;                             // 3 elements, 0xC bytes (sizeof)
//		/*0x020*/     struct _KSYSTEM_TIME TimeZoneBias;                           // 3 elements, 0xC bytes (sizeof)
//		/*0x02C*/     UINT16       ImageNumberLow;
//		/*0x02E*/     UINT16       ImageNumberHigh;
//		/*0x030*/     WCHAR        NtSystemRoot[260];
//		/*0x238*/     ULONG32      MaxStackTraceDepth;
//		/*0x23C*/     ULONG32      CryptoExponent;
//		/*0x240*/     ULONG32      TimeZoneId;
//		/*0x244*/     ULONG32      LargePageMinimum;
//		/*0x248*/     ULONG32      Reserved2[7];
//		/*0x264*/     enum _NT_PRODUCT_TYPE NtProductType;
//		/*0x268*/     UINT8        ProductTypeIsValid;
//		/*0x269*/     UINT8        _PADDING0_[0x3];
//		/*0x26C*/     ULONG32      NtMajorVersion;
//		/*0x270*/     ULONG32      NtMinorVersion;
//		/*0x274*/     UINT8        ProcessorFeatures[64];
//		/*0x2B4*/     ULONG32      Reserved1;
//		/*0x2B8*/     ULONG32      Reserved3;
//		/*0x2BC*/     ULONG32      TimeSlip;
//		/*0x2C0*/     enum _ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
//		/*0x2C4*/     ULONG32      AltArchitecturePad[1];
//		/*0x2C8*/     union _LARGE_INTEGER SystemExpirationDate;                   // 4 elements, 0x8 bytes (sizeof)
//		/*0x2D0*/     ULONG32      SuiteMask;
//		/*0x2D4*/     UINT8        KdDebuggerEnabled;
//		/*0x2D5*/     UINT8        NXSupportPolicy;
//		/*0x2D6*/     UINT8        _PADDING1_[0x2];
//		/*0x2D8*/     ULONG32      ActiveConsoleId;
//		/*0x2DC*/     ULONG32      DismountCount;
//		/*0x2E0*/     ULONG32      ComPlusPackage;
//		/*0x2E4*/     ULONG32      LastSystemRITEventTickCount;
//		/*0x2E8*/     ULONG32      NumberOfPhysicalPages;
//		/*0x2EC*/     UINT8        SafeBootMode;
//		union                                                        // 2 elements, 0x1 bytes (sizeof)
//		{
//			/*0x2ED*/         UINT8        TscQpcData;
//			struct                                                   // 3 elements, 0x1 bytes (sizeof)
//			{
//				/*0x2ED*/             UINT8        TscQpcEnabled : 1;                      // 0 BitPosition
//				/*0x2ED*/             UINT8        TscQpcSpareFlag : 1;                    // 1 BitPosition
//				/*0x2ED*/             UINT8        TscQpcShift : 6;                        // 2 BitPosition
//			};
//		};
//		/*0x2EE*/     UINT8        TscQpcPad[2];
//		union                                                        // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x2F0*/         ULONG32      SharedDataFlags;
//			struct                                                   // 8 elements, 0x4 bytes (sizeof)
//			{
//				/*0x2F0*/             ULONG32      DbgErrorPortPresent : 1;                // 0 BitPosition
//				/*0x2F0*/             ULONG32      DbgElevationEnabled : 1;                // 1 BitPosition
//				/*0x2F0*/             ULONG32      DbgVirtEnabled : 1;                     // 2 BitPosition
//				/*0x2F0*/             ULONG32      DbgInstallerDetectEnabled : 1;          // 3 BitPosition
//				/*0x2F0*/             ULONG32      DbgSystemDllRelocated : 1;              // 4 BitPosition
//				/*0x2F0*/             ULONG32      DbgDynProcessorEnabled : 1;             // 5 BitPosition
//				/*0x2F0*/             ULONG32      DbgSEHValidationEnabled : 1;            // 6 BitPosition
//				/*0x2F0*/             ULONG32      SpareBits : 25;                         // 7 BitPosition
//			};
//		};
//		/*0x2F4*/     ULONG32      DataFlagsPad[1];
//		/*0x2F8*/     UINT64       TestRetInstruction;
//		/*0x300*/     ULONG32      SystemCall;
//		/*0x304*/     ULONG32      SystemCallReturn;
//		/*0x308*/     UINT64       SystemCallPad[3];
//		union                                                        // 3 elements, 0xC bytes (sizeof)
//		{
//			/*0x320*/         struct _KSYSTEM_TIME TickCount;                          // 3 elements, 0xC bytes (sizeof)
//			/*0x320*/         UINT64       TickCountQuad;
//			/*0x320*/         ULONG32      ReservedTickCountOverlay[3];
//		};
//		/*0x32C*/     ULONG32      TickCountPad[1];
//		/*0x330*/     ULONG32      Cookie;
//		/*0x334*/     ULONG32      CookiePad[1];
//		/*0x338*/     INT64        ConsoleSessionForegroundProcessId;
//		/*0x340*/     ULONG32      DEPRECATED_Wow64SharedInformation[16];
//		/*0x380*/     UINT16       UserModeGlobalLogger[16];
//		/*0x3A0*/     ULONG32      ImageFileExecutionOptions;
//		/*0x3A4*/     ULONG32      LangGenerationCount;
//		/*0x3A8*/     UINT64       Reserved5;
//		/*0x3B0*/     UINT64       InterruptTimeBias;
//		/*0x3B8*/     UINT64       TscQpcBias;
//		/*0x3C0*/     ULONG32      ActiveProcessorCount;
//		/*0x3C4*/     UINT16       ActiveGroupCount;
//		/*0x3C6*/     UINT16       Reserved4;
//		/*0x3C8*/     ULONG32      AitSamplingValue;
//		/*0x3CC*/     ULONG32      AppCompatFlag;
//		/*0x3D0*/     UINT64       DEPRECATED_SystemDllNativeRelocation;
//		/*0x3D8*/     ULONG32      DEPRECATED_SystemDllWowRelocation;
//		/*0x3DC*/     ULONG32      XStatePad[1];
//		/*0x3E0*/     struct _XSTATE_CONFIGURATION XState;                         // 4 elements, 0x210 bytes (sizeof)
//	}KUSER_SHARED_DATA, *PKUSER_SHARED_DATA;
//
//	typedef struct _LAZY_WRITER            // 8 elements, 0x88 bytes (sizeof)
//	{
//		/*0x000*/     struct _KDPC ScanDpc;              // 9 elements, 0x40 bytes (sizeof)
//		/*0x040*/     struct _KTIMER ScanTimer;          // 6 elements, 0x40 bytes (sizeof)
//		/*0x080*/     UINT8        ScanActive;
//		/*0x081*/     UINT8        OtherWork;
//		/*0x082*/     UINT8        PendingTeardownScan;
//		/*0x083*/     UINT8        PendingPeriodicScan;
//		/*0x084*/     UINT8        PendingLowMemoryScan;
//		/*0x085*/     UINT8        PendingPowerScan;
//		/*0x086*/     UINT8        _PADDING0_[0x2];
//	}LAZY_WRITER, *PLAZY_WRITER;
//
//	typedef struct _LDR_DATA_TABLE_ENTRY                         // 24 elements, 0xE0 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY InLoadOrderLinks;                     // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _LIST_ENTRY InMemoryOrderLinks;                   // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     struct _LIST_ENTRY InInitializationOrderLinks;           // 2 elements, 0x10 bytes (sizeof)
//		/*0x030*/     VOID*        DllBase;
//		/*0x038*/     VOID*        EntryPoint;
//		/*0x040*/     ULONG32      SizeOfImage;
//		/*0x044*/     UINT8        _PADDING0_[0x4];
//		/*0x048*/     struct _UNICODE_STRING FullDllName;                      // 3 elements, 0x10 bytes (sizeof)
//		/*0x058*/     struct _UNICODE_STRING BaseDllName;                      // 3 elements, 0x10 bytes (sizeof)
//		/*0x068*/     ULONG32      Flags;
//		/*0x06C*/     UINT16       LoadCount;
//		/*0x06E*/     UINT16       TlsIndex;
//		union                                                    // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x070*/         struct _LIST_ENTRY HashLinks;                        // 2 elements, 0x10 bytes (sizeof)
//			struct                                               // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x070*/             VOID*        SectionPointer;
//				/*0x078*/             ULONG32      CheckSum;
//				/*0x07C*/             UINT8        _PADDING1_[0x4];
//			};
//		};
//		union                                                    // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x080*/         ULONG32      TimeDateStamp;
//			/*0x080*/         VOID*        LoadedImports;
//		};
//		/*0x088*/     struct _ACTIVATION_CONTEXT* EntryPointActivationContext;
//		/*0x090*/     VOID*        PatchInformation;
//		/*0x098*/     struct _LIST_ENTRY ForwarderLinks;                       // 2 elements, 0x10 bytes (sizeof)
//		/*0x0A8*/     struct _LIST_ENTRY ServiceTagLinks;                      // 2 elements, 0x10 bytes (sizeof)
//		/*0x0B8*/     struct _LIST_ENTRY StaticLinks;                          // 2 elements, 0x10 bytes (sizeof)
//		/*0x0C8*/     VOID*        ContextInformation;
//		/*0x0D0*/     UINT64       OriginalBase;
//		/*0x0D8*/     union _LARGE_INTEGER LoadTime;                           // 4 elements, 0x8 bytes (sizeof)
//	}LDR_DATA_TABLE_ENTRY, *PLDR_DATA_TABLE_ENTRY;
//
//	typedef struct _LIST_ENTRY32 // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Flink;
//		/*0x004*/     ULONG32      Blink;
//	}LIST_ENTRY32, *PLIST_ENTRY32;
//
//	typedef struct _LIST_ENTRY64 // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Flink;
//		/*0x008*/     UINT64       Blink;
//	}LIST_ENTRY64, *PLIST_ENTRY64;
//
//	typedef struct _LOADER_PARAMETER_BLOCK                             // 25 elements, 0xF0 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      OsMajorVersion;
//		/*0x004*/     ULONG32      OsMinorVersion;
//		/*0x008*/     ULONG32      Size;
//		/*0x00C*/     ULONG32      Reserved;
//		/*0x010*/     struct _LIST_ENTRY LoadOrderListHead;                          // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     struct _LIST_ENTRY MemoryDescriptorListHead;                   // 2 elements, 0x10 bytes (sizeof)
//		/*0x030*/     struct _LIST_ENTRY BootDriverListHead;                         // 2 elements, 0x10 bytes (sizeof)
//		/*0x040*/     UINT64       KernelStack;
//		/*0x048*/     UINT64       Prcb;
//		/*0x050*/     UINT64       Process;
//		/*0x058*/     UINT64       Thread;
//		/*0x060*/     ULONG32      RegistryLength;
//		/*0x064*/     UINT8        _PADDING0_[0x4];
//		/*0x068*/     VOID*        RegistryBase;
//		/*0x070*/     struct _CONFIGURATION_COMPONENT_DATA* ConfigurationRoot;
//		/*0x078*/     CHAR*        ArcBootDeviceName;
//		/*0x080*/     CHAR*        ArcHalDeviceName;
//		/*0x088*/     CHAR*        NtBootPathName;
//		/*0x090*/     CHAR*        NtHalPathName;
//		/*0x098*/     CHAR*        LoadOptions;
//		/*0x0A0*/     struct _NLS_DATA_BLOCK* NlsData;
//		/*0x0A8*/     struct _ARC_DISK_INFORMATION* ArcDiskInformation;
//		/*0x0B0*/     VOID*        OemFontFile;
//		/*0x0B8*/     struct _LOADER_PARAMETER_EXTENSION* Extension;
//		union                                                          // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x0C0*/         struct _I386_LOADER_BLOCK I386;                            // 3 elements, 0x10 bytes (sizeof)
//			/*0x0C0*/         struct _IA64_LOADER_BLOCK Ia64;                            // 1 elements, 0x4 bytes (sizeof)
//		}u;
//		/*0x0D0*/     struct _FIRMWARE_INFORMATION_LOADER_BLOCK FirmwareInformation; // 3 elements, 0x20 bytes (sizeof)
//	}LOADER_PARAMETER_BLOCK, *PLOADER_PARAMETER_BLOCK;
//
//	typedef struct _PROFILE_PARAMETER_BLOCK // 6 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Status;
//		/*0x002*/     UINT16       Reserved;
//		/*0x004*/     UINT16       DockingState;
//		/*0x006*/     UINT16       Capabilities;
//		/*0x008*/     ULONG32      DockID;
//		/*0x00C*/     ULONG32      SerialNumber;
//	}PROFILE_PARAMETER_BLOCK, *PPROFILE_PARAMETER_BLOCK;
//
//	typedef struct _TPM_BOOT_ENTROPY_LDR_RESULT        // 6 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Policy;
//		/*0x008*/     enum _TPM_BOOT_ENTROPY_RESULT_CODE ResultCode;
//		/*0x00C*/     LONG32       ResultStatus;
//		/*0x010*/     UINT64       Time;
//		/*0x018*/     ULONG32      EntropyLength;
//		/*0x01C*/     UINT8        EntropyData[40];
//		/*0x044*/     UINT8        _PADDING0_[0x4];
//	}TPM_BOOT_ENTROPY_LDR_RESULT, *PTPM_BOOT_ENTROPY_LDR_RESULT;
//
//	typedef struct _LOADER_PARAMETER_EXTENSION                    // 32 elements, 0x148 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Size;
//		/*0x004*/     struct _PROFILE_PARAMETER_BLOCK Profile;                  // 6 elements, 0x10 bytes (sizeof)
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//		/*0x018*/     VOID*        EmInfFileImage;
//		/*0x020*/     ULONG32      EmInfFileSize;
//		/*0x024*/     UINT8        _PADDING1_[0x4];
//		/*0x028*/     VOID*        TriageDumpBlock;
//		/*0x030*/     UINT64       LoaderPagesSpanned;
//		/*0x038*/     struct _HEADLESS_LOADER_BLOCK* HeadlessLoaderBlock;
//		/*0x040*/     struct _SMBIOS_TABLE_HEADER* SMBiosEPSHeader;
//		/*0x048*/     VOID*        DrvDBImage;
//		/*0x050*/     ULONG32      DrvDBSize;
//		/*0x054*/     UINT8        _PADDING2_[0x4];
//		/*0x058*/     struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;
//		/*0x060*/     struct _LIST_ENTRY FirmwareDescriptorListHead;            // 2 elements, 0x10 bytes (sizeof)
//		/*0x070*/     VOID*        AcpiTable;
//		/*0x078*/     ULONG32      AcpiTableSize;
//		struct                                                    // 4 elements, 0x4 bytes (sizeof)
//		{
//			/*0x07C*/         ULONG32      LastBootSucceeded : 1;                   // 0 BitPosition
//			/*0x07C*/         ULONG32      LastBootShutdown : 1;                    // 1 BitPosition
//			/*0x07C*/         ULONG32      IoPortAccessSupported : 1;               // 2 BitPosition
//			/*0x07C*/         ULONG32      Reserved : 29;                           // 3 BitPosition
//		};
//		/*0x080*/     struct _LOADER_PERFORMANCE_DATA* LoaderPerformanceData;
//		/*0x088*/     struct _LIST_ENTRY BootApplicationPersistentData;         // 2 elements, 0x10 bytes (sizeof)
//		/*0x098*/     VOID*        WmdTestResult;
//		/*0x0A0*/     struct _GUID BootIdentifier;                              // 4 elements, 0x10 bytes (sizeof)
//		/*0x0B0*/     ULONG32      ResumePages;
//		/*0x0B4*/     UINT8        _PADDING3_[0x4];
//		/*0x0B8*/     VOID*        DumpHeader;
//		/*0x0C0*/     VOID*        BgContext;
//		/*0x0C8*/     VOID*        NumaLocalityInfo;
//		/*0x0D0*/     VOID*        NumaGroupAssignment;
//		/*0x0D8*/     struct _LIST_ENTRY AttachedHives;                         // 2 elements, 0x10 bytes (sizeof)
//		/*0x0E8*/     ULONG32      MemoryCachingRequirementsCount;
//		/*0x0EC*/     UINT8        _PADDING4_[0x4];
//		/*0x0F0*/     VOID*        MemoryCachingRequirements;
//		/*0x0F8*/     struct _TPM_BOOT_ENTROPY_LDR_RESULT TpmBootEntropyResult; // 6 elements, 0x48 bytes (sizeof)
//		/*0x140*/     UINT64       ProcessorCounterFrequency;
//	}LOADER_PARAMETER_EXTENSION, *PLOADER_PARAMETER_EXTENSION;
//
//	typedef struct _LOADER_PERFORMANCE_DATA // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       StartTime;
//		/*0x008*/     UINT64       EndTime;
//	}LOADER_PERFORMANCE_DATA, *PLOADER_PERFORMANCE_DATA;
//
//	typedef struct _LOOKASIDE_LIST_EX     // 1 elements, 0x60 bytes (sizeof)
//	{
//		/*0x000*/     struct _GENERAL_LOOKASIDE_POOL L; // 22 elements, 0x60 bytes (sizeof)
//	}LOOKASIDE_LIST_EX, *PLOOKASIDE_LIST_EX;
//
//	typedef struct _LPCP_MESSAGE                     // 7 elements, 0x50 bytes (sizeof)
//	{
//		union                                        // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x000*/         struct _LIST_ENTRY Entry;                // 2 elements, 0x10 bytes (sizeof)
//			struct                                   // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x000*/             struct _SINGLE_LIST_ENTRY FreeEntry; // 1 elements, 0x8 bytes (sizeof)
//				/*0x008*/             ULONG32      Reserved0;
//				/*0x00C*/             UINT8        _PADDING0_[0x4];
//			};
//		};
//		/*0x010*/     VOID*        SenderPort;
//		/*0x018*/     struct _ETHREAD* RepliedToThread;
//		/*0x020*/     VOID*        PortContext;
//		/*0x028*/     struct _PORT_MESSAGE Request;                // 7 elements, 0x28 bytes (sizeof)
//	}LPCP_MESSAGE, *PLPCP_MESSAGE;
//
//	typedef struct _LPCP_NONPAGED_PORT_QUEUE   // 2 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _KSEMAPHORE Semaphore;          // 2 elements, 0x20 bytes (sizeof)
//		/*0x020*/     struct _LPCP_PORT_OBJECT* BackPointer;
//	}LPCP_NONPAGED_PORT_QUEUE, *PLPCP_NONPAGED_PORT_QUEUE;
//
//	typedef struct _LPCP_PORT_QUEUE                          // 3 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _LPCP_NONPAGED_PORT_QUEUE* NonPagedPortQueue;
//		/*0x008*/     struct _KSEMAPHORE* Semaphore;
//		/*0x010*/     struct _LIST_ENTRY ReceiveHead;                      // 2 elements, 0x10 bytes (sizeof)
//	}LPCP_PORT_QUEUE, *PLPCP_PORT_QUEUE;
//
//	typedef struct _LPCP_PORT_OBJECT                     // 18 elements, 0x100 bytes (sizeof)
//	{
//		/*0x000*/     struct _LPCP_PORT_OBJECT* ConnectionPort;
//		/*0x008*/     struct _LPCP_PORT_OBJECT* ConnectedPort;
//		/*0x010*/     struct _LPCP_PORT_QUEUE MsgQueue;                // 3 elements, 0x20 bytes (sizeof)
//		/*0x030*/     struct _CLIENT_ID Creator;                       // 2 elements, 0x10 bytes (sizeof)
//		/*0x040*/     VOID*        ClientSectionBase;
//		/*0x048*/     VOID*        ServerSectionBase;
//		/*0x050*/     VOID*        PortContext;
//		/*0x058*/     struct _ETHREAD* ClientThread;
//		/*0x060*/     struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // 4 elements, 0xC bytes (sizeof)
//		/*0x06C*/     UINT8        _PADDING0_[0x4];
//		/*0x070*/     struct _SECURITY_CLIENT_CONTEXT StaticSecurity;  // 6 elements, 0x48 bytes (sizeof)
//		/*0x0B8*/     struct _LIST_ENTRY LpcReplyChainHead;            // 2 elements, 0x10 bytes (sizeof)
//		/*0x0C8*/     struct _LIST_ENTRY LpcDataInfoChainHead;         // 2 elements, 0x10 bytes (sizeof)
//		union                                            // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x0D8*/         struct _EPROCESS* ServerProcess;
//			/*0x0D8*/         struct _EPROCESS* MappingProcess;
//		};
//		/*0x0E0*/     UINT16       MaxMessageLength;
//		/*0x0E2*/     UINT16       MaxConnectionInfoLength;
//		/*0x0E4*/     ULONG32      Flags;
//		/*0x0E8*/     struct _KEVENT WaitEvent;                        // 1 elements, 0x18 bytes (sizeof)
//	}LPCP_PORT_OBJECT, *PLPCP_PORT_OBJECT;
//
//	typedef struct _MAILSLOT_CREATE_PARAMETERS // 4 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      MailslotQuota;
//		/*0x004*/     ULONG32      MaximumMessageSize;
//		/*0x008*/     union _LARGE_INTEGER ReadTimeout;      // 4 elements, 0x8 bytes (sizeof)
//		/*0x010*/     UINT8        TimeoutSpecified;
//		/*0x011*/     UINT8        _PADDING0_[0x7];
//	}MAILSLOT_CREATE_PARAMETERS, *PMAILSLOT_CREATE_PARAMETERS;
//
//	typedef struct _SEGMENT_FLAGS                   // 12 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      TotalNumberOfPtes4132 : 10;    // 0 BitPosition
//		/*0x000*/     ULONG32      ExtraSharedWowSubsections : 1; // 10 BitPosition
//		/*0x000*/     ULONG32      LargePages : 1;                // 11 BitPosition
//		/*0x000*/     ULONG32      WatchProto : 1;                // 12 BitPosition
//		/*0x000*/     ULONG32      DebugSymbolsLoaded : 1;        // 13 BitPosition
//		/*0x000*/     ULONG32      WriteCombined : 1;             // 14 BitPosition
//		/*0x000*/     ULONG32      NoCache : 1;                   // 15 BitPosition
//		/*0x000*/     ULONG32      FloppyMedia : 1;               // 16 BitPosition
//		/*0x000*/     ULONG32      DefaultProtectionMask : 5;     // 17 BitPosition
//		/*0x000*/     ULONG32      Binary32 : 1;                  // 22 BitPosition
//		/*0x000*/     ULONG32      ContainsDebug : 1;             // 23 BitPosition
//		/*0x000*/     ULONG32      Spare : 8;                     // 24 BitPosition
//	}SEGMENT_FLAGS, *PSEGMENT_FLAGS;
//
//	typedef struct _MAPPED_FILE_SEGMENT        // 8 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     struct _CONTROL_AREA* ControlArea;
//		/*0x008*/     ULONG32      TotalNumberOfPtes;
//		/*0x00C*/     struct _SEGMENT_FLAGS SegmentFlags;    // 12 elements, 0x4 bytes (sizeof)
//		/*0x010*/     UINT64       NumberOfCommittedPages;
//		/*0x018*/     UINT64       SizeOfSegment;
//		union                                  // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x020*/         struct _MMEXTEND_INFO* ExtendInfo;
//			/*0x020*/         VOID*        BasedAddress;
//		};
//		/*0x028*/     struct _EX_PUSH_LOCK SegmentLock;      // 7 elements, 0x8 bytes (sizeof)
//	}MAPPED_FILE_SEGMENT, *PMAPPED_FILE_SEGMENT;
//
//	typedef struct _MBCB                      // 11 elements, 0xC0 bytes (sizeof)
//	{
//		/*0x000*/     INT16        NodeTypeCode;
//		/*0x002*/     INT16        NodeIsInZone;
//		/*0x004*/     ULONG32      PagesToWrite;
//		/*0x008*/     ULONG32      DirtyPages;
//		/*0x00C*/     ULONG32      Reserved;
//		/*0x010*/     struct _LIST_ENTRY BitmapRanges;      // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     INT64        ResumeWritePage;
//		/*0x028*/     INT64        MostRecentlyDirtiedPage;
//		/*0x030*/     struct _BITMAP_RANGE BitmapRange1;    // 6 elements, 0x30 bytes (sizeof)
//		/*0x060*/     struct _BITMAP_RANGE BitmapRange2;    // 6 elements, 0x30 bytes (sizeof)
//		/*0x090*/     struct _BITMAP_RANGE BitmapRange3;    // 6 elements, 0x30 bytes (sizeof)
//	}MBCB, *PMBCB;
//
//	typedef struct _MDL               // 8 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     struct _MDL* Next;
//		/*0x008*/     INT16        Size;
//		/*0x00A*/     INT16        MdlFlags;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     struct _EPROCESS* Process;
//		/*0x018*/     VOID*        MappedSystemVa;
//		/*0x020*/     VOID*        StartVa;
//		/*0x028*/     ULONG32      ByteCount;
//		/*0x02C*/     ULONG32      ByteOffset;
//	}MDL, *PMDL;
//
//	typedef struct _MEMORY_ALLOCATION_DESCRIPTOR // 4 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY ListEntry;            // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     enum _TYPE_OF_MEMORY MemoryType;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//		/*0x018*/     UINT64       BasePage;
//		/*0x020*/     UINT64       PageCount;
//	}MEMORY_ALLOCATION_DESCRIPTOR, *PMEMORY_ALLOCATION_DESCRIPTOR;
//
//	typedef struct _MI_COLOR_BASE     // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT16*      ColorPointer;
//		/*0x008*/     UINT16       ColorMask;
//		/*0x00A*/     UINT16       ColorNode;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//	}MI_COLOR_BASE, *PMI_COLOR_BASE;
//
//	typedef struct _MI_EXTRA_IMAGE_INFORMATION // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      SizeOfHeaders;
//		/*0x004*/     ULONG32      SizeOfImage;
//	}MI_EXTRA_IMAGE_INFORMATION, *PMI_EXTRA_IMAGE_INFORMATION;
//
//	typedef struct _MI_IMAGE_SECURITY_REFERENCE         // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _IMAGE_SECURITY_CONTEXT SecurityContext; // 6 elements, 0x8 bytes (sizeof)
//		/*0x008*/     VOID*        DynamicRelocations;
//		/*0x010*/     LONG32       ReferenceCount;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//	}MI_IMAGE_SECURITY_REFERENCE, *PMI_IMAGE_SECURITY_REFERENCE;
//
//	typedef struct _MI_PAGEFILE_TRACES      // 9 elements, 0x68 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       Status;
//		/*0x004*/     UINT8        Priority;
//		/*0x005*/     UINT8        IrpPriority;
//		/*0x006*/     UINT8        _PADDING0_[0x2];
//		/*0x008*/     union _LARGE_INTEGER CurrentTime;   // 4 elements, 0x8 bytes (sizeof)
//		/*0x010*/     UINT64       AvailablePages;
//		/*0x018*/     UINT64       ModifiedPagesTotal;
//		/*0x020*/     UINT64       ModifiedPagefilePages;
//		/*0x028*/     UINT64       ModifiedNoWritePages;
//		struct                              // 2 elements, 0x38 bytes (sizeof)
//		{
//			/*0x030*/         struct _MDL  Mdl;               // 8 elements, 0x30 bytes (sizeof)
//			/*0x060*/         UINT64       Page[1];
//		}MdlHack;
//	}MI_PAGEFILE_TRACES, *PMI_PAGEFILE_TRACES;
//
//	typedef struct _MI_SECTION_CREATION_GATE    // 2 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _MI_SECTION_CREATION_GATE* Next;
//		/*0x008*/     struct _KGATE Gate;                     // 1 elements, 0x18 bytes (sizeof)
//	}MI_SECTION_CREATION_GATE, *PMI_SECTION_CREATION_GATE;
//
//	typedef struct _SECTION_IMAGE_INFORMATION               // 22 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        TransferAddress;
//		/*0x008*/     ULONG32      ZeroBits;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     UINT64       MaximumStackSize;
//		/*0x018*/     UINT64       CommittedStackSize;
//		/*0x020*/     ULONG32      SubSystemType;
//		union                                               // 2 elements, 0x4 bytes (sizeof)
//		{
//			struct                                          // 2 elements, 0x4 bytes (sizeof)
//			{
//				/*0x024*/             UINT16       SubSystemMinorVersion;
//				/*0x026*/             UINT16       SubSystemMajorVersion;
//			};
//			/*0x024*/         ULONG32      SubSystemVersion;
//		};
//		/*0x028*/     ULONG32      GpValue;
//		/*0x02C*/     UINT16       ImageCharacteristics;
//		/*0x02E*/     UINT16       DllCharacteristics;
//		/*0x030*/     UINT16       Machine;
//		/*0x032*/     UINT8        ImageContainsCode;
//		union                                               // 2 elements, 0x1 bytes (sizeof)
//		{
//			/*0x033*/         UINT8        ImageFlags;
//			struct                                          // 5 elements, 0x1 bytes (sizeof)
//			{
//				/*0x033*/             UINT8        ComPlusNativeReady : 1;        // 0 BitPosition
//				/*0x033*/             UINT8        ComPlusILOnly : 1;             // 1 BitPosition
//				/*0x033*/             UINT8        ImageDynamicallyRelocated : 1; // 2 BitPosition
//				/*0x033*/             UINT8        ImageMappedFlat : 1;           // 3 BitPosition
//				/*0x033*/             UINT8        Reserved : 4;                  // 4 BitPosition
//			};
//		};
//		/*0x034*/     ULONG32      LoaderFlags;
//		/*0x038*/     ULONG32      ImageFileSize;
//		/*0x03C*/     ULONG32      CheckSum;
//	}SECTION_IMAGE_INFORMATION, *PSECTION_IMAGE_INFORMATION;
//
//	typedef struct _MI_SECTION_IMAGE_INFORMATION                     // 2 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     struct _SECTION_IMAGE_INFORMATION ExportedImageInformation;  // 22 elements, 0x40 bytes (sizeof)
//		/*0x040*/     struct _MI_EXTRA_IMAGE_INFORMATION InternalImageInformation; // 2 elements, 0x8 bytes (sizeof)
//	}MI_SECTION_IMAGE_INFORMATION, *PMI_SECTION_IMAGE_INFORMATION;
//
//	typedef struct _MMPTE_HARDWARE         // 16 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Valid : 1;            // 0 BitPosition
//		/*0x000*/     UINT64       Dirty1 : 1;           // 1 BitPosition
//		/*0x000*/     UINT64       Owner : 1;            // 2 BitPosition
//		/*0x000*/     UINT64       WriteThrough : 1;     // 3 BitPosition
//		/*0x000*/     UINT64       CacheDisable : 1;     // 4 BitPosition
//		/*0x000*/     UINT64       Accessed : 1;         // 5 BitPosition
//		/*0x000*/     UINT64       Dirty : 1;            // 6 BitPosition
//		/*0x000*/     UINT64       LargePage : 1;        // 7 BitPosition
//		/*0x000*/     UINT64       Global : 1;           // 8 BitPosition
//		/*0x000*/     UINT64       CopyOnWrite : 1;      // 9 BitPosition
//		/*0x000*/     UINT64       Unused : 1;           // 10 BitPosition
//		/*0x000*/     UINT64       Write : 1;            // 11 BitPosition
//		/*0x000*/     UINT64       PageFrameNumber : 36; // 12 BitPosition
//		/*0x000*/     UINT64       reserved1 : 4;        // 48 BitPosition
//		/*0x000*/     UINT64       SoftwareWsIndex : 11; // 52 BitPosition
//		/*0x000*/     UINT64       NoExecute : 1;        // 63 BitPosition
//	}MMPTE_HARDWARE, *PMMPTE_HARDWARE;
//
//	typedef struct _MMPTE_PROTOTYPE     // 7 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Valid : 1;         // 0 BitPosition
//		/*0x000*/     UINT64       Unused0 : 7;       // 1 BitPosition
//		/*0x000*/     UINT64       ReadOnly : 1;      // 8 BitPosition
//		/*0x000*/     UINT64       Unused1 : 1;       // 9 BitPosition
//		/*0x000*/     UINT64       Prototype : 1;     // 10 BitPosition
//		/*0x000*/     UINT64       Protection : 5;    // 11 BitPosition
//		/*0x000*/     INT64        ProtoAddress : 48; // 16 BitPosition
//	}MMPTE_PROTOTYPE, *PMMPTE_PROTOTYPE;
//
//	typedef struct _MMPTE_SOFTWARE              // 9 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Valid : 1;                 // 0 BitPosition
//		/*0x000*/     UINT64       PageFileLow : 4;           // 1 BitPosition
//		/*0x000*/     UINT64       Protection : 5;            // 5 BitPosition
//		/*0x000*/     UINT64       Prototype : 1;             // 10 BitPosition
//		/*0x000*/     UINT64       Transition : 1;            // 11 BitPosition
//		/*0x000*/     UINT64       UsedPageTableEntries : 10; // 12 BitPosition
//		/*0x000*/     UINT64       InStore : 1;               // 22 BitPosition
//		/*0x000*/     UINT64       Reserved : 9;              // 23 BitPosition
//		/*0x000*/     UINT64       PageFileHigh : 32;         // 32 BitPosition
//	}MMPTE_SOFTWARE, *PMMPTE_SOFTWARE;
//
//	typedef struct _MMPTE_TIMESTAMP        // 7 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       MustBeZero : 1;       // 0 BitPosition
//		/*0x000*/     UINT64       PageFileLow : 4;      // 1 BitPosition
//		/*0x000*/     UINT64       Protection : 5;       // 5 BitPosition
//		/*0x000*/     UINT64       Prototype : 1;        // 10 BitPosition
//		/*0x000*/     UINT64       Transition : 1;       // 11 BitPosition
//		/*0x000*/     UINT64       Reserved : 20;        // 12 BitPosition
//		/*0x000*/     UINT64       GlobalTimeStamp : 32; // 32 BitPosition
//	}MMPTE_TIMESTAMP, *PMMPTE_TIMESTAMP;
//
//	typedef struct _MMPTE_TRANSITION       // 10 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Valid : 1;            // 0 BitPosition
//		/*0x000*/     UINT64       Write : 1;            // 1 BitPosition
//		/*0x000*/     UINT64       Owner : 1;            // 2 BitPosition
//		/*0x000*/     UINT64       WriteThrough : 1;     // 3 BitPosition
//		/*0x000*/     UINT64       CacheDisable : 1;     // 4 BitPosition
//		/*0x000*/     UINT64       Protection : 5;       // 5 BitPosition
//		/*0x000*/     UINT64       Prototype : 1;        // 10 BitPosition
//		/*0x000*/     UINT64       Transition : 1;       // 11 BitPosition
//		/*0x000*/     UINT64       PageFrameNumber : 36; // 12 BitPosition
//		/*0x000*/     UINT64       Unused : 16;          // 48 BitPosition
//	}MMPTE_TRANSITION, *PMMPTE_TRANSITION;
//
//	typedef struct _MMPTE_SUBSECTION         // 6 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Valid : 1;              // 0 BitPosition
//		/*0x000*/     UINT64       Unused0 : 4;            // 1 BitPosition
//		/*0x000*/     UINT64       Protection : 5;         // 5 BitPosition
//		/*0x000*/     UINT64       Prototype : 1;          // 10 BitPosition
//		/*0x000*/     UINT64       Unused1 : 5;            // 11 BitPosition
//		/*0x000*/     INT64        SubsectionAddress : 48; // 16 BitPosition
//	}MMPTE_SUBSECTION, *PMMPTE_SUBSECTION;
//
//	typedef struct _MMPTE_LIST       // 8 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Valid : 1;      // 0 BitPosition
//		/*0x000*/     UINT64       OneEntry : 1;   // 1 BitPosition
//		/*0x000*/     UINT64       filler0 : 3;    // 2 BitPosition
//		/*0x000*/     UINT64       Protection : 5; // 5 BitPosition
//		/*0x000*/     UINT64       Prototype : 1;  // 10 BitPosition
//		/*0x000*/     UINT64       Transition : 1; // 11 BitPosition
//		/*0x000*/     UINT64       filler1 : 20;   // 12 BitPosition
//		/*0x000*/     UINT64       NextEntry : 32; // 32 BitPosition
//	}MMPTE_LIST, *PMMPTE_LIST;
//
//	typedef struct _MMPTE                      // 1 elements, 0x8 bytes (sizeof)
//	{
//		union                                  // 10 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         UINT64       Long;
//			/*0x000*/         UINT64       VolatileLong;
//			/*0x000*/         struct _MMPTE_HARDWARE Hard;       // 16 elements, 0x8 bytes (sizeof)
//			/*0x000*/         struct _HARDWARE_PTE Flush;        // 16 elements, 0x8 bytes (sizeof)
//			/*0x000*/         struct _MMPTE_PROTOTYPE Proto;     // 7 elements, 0x8 bytes (sizeof)
//			/*0x000*/         struct _MMPTE_SOFTWARE Soft;       // 9 elements, 0x8 bytes (sizeof)
//			/*0x000*/         struct _MMPTE_TIMESTAMP TimeStamp; // 7 elements, 0x8 bytes (sizeof)
//			/*0x000*/         struct _MMPTE_TRANSITION Trans;    // 10 elements, 0x8 bytes (sizeof)
//			/*0x000*/         struct _MMPTE_SUBSECTION Subsect;  // 6 elements, 0x8 bytes (sizeof)
//			/*0x000*/         struct _MMPTE_LIST List;           // 8 elements, 0x8 bytes (sizeof)
//		}u;
//	}MMPTE, *PMMPTE;
//
//	typedef struct _MI_SPECIAL_POOL_PTE_LIST // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _MMPTE FreePteHead;           // 1 elements, 0x8 bytes (sizeof)
//		/*0x008*/     struct _MMPTE FreePteTail;           // 1 elements, 0x8 bytes (sizeof)
//	}MI_SPECIAL_POOL_PTE_LIST, *PMI_SPECIAL_POOL_PTE_LIST;
//
//	typedef struct _MI_SPECIAL_POOL                // 6 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     struct _MMPTE* PteBase;
//		/*0x008*/     UINT64       Lock;
//		/*0x010*/     struct _MI_SPECIAL_POOL_PTE_LIST Paged;    // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     struct _MI_SPECIAL_POOL_PTE_LIST NonPaged; // 2 elements, 0x10 bytes (sizeof)
//		/*0x030*/     INT64        PagesInUse;
//		/*0x038*/     struct _RTL_BITMAP SpecialPoolPdes;        // 2 elements, 0x10 bytes (sizeof)
//	}MI_SPECIAL_POOL, *PMI_SPECIAL_POOL;
//
//	typedef struct _MI_SYSTEM_PTE_TYPE           // 12 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     struct _RTL_BITMAP Bitmap;               // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     ULONG32      Flags;
//		/*0x014*/     ULONG32      Hint;
//		/*0x018*/     struct _MMPTE* BasePte;
//		/*0x020*/     ULONG32*     FailureCount;
//		/*0x028*/     struct _MMSUPPORT* Vm;
//		/*0x030*/     LONG32       TotalSystemPtes;
//		/*0x034*/     LONG32       TotalFreeSystemPtes;
//		/*0x038*/     LONG32       CachedPteCount;
//		/*0x03C*/     ULONG32      PteFailures;
//		union                                    // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x040*/         UINT64       SpinLock;
//			/*0x040*/         struct _KGUARDED_MUTEX* GlobalMutex;
//		};
//	}MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE;
//
//	typedef struct _MI_VERIFIER_POOL_HEADER       // 1 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     struct _VI_POOL_ENTRY* VerifierPoolEntry;
//	}MI_VERIFIER_POOL_HEADER, *PMI_VERIFIER_POOL_HEADER;
//
//	typedef struct _MM_DRIVER_VERIFIER_DATA              // 32 elements, 0xA0 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Level;
//		/*0x004*/     ULONG32      RaiseIrqls;
//		/*0x008*/     ULONG32      AcquireSpinLocks;
//		/*0x00C*/     ULONG32      SynchronizeExecutions;
//		/*0x010*/     ULONG32      AllocationsAttempted;
//		/*0x014*/     ULONG32      AllocationsSucceeded;
//		/*0x018*/     ULONG32      AllocationsSucceededSpecialPool;
//		/*0x01C*/     ULONG32      AllocationsWithNoTag;
//		/*0x020*/     ULONG32      TrimRequests;
//		/*0x024*/     ULONG32      Trims;
//		/*0x028*/     ULONG32      AllocationsFailed;
//		/*0x02C*/     ULONG32      AllocationsFailedDeliberately;
//		/*0x030*/     ULONG32      Loads;
//		/*0x034*/     ULONG32      Unloads;
//		/*0x038*/     ULONG32      UnTrackedPool;
//		/*0x03C*/     ULONG32      UserTrims;
//		/*0x040*/     ULONG32      CurrentPagedPoolAllocations;
//		/*0x044*/     ULONG32      CurrentNonPagedPoolAllocations;
//		/*0x048*/     ULONG32      PeakPagedPoolAllocations;
//		/*0x04C*/     ULONG32      PeakNonPagedPoolAllocations;
//		/*0x050*/     UINT64       PagedBytes;
//		/*0x058*/     UINT64       NonPagedBytes;
//		/*0x060*/     UINT64       PeakPagedBytes;
//		/*0x068*/     UINT64       PeakNonPagedBytes;
//		/*0x070*/     ULONG32      BurstAllocationsFailedDeliberately;
//		/*0x074*/     ULONG32      SessionTrims;
//		/*0x078*/     ULONG32      OptionChanges;
//		/*0x07C*/     ULONG32      VerifyMode;
//		/*0x080*/     struct _UNICODE_STRING PreviousBucketName;       // 3 elements, 0x10 bytes (sizeof)
//		/*0x090*/     ULONG32      ActivityCounter;
//		/*0x094*/     ULONG32      PreviousActivityCounter;
//		/*0x098*/     ULONG32      WorkerTrimRequests;
//		/*0x09C*/     UINT8        _PADDING0_[0x4];
//	}MM_DRIVER_VERIFIER_DATA, *PMM_DRIVER_VERIFIER_DATA;
//
//	typedef union _MM_PAGE_ACCESS_INFO_FLAGS   // 2 elements, 0x4 bytes (sizeof)
//	{
//		struct                                 // 4 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      FilePointerIndex : 9; // 0 BitPosition
//			/*0x000*/         ULONG32      HardFault : 1;        // 9 BitPosition
//			/*0x000*/         ULONG32      Image : 1;            // 10 BitPosition
//			/*0x000*/         ULONG32      Spare0 : 1;           // 11 BitPosition
//		}File;
//		struct                                 // 3 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      FilePointerIndex : 9; // 0 BitPosition
//			/*0x000*/         ULONG32      HardFault : 1;        // 9 BitPosition
//			/*0x000*/         ULONG32      Spare1 : 2;           // 10 BitPosition
//		}Private;
//	}MM_PAGE_ACCESS_INFO_FLAGS, *PMM_PAGE_ACCESS_INFO_FLAGS;
//
//	typedef struct _MM_PAGE_ACCESS_INFO             // 4 elements, 0x8 bytes (sizeof)
//	{
//		union                                       // 4 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         union _MM_PAGE_ACCESS_INFO_FLAGS Flags; // 2 elements, 0x4 bytes (sizeof)
//			/*0x000*/         UINT64       FileOffset;
//			/*0x000*/         VOID*        VirtualAddress;
//			/*0x000*/         VOID*        PointerProtoPte;
//		};
//	}MM_PAGE_ACCESS_INFO, *PMM_PAGE_ACCESS_INFO;
//
//	typedef struct _MM_PAGE_ACCESS_INFO_HEADER          // 14 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     struct _SINGLE_LIST_ENTRY Link;                 // 1 elements, 0x8 bytes (sizeof)
//		/*0x008*/     enum _MM_PAGE_ACCESS_TYPE Type;
//		union                                           // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x00C*/         ULONG32      EmptySequenceNumber;
//			/*0x00C*/         ULONG32      CurrentFileIndex;
//		};
//		/*0x010*/     UINT64       CreateTime;
//		union                                           // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x018*/         UINT64       EmptyTime;
//			/*0x018*/         struct _MM_PAGE_ACCESS_INFO* TempEntry;
//		};
//		union                                           // 2 elements, 0x24 bytes (sizeof)
//		{
//			struct                                      // 5 elements, 0x24 bytes (sizeof)
//			{
//				/*0x020*/             struct _MM_PAGE_ACCESS_INFO* PageEntry;
//				/*0x028*/             UINT64*      FileEntry;
//				/*0x030*/             UINT64*      FirstFileEntry;
//				/*0x038*/             struct _EPROCESS* Process;
//				/*0x040*/             ULONG32      SessionId;
//			};
//			struct                                      // 2 elements, 0x24 bytes (sizeof)
//			{
//				/*0x020*/             UINT64*      PageFrameEntry;
//				/*0x028*/             UINT64*      LastPageFrameEntry;
//				/*0x030*/             UINT8        _PADDING0_[0x14];
//			};
//		};
//	}MM_PAGE_ACCESS_INFO_HEADER, *PMM_PAGE_ACCESS_INFO_HEADER;
//
//	typedef struct _MM_PAGED_POOL_INFO             // 6 elements, 0x68 bytes (sizeof)
//	{
//		/*0x000*/     struct _KGUARDED_MUTEX Mutex;              // 7 elements, 0x38 bytes (sizeof)
//		/*0x038*/     struct _RTL_BITMAP PagedPoolAllocationMap; // 2 elements, 0x10 bytes (sizeof)
//		/*0x048*/     struct _MMPTE* FirstPteForPagedPool;
//		/*0x050*/     ULONG32      PagedPoolHint;
//		/*0x054*/     UINT8        _PADDING0_[0x4];
//		/*0x058*/     UINT64       PagedPoolCommit;
//		/*0x060*/     UINT64       AllocatedPagedPool;
//	}MM_PAGED_POOL_INFO, *PMM_PAGED_POOL_INFO;
//
//	typedef struct _MM_SESSION_SPACE_FLAGS     // 8 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Initialized : 1;          // 0 BitPosition
//		/*0x000*/     ULONG32      DeletePending : 1;        // 1 BitPosition
//		/*0x000*/     ULONG32      PoolInitialized : 1;      // 2 BitPosition
//		/*0x000*/     ULONG32      DynamicVaInitialized : 1; // 3 BitPosition
//		/*0x000*/     ULONG32      WsInitialized : 1;        // 4 BitPosition
//		/*0x000*/     ULONG32      PoolDestroyed : 1;        // 5 BitPosition
//		/*0x000*/     ULONG32      ObjectInitialized : 1;    // 6 BitPosition
//		/*0x000*/     ULONG32      Filler : 25;              // 7 BitPosition
//	}MM_SESSION_SPACE_FLAGS, *PMM_SESSION_SPACE_FLAGS;
//
//	typedef struct _MMSESSION                               // 7 elements, 0x58 bytes (sizeof)
//	{
//		/*0x000*/     struct _KGUARDED_MUTEX SystemSpaceViewLock;         // 7 elements, 0x38 bytes (sizeof)
//		/*0x038*/     struct _KGUARDED_MUTEX* SystemSpaceViewLockPointer;
//		/*0x040*/     struct _MMVIEW* SystemSpaceViewTable;
//		/*0x048*/     ULONG32      SystemSpaceHashSize;
//		/*0x04C*/     ULONG32      SystemSpaceHashEntries;
//		/*0x050*/     ULONG32      SystemSpaceHashKey;
//		/*0x054*/     ULONG32      BitmapFailures;
//	}MMSESSION, *PMMSESSION;
//
//	typedef struct _POOL_DESCRIPTOR              // 13 elements, 0x1140 bytes (sizeof)
//	{
//		/*0x000*/     enum _POOL_TYPE PoolType;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		union                                    // 2 elements, 0x38 bytes (sizeof)
//		{
//			/*0x008*/         struct _KGUARDED_MUTEX PagedLock;    // 7 elements, 0x38 bytes (sizeof)
//			/*0x008*/         UINT64       NonPagedLock;
//		};
//		/*0x040*/     LONG32       RunningAllocs;
//		/*0x044*/     LONG32       RunningDeAllocs;
//		/*0x048*/     LONG32       TotalBigPages;
//		/*0x04C*/     LONG32       ThreadsProcessingDeferrals;
//		/*0x050*/     UINT64       TotalBytes;
//		/*0x058*/     UINT8        _PADDING1_[0x28];
//		/*0x080*/     ULONG32      PoolIndex;
//		/*0x084*/     UINT8        _PADDING2_[0x3C];
//		/*0x0C0*/     LONG32       TotalPages;
//		/*0x0C4*/     UINT8        _PADDING3_[0x3C];
//		/*0x100*/     VOID**       PendingFrees;
//		/*0x108*/     LONG32       PendingFreeDepth;
//		/*0x10C*/     UINT8        _PADDING4_[0x34];
//		/*0x140*/     struct _LIST_ENTRY ListHeads[256];
//	}POOL_DESCRIPTOR, *PPOOL_DESCRIPTOR;
//
//	typedef struct _MM_SESSION_SPACE                    // 47 elements, 0x1F80 bytes (sizeof)
//	{
//		/*0x000*/      LONG32       ReferenceCount;
//		union                                           // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x004*/          ULONG32      LongFlags;
//			/*0x004*/          struct _MM_SESSION_SPACE_FLAGS Flags;       // 8 elements, 0x4 bytes (sizeof)
//		}u;
//		/*0x008*/      ULONG32      SessionId;
//		/*0x00C*/      LONG32       ProcessReferenceToSession;
//		/*0x010*/      struct _LIST_ENTRY ProcessList;                 // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/      union _LARGE_INTEGER LastProcessSwappedOutTime; // 4 elements, 0x8 bytes (sizeof)
//		/*0x028*/      UINT64       SessionPageDirectoryIndex;
//		/*0x030*/      UINT64       NonPagablePages;
//		/*0x038*/      UINT64       CommittedPages;
//		/*0x040*/      VOID*        PagedPoolStart;
//		/*0x048*/      VOID*        PagedPoolEnd;
//		/*0x050*/      VOID*        SessionObject;
//		/*0x058*/      VOID*        SessionObjectHandle;
//		/*0x060*/      LONG32       ResidentProcessCount;
//		/*0x064*/      ULONG32      SessionPoolAllocationFailures[4];
//		/*0x074*/      UINT8        _PADDING0_[0x4];
//		/*0x078*/      struct _LIST_ENTRY ImageList;                   // 2 elements, 0x10 bytes (sizeof)
//		/*0x088*/      ULONG32      LocaleId;
//		/*0x08C*/      ULONG32      AttachCount;
//		/*0x090*/      struct _KGATE AttachGate;                       // 1 elements, 0x18 bytes (sizeof)
//		/*0x0A8*/      struct _LIST_ENTRY WsListEntry;                 // 2 elements, 0x10 bytes (sizeof)
//		/*0x0B8*/      UINT8        _PADDING1_[0x8];
//		/*0x0C0*/      struct _GENERAL_LOOKASIDE Lookaside[21];
//		/*0xB40*/      struct _MMSESSION Session;                      // 7 elements, 0x58 bytes (sizeof)
//		/*0xB98*/      struct _MM_PAGED_POOL_INFO PagedPoolInfo;       // 6 elements, 0x68 bytes (sizeof)
//		/*0xC00*/      struct _MMSUPPORT Vm;                           // 21 elements, 0x88 bytes (sizeof)
//		/*0xC88*/      struct _MMWSLE* Wsle;
//		/*0xC90*/      FUNCT_00A3_0F01_DriverUnload* DriverUnload;
//		/*0xC98*/      UINT8        _PADDING2_[0x28];
//		/*0xCC0*/      struct _POOL_DESCRIPTOR PagedPool;              // 13 elements, 0x1140 bytes (sizeof)
//		/*0x1E00*/     struct _MMPTE PageDirectory;                    // 1 elements, 0x8 bytes (sizeof)
//		/*0x1E08*/     struct _KGUARDED_MUTEX SessionVaLock;           // 7 elements, 0x38 bytes (sizeof)
//		/*0x1E40*/     struct _RTL_BITMAP DynamicVaBitMap;             // 2 elements, 0x10 bytes (sizeof)
//		/*0x1E50*/     ULONG32      DynamicVaHint;
//		/*0x1E54*/     UINT8        _PADDING3_[0x4];
//		/*0x1E58*/     struct _MI_SPECIAL_POOL SpecialPool;            // 6 elements, 0x48 bytes (sizeof)
//		/*0x1EA0*/     struct _KGUARDED_MUTEX SessionPteLock;          // 7 elements, 0x38 bytes (sizeof)
//		/*0x1ED8*/     LONG32       PoolBigEntriesInUse;
//		/*0x1EDC*/     ULONG32      PagedPoolPdeCount;
//		/*0x1EE0*/     ULONG32      SpecialPoolPdeCount;
//		/*0x1EE4*/     ULONG32      DynamicSessionPdeCount;
//		/*0x1EE8*/     struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;       // 12 elements, 0x48 bytes (sizeof)
//		/*0x1F30*/     VOID*        PoolTrackTableExpansion;
//		/*0x1F38*/     UINT64       PoolTrackTableExpansionSize;
//		/*0x1F40*/     VOID*        PoolTrackBigPages;
//		/*0x1F48*/     UINT64       PoolTrackBigPagesSize;
//		/*0x1F50*/     enum _IO_SESSION_STATE IoState;
//		/*0x1F54*/     ULONG32      IoStateSequence;
//		/*0x1F58*/     struct _KEVENT IoNotificationEvent;             // 1 elements, 0x18 bytes (sizeof)
//		/*0x1F70*/     UINT64       CreateTime;
//		/*0x1F78*/     struct _PS_CPU_QUOTA_BLOCK* CpuQuotaBlock;
//	}MM_SESSION_SPACE, *PMM_SESSION_SPACE;
//
//	typedef union _MM_STORE_KEY       // 3 elements, 0x8 bytes (sizeof)
//	{
//		struct                        // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         UINT64       KeyLow : 60; // 0 BitPosition
//			/*0x000*/         UINT64       KeyHigh : 4; // 60 BitPosition
//		};
//		/*0x000*/     UINT64       EntireKey;
//	}MM_STORE_KEY, *PMM_STORE_KEY;
//
//	typedef struct _MMSUBSECTION_FLAGS            // 8 elements, 0x4 bytes (sizeof)
//	{
//		struct                                    // 3 elements, 0x2 bytes (sizeof)
//		{
//			/*0x000*/         UINT16       SubsectionAccessed : 1;  // 0 BitPosition
//			/*0x000*/         UINT16       Protection : 5;          // 1 BitPosition
//			/*0x000*/         UINT16       StartingSector4132 : 10; // 6 BitPosition
//		};
//		struct                                    // 5 elements, 0x2 bytes (sizeof)
//		{
//			/*0x002*/         UINT16       SubsectionStatic : 1;    // 0 BitPosition
//			/*0x002*/         UINT16       GlobalMemory : 1;        // 1 BitPosition
//			/*0x002*/         UINT16       DirtyPages : 1;          // 2 BitPosition
//			/*0x002*/         UINT16       Spare : 1;               // 3 BitPosition
//			/*0x002*/         UINT16       SectorEndOffset : 12;    // 4 BitPosition
//		};
//	}MMSUBSECTION_FLAGS, *PMMSUBSECTION_FLAGS;
//
//	typedef struct _MMSUBSECTION_NODE                   // 6 elements, 0x28 bytes (sizeof)
//	{
//		union                                           // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      LongFlags;
//			/*0x000*/         struct _MMSUBSECTION_FLAGS SubsectionFlags; // 8 elements, 0x4 bytes (sizeof)
//		}u;
//		/*0x004*/     ULONG32      StartingSector;
//		/*0x008*/     ULONG32      NumberOfFullSectors;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		union                                           // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x010*/         INT64        Balance : 2;                   // 0 BitPosition
//			/*0x010*/         struct _MMSUBSECTION_NODE* Parent;
//		}u1;
//		/*0x018*/     struct _MMSUBSECTION_NODE* LeftChild;
//		/*0x020*/     struct _MMSUBSECTION_NODE* RightChild;
//	}MMSUBSECTION_NODE, *PMMSUBSECTION_NODE;
//
//	typedef struct _MM_SUBSECTION_AVL_TABLE               // 5 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     struct _MMSUBSECTION_NODE BalancedRoot;           // 6 elements, 0x28 bytes (sizeof)
//		struct                                            // 3 elements, 0x8 bytes (sizeof)
//		{
//			/*0x028*/         UINT64       DepthOfTree : 5;                 // 0 BitPosition
//			/*0x028*/         UINT64       Unused : 3;                      // 5 BitPosition
//			/*0x028*/         UINT64       NumberGenericTableElements : 56; // 8 BitPosition
//		};
//		/*0x030*/     VOID*        NodeHint;
//	}MM_SUBSECTION_AVL_TABLE, *PMM_SUBSECTION_AVL_TABLE;
//
//	typedef struct _MMSECURE_FLAGS // 3 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      ReadOnly : 1; // 0 BitPosition
//		/*0x000*/     ULONG32      NoWrite : 1;  // 1 BitPosition
//		/*0x000*/     ULONG32      Spare : 10;   // 2 BitPosition
//	}MMSECURE_FLAGS, *PMMSECURE_FLAGS;
//
//	typedef struct _MMADDRESS_LIST        // 2 elements, 0x10 bytes (sizeof)
//	{
//		union                             // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         struct _MMSECURE_FLAGS Flags; // 3 elements, 0x4 bytes (sizeof)
//			/*0x000*/         VOID*        StartVa;
//		}u1;
//		/*0x008*/     VOID*        EndVa;
//	}MMADDRESS_LIST, *PMMADDRESS_LIST;
//
//	typedef struct _MMBANKED_SECTION                  // 8 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       BasePhysicalPage;
//		/*0x008*/     struct _MMPTE* BasedPte;
//		/*0x010*/     ULONG32      BankSize;
//		/*0x014*/     ULONG32      BankShift;
//		/*0x018*/     FUNCT_00A3_20BC_BankedRoutine* BankedRoutine;
//		/*0x020*/     VOID*        Context;
//		/*0x028*/     struct _MMPTE* CurrentMappedPte;
//		/*0x030*/     struct _MMPTE BankTemplate[1];
//	}MMBANKED_SECTION, *PMMBANKED_SECTION;
//
//	typedef struct _MMEXTEND_INFO     // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       CommittedSize;
//		/*0x008*/     ULONG32      ReferenceCount;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//	}MMEXTEND_INFO, *PMMEXTEND_INFO;
//
//	typedef struct _MMMOD_WRITER_MDL_ENTRY    // 13 elements, 0xA0 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY Links;             // 2 elements, 0x10 bytes (sizeof)
//		union                                 // 1 elements, 0x10 bytes (sizeof)
//		{
//			/*0x010*/         struct _IO_STATUS_BLOCK IoStatus; // 3 elements, 0x10 bytes (sizeof)
//		}u;
//		/*0x020*/     struct _IRP* Irp;
//		union                                 // 1 elements, 0x8 bytes (sizeof)
//		{
//			/*0x028*/         UINT64       KeepForever;
//		}u1;
//		/*0x030*/     struct _MMPAGING_FILE* PagingFile;
//		/*0x038*/     struct _FILE_OBJECT* File;
//		/*0x040*/     struct _CONTROL_AREA* ControlArea;
//		/*0x048*/     struct _ERESOURCE* FileResource;
//		/*0x050*/     union _LARGE_INTEGER WriteOffset;     // 4 elements, 0x8 bytes (sizeof)
//		/*0x058*/     union _LARGE_INTEGER IssueTime;       // 4 elements, 0x8 bytes (sizeof)
//		/*0x060*/     struct _MDL* PointerMdl;
//		/*0x068*/     struct _MDL  Mdl;                     // 8 elements, 0x30 bytes (sizeof)
//		/*0x098*/     UINT64       Page[1];
//	}MMMOD_WRITER_MDL_ENTRY, *PMMMOD_WRITER_MDL_ENTRY;
//
//	typedef struct _MMPAGING_FILE                 // 22 elements, 0x90 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Size;
//		/*0x008*/     UINT64       MaximumSize;
//		/*0x010*/     UINT64       MinimumSize;
//		/*0x018*/     UINT64       FreeSpace;
//		/*0x020*/     UINT64       PeakUsage;
//		/*0x028*/     UINT64       HighestPage;
//		/*0x030*/     struct _FILE_OBJECT* File;
//		/*0x038*/     struct _MMMOD_WRITER_MDL_ENTRY* Entry[2];
//		/*0x048*/     struct _UNICODE_STRING PageFileName;      // 3 elements, 0x10 bytes (sizeof)
//		/*0x058*/     struct _RTL_BITMAP* Bitmap;
//		/*0x060*/     struct _RTL_BITMAP* EvictStoreBitmap;
//		/*0x068*/     ULONG32      BitmapHint;
//		/*0x06C*/     ULONG32      LastAllocationSize;
//		/*0x070*/     ULONG32      ToBeEvictedCount;
//		struct                                    // 3 elements, 0x2 bytes (sizeof)
//		{
//			/*0x074*/         UINT16       PageFileNumber : 4;      // 0 BitPosition
//			/*0x074*/         UINT16       BootPartition : 1;       // 4 BitPosition
//			/*0x074*/         UINT16       Spare0 : 11;             // 5 BitPosition
//		};
//		struct                                    // 2 elements, 0x2 bytes (sizeof)
//		{
//			/*0x076*/         UINT16       AdriftMdls : 1;          // 0 BitPosition
//			/*0x076*/         UINT16       Spare1 : 15;             // 1 BitPosition
//		};
//		/*0x078*/     VOID*        FileHandle;
//		/*0x080*/     UINT64       Lock;
//		/*0x088*/     struct _ETHREAD* LockOwner;
//	}MMPAGING_FILE, *PMMPAGING_FILE;
//
//	typedef struct _MMPFNENTRY                 // 11 elements, 0x2 bytes (sizeof)
//	{
//		struct                                 // 5 elements, 0x1 bytes (sizeof)
//		{
//			/*0x000*/         UINT8        PageLocation : 3;     // 0 BitPosition
//			/*0x000*/         UINT8        WriteInProgress : 1;  // 3 BitPosition
//			/*0x000*/         UINT8        Modified : 1;         // 4 BitPosition
//			/*0x000*/         UINT8        ReadInProgress : 1;   // 5 BitPosition
//			/*0x000*/         UINT8        CacheAttribute : 2;   // 6 BitPosition
//		};
//		struct                                 // 6 elements, 0x1 bytes (sizeof)
//		{
//			/*0x001*/         UINT8        Priority : 3;         // 0 BitPosition
//			/*0x001*/         UINT8        Rom : 1;              // 3 BitPosition
//			/*0x001*/         UINT8        InPageError : 1;      // 4 BitPosition
//			/*0x001*/         UINT8        KernelStack : 1;      // 5 BitPosition
//			/*0x001*/         UINT8        RemovalRequested : 1; // 6 BitPosition
//			/*0x001*/         UINT8        ParityError : 1;      // 7 BitPosition
//		};
//	}MMPFNENTRY, *PMMPFNENTRY;
//
//	typedef struct _MMPFN                                // 13 elements, 0x30 bytes (sizeof)
//	{
//		union                                            // 7 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         UINT64       Flink;
//			/*0x000*/         ULONG32      WsIndex;
//			/*0x000*/         struct _KEVENT* Event;
//			/*0x000*/         VOID*        Next;
//			/*0x000*/         VOID*        VolatileNext;
//			/*0x000*/         struct _KTHREAD* KernelStackOwner;
//			/*0x000*/         struct _SINGLE_LIST_ENTRY NextStackPfn;      // 1 elements, 0x8 bytes (sizeof)
//		}u1;
//		union                                            // 3 elements, 0x8 bytes (sizeof)
//		{
//			/*0x008*/         UINT64       Blink;
//			/*0x008*/         struct _MMPTE* ImageProtoPte;
//			/*0x008*/         UINT64       ShareCount;
//		}u2;
//		union                                            // 4 elements, 0x8 bytes (sizeof)
//		{
//			/*0x010*/         struct _MMPTE* PteAddress;
//			/*0x010*/         VOID*        VolatilePteAddress;
//			/*0x010*/         LONG32       Lock;
//			/*0x010*/         UINT64       PteLong;
//		};
//		union                                            // 3 elements, 0x4 bytes (sizeof)
//		{
//			struct                                       // 2 elements, 0x4 bytes (sizeof)
//			{
//				/*0x018*/             UINT16       ReferenceCount;
//				/*0x01A*/             struct _MMPFNENTRY e1;                   // 11 elements, 0x2 bytes (sizeof)
//			};
//			struct                                       // 3 elements, 0x4 bytes (sizeof)
//			{
//				union                                    // 2 elements, 0x2 bytes (sizeof)
//				{
//					/*0x018*/                 UINT16       ReferenceCount;
//					/*0x018*/                 INT16        VolatileReferenceCount;
//				};
//				/*0x01A*/             UINT16       ShortFlags;
//			}e2;
//		}u3;
//		/*0x01C*/     UINT16       UsedPageTableEntries;
//		/*0x01E*/     UINT8        VaType;
//		/*0x01F*/     UINT8        ViewCount;
//		union                                            // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x020*/         struct _MMPTE OriginalPte;                   // 1 elements, 0x8 bytes (sizeof)
//			/*0x020*/         LONG32       AweReferenceCount;
//		};
//		union                                            // 6 elements, 0x8 bytes (sizeof)
//		{
//			struct                                       // 6 elements, 0x8 bytes (sizeof)
//			{
//				/*0x028*/             UINT64       PteFrame : 52;              // 0 BitPosition
//				/*0x028*/             UINT64       Unused : 3;                 // 52 BitPosition
//				/*0x028*/             UINT64       PfnImageVerified : 1;       // 55 BitPosition
//				/*0x028*/             UINT64       AweAllocation : 1;          // 56 BitPosition
//				/*0x028*/             UINT64       PrototypePte : 1;           // 57 BitPosition
//				/*0x028*/             UINT64       PageColor : 6;              // 58 BitPosition
//			};
//		}u4;
//	}MMPFN, *PMMPFN;
//
//	typedef struct _MMPFNLIST         // 5 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Total;
//		/*0x008*/     enum _MMLISTS ListName;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     UINT64       Flink;
//		/*0x018*/     UINT64       Blink;
//		/*0x020*/     UINT64       Lock;
//	}MMPFNLIST, *PMMPFNLIST;
//
//	typedef struct _MMVAD_FLAGS         // 7 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       CommitCharge : 51; // 0 BitPosition
//		/*0x000*/     UINT64       NoChange : 1;      // 51 BitPosition
//		/*0x000*/     UINT64       VadType : 3;       // 52 BitPosition
//		/*0x000*/     UINT64       MemCommit : 1;     // 55 BitPosition
//		/*0x000*/     UINT64       Protection : 5;    // 56 BitPosition
//		/*0x000*/     UINT64       Spare : 2;         // 61 BitPosition
//		/*0x000*/     UINT64       PrivateMemory : 1; // 63 BitPosition
//	}MMVAD_FLAGS, *PMMVAD_FLAGS;
//
//	typedef struct _MMVAD_FLAGS3              // 8 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       PreferredNode : 6;       // 0 BitPosition
//		/*0x000*/     UINT64       Teb : 1;                 // 6 BitPosition
//		/*0x000*/     UINT64       Spare : 1;               // 7 BitPosition
//		/*0x000*/     UINT64       SequentialAccess : 1;    // 8 BitPosition
//		/*0x000*/     UINT64       LastSequentialTrim : 15; // 9 BitPosition
//		/*0x000*/     UINT64       Spare2 : 8;              // 24 BitPosition
//		/*0x000*/     UINT64       LargePageCreating : 1;   // 32 BitPosition
//		/*0x000*/     UINT64       Spare3 : 31;             // 33 BitPosition
//	}MMVAD_FLAGS3, *PMMVAD_FLAGS3;
//
//	typedef struct _MMVAD_FLAGS2          // 9 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     UINT32       FileOffset : 24;     // 0 BitPosition
//		/*0x000*/     UINT32       SecNoChange : 1;     // 24 BitPosition
//		/*0x000*/     UINT32       OneSecured : 1;      // 25 BitPosition
//		/*0x000*/     UINT32       MultipleSecured : 1; // 26 BitPosition
//		/*0x000*/     UINT32       Spare : 1;           // 27 BitPosition
//		/*0x000*/     UINT32       LongVad : 1;         // 28 BitPosition
//		/*0x000*/     UINT32       ExtendableFile : 1;  // 29 BitPosition
//		/*0x000*/     UINT32       Inherit : 1;         // 30 BitPosition
//		/*0x000*/     UINT32       CopyOnWrite : 1;     // 31 BitPosition
//	}MMVAD_FLAGS2, *PMMVAD_FLAGS2;
//
//	typedef struct _MMVAD                          // 15 elements, 0x78 bytes (sizeof)
//	{
//		union                                      // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         INT64        Balance : 2;              // 0 BitPosition
//			/*0x000*/         struct _MMVAD* Parent;
//		}u1;
//		/*0x008*/     struct _MMVAD* LeftChild;
//		/*0x010*/     struct _MMVAD* RightChild;
//		/*0x018*/     UINT64       StartingVpn;
//		/*0x020*/     UINT64       EndingVpn;
//		union                                      // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x028*/         UINT64       LongFlags;
//			/*0x028*/         struct _MMVAD_FLAGS VadFlags;          // 7 elements, 0x8 bytes (sizeof)
//		}u;
//		/*0x030*/     struct _EX_PUSH_LOCK PushLock;             // 7 elements, 0x8 bytes (sizeof)
//		union                                      // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x038*/         UINT64       LongFlags3;
//			/*0x038*/         struct _MMVAD_FLAGS3 VadFlags3;        // 8 elements, 0x8 bytes (sizeof)
//		}u5;
//		union                                      // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x040*/         ULONG32      LongFlags2;
//			/*0x040*/         struct _MMVAD_FLAGS2 VadFlags2;        // 9 elements, 0x4 bytes (sizeof)
//		}u2;
//		union                                      // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x048*/         struct _SUBSECTION* Subsection;
//			/*0x048*/         struct _MSUBSECTION* MappedSubsection;
//		};
//		/*0x050*/     struct _MMPTE* FirstPrototypePte;
//		/*0x058*/     struct _MMPTE* LastContiguousPte;
//		/*0x060*/     struct _LIST_ENTRY ViewLinks;              // 2 elements, 0x10 bytes (sizeof)
//		/*0x070*/     struct _EPROCESS* VadsProcess;
//	}MMVAD, *PMMVAD;
//
//	typedef struct _MMVAD_LONG                   // 16 elements, 0x90 bytes (sizeof)
//	{
//		union                                    // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         INT64        Balance : 2;            // 0 BitPosition
//			/*0x000*/         struct _MMVAD* Parent;
//		}u1;
//		/*0x008*/     struct _MMVAD* LeftChild;
//		/*0x010*/     struct _MMVAD* RightChild;
//		/*0x018*/     UINT64       StartingVpn;
//		/*0x020*/     UINT64       EndingVpn;
//		union                                    // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x028*/         UINT64       LongFlags;
//			/*0x028*/         struct _MMVAD_FLAGS VadFlags;        // 7 elements, 0x8 bytes (sizeof)
//		}u;
//		/*0x030*/     struct _EX_PUSH_LOCK PushLock;           // 7 elements, 0x8 bytes (sizeof)
//		union                                    // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x038*/         UINT64       LongFlags3;
//			/*0x038*/         struct _MMVAD_FLAGS3 VadFlags3;      // 8 elements, 0x8 bytes (sizeof)
//		}u5;
//		union                                    // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x040*/         ULONG32      LongFlags2;
//			/*0x040*/         struct _MMVAD_FLAGS2 VadFlags2;      // 9 elements, 0x4 bytes (sizeof)
//		}u2;
//		/*0x048*/     struct _SUBSECTION* Subsection;
//		/*0x050*/     struct _MMPTE* FirstPrototypePte;
//		/*0x058*/     struct _MMPTE* LastContiguousPte;
//		/*0x060*/     struct _LIST_ENTRY ViewLinks;            // 2 elements, 0x10 bytes (sizeof)
//		/*0x070*/     struct _EPROCESS* VadsProcess;
//		union                                    // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x078*/         struct _LIST_ENTRY List;             // 2 elements, 0x10 bytes (sizeof)
//			/*0x078*/         struct _MMADDRESS_LIST Secured;      // 2 elements, 0x10 bytes (sizeof)
//		}u3;
//		union                                    // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x088*/         struct _MMBANKED_SECTION* Banked;
//			/*0x088*/         struct _MMEXTEND_INFO* ExtendedInfo;
//		}u4;
//	}MMVAD_LONG, *PMMVAD_LONG;
//
//	typedef struct _MMVAD_SHORT             // 8 elements, 0x40 bytes (sizeof)
//	{
//		union                               // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         INT64        Balance : 2;       // 0 BitPosition
//			/*0x000*/         struct _MMVAD* Parent;
//		}u1;
//		/*0x008*/     struct _MMVAD* LeftChild;
//		/*0x010*/     struct _MMVAD* RightChild;
//		/*0x018*/     UINT64       StartingVpn;
//		/*0x020*/     UINT64       EndingVpn;
//		union                               // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x028*/         UINT64       LongFlags;
//			/*0x028*/         struct _MMVAD_FLAGS VadFlags;   // 7 elements, 0x8 bytes (sizeof)
//		}u;
//		/*0x030*/     struct _EX_PUSH_LOCK PushLock;      // 7 elements, 0x8 bytes (sizeof)
//		union                               // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x038*/         UINT64       LongFlags3;
//			/*0x038*/         struct _MMVAD_FLAGS3 VadFlags3; // 8 elements, 0x8 bytes (sizeof)
//		}u5;
//	}MMVAD_SHORT, *PMMVAD_SHORT;
//
//	typedef struct _MMVIEW                     // 6 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Entry;
//		union                                  // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x008*/         UINT64       Writable : 1;         // 0 BitPosition
//			/*0x008*/         struct _CONTROL_AREA* ControlArea;
//		};
//		/*0x010*/     struct _LIST_ENTRY ViewLinks;          // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     VOID*        SessionViewVa;
//		/*0x028*/     ULONG32      SessionId;
//		/*0x02C*/     UINT8        _PADDING0_[0x4];
//	}MMVIEW, *PMMVIEW;
//
//	typedef struct _MMWSL                                   // 25 elements, 0x488 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      FirstFree;
//		/*0x004*/     ULONG32      FirstDynamic;
//		/*0x008*/     ULONG32      LastEntry;
//		/*0x00C*/     ULONG32      NextSlot;
//		/*0x010*/     struct _MMWSLE* Wsle;
//		/*0x018*/     VOID*        LowestPagableAddress;
//		/*0x020*/     ULONG32      LastInitializedWsle;
//		/*0x024*/     ULONG32      NextAgingSlot;
//		/*0x028*/     ULONG32      NumberOfCommittedPageTables;
//		/*0x02C*/     ULONG32      VadBitMapHint;
//		/*0x030*/     ULONG32      NonDirectCount;
//		/*0x034*/     ULONG32      LastVadBit;
//		/*0x038*/     ULONG32      MaximumLastVadBit;
//		/*0x03C*/     ULONG32      LastAllocationSizeHint;
//		/*0x040*/     ULONG32      LastAllocationSize;
//		/*0x044*/     UINT8        _PADDING0_[0x4];
//		/*0x048*/     struct _MMWSLE_NONDIRECT_HASH* NonDirectHash;
//		/*0x050*/     struct _MMWSLE_HASH* HashTableStart;
//		/*0x058*/     struct _MMWSLE_HASH* HighestPermittedHashAddress;
//		/*0x060*/     ULONG32      MaximumUserPageTablePages;
//		/*0x064*/     ULONG32      MaximumUserPageDirectoryPages;
//		/*0x068*/     ULONG32*     CommittedPageTables;
//		/*0x070*/     ULONG32      NumberOfCommittedPageDirectories;
//		/*0x074*/     UINT8        _PADDING1_[0x4];
//		/*0x078*/     UINT64       CommittedPageDirectories[128];
//		/*0x478*/     ULONG32      NumberOfCommittedPageDirectoryParents;
//		/*0x47C*/     UINT8        _PADDING2_[0x4];
//		/*0x480*/     UINT64       CommittedPageDirectoryParents[1];
//	}MMWSL, *PMMWSL;
//
//	typedef struct _MMWSLENTRY               // 7 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Valid : 1;              // 0 BitPosition
//		/*0x000*/     UINT64       Spare : 1;              // 1 BitPosition
//		/*0x000*/     UINT64       Hashed : 1;             // 2 BitPosition
//		/*0x000*/     UINT64       Direct : 1;             // 3 BitPosition
//		/*0x000*/     UINT64       Protection : 5;         // 4 BitPosition
//		/*0x000*/     UINT64       Age : 3;                // 9 BitPosition
//		/*0x000*/     UINT64       VirtualPageNumber : 52; // 12 BitPosition
//	}MMWSLENTRY, *PMMWSLENTRY;
//
//	typedef struct _MMWSLE_FREE_ENTRY   // 3 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       MustBeZero : 1;    // 0 BitPosition
//		/*0x000*/     UINT64       PreviousFree : 31; // 1 BitPosition
//		/*0x000*/     UINT64       NextFree : 32;     // 32 BitPosition
//	}MMWSLE_FREE_ENTRY, *PMMWSLE_FREE_ENTRY;
//
//	typedef struct _MMWSLE                // 1 elements, 0x8 bytes (sizeof)
//	{
//		union                             // 4 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         VOID*        VirtualAddress;
//			/*0x000*/         UINT64       Long;
//			/*0x000*/         struct _MMWSLENTRY e1;        // 7 elements, 0x8 bytes (sizeof)
//			/*0x000*/         struct _MMWSLE_FREE_ENTRY e2; // 3 elements, 0x8 bytes (sizeof)
//		}u1;
//	}MMWSLE, *PMMWSLE;
//
//	typedef struct _MMWSLE_HASH // 1 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Index;
//	}MMWSLE_HASH, *PMMWSLE_HASH;
//
//	typedef struct _MMWSLE_NONDIRECT_HASH // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        Key;
//		/*0x008*/     ULONG32      Index;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//	}MMWSLE_NONDIRECT_HASH, *PMMWSLE_NONDIRECT_HASH;
//
//	typedef struct _MSUBSECTION                         // 15 elements, 0x68 bytes (sizeof)
//	{
//		/*0x000*/     struct _CONTROL_AREA* ControlArea;
//		/*0x008*/     struct _MMPTE* SubsectionBase;
//		union                                           // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x010*/         struct _SUBSECTION* NextSubsection;
//			/*0x010*/         struct _MSUBSECTION* NextMappedSubsection;
//		};
//		/*0x018*/     ULONG32      PtesInSubsection;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		union                                           // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x020*/         ULONG32      UnusedPtes;
//			/*0x020*/         struct _MM_AVL_TABLE* GlobalPerSessionHead;
//		};
//		union                                           // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x028*/         ULONG32      LongFlags;
//			/*0x028*/         struct _MMSUBSECTION_FLAGS SubsectionFlags; // 8 elements, 0x4 bytes (sizeof)
//		}u;
//		/*0x02C*/     ULONG32      StartingSector;
//		/*0x030*/     ULONG32      NumberOfFullSectors;
//		/*0x034*/     UINT8        _PADDING1_[0x4];
//		union                                           // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x038*/         INT64        Balance : 2;                   // 0 BitPosition
//			/*0x038*/         struct _MMSUBSECTION_NODE* Parent;
//		}u1;
//		/*0x040*/     struct _MMSUBSECTION_NODE* LeftChild;
//		/*0x048*/     struct _MMSUBSECTION_NODE* RightChild;
//		/*0x050*/     struct _LIST_ENTRY DereferenceList;             // 2 elements, 0x10 bytes (sizeof)
//		/*0x060*/     UINT64       NumberOfMappedViews;
//	}MSUBSECTION, *PMSUBSECTION;
//
//	typedef struct _NAMED_PIPE_CREATE_PARAMETERS // 8 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      NamedPipeType;
//		/*0x004*/     ULONG32      ReadMode;
//		/*0x008*/     ULONG32      CompletionMode;
//		/*0x00C*/     ULONG32      MaximumInstances;
//		/*0x010*/     ULONG32      InboundQuota;
//		/*0x014*/     ULONG32      OutboundQuota;
//		/*0x018*/     union _LARGE_INTEGER DefaultTimeout;     // 4 elements, 0x8 bytes (sizeof)
//		/*0x020*/     UINT8        TimeoutSpecified;
//		/*0x021*/     UINT8        _PADDING0_[0x7];
//	}NAMED_PIPE_CREATE_PARAMETERS, *PNAMED_PIPE_CREATE_PARAMETERS;
//
//	typedef struct _NBQUEUE_BLOCK       // 3 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _SLIST_ENTRY SListEntry; // 1 elements, 0x10 bytes (sizeof)
//		/*0x010*/     UINT64       Next;
//		/*0x018*/     UINT64       Data;
//	}NBQUEUE_BLOCK, *PNBQUEUE_BLOCK;
//
//	typedef struct _NETWORK_LOADER_BLOCK          // 4 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     UINT8*       DHCPServerACK;
//		/*0x008*/     ULONG32      DHCPServerACKLength;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     UINT8*       BootServerReplyPacket;
//		/*0x018*/     ULONG32      BootServerReplyPacketLength;
//		/*0x01C*/     UINT8        _PADDING1_[0x4];
//	}NETWORK_LOADER_BLOCK, *PNETWORK_LOADER_BLOCK;
//
//	typedef struct _NLS_DATA_BLOCK         // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        AnsiCodePageData;
//		/*0x008*/     VOID*        OemCodePageData;
//		/*0x010*/     VOID*        UnicodeCaseTableData;
//	}NLS_DATA_BLOCK, *PNLS_DATA_BLOCK;
//
//	typedef struct _NPAGED_LOOKASIDE_LIST // 1 elements, 0x80 bytes (sizeof)
//	{
//		/*0x000*/     struct _GENERAL_LOOKASIDE L;      // 22 elements, 0x80 bytes (sizeof)
//	}NPAGED_LOOKASIDE_LIST, *PNPAGED_LOOKASIDE_LIST;
//
//	typedef struct _NT_TIB32               // 8 elements, 0x1C bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      ExceptionList;
//		/*0x004*/     ULONG32      StackBase;
//		/*0x008*/     ULONG32      StackLimit;
//		/*0x00C*/     ULONG32      SubSystemTib;
//		union                              // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x010*/         ULONG32      FiberData;
//			/*0x010*/         ULONG32      Version;
//		};
//		/*0x014*/     ULONG32      ArbitraryUserPointer;
//		/*0x018*/     ULONG32      Self;
//	}NT_TIB32, *PNT_TIB32;
//
//	typedef struct _NT_TIB64               // 8 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       ExceptionList;
//		/*0x008*/     UINT64       StackBase;
//		/*0x010*/     UINT64       StackLimit;
//		/*0x018*/     UINT64       SubSystemTib;
//		union                              // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x020*/         UINT64       FiberData;
//			/*0x020*/         ULONG32      Version;
//		};
//		/*0x028*/     UINT64       ArbitraryUserPointer;
//		/*0x030*/     UINT64       Self;
//	}NT_TIB64, *PNT_TIB64;
//
//	typedef struct _OB_DUPLICATE_OBJECT_STATE       // 6 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _EPROCESS* SourceProcess;
//		/*0x008*/     VOID*        SourceHandle;
//		/*0x010*/     VOID*        Object;
//		/*0x018*/     ULONG32      TargetAccess;
//		/*0x01C*/     struct _HANDLE_TABLE_ENTRY_INFO ObjectInfo; // 1 elements, 0x4 bytes (sizeof)
//		/*0x020*/     ULONG32      HandleAttributes;
//		/*0x024*/     UINT8        _PADDING0_[0x4];
//	}OB_DUPLICATE_OBJECT_STATE, *POB_DUPLICATE_OBJECT_STATE;
//
//	typedef struct _OBJECT_ATTRIBUTES          // 6 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Length;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     VOID*        RootDirectory;
//		/*0x010*/     struct _UNICODE_STRING* ObjectName;
//		/*0x018*/     ULONG32      Attributes;
//		/*0x01C*/     UINT8        _PADDING1_[0x4];
//		/*0x020*/     VOID*        SecurityDescriptor;
//		/*0x028*/     VOID*        SecurityQualityOfService;
//	}OBJECT_ATTRIBUTES, *POBJECT_ATTRIBUTES;
//
//	typedef struct _OBJECT_CREATE_INFORMATION                         // 9 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Attributes;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     VOID*        RootDirectory;
//		/*0x010*/     CHAR         ProbeMode;
//		/*0x011*/     UINT8        _PADDING1_[0x3];
//		/*0x014*/     ULONG32      PagedPoolCharge;
//		/*0x018*/     ULONG32      NonPagedPoolCharge;
//		/*0x01C*/     ULONG32      SecurityDescriptorCharge;
//		/*0x020*/     VOID*        SecurityDescriptor;
//		/*0x028*/     struct _SECURITY_QUALITY_OF_SERVICE* SecurityQos;
//		/*0x030*/     struct _SECURITY_QUALITY_OF_SERVICE SecurityQualityOfService; // 4 elements, 0xC bytes (sizeof)
//		/*0x03C*/     UINT8        _PADDING2_[0x4];
//	}OBJECT_CREATE_INFORMATION, *POBJECT_CREATE_INFORMATION;
//
//	typedef struct _OBJECT_DIRECTORY                     // 6 elements, 0x150 bytes (sizeof)
//	{
//		/*0x000*/     struct _OBJECT_DIRECTORY_ENTRY* HashBuckets[37];
//		/*0x128*/     struct _EX_PUSH_LOCK Lock;                       // 7 elements, 0x8 bytes (sizeof)
//		/*0x130*/     struct _DEVICE_MAP* DeviceMap;
//		/*0x138*/     ULONG32      SessionId;
//		/*0x13C*/     UINT8        _PADDING0_[0x4];
//		/*0x140*/     VOID*        NamespaceEntry;
//		/*0x148*/     ULONG32      Flags;
//		/*0x14C*/     UINT8        _PADDING1_[0x4];
//	}OBJECT_DIRECTORY, *POBJECT_DIRECTORY;
//
//	typedef struct _OBJECT_DIRECTORY_ENTRY         // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _OBJECT_DIRECTORY_ENTRY* ChainLink;
//		/*0x008*/     VOID*        Object;
//		/*0x010*/     ULONG32      HashValue;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//	}OBJECT_DIRECTORY_ENTRY, *POBJECT_DIRECTORY_ENTRY;
//
//	typedef struct _OBJECT_DUMP_CONTROL // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        Stream;
//		/*0x008*/     ULONG32      Detail;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//	}OBJECT_DUMP_CONTROL, *POBJECT_DUMP_CONTROL;
//
//	typedef struct _OBJECT_HANDLE_COUNT_ENTRY // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _EPROCESS* Process;
//		struct                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x008*/         ULONG32      HandleCount : 24;    // 0 BitPosition
//			/*0x008*/         ULONG32      LockCount : 8;       // 24 BitPosition
//		};
//	}OBJECT_HANDLE_COUNT_ENTRY, *POBJECT_HANDLE_COUNT_ENTRY;
//
//	typedef struct _OBJECT_HANDLE_COUNT_DATABASE                 // 2 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      CountEntries;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _OBJECT_HANDLE_COUNT_ENTRY HandleCountEntries[1];
//	}OBJECT_HANDLE_COUNT_DATABASE, *POBJECT_HANDLE_COUNT_DATABASE;
//
//	typedef struct _OBJECT_HANDLE_INFORMATION // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      HandleAttributes;
//		/*0x004*/     ULONG32      GrantedAccess;
//	}OBJECT_HANDLE_INFORMATION, *POBJECT_HANDLE_INFORMATION;
//
//	typedef struct _OBJECT_HEADER_CREATOR_INFO // 4 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY TypeList;           // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     VOID*        CreatorUniqueProcess;
//		/*0x018*/     UINT16       CreatorBackTraceIndex;
//		/*0x01A*/     UINT16       Reserved;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//	}OBJECT_HEADER_CREATOR_INFO, *POBJECT_HEADER_CREATOR_INFO;
//
//	typedef struct _OBJECT_HEADER_HANDLE_INFO                          // 2 elements, 0x10 bytes (sizeof)
//	{
//		union                                                          // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x000*/         struct _OBJECT_HANDLE_COUNT_DATABASE* HandleCountDataBase;
//			/*0x000*/         struct _OBJECT_HANDLE_COUNT_ENTRY SingleEntry;             // 3 elements, 0x10 bytes (sizeof)
//		};
//	}OBJECT_HEADER_HANDLE_INFO, *POBJECT_HEADER_HANDLE_INFO;
//
//	typedef struct _OBJECT_HEADER_NAME_INFO  // 3 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _OBJECT_DIRECTORY* Directory;
//		/*0x008*/     struct _UNICODE_STRING Name;         // 3 elements, 0x10 bytes (sizeof)
//		/*0x018*/     LONG32       ReferenceCount;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//	}OBJECT_HEADER_NAME_INFO, *POBJECT_HEADER_NAME_INFO;
//
//	typedef struct _OBJECT_HEADER_PROCESS_INFO // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _EPROCESS* ExclusiveProcess;
//		/*0x008*/     UINT64       Reserved;
//	}OBJECT_HEADER_PROCESS_INFO, *POBJECT_HEADER_PROCESS_INFO;
//
//	typedef struct _OBJECT_HEADER_QUOTA_INFO       // 5 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      PagedPoolCharge;
//		/*0x004*/     ULONG32      NonPagedPoolCharge;
//		/*0x008*/     ULONG32      SecurityDescriptorCharge;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     VOID*        SecurityDescriptorQuotaBlock;
//		/*0x018*/     UINT64       Reserved;
//	}OBJECT_HEADER_QUOTA_INFO, *POBJECT_HEADER_QUOTA_INFO;
//
//	typedef struct _OBJECT_NAME_INFORMATION // 1 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _UNICODE_STRING Name;        // 3 elements, 0x10 bytes (sizeof)
//	}OBJECT_NAME_INFORMATION, *POBJECT_NAME_INFORMATION;
//
//	typedef struct _OBJECT_REF_STACK_INFO // 4 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Sequence;
//		/*0x004*/     UINT16       Index;
//		/*0x006*/     UINT16       NumTraces;
//		/*0x008*/     ULONG32      Tag;
//	}OBJECT_REF_STACK_INFO, *POBJECT_REF_STACK_INFO;
//
//	typedef struct _OBJECT_REF_INFO                 // 6 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _OBJECT_HEADER* ObjectHeader;
//		/*0x008*/     VOID*        NextRef;
//		/*0x010*/     UINT8        ImageFileName[16];
//		/*0x020*/     UINT16       NextPos;
//		/*0x022*/     UINT16       MaxStacks;
//		///*0x024*/     struct _OBJECT_REF_STACK_INFO StackInfo[0];
//		/*0x024*/     UINT8        _PADDING0_[0x4];
//	}OBJECT_REF_INFO, *POBJECT_REF_INFO;
//
//	typedef struct _OBJECT_REF_TRACE // 1 elements, 0x80 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        StackTrace[16];
//	}OBJECT_REF_TRACE, *POBJECT_REF_TRACE;
//
//	typedef struct _OBJECT_SYMBOLIC_LINK   // 4 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     union _LARGE_INTEGER CreationTime; // 4 elements, 0x8 bytes (sizeof)
//		/*0x008*/     struct _UNICODE_STRING LinkTarget; // 3 elements, 0x10 bytes (sizeof)
//		/*0x018*/     ULONG32      DosDeviceDriveIndex;
//		/*0x01C*/     ULONG32      Flags;
//	}OBJECT_SYMBOLIC_LINK, *POBJECT_SYMBOLIC_LINK;
//
//	typedef struct _OBJECT_TYPE_INITIALIZER                                                                                                                                         // 26 elements, 0x70 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Length;
//		union                                                                                                                                                                       // 2 elements, 0x1 bytes (sizeof)
//		{
//			/*0x002*/         UINT8        ObjectTypeFlags;
//			struct                                                                                                                                                                  // 8 elements, 0x1 bytes (sizeof)
//			{
//				/*0x002*/             UINT8        CaseInsensitive : 1;                                                                                                                                   // 0 BitPosition
//				/*0x002*/             UINT8        UnnamedObjectsOnly : 1;                                                                                                                                // 1 BitPosition
//				/*0x002*/             UINT8        UseDefaultObject : 1;                                                                                                                                  // 2 BitPosition
//				/*0x002*/             UINT8        SecurityRequired : 1;                                                                                                                                  // 3 BitPosition
//				/*0x002*/             UINT8        MaintainHandleCount : 1;                                                                                                                               // 4 BitPosition
//				/*0x002*/             UINT8        MaintainTypeList : 1;                                                                                                                                  // 5 BitPosition
//				/*0x002*/             UINT8        SupportsObjectCallbacks : 1;                                                                                                                           // 6 BitPosition
//				/*0x002*/             UINT8        CacheAligned : 1;                                                                                                                                      // 7 BitPosition
//			};
//		};
//		/*0x004*/     ULONG32      ObjectTypeCode;
//		/*0x008*/     ULONG32      InvalidAttributes;
//		/*0x00C*/     struct _GENERIC_MAPPING GenericMapping;                                                                                                                                     // 4 elements, 0x10 bytes (sizeof)
//		/*0x01C*/     ULONG32      ValidAccessMask;
//		/*0x020*/     ULONG32      RetainAccess;
//		/*0x024*/     enum _POOL_TYPE PoolType;
//		/*0x028*/     ULONG32      DefaultPagedPoolCharge;
//		/*0x02C*/     ULONG32      DefaultNonPagedPoolCharge;
//		/*0x030*/     FUNCT_00A3_0FBB_DumpProcedure* DumpProcedure;
//		/*0x038*/     FUNCT_005B_0FC3_OpenProcedure* OpenProcedure;
//		/*0x040*/     FUNCT_00A3_0FD1_CloseProcedure* CloseProcedure;
//		/*0x048*/     FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* DeleteProcedure;
//		/*0x050*/     FUNCT_005B_0FD7_ParseProcedure* ParseProcedure;
//		/*0x058*/     FUNCT_005B_0FE3_SecurityProcedure* SecurityProcedure;
//		/*0x060*/     FUNCT_005B_0FF4_QueryNameProcedure* QueryNameProcedure;
//		/*0x068*/     FUNCT_0065_0FFC_OkayToCloseProcedure* OkayToCloseProcedure;
//	}OBJECT_TYPE_INITIALIZER, *POBJECT_TYPE_INITIALIZER;
//
//	typedef struct _OBJECT_TYPE                   // 12 elements, 0xD0 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY TypeList;              // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _UNICODE_STRING Name;              // 3 elements, 0x10 bytes (sizeof)
//		/*0x020*/     VOID*        DefaultObject;
//		/*0x028*/     UINT8        Index;
//		/*0x029*/     UINT8        _PADDING0_[0x3];
//		/*0x02C*/     ULONG32      TotalNumberOfObjects;
//		/*0x030*/     ULONG32      TotalNumberOfHandles;
//		/*0x034*/     ULONG32      HighWaterNumberOfObjects;
//		/*0x038*/     ULONG32      HighWaterNumberOfHandles;
//		/*0x03C*/     UINT8        _PADDING1_[0x4];
//		/*0x040*/     struct _OBJECT_TYPE_INITIALIZER TypeInfo; // 26 elements, 0x70 bytes (sizeof)
//		/*0x0B0*/     struct _EX_PUSH_LOCK TypeLock;            // 7 elements, 0x8 bytes (sizeof)
//		/*0x0B8*/     ULONG32      Key;
//		/*0x0BC*/     UINT8        _PADDING2_[0x4];
//		/*0x0C0*/     struct _LIST_ENTRY CallbackList;          // 2 elements, 0x10 bytes (sizeof)
//	}OBJECT_TYPE, *POBJECT_TYPE;
//
//	typedef struct _OBP_LOOKUP_CONTEXT       // 7 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _OBJECT_DIRECTORY* Directory;
//		/*0x008*/     VOID*        Object;
//		/*0x010*/     ULONG32      HashValue;
//		/*0x014*/     UINT16       HashIndex;
//		/*0x016*/     UINT8        DirectoryLocked;
//		/*0x017*/     UINT8        LockedExclusive;
//		/*0x018*/     ULONG32      LockStateSignature;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//	}OBP_LOOKUP_CONTEXT, *POBP_LOOKUP_CONTEXT;
//
//	typedef struct _OPEN_PACKET                                    // 27 elements, 0xB8 bytes (sizeof)
//	{
//		/*0x000*/     INT16        Type;
//		/*0x002*/     INT16        Size;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _FILE_OBJECT* FileObject;
//		/*0x010*/     LONG32       FinalStatus;
//		/*0x014*/     UINT8        _PADDING1_[0x4];
//		/*0x018*/     UINT64       Information;
//		/*0x020*/     ULONG32      ParseCheck;
//		/*0x024*/     UINT8        _PADDING2_[0x4];
//		/*0x028*/     struct _FILE_OBJECT* RelatedFileObject;
//		/*0x030*/     struct _OBJECT_ATTRIBUTES* OriginalAttributes;
//		/*0x038*/     union _LARGE_INTEGER AllocationSize;                       // 4 elements, 0x8 bytes (sizeof)
//		/*0x040*/     ULONG32      CreateOptions;
//		/*0x044*/     UINT16       FileAttributes;
//		/*0x046*/     UINT16       ShareAccess;
//		/*0x048*/     VOID*        EaBuffer;
//		/*0x050*/     ULONG32      EaLength;
//		/*0x054*/     ULONG32      Options;
//		/*0x058*/     ULONG32      Disposition;
//		/*0x05C*/     UINT8        _PADDING3_[0x4];
//		/*0x060*/     struct _FILE_BASIC_INFORMATION* BasicInformation;
//		/*0x068*/     struct _FILE_NETWORK_OPEN_INFORMATION* NetworkInformation;
//		/*0x070*/     enum _CREATE_FILE_TYPE CreateFileType;
//		/*0x074*/     UINT8        _PADDING4_[0x4];
//		/*0x078*/     VOID*        MailslotOrPipeParameters;
//		/*0x080*/     UINT8        Override;
//		/*0x081*/     UINT8        QueryOnly;
//		/*0x082*/     UINT8        DeleteOnly;
//		/*0x083*/     UINT8        FullAttributes;
//		/*0x084*/     UINT8        _PADDING5_[0x4];
//		/*0x088*/     struct _DUMMY_FILE_OBJECT* LocalFileObject;
//		/*0x090*/     ULONG32      InternalFlags;
//		/*0x094*/     UINT8        _PADDING6_[0x4];
//		/*0x098*/     struct _IO_DRIVER_CREATE_CONTEXT DriverCreateContext;      // 4 elements, 0x20 bytes (sizeof)
//	}OPEN_PACKET, *POPEN_PACKET;
//
//	typedef struct _PAGED_LOOKASIDE_LIST // 1 elements, 0x80 bytes (sizeof)
//	{
//		/*0x000*/     struct _GENERAL_LOOKASIDE L;     // 22 elements, 0x80 bytes (sizeof)
//	}PAGED_LOOKASIDE_LIST, *PPAGED_LOOKASIDE_LIST;
//
//	typedef struct _PAGEFAULT_HISTORY // 0 elements, 0x0 bytes (sizeof)
//	{
//	}PAGEFAULT_HISTORY, *PPAGEFAULT_HISTORY;
//
//	typedef struct _PCW_BUFFER // 0 elements, 0x0 bytes (sizeof)
//	{
//	}PCW_BUFFER, *PPCW_BUFFER;
//
//	typedef struct _PCW_COUNTER_INFORMATION   // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       CounterMask;
//		/*0x008*/     struct _UNICODE_STRING* InstanceMask;
//	}PCW_COUNTER_INFORMATION, *PPCW_COUNTER_INFORMATION;
//
//	typedef struct _PCW_MASK_INFORMATION      // 6 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       CounterMask;
//		/*0x008*/     struct _UNICODE_STRING* InstanceMask;
//		/*0x010*/     ULONG32      InstanceId;
//		/*0x014*/     UINT8        CollectMultiple;
//		/*0x015*/     UINT8        _PADDING0_[0x3];
//		/*0x018*/     struct _PCW_BUFFER* Buffer;
//		/*0x020*/     struct _KEVENT* CancelEvent;
//	}PCW_MASK_INFORMATION, *PPCW_MASK_INFORMATION;
//
//	typedef union _PCW_CALLBACK_INFORMATION              // 4 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _PCW_COUNTER_INFORMATION AddCounter;      // 2 elements, 0x10 bytes (sizeof)
//		/*0x000*/     struct _PCW_COUNTER_INFORMATION RemoveCounter;   // 2 elements, 0x10 bytes (sizeof)
//		/*0x000*/     struct _PCW_MASK_INFORMATION EnumerateInstances; // 6 elements, 0x28 bytes (sizeof)
//		/*0x000*/     struct _PCW_MASK_INFORMATION CollectData;        // 6 elements, 0x28 bytes (sizeof)
//	}PCW_CALLBACK_INFORMATION, *PPCW_CALLBACK_INFORMATION;
//
//	typedef struct _PCW_COUNTER_DESCRIPTOR // 4 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Id;
//		/*0x002*/     UINT16       StructIndex;
//		/*0x004*/     UINT16       Offset;
//		/*0x006*/     UINT16       Size;
//	}PCW_COUNTER_DESCRIPTOR, *PPCW_COUNTER_DESCRIPTOR;
//
//	typedef struct _PCW_DATA          // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        Data;
//		/*0x008*/     ULONG32      Size;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//	}PCW_DATA, *PPCW_DATA;
//
//	typedef struct _PCW_INSTANCE // 0 elements, 0x0 bytes (sizeof)
//	{
//	}PCW_INSTANCE, *PPCW_INSTANCE;
//
//	typedef struct _PCW_PROCESSOR_INFO    // 19 elements, 0x80 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       IdleTime;
//		/*0x008*/     UINT64       AvailableTime;
//		/*0x010*/     UINT64       UserTime;
//		/*0x018*/     UINT64       KernelTime;
//		/*0x020*/     ULONG32      Interrupts;
//		/*0x024*/     UINT8        _PADDING0_[0x4];
//		/*0x028*/     UINT64       DpcTime;
//		/*0x030*/     UINT64       InterruptTime;
//		/*0x038*/     ULONG32      DpcCount;
//		/*0x03C*/     ULONG32      DpcRate;
//		/*0x040*/     UINT64       C1Time;
//		/*0x048*/     UINT64       C2Time;
//		/*0x050*/     UINT64       C3Time;
//		/*0x058*/     UINT64       C1Transitions;
//		/*0x060*/     UINT64       C2Transitions;
//		/*0x068*/     UINT64       C3Transitions;
//		/*0x070*/     ULONG32      ParkingStatus;
//		/*0x074*/     ULONG32      CurrentFrequency;
//		/*0x078*/     ULONG32      PercentMaxFrequency;
//		/*0x07C*/     ULONG32      StateFlags;
//	}PCW_PROCESSOR_INFO, *PPCW_PROCESSOR_INFO;
//
//	typedef struct _PCW_REGISTRATION // 0 elements, 0x0 bytes (sizeof)
//	{
//	}PCW_REGISTRATION, *PPCW_REGISTRATION;
//
//	typedef struct _PCW_REGISTRATION_INFORMATION  // 6 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Version;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _UNICODE_STRING* Name;
//		/*0x010*/     ULONG32      CounterCount;
//		/*0x014*/     UINT8        _PADDING1_[0x4];
//		/*0x018*/     struct _PCW_COUNTER_DESCRIPTOR* Counters;
//		/*0x020*/     FUNCT_005B_178D_Callback* Callback;
//		/*0x028*/     VOID*        CallbackContext;
//	}PCW_REGISTRATION_INFORMATION, *PPCW_REGISTRATION_INFORMATION;
//
//	typedef struct _PEB                                                                               // 91 elements, 0x380 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        InheritedAddressSpace;
//		/*0x001*/     UINT8        ReadImageFileExecOptions;
//		/*0x002*/     UINT8        BeingDebugged;
//		union                                                                                         // 2 elements, 0x1 bytes (sizeof)
//		{
//			/*0x003*/         UINT8        BitField;
//			struct                                                                                    // 6 elements, 0x1 bytes (sizeof)
//			{
//				/*0x003*/             UINT8        ImageUsesLargePages : 1;                                                 // 0 BitPosition
//				/*0x003*/             UINT8        IsProtectedProcess : 1;                                                  // 1 BitPosition
//				/*0x003*/             UINT8        IsLegacyProcess : 1;                                                     // 2 BitPosition
//				/*0x003*/             UINT8        IsImageDynamicallyRelocated : 1;                                         // 3 BitPosition
//				/*0x003*/             UINT8        SkipPatchingUser32Forwarders : 1;                                        // 4 BitPosition
//				/*0x003*/             UINT8        SpareBits : 3;                                                           // 5 BitPosition
//			};
//		};
//		/*0x008*/     VOID*        Mutant;
//		/*0x010*/     VOID*        ImageBaseAddress;
//		/*0x018*/     struct _PEB_LDR_DATA* Ldr;
//		/*0x020*/     struct _RTL_USER_PROCESS_PARAMETERS* ProcessParameters;
//		/*0x028*/     VOID*        SubSystemData;
//		/*0x030*/     VOID*        ProcessHeap;
//		/*0x038*/     struct _RTL_CRITICAL_SECTION* FastPebLock;
//		/*0x040*/     VOID*        AtlThunkSListPtr;
//		/*0x048*/     VOID*        IFEOKey;
//		union                                                                                         // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x050*/         ULONG32      CrossProcessFlags;
//			struct                                                                                    // 6 elements, 0x4 bytes (sizeof)
//			{
//				/*0x050*/             ULONG32      ProcessInJob : 1;                                                        // 0 BitPosition
//				/*0x050*/             ULONG32      ProcessInitializing : 1;                                                 // 1 BitPosition
//				/*0x050*/             ULONG32      ProcessUsingVEH : 1;                                                     // 2 BitPosition
//				/*0x050*/             ULONG32      ProcessUsingVCH : 1;                                                     // 3 BitPosition
//				/*0x050*/             ULONG32      ProcessUsingFTH : 1;                                                     // 4 BitPosition
//				/*0x050*/             ULONG32      ReservedBits0 : 27;                                                      // 5 BitPosition
//			};
//		};
//		union                                                                                         // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x058*/         VOID*        KernelCallbackTable;
//			/*0x058*/         VOID*        UserSharedInfoPtr;
//		};
//		/*0x060*/     ULONG32      SystemReserved[1];
//		/*0x064*/     ULONG32      AtlThunkSListPtr32;
//		/*0x068*/     VOID*        ApiSetMap;
//		/*0x070*/     ULONG32      TlsExpansionCounter;
//		/*0x074*/     UINT8        _PADDING0_[0x4];
//		/*0x078*/     VOID*        TlsBitmap;
//		/*0x080*/     ULONG32      TlsBitmapBits[2];
//		/*0x088*/     VOID*        ReadOnlySharedMemoryBase;
//		/*0x090*/     VOID*        HotpatchInformation;
//		/*0x098*/     VOID**       ReadOnlyStaticServerData;
//		/*0x0A0*/     VOID*        AnsiCodePageData;
//		/*0x0A8*/     VOID*        OemCodePageData;
//		/*0x0B0*/     VOID*        UnicodeCaseTableData;
//		/*0x0B8*/     ULONG32      NumberOfProcessors;
//		/*0x0BC*/     ULONG32      NtGlobalFlag;
//		/*0x0C0*/     union _LARGE_INTEGER CriticalSectionTimeout;                                                  // 4 elements, 0x8 bytes (sizeof)
//		/*0x0C8*/     UINT64       HeapSegmentReserve;
//		/*0x0D0*/     UINT64       HeapSegmentCommit;
//		/*0x0D8*/     UINT64       HeapDeCommitTotalFreeThreshold;
//		/*0x0E0*/     UINT64       HeapDeCommitFreeBlockThreshold;
//		/*0x0E8*/     ULONG32      NumberOfHeaps;
//		/*0x0EC*/     ULONG32      MaximumNumberOfHeaps;
//		/*0x0F0*/     VOID**       ProcessHeaps;
//		/*0x0F8*/     VOID*        GdiSharedHandleTable;
//		/*0x100*/     VOID*        ProcessStarterHelper;
//		/*0x108*/     ULONG32      GdiDCAttributeList;
//		/*0x10C*/     UINT8        _PADDING1_[0x4];
//		/*0x110*/     struct _RTL_CRITICAL_SECTION* LoaderLock;
//		/*0x118*/     ULONG32      OSMajorVersion;
//		/*0x11C*/     ULONG32      OSMinorVersion;
//		/*0x120*/     UINT16       OSBuildNumber;
//		/*0x122*/     UINT16       OSCSDVersion;
//		/*0x124*/     ULONG32      OSPlatformId;
//		/*0x128*/     ULONG32      ImageSubsystem;
//		/*0x12C*/     ULONG32      ImageSubsystemMajorVersion;
//		/*0x130*/     ULONG32      ImageSubsystemMinorVersion;
//		/*0x134*/     UINT8        _PADDING2_[0x4];
//		/*0x138*/     UINT64       ActiveProcessAffinityMask;
//		/*0x140*/     ULONG32      GdiHandleBuffer[60];
//		/*0x230*/     FUNCT_00A3_0284_PostProcessInitRoutine_DispatchAddress_FinishRoutine* PostProcessInitRoutine;
//		/*0x238*/     VOID*        TlsExpansionBitmap;
//		/*0x240*/     ULONG32      TlsExpansionBitmapBits[32];
//		/*0x2C0*/     ULONG32      SessionId;
//		/*0x2C4*/     UINT8        _PADDING3_[0x4];
//		/*0x2C8*/     union _ULARGE_INTEGER AppCompatFlags;                                                         // 4 elements, 0x8 bytes (sizeof)
//		/*0x2D0*/     union _ULARGE_INTEGER AppCompatFlagsUser;                                                     // 4 elements, 0x8 bytes (sizeof)
//		/*0x2D8*/     VOID*        pShimData;
//		/*0x2E0*/     VOID*        AppCompatInfo;
//		/*0x2E8*/     struct _UNICODE_STRING CSDVersion;                                                            // 3 elements, 0x10 bytes (sizeof)
//		/*0x2F8*/     struct _ACTIVATION_CONTEXT_DATA* ActivationContextData;
//		/*0x300*/     struct _ASSEMBLY_STORAGE_MAP* ProcessAssemblyStorageMap;
//		/*0x308*/     struct _ACTIVATION_CONTEXT_DATA* SystemDefaultActivationContextData;
//		/*0x310*/     struct _ASSEMBLY_STORAGE_MAP* SystemAssemblyStorageMap;
//		/*0x318*/     UINT64       MinimumStackCommit;
//		/*0x320*/     struct _FLS_CALLBACK_INFO* FlsCallback;
//		/*0x328*/     struct _LIST_ENTRY FlsListHead;                                                               // 2 elements, 0x10 bytes (sizeof)
//		/*0x338*/     VOID*        FlsBitmap;
//		/*0x340*/     ULONG32      FlsBitmapBits[4];
//		/*0x350*/     ULONG32      FlsHighIndex;
//		/*0x354*/     UINT8        _PADDING4_[0x4];
//		/*0x358*/     VOID*        WerRegistrationData;
//		/*0x360*/     VOID*        WerShipAssertPtr;
//		/*0x368*/     VOID*        pContextData;
//		/*0x370*/     VOID*        pImageHeaderHash;
//		union                                                                                         // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x378*/         ULONG32      TracingFlags;
//			struct                                                                                    // 3 elements, 0x4 bytes (sizeof)
//			{
//				/*0x378*/             ULONG32      HeapTracingEnabled : 1;                                                  // 0 BitPosition
//				/*0x378*/             ULONG32      CritSecTracingEnabled : 1;                                               // 1 BitPosition
//				/*0x378*/             ULONG32      SpareTracingBits : 30;                                                   // 2 BitPosition
//			};
//		};
//	}PEB, *PPEB;
//
//	typedef struct _PEB_LDR_DATA                            // 9 elements, 0x58 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Length;
//		/*0x004*/     UINT8        Initialized;
//		/*0x005*/     UINT8        _PADDING0_[0x3];
//		/*0x008*/     VOID*        SsHandle;
//		/*0x010*/     struct _LIST_ENTRY InLoadOrderModuleList;           // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     struct _LIST_ENTRY InMemoryOrderModuleList;         // 2 elements, 0x10 bytes (sizeof)
//		/*0x030*/     struct _LIST_ENTRY InInitializationOrderModuleList; // 2 elements, 0x10 bytes (sizeof)
//		/*0x040*/     VOID*        EntryInProgress;
//		/*0x048*/     UINT8        ShutdownInProgress;
//		/*0x049*/     UINT8        _PADDING1_[0x7];
//		/*0x050*/     VOID*        ShutdownThreadId;
//	}PEB_LDR_DATA, *PPEB_LDR_DATA;
//
//	typedef struct _STRING32        // 3 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Length;
//		/*0x002*/     UINT16       MaximumLength;
//		/*0x004*/     ULONG32      Buffer;
//	}STRING32, *PSTRING32;
//
//	typedef struct _PEB32                                      // 91 elements, 0x248 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        InheritedAddressSpace;
//		/*0x001*/     UINT8        ReadImageFileExecOptions;
//		/*0x002*/     UINT8        BeingDebugged;
//		union                                                  // 2 elements, 0x1 bytes (sizeof)
//		{
//			/*0x003*/         UINT8        BitField;
//			struct                                             // 6 elements, 0x1 bytes (sizeof)
//			{
//				/*0x003*/             UINT8        ImageUsesLargePages : 1;          // 0 BitPosition
//				/*0x003*/             UINT8        IsProtectedProcess : 1;           // 1 BitPosition
//				/*0x003*/             UINT8        IsLegacyProcess : 1;              // 2 BitPosition
//				/*0x003*/             UINT8        IsImageDynamicallyRelocated : 1;  // 3 BitPosition
//				/*0x003*/             UINT8        SkipPatchingUser32Forwarders : 1; // 4 BitPosition
//				/*0x003*/             UINT8        SpareBits : 3;                    // 5 BitPosition
//			};
//		};
//		/*0x004*/     ULONG32      Mutant;
//		/*0x008*/     ULONG32      ImageBaseAddress;
//		/*0x00C*/     ULONG32      Ldr;
//		/*0x010*/     ULONG32      ProcessParameters;
//		/*0x014*/     ULONG32      SubSystemData;
//		/*0x018*/     ULONG32      ProcessHeap;
//		/*0x01C*/     ULONG32      FastPebLock;
//		/*0x020*/     ULONG32      AtlThunkSListPtr;
//		/*0x024*/     ULONG32      IFEOKey;
//		union                                                  // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x028*/         ULONG32      CrossProcessFlags;
//			struct                                             // 6 elements, 0x4 bytes (sizeof)
//			{
//				/*0x028*/             ULONG32      ProcessInJob : 1;                 // 0 BitPosition
//				/*0x028*/             ULONG32      ProcessInitializing : 1;          // 1 BitPosition
//				/*0x028*/             ULONG32      ProcessUsingVEH : 1;              // 2 BitPosition
//				/*0x028*/             ULONG32      ProcessUsingVCH : 1;              // 3 BitPosition
//				/*0x028*/             ULONG32      ProcessUsingFTH : 1;              // 4 BitPosition
//				/*0x028*/             ULONG32      ReservedBits0 : 27;               // 5 BitPosition
//			};
//		};
//		union                                                  // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x02C*/         ULONG32      KernelCallbackTable;
//			/*0x02C*/         ULONG32      UserSharedInfoPtr;
//		};
//		/*0x030*/     ULONG32      SystemReserved[1];
//		/*0x034*/     ULONG32      AtlThunkSListPtr32;
//		/*0x038*/     ULONG32      ApiSetMap;
//		/*0x03C*/     ULONG32      TlsExpansionCounter;
//		/*0x040*/     ULONG32      TlsBitmap;
//		/*0x044*/     ULONG32      TlsBitmapBits[2];
//		/*0x04C*/     ULONG32      ReadOnlySharedMemoryBase;
//		/*0x050*/     ULONG32      HotpatchInformation;
//		/*0x054*/     ULONG32      ReadOnlyStaticServerData;
//		/*0x058*/     ULONG32      AnsiCodePageData;
//		/*0x05C*/     ULONG32      OemCodePageData;
//		/*0x060*/     ULONG32      UnicodeCaseTableData;
//		/*0x064*/     ULONG32      NumberOfProcessors;
//		/*0x068*/     ULONG32      NtGlobalFlag;
//		/*0x06C*/     UINT8        _PADDING0_[0x4];
//		/*0x070*/     union _LARGE_INTEGER CriticalSectionTimeout;           // 4 elements, 0x8 bytes (sizeof)
//		/*0x078*/     ULONG32      HeapSegmentReserve;
//		/*0x07C*/     ULONG32      HeapSegmentCommit;
//		/*0x080*/     ULONG32      HeapDeCommitTotalFreeThreshold;
//		/*0x084*/     ULONG32      HeapDeCommitFreeBlockThreshold;
//		/*0x088*/     ULONG32      NumberOfHeaps;
//		/*0x08C*/     ULONG32      MaximumNumberOfHeaps;
//		/*0x090*/     ULONG32      ProcessHeaps;
//		/*0x094*/     ULONG32      GdiSharedHandleTable;
//		/*0x098*/     ULONG32      ProcessStarterHelper;
//		/*0x09C*/     ULONG32      GdiDCAttributeList;
//		/*0x0A0*/     ULONG32      LoaderLock;
//		/*0x0A4*/     ULONG32      OSMajorVersion;
//		/*0x0A8*/     ULONG32      OSMinorVersion;
//		/*0x0AC*/     UINT16       OSBuildNumber;
//		/*0x0AE*/     UINT16       OSCSDVersion;
//		/*0x0B0*/     ULONG32      OSPlatformId;
//		/*0x0B4*/     ULONG32      ImageSubsystem;
//		/*0x0B8*/     ULONG32      ImageSubsystemMajorVersion;
//		/*0x0BC*/     ULONG32      ImageSubsystemMinorVersion;
//		/*0x0C0*/     ULONG32      ActiveProcessAffinityMask;
//		/*0x0C4*/     ULONG32      GdiHandleBuffer[34];
//		/*0x14C*/     ULONG32      PostProcessInitRoutine;
//		/*0x150*/     ULONG32      TlsExpansionBitmap;
//		/*0x154*/     ULONG32      TlsExpansionBitmapBits[32];
//		/*0x1D4*/     ULONG32      SessionId;
//		/*0x1D8*/     union _ULARGE_INTEGER AppCompatFlags;                  // 4 elements, 0x8 bytes (sizeof)
//		/*0x1E0*/     union _ULARGE_INTEGER AppCompatFlagsUser;              // 4 elements, 0x8 bytes (sizeof)
//		/*0x1E8*/     ULONG32      pShimData;
//		/*0x1EC*/     ULONG32      AppCompatInfo;
//		/*0x1F0*/     struct _STRING32 CSDVersion;                           // 3 elements, 0x8 bytes (sizeof)
//		/*0x1F8*/     ULONG32      ActivationContextData;
//		/*0x1FC*/     ULONG32      ProcessAssemblyStorageMap;
//		/*0x200*/     ULONG32      SystemDefaultActivationContextData;
//		/*0x204*/     ULONG32      SystemAssemblyStorageMap;
//		/*0x208*/     ULONG32      MinimumStackCommit;
//		/*0x20C*/     ULONG32      FlsCallback;
//		/*0x210*/     struct _LIST_ENTRY32 FlsListHead;                      // 2 elements, 0x8 bytes (sizeof)
//		/*0x218*/     ULONG32      FlsBitmap;
//		/*0x21C*/     ULONG32      FlsBitmapBits[4];
//		/*0x22C*/     ULONG32      FlsHighIndex;
//		/*0x230*/     ULONG32      WerRegistrationData;
//		/*0x234*/     ULONG32      WerShipAssertPtr;
//		/*0x238*/     ULONG32      pContextData;
//		/*0x23C*/     ULONG32      pImageHeaderHash;
//		union                                                  // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x240*/         ULONG32      TracingFlags;
//			struct                                             // 3 elements, 0x4 bytes (sizeof)
//			{
//				/*0x240*/             ULONG32      HeapTracingEnabled : 1;           // 0 BitPosition
//				/*0x240*/             ULONG32      CritSecTracingEnabled : 1;        // 1 BitPosition
//				/*0x240*/             ULONG32      SpareTracingBits : 30;            // 2 BitPosition
//			};
//		};
//	}PEB32, *PPEB32;
//
//	typedef struct _STRING64          // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Length;
//		/*0x002*/     UINT16       MaximumLength;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     UINT64       Buffer;
//	}STRING64, *PSTRING64;
//
//	typedef struct _PEB64                                      // 91 elements, 0x380 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        InheritedAddressSpace;
//		/*0x001*/     UINT8        ReadImageFileExecOptions;
//		/*0x002*/     UINT8        BeingDebugged;
//		union                                                  // 2 elements, 0x1 bytes (sizeof)
//		{
//			/*0x003*/         UINT8        BitField;
//			struct                                             // 6 elements, 0x1 bytes (sizeof)
//			{
//				/*0x003*/             UINT8        ImageUsesLargePages : 1;          // 0 BitPosition
//				/*0x003*/             UINT8        IsProtectedProcess : 1;           // 1 BitPosition
//				/*0x003*/             UINT8        IsLegacyProcess : 1;              // 2 BitPosition
//				/*0x003*/             UINT8        IsImageDynamicallyRelocated : 1;  // 3 BitPosition
//				/*0x003*/             UINT8        SkipPatchingUser32Forwarders : 1; // 4 BitPosition
//				/*0x003*/             UINT8        SpareBits : 3;                    // 5 BitPosition
//			};
//		};
//		/*0x008*/     UINT64       Mutant;
//		/*0x010*/     UINT64       ImageBaseAddress;
//		/*0x018*/     UINT64       Ldr;
//		/*0x020*/     UINT64       ProcessParameters;
//		/*0x028*/     UINT64       SubSystemData;
//		/*0x030*/     UINT64       ProcessHeap;
//		/*0x038*/     UINT64       FastPebLock;
//		/*0x040*/     UINT64       AtlThunkSListPtr;
//		/*0x048*/     UINT64       IFEOKey;
//		union                                                  // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x050*/         ULONG32      CrossProcessFlags;
//			struct                                             // 6 elements, 0x4 bytes (sizeof)
//			{
//				/*0x050*/             ULONG32      ProcessInJob : 1;                 // 0 BitPosition
//				/*0x050*/             ULONG32      ProcessInitializing : 1;          // 1 BitPosition
//				/*0x050*/             ULONG32      ProcessUsingVEH : 1;              // 2 BitPosition
//				/*0x050*/             ULONG32      ProcessUsingVCH : 1;              // 3 BitPosition
//				/*0x050*/             ULONG32      ProcessUsingFTH : 1;              // 4 BitPosition
//				/*0x050*/             ULONG32      ReservedBits0 : 27;               // 5 BitPosition
//			};
//		};
//		union                                                  // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x058*/         UINT64       KernelCallbackTable;
//			/*0x058*/         UINT64       UserSharedInfoPtr;
//		};
//		/*0x060*/     ULONG32      SystemReserved[1];
//		/*0x064*/     ULONG32      AtlThunkSListPtr32;
//		/*0x068*/     UINT64       ApiSetMap;
//		/*0x070*/     ULONG32      TlsExpansionCounter;
//		/*0x074*/     UINT8        _PADDING0_[0x4];
//		/*0x078*/     UINT64       TlsBitmap;
//		/*0x080*/     ULONG32      TlsBitmapBits[2];
//		/*0x088*/     UINT64       ReadOnlySharedMemoryBase;
//		/*0x090*/     UINT64       HotpatchInformation;
//		/*0x098*/     UINT64       ReadOnlyStaticServerData;
//		/*0x0A0*/     UINT64       AnsiCodePageData;
//		/*0x0A8*/     UINT64       OemCodePageData;
//		/*0x0B0*/     UINT64       UnicodeCaseTableData;
//		/*0x0B8*/     ULONG32      NumberOfProcessors;
//		/*0x0BC*/     ULONG32      NtGlobalFlag;
//		/*0x0C0*/     union _LARGE_INTEGER CriticalSectionTimeout;           // 4 elements, 0x8 bytes (sizeof)
//		/*0x0C8*/     UINT64       HeapSegmentReserve;
//		/*0x0D0*/     UINT64       HeapSegmentCommit;
//		/*0x0D8*/     UINT64       HeapDeCommitTotalFreeThreshold;
//		/*0x0E0*/     UINT64       HeapDeCommitFreeBlockThreshold;
//		/*0x0E8*/     ULONG32      NumberOfHeaps;
//		/*0x0EC*/     ULONG32      MaximumNumberOfHeaps;
//		/*0x0F0*/     UINT64       ProcessHeaps;
//		/*0x0F8*/     UINT64       GdiSharedHandleTable;
//		/*0x100*/     UINT64       ProcessStarterHelper;
//		/*0x108*/     ULONG32      GdiDCAttributeList;
//		/*0x10C*/     UINT8        _PADDING1_[0x4];
//		/*0x110*/     UINT64       LoaderLock;
//		/*0x118*/     ULONG32      OSMajorVersion;
//		/*0x11C*/     ULONG32      OSMinorVersion;
//		/*0x120*/     UINT16       OSBuildNumber;
//		/*0x122*/     UINT16       OSCSDVersion;
//		/*0x124*/     ULONG32      OSPlatformId;
//		/*0x128*/     ULONG32      ImageSubsystem;
//		/*0x12C*/     ULONG32      ImageSubsystemMajorVersion;
//		/*0x130*/     ULONG32      ImageSubsystemMinorVersion;
//		/*0x134*/     UINT8        _PADDING2_[0x4];
//		/*0x138*/     UINT64       ActiveProcessAffinityMask;
//		/*0x140*/     ULONG32      GdiHandleBuffer[60];
//		/*0x230*/     UINT64       PostProcessInitRoutine;
//		/*0x238*/     UINT64       TlsExpansionBitmap;
//		/*0x240*/     ULONG32      TlsExpansionBitmapBits[32];
//		/*0x2C0*/     ULONG32      SessionId;
//		/*0x2C4*/     UINT8        _PADDING3_[0x4];
//		/*0x2C8*/     union _ULARGE_INTEGER AppCompatFlags;                  // 4 elements, 0x8 bytes (sizeof)
//		/*0x2D0*/     union _ULARGE_INTEGER AppCompatFlagsUser;              // 4 elements, 0x8 bytes (sizeof)
//		/*0x2D8*/     UINT64       pShimData;
//		/*0x2E0*/     UINT64       AppCompatInfo;
//		/*0x2E8*/     struct _STRING64 CSDVersion;                           // 3 elements, 0x10 bytes (sizeof)
//		/*0x2F8*/     UINT64       ActivationContextData;
//		/*0x300*/     UINT64       ProcessAssemblyStorageMap;
//		/*0x308*/     UINT64       SystemDefaultActivationContextData;
//		/*0x310*/     UINT64       SystemAssemblyStorageMap;
//		/*0x318*/     UINT64       MinimumStackCommit;
//		/*0x320*/     UINT64       FlsCallback;
//		/*0x328*/     struct _LIST_ENTRY64 FlsListHead;                      // 2 elements, 0x10 bytes (sizeof)
//		/*0x338*/     UINT64       FlsBitmap;
//		/*0x340*/     ULONG32      FlsBitmapBits[4];
//		/*0x350*/     ULONG32      FlsHighIndex;
//		/*0x354*/     UINT8        _PADDING4_[0x4];
//		/*0x358*/     UINT64       WerRegistrationData;
//		/*0x360*/     UINT64       WerShipAssertPtr;
//		/*0x368*/     UINT64       pContextData;
//		/*0x370*/     UINT64       pImageHeaderHash;
//		union                                                  // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x378*/         ULONG32      TracingFlags;
//			struct                                             // 3 elements, 0x4 bytes (sizeof)
//			{
//				/*0x378*/             ULONG32      HeapTracingEnabled : 1;           // 0 BitPosition
//				/*0x378*/             ULONG32      CritSecTracingEnabled : 1;        // 1 BitPosition
//				/*0x378*/             ULONG32      SpareTracingBits : 30;            // 2 BitPosition
//			};
//		};
//	}PEB64, *PPEB64;
//
//	typedef struct _PENDING_RELATIONS_LIST_ENTRY     // 12 elements, 0x68 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY Link;                     // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _WORK_QUEUE_ITEM WorkItem;            // 3 elements, 0x20 bytes (sizeof)
//		/*0x030*/     struct _PNP_DEVICE_EVENT_ENTRY* DeviceEvent;
//		/*0x038*/     struct _DEVICE_OBJECT* DeviceObject;
//		/*0x040*/     struct _RELATION_LIST* RelationsList;
//		/*0x048*/     struct _IRP* EjectIrp;
//		/*0x050*/     enum _IRPLOCK Lock;
//		/*0x054*/     ULONG32      Problem;
//		/*0x058*/     UINT8        ProfileChangingEject;
//		/*0x059*/     UINT8        DisplaySafeRemovalDialog;
//		/*0x05A*/     UINT8        _PADDING0_[0x2];
//		/*0x05C*/     enum _SYSTEM_POWER_STATE LightestSleepState;
//		/*0x060*/     struct _DOCK_INTERFACE* DockInterface;
//	}PENDING_RELATIONS_LIST_ENTRY, *PPENDING_RELATIONS_LIST_ENTRY;
//
//	typedef struct _PERFINFO_GROUPMASK // 1 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Masks[8];
//	}PERFINFO_GROUPMASK, *PPERFINFO_GROUPMASK;
//
//	typedef struct _WMI_TRACE_PACKET // 4 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Size;
//		union                        // 2 elements, 0x2 bytes (sizeof)
//		{
//			/*0x002*/         UINT16       HookId;
//			struct                   // 2 elements, 0x2 bytes (sizeof)
//			{
//				/*0x002*/             UINT8        Type;
//				/*0x003*/             UINT8        Group;
//			};
//		};
//	}WMI_TRACE_PACKET, *PWMI_TRACE_PACKET;
//
//	typedef struct _PERFINFO_TRACE_HEADER    // 9 elements, 0x18 bytes (sizeof)
//	{
//		union                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      Marker;
//			struct                           // 3 elements, 0x4 bytes (sizeof)
//			{
//				/*0x000*/             UINT16       Version;
//				/*0x002*/             UINT8        HeaderType;
//				/*0x003*/             UINT8        Flags;
//			};
//		};
//		union                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x004*/         ULONG32      Header;
//			/*0x004*/         struct _WMI_TRACE_PACKET Packet; // 4 elements, 0x4 bytes (sizeof)
//		};
//		union                                // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x008*/         UINT64       TS;
//			/*0x008*/         union _LARGE_INTEGER SystemTime; // 4 elements, 0x8 bytes (sizeof)
//		};
//		/*0x010*/     UINT8        Data[1];
//		/*0x011*/     UINT8        _PADDING0_[0x7];
//	}PERFINFO_TRACE_HEADER, *PPERFINFO_TRACE_HEADER;
//
//	typedef struct _PF_KERNEL_GLOBALS           // 8 elements, 0x60 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       AccessBufferAgeThreshold;
//		/*0x008*/     struct _EX_RUNDOWN_REF AccessBufferRef; // 2 elements, 0x8 bytes (sizeof)
//		/*0x010*/     struct _KEVENT AccessBufferExistsEvent; // 1 elements, 0x18 bytes (sizeof)
//		/*0x028*/     ULONG32      AccessBufferMax;
//		/*0x02C*/     UINT8        _PADDING0_[0x14];
//		/*0x040*/     union _SLIST_HEADER AccessBufferList;   // 5 elements, 0x10 bytes (sizeof)
//		/*0x050*/     LONG32       StreamSequenceNumber;
//		/*0x054*/     ULONG32      Flags;
//		/*0x058*/     LONG32       ScenarioPrefetchCount;
//		/*0x05C*/     UINT8        _PADDING1_[0x4];
//	}PF_KERNEL_GLOBALS, *PPF_KERNEL_GLOBALS;
//
//	typedef struct _PHYSICAL_MEMORY_RUN // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       BasePage;
//		/*0x008*/     UINT64       PageCount;
//	}PHYSICAL_MEMORY_RUN, *PPHYSICAL_MEMORY_RUN;
//
//	typedef struct _PHYSICAL_MEMORY_DESCRIPTOR // 3 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      NumberOfRuns;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     UINT64       NumberOfPages;
//		/*0x010*/     struct _PHYSICAL_MEMORY_RUN Run[1];
//	}PHYSICAL_MEMORY_DESCRIPTOR, *PPHYSICAL_MEMORY_DESCRIPTOR;
//
//	typedef struct _PI_BUS_EXTENSION                // 17 elements, 0x70 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Flags;
//		/*0x004*/     UINT8        NumberCSNs;
//		/*0x005*/     UINT8        _PADDING0_[0x3];
//		/*0x008*/     UINT8*       ReadDataPort;
//		/*0x010*/     UINT8        DataPortMapped;
//		/*0x011*/     UINT8        _PADDING1_[0x7];
//		/*0x018*/     UINT8*       AddressPort;
//		/*0x020*/     UINT8        AddrPortMapped;
//		/*0x021*/     UINT8        _PADDING2_[0x7];
//		/*0x028*/     UINT8*       CommandPort;
//		/*0x030*/     UINT8        CmdPortMapped;
//		/*0x031*/     UINT8        _PADDING3_[0x3];
//		/*0x034*/     ULONG32      NextSlotNumber;
//		/*0x038*/     struct _SINGLE_LIST_ENTRY DeviceList;       // 1 elements, 0x8 bytes (sizeof)
//		/*0x040*/     struct _SINGLE_LIST_ENTRY CardList;         // 1 elements, 0x8 bytes (sizeof)
//		/*0x048*/     struct _DEVICE_OBJECT* PhysicalBusDevice;
//		/*0x050*/     struct _DEVICE_OBJECT* FunctionalBusDevice;
//		/*0x058*/     struct _DEVICE_OBJECT* AttachedDevice;
//		/*0x060*/     ULONG32      BusNumber;
//		/*0x064*/     enum _SYSTEM_POWER_STATE SystemPowerState;
//		/*0x068*/     enum _DEVICE_POWER_STATE DevicePowerState;
//		/*0x06C*/     UINT8        _PADDING4_[0x4];
//	}PI_BUS_EXTENSION, *PPI_BUS_EXTENSION;
//
//	typedef struct _PI_RESOURCE_ARBITER_ENTRY        // 10 elements, 0x70 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY DeviceArbiterList;        // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     UINT8        ResourceType;
//		/*0x011*/     UINT8        _PADDING0_[0x7];
//		/*0x018*/     struct _ARBITER_INTERFACE* ArbiterInterface;
//		/*0x020*/     struct _DEVICE_NODE* DeviceNode;
//		/*0x028*/     struct _LIST_ENTRY ResourceList;             // 2 elements, 0x10 bytes (sizeof)
//		/*0x038*/     struct _LIST_ENTRY BestResourceList;         // 2 elements, 0x10 bytes (sizeof)
//		/*0x048*/     struct _LIST_ENTRY BestConfig;               // 2 elements, 0x10 bytes (sizeof)
//		/*0x058*/     struct _LIST_ENTRY ActiveArbiterList;        // 2 elements, 0x10 bytes (sizeof)
//		/*0x068*/     UINT8        State;
//		/*0x069*/     UINT8        ResourcesChanged;
//		/*0x06A*/     UINT8        _PADDING1_[0x6];
//	}PI_RESOURCE_ARBITER_ENTRY, *PPI_RESOURCE_ARBITER_ENTRY;
//
//	typedef struct _PLUGPLAY_EVENT_BLOCK                // 7 elements, 0x50 bytes (sizeof)
//	{
//		/*0x000*/     struct _GUID EventGuid;                         // 4 elements, 0x10 bytes (sizeof)
//		/*0x010*/     enum _PLUGPLAY_EVENT_CATEGORY EventCategory;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//		/*0x018*/     ULONG32*     Result;
//		/*0x020*/     ULONG32      Flags;
//		/*0x024*/     ULONG32      TotalSize;
//		/*0x028*/     VOID*        DeviceObject;
//		union                                           // 11 elements, 0x20 bytes (sizeof)
//		{
//			struct                                      // 2 elements, 0x14 bytes (sizeof)
//			{
//				/*0x030*/             struct _GUID ClassGuid;                 // 4 elements, 0x10 bytes (sizeof)
//				/*0x040*/             WCHAR        SymbolicLinkName[1];
//				/*0x042*/             UINT8        _PADDING1_[0x2];
//			}DeviceClass;
//			struct                                      // 1 elements, 0x2 bytes (sizeof)
//			{
//				/*0x030*/             WCHAR        DeviceIds[1];
//			}TargetDevice;
//			struct                                      // 1 elements, 0x2 bytes (sizeof)
//			{
//				/*0x030*/             WCHAR        DeviceId[1];
//			}InstallDevice;
//			struct                                      // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x030*/             VOID*        NotificationStructure;
//				/*0x038*/             WCHAR        DeviceIds[1];
//				/*0x03A*/             UINT8        _PADDING1_[0x6];
//			}CustomNotification;
//			struct                                      // 1 elements, 0x8 bytes (sizeof)
//			{
//				/*0x030*/             VOID*        Notification;
//			}ProfileNotification;
//			struct                                      // 2 elements, 0x8 bytes (sizeof)
//			{
//				/*0x030*/             ULONG32      NotificationCode;
//				/*0x034*/             ULONG32      NotificationData;
//			}PowerNotification;
//			struct                                      // 2 elements, 0x8 bytes (sizeof)
//			{
//				/*0x030*/             enum _PNP_VETO_TYPE VetoType;
//				/*0x034*/             WCHAR        DeviceIdVetoNameBuffer[1];
//				/*0x036*/             UINT8        _PADDING1_[0x2];
//			}VetoNotification;
//			struct                                      // 1 elements, 0x10 bytes (sizeof)
//			{
//				/*0x030*/             struct _GUID BlockedDriverGuid;         // 4 elements, 0x10 bytes (sizeof)
//			}BlockedDriverNotification;
//			struct                                      // 1 elements, 0x2 bytes (sizeof)
//			{
//				/*0x030*/             WCHAR        ParentId[1];
//			}InvalidIDNotification;
//			struct                                      // 5 elements, 0x20 bytes (sizeof)
//			{
//				/*0x030*/             struct _GUID PowerSettingGuid;          // 4 elements, 0x10 bytes (sizeof)
//				/*0x040*/             ULONG32      Flags;
//				/*0x044*/             ULONG32      SessionId;
//				/*0x048*/             ULONG32      DataLength;
//				/*0x04C*/             UINT8        Data[1];
//				/*0x04D*/             UINT8        _PADDING1_[0x3];
//			}PowerSettingNotification;
//			struct                                      // 1 elements, 0x2 bytes (sizeof)
//			{
//				/*0x030*/             WCHAR        DeviceId[1];
//			}PropertyChangeNotification;
//		}u;
//	}PLUGPLAY_EVENT_BLOCK, *PPLUGPLAY_EVENT_BLOCK;
//
//	typedef struct _PNP_ASSIGN_RESOURCES_CONTEXT // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      IncludeFailedDevices;
//		/*0x004*/     ULONG32      DeviceCount;
//		/*0x008*/     struct _DEVICE_OBJECT* DeviceList[1];
//	}PNP_ASSIGN_RESOURCES_CONTEXT, *PPNP_ASSIGN_RESOURCES_CONTEXT;
//
//	typedef struct _PNP_DEVICE_ACTION_ENTRY          // 7 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY ListEntry;                // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _DEVICE_OBJECT* DeviceObject;
//		/*0x018*/     enum _PNP_DEVICE_ACTION_REQUEST RequestType;
//		/*0x01C*/     UINT8        ReorderingBarrier;
//		/*0x01D*/     UINT8        _PADDING0_[0x3];
//		/*0x020*/     UINT64       RequestArgument;
//		/*0x028*/     struct _KEVENT* CompletionEvent;
//		/*0x030*/     LONG32*      CompletionStatus;
//	}PNP_DEVICE_ACTION_ENTRY, *PPNP_DEVICE_ACTION_ENTRY;
//
//	typedef struct _PNP_DEVICE_COMPLETION_QUEUE // 5 elements, 0x50 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY DispatchedList;      // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     ULONG32      DispatchedCount;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//		/*0x018*/     struct _LIST_ENTRY CompletedList;       // 2 elements, 0x10 bytes (sizeof)
//		/*0x028*/     struct _KSEMAPHORE CompletedSemaphore;  // 2 elements, 0x20 bytes (sizeof)
//		/*0x048*/     UINT64       SpinLock;
//	}PNP_DEVICE_COMPLETION_QUEUE, *PPNP_DEVICE_COMPLETION_QUEUE;
//
//	typedef struct _PNP_DEVICE_COMPLETION_REQUEST // 10 elements, 0x68 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY ListEntry;             // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _DEVICE_NODE* DeviceNode;
//		/*0x018*/     VOID*        Context;
//		/*0x020*/     enum _PNP_DEVNODE_STATE CompletionState;
//		/*0x024*/     ULONG32      IrpPended;
//		/*0x028*/     LONG32       Status;
//		/*0x02C*/     UINT8        _PADDING0_[0x4];
//		/*0x030*/     VOID*        Information;
//		/*0x038*/     struct _WORK_QUEUE_ITEM WorkItem;         // 3 elements, 0x20 bytes (sizeof)
//		/*0x058*/     struct _DRIVER_OBJECT* FailingDriver;
//		/*0x060*/     LONG32       ReferenceCount;
//		/*0x064*/     UINT8        _PADDING1_[0x4];
//	}PNP_DEVICE_COMPLETION_REQUEST, *PPNP_DEVICE_COMPLETION_REQUEST;
//
//	typedef struct _PNP_DEVICE_EVENT_ENTRY                                                                                                                                   // 8 elements, 0x90 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY ListEntry;                                                                                                                                        // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     ULONG32      Argument;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//		/*0x018*/     struct _KEVENT* CallerEvent;
//		/*0x020*/     FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* Callback;
//		/*0x028*/     VOID*        Context;
//		/*0x030*/     enum _PNP_VETO_TYPE* VetoType;
//		/*0x038*/     struct _UNICODE_STRING* VetoName;
//		/*0x040*/     struct _PLUGPLAY_EVENT_BLOCK Data;                                                                                                                                   // 7 elements, 0x50 bytes (sizeof)
//	}PNP_DEVICE_EVENT_ENTRY, *PPNP_DEVICE_EVENT_ENTRY;
//
//	typedef struct _PNP_DEVICE_EVENT_LIST // 4 elements, 0x88 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       Status;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _KMUTANT EventQueueMutex;  // 5 elements, 0x38 bytes (sizeof)
//		/*0x040*/     struct _KGUARDED_MUTEX Lock;      // 7 elements, 0x38 bytes (sizeof)
//		/*0x078*/     struct _LIST_ENTRY List;          // 2 elements, 0x10 bytes (sizeof)
//	}PNP_DEVICE_EVENT_LIST, *PPNP_DEVICE_EVENT_LIST;
//
//	typedef struct _PNP_RESOURCE_REQUEST                             // 10 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     struct _DEVICE_OBJECT* PhysicalDevice;
//		/*0x008*/     ULONG32      Flags;
//		/*0x00C*/     enum _ARBITER_REQUEST_SOURCE AllocationType;
//		/*0x010*/     ULONG32      Priority;
//		/*0x014*/     ULONG32      Position;
//		/*0x018*/     struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;
//		/*0x020*/     VOID*        ReqList;
//		/*0x028*/     struct _CM_RESOURCE_LIST* ResourceAssignment;
//		/*0x030*/     struct _CM_RESOURCE_LIST* TranslatedResourceAssignment;
//		/*0x038*/     LONG32       Status;
//		/*0x03C*/     UINT8        _PADDING0_[0x4];
//	}PNP_RESOURCE_REQUEST, *PPNP_RESOURCE_REQUEST;
//
//	typedef struct _PO_NOTIFY_ORDER_LEVEL // 6 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      DeviceCount;
//		/*0x004*/     ULONG32      ActiveCount;
//		/*0x008*/     struct _LIST_ENTRY WaitSleep;     // 2 elements, 0x10 bytes (sizeof)
//		/*0x018*/     struct _LIST_ENTRY ReadySleep;    // 2 elements, 0x10 bytes (sizeof)
//		/*0x028*/     struct _LIST_ENTRY ReadyS0;       // 2 elements, 0x10 bytes (sizeof)
//		/*0x038*/     struct _LIST_ENTRY WaitS0;        // 2 elements, 0x10 bytes (sizeof)
//	}PO_NOTIFY_ORDER_LEVEL, *PPO_NOTIFY_ORDER_LEVEL;
//
//	typedef struct _PO_DEVICE_NOTIFY_ORDER           // 3 elements, 0x298 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Locked;
//		/*0x001*/     UINT8        _PADDING0_[0x7];
//		/*0x008*/     struct _DEVICE_OBJECT** WarmEjectPdoPointer;
//		/*0x010*/     struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[9];
//	}PO_DEVICE_NOTIFY_ORDER, *PPO_DEVICE_NOTIFY_ORDER;
//
//	typedef struct _PO_DIAG_STACK_RECORD // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      StackDepth;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     VOID*        Stack[1];
//	}PO_DIAG_STACK_RECORD, *PPO_DIAG_STACK_RECORD;
//
//	typedef struct _PO_HIBER_PERF         // 12 elements, 0x58 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       IoTicks;
//		/*0x008*/     UINT64       InitTicks;
//		/*0x010*/     UINT64       CopyTicks;
//		/*0x018*/     UINT64       ElapsedTicks;
//		/*0x020*/     UINT64       CompressTicks;
//		/*0x028*/     UINT64       ResumeAppTime;
//		/*0x030*/     UINT64       HiberFileResumeTime;
//		/*0x038*/     UINT64       BytesCopied;
//		/*0x040*/     UINT64       PagesProcessed;
//		/*0x048*/     ULONG32      PagesWritten;
//		/*0x04C*/     ULONG32      DumpCount;
//		/*0x050*/     ULONG32      FileRuns;
//		/*0x054*/     UINT8        _PADDING0_[0x4];
//	}PO_HIBER_PERF, *PPO_HIBER_PERF;
//
//	typedef struct _PO_MEMORY_IMAGE                   // 26 elements, 0x128 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Signature;
//		/*0x004*/     ULONG32      ImageType;
//		/*0x008*/     ULONG32      CheckSum;
//		/*0x00C*/     ULONG32      LengthSelf;
//		/*0x010*/     UINT64       PageSelf;
//		/*0x018*/     ULONG32      PageSize;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		/*0x020*/     union _LARGE_INTEGER SystemTime;              // 4 elements, 0x8 bytes (sizeof)
//		/*0x028*/     UINT64       InterruptTime;
//		/*0x030*/     ULONG32      FeatureFlags;
//		/*0x034*/     UINT8        HiberFlags;
//		/*0x035*/     UINT8        spare[3];
//		/*0x038*/     ULONG32      NoHiberPtes;
//		/*0x03C*/     UINT8        _PADDING1_[0x4];
//		/*0x040*/     UINT64       HiberVa;
//		/*0x048*/     union _LARGE_INTEGER HiberPte;                // 4 elements, 0x8 bytes (sizeof)
//		/*0x050*/     ULONG32      NoFreePages;
//		/*0x054*/     ULONG32      FreeMapCheck;
//		/*0x058*/     ULONG32      WakeCheck;
//		/*0x05C*/     UINT8        _PADDING2_[0x4];
//		/*0x060*/     UINT64       FirstTablePage;
//		/*0x068*/     struct _PO_HIBER_PERF PerfInfo;               // 12 elements, 0x58 bytes (sizeof)
//		/*0x0C0*/     ULONG32      FirmwareRuntimeInformationPages;
//		/*0x0C4*/     UINT8        _PADDING3_[0x4];
//		/*0x0C8*/     UINT64       FirmwareRuntimeInformation[1];
//		/*0x0D0*/     ULONG32      NoBootLoaderLogPages;
//		/*0x0D4*/     UINT8        _PADDING4_[0x4];
//		/*0x0D8*/     UINT64       BootLoaderLogPages[8];
//		/*0x118*/     ULONG32      NotUsed;
//		/*0x11C*/     ULONG32      ResumeContextCheck;
//		/*0x120*/     ULONG32      ResumeContextPages;
//		/*0x124*/     UINT8        _PADDING5_[0x4];
//	}PO_MEMORY_IMAGE, *PPO_MEMORY_IMAGE;
//
//	typedef struct _POOL_HEADER                       // 9 elements, 0x10 bytes (sizeof)
//	{
//		union                                         // 2 elements, 0x4 bytes (sizeof)
//		{
//			struct                                    // 4 elements, 0x4 bytes (sizeof)
//			{
//				/*0x000*/             ULONG32      PreviousSize : 8;        // 0 BitPosition
//				/*0x000*/             ULONG32      PoolIndex : 8;           // 8 BitPosition
//				/*0x000*/             ULONG32      BlockSize : 8;           // 16 BitPosition
//				/*0x000*/             ULONG32      PoolType : 8;            // 24 BitPosition
//			};
//			/*0x000*/         ULONG32      Ulong1;
//		};
//		/*0x004*/     ULONG32      PoolTag;
//		union                                         // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x008*/         struct _EPROCESS* ProcessBilled;
//			struct                                    // 2 elements, 0x8 bytes (sizeof)
//			{
//				/*0x008*/             UINT16       AllocatorBackTraceIndex;
//				/*0x00A*/             UINT16       PoolTagHash;
//				/*0x00C*/             UINT8        _PADDING0_[0x4];
//			};
//		};
//	}POOL_HEADER, *PPOOL_HEADER;
//
//	typedef struct _POOL_BLOCK_HEAD // 2 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _POOL_HEADER Header; // 9 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _LIST_ENTRY List;    // 2 elements, 0x10 bytes (sizeof)
//	}POOL_BLOCK_HEAD, *PPOOL_BLOCK_HEAD;
//
//	typedef struct _POOL_HACKER     // 2 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     struct _POOL_HEADER Header; // 9 elements, 0x10 bytes (sizeof)
//		/*0x010*/     ULONG32      Contents[8];
//	}POOL_HACKER, *PPOOL_HACKER;
//
//	typedef struct _POOL_TRACKER_BIG_PAGES // 4 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        Va;
//		/*0x008*/     ULONG32      Key;
//		/*0x00C*/     ULONG32      PoolType;
//		/*0x010*/     UINT64       NumberOfBytes;
//	}POOL_TRACKER_BIG_PAGES, *PPOOL_TRACKER_BIG_PAGES;
//
//	typedef struct _POOL_TRACKER_TABLE // 7 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       Key;
//		/*0x004*/     LONG32       NonPagedAllocs;
//		/*0x008*/     LONG32       NonPagedFrees;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     UINT64       NonPagedBytes;
//		/*0x018*/     ULONG32      PagedAllocs;
//		/*0x01C*/     ULONG32      PagedFrees;
//		/*0x020*/     UINT64       PagedBytes;
//	}POOL_TRACKER_TABLE, *PPOOL_TRACKER_TABLE;
//
//	typedef struct _POP_ACTION_TRIGGER       // 5 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     enum _POWER_POLICY_DEVICE_TYPE Type;
//		/*0x004*/     ULONG32      Flags;
//		/*0x008*/     struct _POP_TRIGGER_WAIT* Wait;
//		union                                // 2 elements, 0x8 bytes (sizeof)
//		{
//			struct                           // 1 elements, 0x4 bytes (sizeof)
//			{
//				/*0x010*/             ULONG32      Level;
//			}Battery;
//			struct                           // 1 elements, 0x4 bytes (sizeof)
//			{
//				/*0x010*/             ULONG32      Type;
//			}Button;
//		};
//	}POP_ACTION_TRIGGER, *PPOP_ACTION_TRIGGER;
//
//	typedef struct _POP_DEVICE_SYS_STATE       // 17 elements, 0x2F8 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        IrpMinor;
//		/*0x001*/     UINT8        _PADDING0_[0x3];
//		/*0x004*/     enum _SYSTEM_POWER_STATE SystemState;
//		/*0x008*/     UINT64       SpinLock;
//		/*0x010*/     struct _KTHREAD* Thread;
//		/*0x018*/     struct _KEVENT* AbortEvent;
//		/*0x020*/     struct _KSEMAPHORE* ReadySemaphore;
//		/*0x028*/     struct _KSEMAPHORE* FinishedSemaphore;
//		/*0x030*/     UINT8        GetNewDeviceList;
//		/*0x031*/     UINT8        _PADDING1_[0x7];
//		/*0x038*/     struct _PO_DEVICE_NOTIFY_ORDER Order;  // 3 elements, 0x298 bytes (sizeof)
//		/*0x2D0*/     struct _LIST_ENTRY Pending;            // 2 elements, 0x10 bytes (sizeof)
//		/*0x2E0*/     LONG32       Status;
//		/*0x2E4*/     UINT8        _PADDING2_[0x4];
//		/*0x2E8*/     struct _DEVICE_OBJECT* FailedDevice;
//		/*0x2F0*/     UINT8        Waking;
//		/*0x2F1*/     UINT8        Cancelled;
//		/*0x2F2*/     UINT8        IgnoreErrors;
//		/*0x2F3*/     UINT8        IgnoreNotImplemented;
//		/*0x2F4*/     UINT8        TimeRefreshLockAcquired;
//		/*0x2F5*/     UINT8        _PADDING3_[0x3];
//	}POP_DEVICE_SYS_STATE, *PPOP_DEVICE_SYS_STATE;
//
//	typedef struct _POP_HIBER_CONTEXT               // 39 elements, 0x110 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        WriteToFile;
//		/*0x001*/     UINT8        ReserveLoaderMemory;
//		/*0x002*/     UINT8        ReserveFreeMemory;
//		/*0x003*/     UINT8        Reset;
//		/*0x004*/     UINT8        HiberFlags;
//		/*0x005*/     UINT8        WroteHiberFile;
//		/*0x006*/     UINT8        MapFrozen;
//		/*0x007*/     UINT8        _PADDING0_[0x1];
//		/*0x008*/     struct _RTL_BITMAP MemoryMap;               // 2 elements, 0x10 bytes (sizeof)
//		/*0x018*/     struct _RTL_BITMAP DiscardedMemoryPages;    // 2 elements, 0x10 bytes (sizeof)
//		/*0x028*/     struct _LIST_ENTRY ClonedRanges;            // 2 elements, 0x10 bytes (sizeof)
//		/*0x038*/     ULONG32      ClonedRangeCount;
//		/*0x03C*/     UINT8        _PADDING1_[0x4];
//		/*0x040*/     struct _LIST_ENTRY* NextCloneRange;
//		/*0x048*/     UINT64       NextPreserve;
//		/*0x050*/     struct _MDL* LoaderMdl;
//		/*0x058*/     struct _MDL* AllocatedMdl;
//		/*0x060*/     UINT64       PagesOut;
//		/*0x068*/     VOID*        IoPages;
//		/*0x070*/     ULONG32      IoPagesCount;
//		/*0x074*/     UINT8        _PADDING2_[0x4];
//		/*0x078*/     VOID*        CurrentMcb;
//		/*0x080*/     struct _DUMP_STACK_CONTEXT* DumpStack;
//		/*0x088*/     struct _KPROCESSOR_STATE* WakeState;
//		/*0x090*/     ULONG32      PreferredIoWriteSize;
//		/*0x094*/     ULONG32      IoProgress;
//		/*0x098*/     UINT64       HiberVa;
//		/*0x0A0*/     union _LARGE_INTEGER HiberPte;              // 4 elements, 0x8 bytes (sizeof)
//		/*0x0A8*/     LONG32       Status;
//		/*0x0AC*/     UINT8        _PADDING3_[0x4];
//		/*0x0B0*/     struct _PO_MEMORY_IMAGE* MemoryImage;
//		/*0x0B8*/     VOID*        CompressionWorkspace;
//		/*0x0C0*/     UINT8*       CompressedWriteBuffer;
//		/*0x0C8*/     ULONG32      CompressedWriteBufferSize;
//		/*0x0CC*/     ULONG32      MaxCompressedOutputSize;
//		/*0x0D0*/     ULONG32*     PerformanceStats;
//		/*0x0D8*/     VOID*        CompressionBlock;
//		/*0x0E0*/     VOID*        DmaIO;
//		/*0x0E8*/     VOID*        TemporaryHeap;
//		/*0x0F0*/     struct _MDL* BootLoaderLogMdl;
//		/*0x0F8*/     struct _MDL* FirmwareRuntimeInformationMdl;
//		/*0x100*/     VOID*        ResumeContext;
//		/*0x108*/     ULONG32      ResumeContextPages;
//		/*0x10C*/     UINT8        _PADDING4_[0x4];
//	}POP_HIBER_CONTEXT, *PPOP_HIBER_CONTEXT;
//
//	typedef struct _SYSTEM_POWER_CAPABILITIES            // 29 elements, 0x4C bytes (sizeof)
//	{
//		/*0x000*/     UINT8        PowerButtonPresent;
//		/*0x001*/     UINT8        SleepButtonPresent;
//		/*0x002*/     UINT8        LidPresent;
//		/*0x003*/     UINT8        SystemS1;
//		/*0x004*/     UINT8        SystemS2;
//		/*0x005*/     UINT8        SystemS3;
//		/*0x006*/     UINT8        SystemS4;
//		/*0x007*/     UINT8        SystemS5;
//		/*0x008*/     UINT8        HiberFilePresent;
//		/*0x009*/     UINT8        FullWake;
//		/*0x00A*/     UINT8        VideoDimPresent;
//		/*0x00B*/     UINT8        ApmPresent;
//		/*0x00C*/     UINT8        UpsPresent;
//		/*0x00D*/     UINT8        ThermalControl;
//		/*0x00E*/     UINT8        ProcessorThrottle;
//		/*0x00F*/     UINT8        ProcessorMinThrottle;
//		/*0x010*/     UINT8        ProcessorMaxThrottle;
//		/*0x011*/     UINT8        FastSystemS4;
//		/*0x012*/     UINT8        spare2[3];
//		/*0x015*/     UINT8        DiskSpinDown;
//		/*0x016*/     UINT8        spare3[8];
//		/*0x01E*/     UINT8        SystemBatteriesPresent;
//		/*0x01F*/     UINT8        BatteriesAreShortTerm;
//		/*0x020*/     struct _BATTERY_REPORTING_SCALE BatteryScale[3];
//		/*0x038*/     enum _SYSTEM_POWER_STATE AcOnLineWake;
//		/*0x03C*/     enum _SYSTEM_POWER_STATE SoftLidWake;
//		/*0x040*/     enum _SYSTEM_POWER_STATE RtcWake;
//		/*0x044*/     enum _SYSTEM_POWER_STATE MinDeviceWakeState;
//		/*0x048*/     enum _SYSTEM_POWER_STATE DefaultLowLatencyWake;
//	}SYSTEM_POWER_CAPABILITIES, *PSYSTEM_POWER_CAPABILITIES;
//
//	typedef struct _POP_POWER_ACTION                            // 24 elements, 0xC0 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Updates;
//		/*0x001*/     UINT8        State;
//		/*0x002*/     UINT8        Shutdown;
//		/*0x003*/     UINT8        _PADDING0_[0x1];
//		/*0x004*/     enum _POWER_ACTION Action;
//		/*0x008*/     enum _SYSTEM_POWER_STATE LightestState;
//		/*0x00C*/     ULONG32      Flags;
//		/*0x010*/     LONG32       Status;
//		/*0x014*/     enum _POWER_POLICY_DEVICE_TYPE DeviceType;
//		/*0x018*/     ULONG32      DeviceTypeFlags;
//		/*0x01C*/     UINT8        IrpMinor;
//		/*0x01D*/     UINT8        Waking;
//		/*0x01E*/     UINT8        _PADDING1_[0x2];
//		/*0x020*/     enum _SYSTEM_POWER_STATE SystemState;
//		/*0x024*/     enum _SYSTEM_POWER_STATE NextSystemState;
//		/*0x028*/     enum _SYSTEM_POWER_STATE EffectiveSystemState;
//		/*0x02C*/     enum _SYSTEM_POWER_STATE CurrentSystemState;
//		/*0x030*/     struct _POP_SHUTDOWN_BUG_CHECK* ShutdownBugCode;
//		/*0x038*/     struct _POP_DEVICE_SYS_STATE* DevState;
//		/*0x040*/     struct _POP_HIBER_CONTEXT* HiberContext;
//		/*0x048*/     UINT64       WakeTime;
//		/*0x050*/     UINT64       SleepTime;
//		/*0x058*/     UINT64       ProgrammedRTCTime;
//		/*0x060*/     UINT8        WakeOnRTC;
//		/*0x061*/     UINT8        _PADDING2_[0x7];
//		/*0x068*/     struct _DIAGNOSTIC_BUFFER* WakeTimerInfo;
//		/*0x070*/     struct _SYSTEM_POWER_CAPABILITIES FilteredCapabilities; // 29 elements, 0x4C bytes (sizeof)
//		/*0x0BC*/     UINT8        _PADDING3_[0x4];
//	}POP_POWER_ACTION, *PPOP_POWER_ACTION;
//
//	typedef struct _POP_SHUTDOWN_BUG_CHECK // 8 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        ThreadHandle;
//		/*0x008*/     VOID*        ThreadId;
//		/*0x010*/     VOID*        ProcessId;
//		/*0x018*/     ULONG32      Code;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		/*0x020*/     UINT64       Parameter1;
//		/*0x028*/     UINT64       Parameter2;
//		/*0x030*/     UINT64       Parameter3;
//		/*0x038*/     UINT64       Parameter4;
//	}POP_SHUTDOWN_BUG_CHECK, *PPOP_SHUTDOWN_BUG_CHECK;
//
//	typedef struct _POWER_ACTION_POLICY // 3 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     enum _POWER_ACTION Action;
//		/*0x004*/     ULONG32      Flags;
//		/*0x008*/     ULONG32      EventCode;
//	}POWER_ACTION_POLICY, *PPOWER_ACTION_POLICY;
//
//	typedef struct _POP_SYSTEM_IDLE          // 12 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       AverageIdleness;
//		/*0x004*/     LONG32       LowestIdleness;
//		/*0x008*/     ULONG32      Time;
//		/*0x00C*/     ULONG32      Timeout;
//		/*0x010*/     ULONG32      LastUserInput;
//		/*0x014*/     struct _POWER_ACTION_POLICY Action;  // 3 elements, 0xC bytes (sizeof)
//		/*0x020*/     enum _SYSTEM_POWER_STATE MinState;
//		/*0x024*/     UINT8        SystemRequired;
//		/*0x025*/     UINT8        IdleWorker;
//		/*0x026*/     UINT8        Sampling;
//		/*0x027*/     UINT8        _PADDING0_[0x1];
//		/*0x028*/     UINT64       LastTick;
//		/*0x030*/     ULONG32      LastSystemRequiredTime;
//		/*0x034*/     UINT8        _PADDING1_[0x4];
//	}POP_SYSTEM_IDLE, *PPOP_SYSTEM_IDLE;
//
//	typedef struct _THERMAL_INFORMATION_EX  // 11 elements, 0x78 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      ThermalStamp;
//		/*0x004*/     ULONG32      ThermalConstant1;
//		/*0x008*/     ULONG32      ThermalConstant2;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     struct _KAFFINITY_EX Processors;    // 4 elements, 0x28 bytes (sizeof)
//		/*0x038*/     ULONG32      SamplingPeriod;
//		/*0x03C*/     ULONG32      CurrentTemperature;
//		/*0x040*/     ULONG32      PassiveTripPoint;
//		/*0x044*/     ULONG32      CriticalTripPoint;
//		/*0x048*/     UINT8        ActiveTripPointCount;
//		/*0x049*/     UINT8        _PADDING1_[0x3];
//		/*0x04C*/     ULONG32      ActiveTripPoint[10];
//		/*0x074*/     ULONG32      S4TransitionTripPoint;
//	}THERMAL_INFORMATION_EX, *PTHERMAL_INFORMATION_EX;
//
//	typedef struct _POP_THERMAL_ZONE_METRICS          // 8 elements, 0x98 bytes (sizeof)
//	{
//		/*0x000*/     struct _ERESOURCE MetricsResource;            // 15 elements, 0x68 bytes (sizeof)
//		/*0x068*/     ULONG32      ActiveCount;
//		/*0x06C*/     ULONG32      PassiveCount;
//		/*0x070*/     union _LARGE_INTEGER LastActiveStartTick;     // 4 elements, 0x8 bytes (sizeof)
//		/*0x078*/     union _LARGE_INTEGER AverageActiveTime;       // 4 elements, 0x8 bytes (sizeof)
//		/*0x080*/     union _LARGE_INTEGER LastPassiveStartTick;    // 4 elements, 0x8 bytes (sizeof)
//		/*0x088*/     union _LARGE_INTEGER AveragePassiveTime;      // 4 elements, 0x8 bytes (sizeof)
//		/*0x090*/     union _LARGE_INTEGER StartTickSinceLastReset; // 4 elements, 0x8 bytes (sizeof)
//	}POP_THERMAL_ZONE_METRICS, *PPOP_THERMAL_ZONE_METRICS;
//
//	typedef struct _POP_THERMAL_ZONE              // 18 elements, 0x1E8 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY Link;                  // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     UINT8        State;
//		/*0x011*/     UINT8        Flags;
//		/*0x012*/     UINT8        Mode;
//		/*0x013*/     UINT8        PendingMode;
//		/*0x014*/     UINT8        ActivePoint;
//		/*0x015*/     UINT8        PendingActivePoint;
//		/*0x016*/     UINT8        _PADDING0_[0x2];
//		/*0x018*/     LONG32       Throttle;
//		/*0x01C*/     UINT8        _PADDING1_[0x4];
//		/*0x020*/     UINT64       LastTime;
//		/*0x028*/     ULONG32      SampleRate;
//		/*0x02C*/     ULONG32      LastTemp;
//		/*0x030*/     struct _KTIMER PassiveTimer;              // 6 elements, 0x40 bytes (sizeof)
//		/*0x070*/     struct _KDPC PassiveDpc;                  // 9 elements, 0x40 bytes (sizeof)
//		/*0x0B0*/     struct _POP_ACTION_TRIGGER OverThrottled; // 5 elements, 0x18 bytes (sizeof)
//		/*0x0C8*/     struct _IRP* Irp;
//		/*0x0D0*/     struct _THERMAL_INFORMATION_EX Info;      // 11 elements, 0x78 bytes (sizeof)
//		/*0x148*/     union _LARGE_INTEGER InfoLastUpdateTime;  // 4 elements, 0x8 bytes (sizeof)
//		/*0x150*/     struct _POP_THERMAL_ZONE_METRICS Metrics; // 8 elements, 0x98 bytes (sizeof)
//	}POP_THERMAL_ZONE, *PPOP_THERMAL_ZONE;
//
//	typedef struct _POP_TRIGGER_WAIT         // 4 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     struct _KEVENT Event;                // 1 elements, 0x18 bytes (sizeof)
//		/*0x018*/     LONG32       Status;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		/*0x020*/     struct _LIST_ENTRY Link;             // 2 elements, 0x10 bytes (sizeof)
//		/*0x030*/     struct _POP_ACTION_TRIGGER* Trigger;
//	}POP_TRIGGER_WAIT, *PPOP_TRIGGER_WAIT;
//
//	typedef struct _PORT_MESSAGE32           // 7 elements, 0x18 bytes (sizeof)
//	{
//		union                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			struct                           // 2 elements, 0x4 bytes (sizeof)
//			{
//				/*0x000*/             INT16        DataLength;
//				/*0x002*/             INT16        TotalLength;
//			}s1;
//			/*0x000*/         ULONG32      Length;
//		}u1;
//		union                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			struct                           // 2 elements, 0x4 bytes (sizeof)
//			{
//				/*0x004*/             INT16        Type;
//				/*0x006*/             INT16        DataInfoOffset;
//			}s2;
//			/*0x004*/         ULONG32      ZeroInit;
//		}u2;
//		union                                // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x008*/         struct _CLIENT_ID32 ClientId;    // 2 elements, 0x8 bytes (sizeof)
//			/*0x008*/         FLOAT64      DoNotUseThisField;
//		};
//		/*0x010*/     ULONG32      MessageId;
//		union                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x014*/         ULONG32      ClientViewSize;
//			/*0x014*/         ULONG32      CallbackId;
//		};
//	}PORT_MESSAGE32, *PPORT_MESSAGE32;
//
//	typedef struct _POWER_SEQUENCE // 3 elements, 0xC bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      SequenceD1;
//		/*0x004*/     ULONG32      SequenceD2;
//		/*0x008*/     ULONG32      SequenceD3;
//	}POWER_SEQUENCE, *PPOWER_SEQUENCE;
//
//	typedef struct _PPM_IDLE_STATE                                                                                                                                              // 14 elements, 0x60 bytes (sizeof)
//	{
//		/*0x000*/     struct _KAFFINITY_EX DomainMembers;                                                                                                                                     // 4 elements, 0x28 bytes (sizeof)
//		/*0x028*/     FUNCT_005B_07A2_IdleCheck_DestroyProcedure* IdleCheck;
//		/*0x030*/     FUNCT_00A3_072D_Free_IdleHandler_InterfaceReference_InterfaceDereference_DeleteProcedure_WorkerRoutine_Callback_ReleaseFromLazyWrite_ReleaseFromReadAhead* IdleHandler;
//		/*0x038*/     UINT64       HvConfig;
//		/*0x040*/     VOID*        Context;
//		/*0x048*/     ULONG32      Latency;
//		/*0x04C*/     ULONG32      Power;
//		/*0x050*/     ULONG32      TimeCheck;
//		/*0x054*/     ULONG32      StateFlags;
//		/*0x058*/     UINT8        PromotePercent;
//		/*0x059*/     UINT8        DemotePercent;
//		/*0x05A*/     UINT8        PromotePercentBase;
//		/*0x05B*/     UINT8        DemotePercentBase;
//		/*0x05C*/     UINT8        StateType;
//		/*0x05D*/     UINT8        _PADDING0_[0x3];
//	}PPM_IDLE_STATE, *PPPM_IDLE_STATE;
//
//	typedef struct _PPM_IDLE_STATES            // 7 elements, 0xA0 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Count;
//		union                                  // 5 elements, 0x4 bytes (sizeof)
//		{
//			/*0x004*/         ULONG32      AsULONG;
//			struct                             // 4 elements, 0x4 bytes (sizeof)
//			{
//				/*0x004*/             ULONG32      AllowScaling : 1; // 0 BitPosition
//				/*0x004*/             ULONG32      Disabled : 1;     // 1 BitPosition
//				/*0x004*/             ULONG32      HvMaxCState : 4;  // 2 BitPosition
//				/*0x004*/             ULONG32      Reserved : 26;    // 6 BitPosition
//			};
//		}Flags;
//		/*0x008*/     ULONG32      TargetState;
//		/*0x00C*/     ULONG32      ActualState;
//		/*0x010*/     ULONG32      OldState;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//		/*0x018*/     struct _KAFFINITY_EX TargetProcessors; // 4 elements, 0x28 bytes (sizeof)
//		/*0x040*/     struct _PPM_IDLE_STATE State[1];
//	}PPM_IDLE_STATES, *PPPM_IDLE_STATES;
//
//	typedef struct _PPM_PERF_STATE     // 10 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Frequency;
//		/*0x004*/     ULONG32      Power;
//		/*0x008*/     UINT8        PercentFrequency;
//		/*0x009*/     UINT8        IncreaseLevel;
//		/*0x00A*/     UINT8        DecreaseLevel;
//		/*0x00B*/     UINT8        Type;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     UINT64       Control;
//		/*0x018*/     UINT64       Status;
//		/*0x020*/     ULONG32      TotalHitCount;
//		/*0x024*/     ULONG32      DesiredCount;
//	}PPM_PERF_STATE, *PPPM_PERF_STATE;
//
//	typedef struct _PPM_PERF_STATES                                 // 23 elements, 0xB0 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Count;
//		/*0x004*/     ULONG32      MaxFrequency;
//		/*0x008*/     ULONG32      PStateCap;
//		/*0x00C*/     ULONG32      TStateCap;
//		/*0x010*/     ULONG32      MaxPerfState;
//		/*0x014*/     ULONG32      MinPerfState;
//		/*0x018*/     ULONG32      LowestPState;
//		/*0x01C*/     ULONG32      IncreaseTime;
//		/*0x020*/     ULONG32      DecreaseTime;
//		/*0x024*/     UINT8        BusyAdjThreshold;
//		/*0x025*/     UINT8        Reserved;
//		/*0x026*/     UINT8        ThrottleStatesOnly;
//		/*0x027*/     UINT8        PolicyType;
//		/*0x028*/     ULONG32      TimerInterval;
//		union                                                       // 4 elements, 0x4 bytes (sizeof)
//		{
//			/*0x02C*/         ULONG32      AsULONG;
//			struct                                                  // 3 elements, 0x4 bytes (sizeof)
//			{
//				/*0x02C*/             ULONG32      IncreasePolicy : 2;                    // 0 BitPosition
//				/*0x02C*/             ULONG32      DecreasePolicy : 2;                    // 2 BitPosition
//				/*0x02C*/             ULONG32      Reserved : 28;                         // 4 BitPosition
//			};
//		}Flags;
//		/*0x030*/     struct _KAFFINITY_EX TargetProcessors;                      // 4 elements, 0x28 bytes (sizeof)
//		/*0x058*/     FUNCT_005B_26DB_PStateHandler_TStateHandler* PStateHandler;
//		/*0x060*/     UINT64       PStateContext;
//		/*0x068*/     FUNCT_005B_26DB_PStateHandler_TStateHandler* TStateHandler;
//		/*0x070*/     UINT64       TStateContext;
//		/*0x078*/     FUNCT_0065_07E5_FeedbackHandler* FeedbackHandler;
//		/*0x080*/     FUNCT_00A3_07EA_GetFFHThrottleState* GetFFHThrottleState;
//		/*0x088*/     struct _PPM_PERF_STATE State[1];
//	}PPM_PERF_STATES, *PPPM_PERF_STATES;
//
//	typedef struct _PRIVATE_CACHE_MAP_FLAGS // 5 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      DontUse : 16;          // 0 BitPosition
//		/*0x000*/     ULONG32      ReadAheadActive : 1;   // 16 BitPosition
//		/*0x000*/     ULONG32      ReadAheadEnabled : 1;  // 17 BitPosition
//		/*0x000*/     ULONG32      PagePriority : 3;      // 18 BitPosition
//		/*0x000*/     ULONG32      Available : 11;        // 21 BitPosition
//	}PRIVATE_CACHE_MAP_FLAGS, *PPRIVATE_CACHE_MAP_FLAGS;
//
//	typedef struct _PRIVATE_CACHE_MAP                 // 16 elements, 0x68 bytes (sizeof)
//	{
//		union                                         // 3 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         INT16        NodeTypeCode;
//			/*0x000*/         struct _PRIVATE_CACHE_MAP_FLAGS Flags;    // 5 elements, 0x4 bytes (sizeof)
//			/*0x000*/         ULONG32      UlongFlags;
//		};
//		/*0x004*/     ULONG32      ReadAheadMask;
//		/*0x008*/     struct _FILE_OBJECT* FileObject;
//		/*0x010*/     union _LARGE_INTEGER FileOffset1;             // 4 elements, 0x8 bytes (sizeof)
//		/*0x018*/     union _LARGE_INTEGER BeyondLastByte1;         // 4 elements, 0x8 bytes (sizeof)
//		/*0x020*/     union _LARGE_INTEGER FileOffset2;             // 4 elements, 0x8 bytes (sizeof)
//		/*0x028*/     union _LARGE_INTEGER BeyondLastByte2;         // 4 elements, 0x8 bytes (sizeof)
//		/*0x030*/     ULONG32      SequentialReadCount;
//		/*0x034*/     ULONG32      ReadAheadLength;
//		/*0x038*/     union _LARGE_INTEGER ReadAheadOffset;         // 4 elements, 0x8 bytes (sizeof)
//		/*0x040*/     union _LARGE_INTEGER ReadAheadBeyondLastByte; // 4 elements, 0x8 bytes (sizeof)
//		/*0x048*/     UINT64       ReadAheadSpinLock;
//		/*0x050*/     struct _LIST_ENTRY PrivateLinks;              // 2 elements, 0x10 bytes (sizeof)
//		/*0x060*/     VOID*        ReadAheadWorkItem;
//	}PRIVATE_CACHE_MAP, *PPRIVATE_CACHE_MAP;
//
//	typedef struct _PROC_HISTORY_ENTRY // 3 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Utility;
//		/*0x002*/     UINT8        Frequency;
//		/*0x003*/     UINT8        Reserved;
//	}PROC_HISTORY_ENTRY, *PPROC_HISTORY_ENTRY;
//
//	typedef struct _PROC_IDLE_STATE_BUCKET // 4 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       TotalTime;
//		/*0x008*/     UINT64       MinTime;
//		/*0x010*/     UINT64       MaxTime;
//		/*0x018*/     ULONG32      Count;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//	}PROC_IDLE_STATE_BUCKET, *PPROC_IDLE_STATE_BUCKET;
//
//	typedef struct _PROC_IDLE_STATE_ACCOUNTING              // 7 elements, 0x228 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       TotalTime;
//		/*0x008*/     ULONG32      IdleTransitions;
//		/*0x00C*/     ULONG32      FailedTransitions;
//		/*0x010*/     ULONG32      InvalidBucketIndex;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//		/*0x018*/     UINT64       MinTime;
//		/*0x020*/     UINT64       MaxTime;
//		/*0x028*/     struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[16];
//	}PROC_IDLE_STATE_ACCOUNTING, *PPROC_IDLE_STATE_ACCOUNTING;
//
//	typedef struct _PROC_IDLE_ACCOUNTING             // 6 elements, 0x2C0 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      StateCount;
//		/*0x004*/     ULONG32      TotalTransitions;
//		/*0x008*/     ULONG32      ResetCount;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     UINT64       StartTime;
//		/*0x018*/     UINT64       BucketLimits[16];
//		/*0x098*/     struct _PROC_IDLE_STATE_ACCOUNTING State[1];
//	}PROC_IDLE_ACCOUNTING, *PPROC_IDLE_ACCOUNTING;
//
//	typedef struct _PROC_PERF_CONSTRAINT      // 9 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     struct _KPRCB* Prcb;
//		/*0x008*/     UINT64       PerfContext;
//		/*0x010*/     ULONG32      PercentageCap;
//		/*0x014*/     ULONG32      ThermalCap;
//		/*0x018*/     ULONG32      TargetFrequency;
//		/*0x01C*/     ULONG32      AcumulatedFullFrequency;
//		/*0x020*/     ULONG32      AcumulatedZeroFrequency;
//		/*0x024*/     ULONG32      FrequencyHistoryTotal;
//		/*0x028*/     ULONG32      AverageFrequency;
//		/*0x02C*/     UINT8        _PADDING0_[0x4];
//	}PROC_PERF_CONSTRAINT, *PPROC_PERF_CONSTRAINT;
//
//	typedef struct _PROC_PERF_DOMAIN                                         // 26 elements, 0xB8 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY Link;                                             // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _KPRCB* Master;
//		/*0x018*/     struct _KAFFINITY_EX Members;                                        // 4 elements, 0x28 bytes (sizeof)
//		/*0x040*/     FUNCT_0065_07E5_FeedbackHandler* FeedbackHandler;
//		/*0x048*/     FUNCT_00A3_07EA_GetFFHThrottleState* GetFFHThrottleState;
//		/*0x050*/     FUNCT_00A3_07EE_BoostPolicyHandler_StallRoutine* BoostPolicyHandler;
//		/*0x058*/     FUNCT_0009_07F1_PerfSelectionHandler* PerfSelectionHandler;
//		/*0x060*/     FUNCT_00A3_07FA_PerfHandler* PerfHandler;
//		/*0x068*/     struct _PROC_PERF_CONSTRAINT* Processors;
//		/*0x070*/     UINT64       PerfChangeTime;
//		/*0x078*/     ULONG32      ProcessorCount;
//		/*0x07C*/     ULONG32      PreviousFrequencyMhz;
//		/*0x080*/     ULONG32      CurrentFrequencyMhz;
//		/*0x084*/     ULONG32      PreviousFrequency;
//		/*0x088*/     ULONG32      CurrentFrequency;
//		/*0x08C*/     ULONG32      CurrentPerfContext;
//		/*0x090*/     ULONG32      DesiredFrequency;
//		/*0x094*/     ULONG32      MaxFrequency;
//		/*0x098*/     ULONG32      MinPerfPercent;
//		/*0x09C*/     ULONG32      MinThrottlePercent;
//		/*0x0A0*/     ULONG32      MaxPercent;
//		/*0x0A4*/     ULONG32      MinPercent;
//		/*0x0A8*/     ULONG32      ConstrainedMaxPercent;
//		/*0x0AC*/     ULONG32      ConstrainedMinPercent;
//		/*0x0B0*/     UINT8        Coordination;
//		/*0x0B1*/     UINT8        _PADDING0_[0x3];
//		/*0x0B4*/     LONG32       PerfChangeIntervalCount;
//	}PROC_PERF_DOMAIN, *PPROC_PERF_DOMAIN;
//
//	typedef struct _PROC_PERF_LOAD        // 2 elements, 0x2 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        BusyPercentage;
//		/*0x001*/     UINT8        FrequencyPercentage;
//	}PROC_PERF_LOAD, *PPROC_PERF_LOAD;
//
//	typedef struct _PROCESSOR_IDLESTATE_INFO // 4 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      TimeCheck;
//		/*0x004*/     UINT8        DemotePercent;
//		/*0x005*/     UINT8        PromotePercent;
//		/*0x006*/     UINT8        Spare[2];
//	}PROCESSOR_IDLESTATE_INFO, *PPROCESSOR_IDLESTATE_INFO;
//
//	typedef struct _PROCESSOR_IDLESTATE_POLICY      // 4 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Revision;
//		union                                       // 4 elements, 0x2 bytes (sizeof)
//		{
//			/*0x002*/         UINT16       AsUSHORT;
//			struct                                  // 3 elements, 0x2 bytes (sizeof)
//			{
//				/*0x002*/             UINT16       AllowScaling : 1;      // 0 BitPosition
//				/*0x002*/             UINT16       Disabled : 1;          // 1 BitPosition
//				/*0x002*/             UINT16       Reserved : 14;         // 2 BitPosition
//			};
//		}Flags;
//		/*0x004*/     ULONG32      PolicyCount;
//		/*0x008*/     struct _PROCESSOR_IDLESTATE_INFO Policy[3];
//	}PROCESSOR_IDLESTATE_POLICY, *PPROCESSOR_IDLESTATE_POLICY;
//
//	typedef struct _PROCESSOR_NUMBER // 3 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Group;
//		/*0x002*/     UINT8        Number;
//		/*0x003*/     UINT8        Reserved;
//	}PROCESSOR_NUMBER, *PPROCESSOR_NUMBER;
//
//	typedef struct _PROCESSOR_PERFSTATE_POLICY           // 11 elements, 0x1C bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Revision;
//		/*0x004*/     UINT8        MaxThrottle;
//		/*0x005*/     UINT8        MinThrottle;
//		/*0x006*/     UINT8        BusyAdjThreshold;
//		union                                            // 2 elements, 0x1 bytes (sizeof)
//		{
//			/*0x007*/         UINT8        Spare;
//			union                                        // 5 elements, 0x1 bytes (sizeof)
//			{
//				/*0x007*/             UINT8        AsUCHAR;
//				struct                                   // 4 elements, 0x1 bytes (sizeof)
//				{
//					/*0x007*/                 UINT8        NoDomainAccounting : 1; // 0 BitPosition
//					/*0x007*/                 UINT8        IncreasePolicy : 2;     // 1 BitPosition
//					/*0x007*/                 UINT8        DecreasePolicy : 2;     // 3 BitPosition
//					/*0x007*/                 UINT8        Reserved : 3;           // 5 BitPosition
//				};
//			}Flags;
//		};
//		/*0x008*/     ULONG32      TimeCheck;
//		/*0x00C*/     ULONG32      IncreaseTime;
//		/*0x010*/     ULONG32      DecreaseTime;
//		/*0x014*/     ULONG32      IncreasePercent;
//		/*0x018*/     ULONG32      DecreasePercent;
//	}PROCESSOR_PERFSTATE_POLICY, *PPROCESSOR_PERFSTATE_POLICY;
//
//	typedef union _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA // 3 elements, 0x8 bytes (sizeof)
//	{
//		struct                                        // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      CapturedCpuShareWeight;
//			/*0x004*/         ULONG32      CapturedTotalWeight;
//		};
//		/*0x000*/     INT64        CombinedData;
//	}PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA, *PPSP_CPU_SHARE_CAPTURED_WEIGHT_DATA;
//
//	typedef struct _PS_PER_CPU_QUOTA_CACHE_AWARE // 5 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY SortedListEntry;      // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _LIST_ENTRY IdleOnlyListHead;     // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     UINT64       CycleBaseAllowance;
//		/*0x028*/     INT64        CyclesRemaining;
//		/*0x030*/     ULONG32      CurrentGeneration;
//		/*0x034*/     UINT8        _PADDING0_[0xC];
//	}PS_PER_CPU_QUOTA_CACHE_AWARE, *PPS_PER_CPU_QUOTA_CACHE_AWARE;
//
//	typedef struct _PS_CPU_QUOTA_BLOCK                                        // 14 elements, 0x4080 bytes (sizeof)
//	{
//		union                                                                 // 2 elements, 0x40 bytes (sizeof)
//		{
//			struct                                                            // 5 elements, 0x40 bytes (sizeof)
//			{
//				/*0x000*/             struct _LIST_ENTRY ListEntry;                                 // 2 elements, 0x10 bytes (sizeof)
//				/*0x010*/             ULONG32      SessionId;
//				/*0x014*/             ULONG32      CpuShareWeight;
//				/*0x018*/             union _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA CapturedWeightData; // 3 elements, 0x8 bytes (sizeof)
//				union                                                         // 2 elements, 0x4 bytes (sizeof)
//				{
//					struct                                                    // 2 elements, 0x4 bytes (sizeof)
//					{
//						/*0x020*/                     ULONG32      DuplicateInputMarker : 1;                // 0 BitPosition
//						/*0x020*/                     ULONG32      Reserved : 31;                           // 1 BitPosition
//					};
//					/*0x020*/                 LONG32       MiscFlags;
//				};
//			};
//			struct                                                            // 2 elements, 0x40 bytes (sizeof)
//			{
//				/*0x000*/             UINT64       BlockCurrentGenerationLock;
//				/*0x008*/             UINT64       CyclesAccumulated;
//				/*0x010*/             UINT8        _PADDING0_[0x30];
//			};
//		};
//		/*0x040*/     UINT64       CycleCredit;
//		/*0x048*/     ULONG32      BlockCurrentGeneration;
//		/*0x04C*/     ULONG32      CpuCyclePercent;
//		/*0x050*/     UINT8        CyclesFinishedForCurrentGeneration;
//		/*0x051*/     UINT8        _PADDING1_[0x2F];
//		/*0x080*/     struct _PS_PER_CPU_QUOTA_CACHE_AWARE Cpu[256];
//	}PS_CPU_QUOTA_BLOCK, *PPS_CPU_QUOTA_BLOCK;
//
//	typedef union _PSP_CPU_QUOTA_APC // 0 elements, 0x0 bytes (sizeof)
//	{
//	}PSP_CPU_QUOTA_APC, *PPSP_CPU_QUOTA_APC;
//
//	typedef struct _PTE_TRACKER              // 14 elements, 0x58 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY ListEntry;        // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _MDL* Mdl;
//		/*0x018*/     UINT64       Count;
//		/*0x020*/     VOID*        SystemVa;
//		/*0x028*/     VOID*        StartVa;
//		/*0x030*/     ULONG32      Offset;
//		/*0x034*/     ULONG32      Length;
//		/*0x038*/     UINT64       Page;
//		struct                               // 4 elements, 0x4 bytes (sizeof)
//		{
//			/*0x040*/         ULONG32      IoMapping : 1;      // 0 BitPosition
//			/*0x040*/         ULONG32      Matched : 1;        // 1 BitPosition
//			/*0x040*/         ULONG32      CacheAttribute : 2; // 2 BitPosition
//			/*0x040*/         ULONG32      Spare : 28;         // 4 BitPosition
//		};
//		/*0x048*/     VOID*        CallingAddress;
//		/*0x050*/     VOID*        CallersCaller;
//	}PTE_TRACKER, *PPTE_TRACKER;
//
//	typedef struct _RELATION_LIST                // 5 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Count;
//		/*0x004*/     ULONG32      TagCount;
//		/*0x008*/     ULONG32      FirstLevel;
//		/*0x00C*/     ULONG32      MaxLevel;
//		/*0x010*/     struct _RELATION_LIST_ENTRY* Entries[1];
//	}RELATION_LIST, *PRELATION_LIST;
//
//	typedef struct _RELATION_LIST_ENTRY    // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Count;
//		/*0x004*/     ULONG32      MaxCount;
//		/*0x008*/     struct _DEVICE_OBJECT* Devices[1];
//	}RELATION_LIST_ENTRY, *PRELATION_LIST_ENTRY;
//
//	typedef struct _RELATIVE_SYMLINK_INFO                  // 6 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       ExposedNamespaceLength;
//		/*0x002*/     UINT16       Flags;
//		/*0x004*/     UINT16       DeviceNameLength;
//		/*0x006*/     UINT16       Reserved;
//		/*0x008*/     struct _RELATIVE_SYMLINK_INFO* InteriorMountPoint;
//		/*0x010*/     struct _UNICODE_STRING OpenedName;                 // 3 elements, 0x10 bytes (sizeof)
//	}RELATIVE_SYMLINK_INFO, *PRELATIVE_SYMLINK_INFO;
//
//	typedef struct _REMOTE_PORT_VIEW  // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Length;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     UINT64       ViewSize;
//		/*0x010*/     VOID*        ViewBase;
//	}REMOTE_PORT_VIEW, *PREMOTE_PORT_VIEW;
//
//	typedef struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME        // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME* Previous;
//		/*0x008*/     struct _ACTIVATION_CONTEXT* ActivationContext;
//		/*0x010*/     ULONG32      Flags;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//	}RTL_ACTIVATION_CONTEXT_STACK_FRAME, *PRTL_ACTIVATION_CONTEXT_STACK_FRAME;
//
//	typedef struct _RTL_HANDLE_TABLE                        // 7 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      MaximumNumberOfHandles;
//		/*0x004*/     ULONG32      SizeOfHandleTableEntry;
//		/*0x008*/     ULONG32      Reserved[2];
//		/*0x010*/     struct _RTL_HANDLE_TABLE_ENTRY* FreeHandles;
//		/*0x018*/     struct _RTL_HANDLE_TABLE_ENTRY* CommittedHandles;
//		/*0x020*/     struct _RTL_HANDLE_TABLE_ENTRY* UnCommittedHandles;
//		/*0x028*/     struct _RTL_HANDLE_TABLE_ENTRY* MaxReservedHandles;
//	}RTL_HANDLE_TABLE, *PRTL_HANDLE_TABLE;
//
//	typedef struct _RTL_ATOM_TABLE                    // 5 elements, 0x70 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Signature;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _RTL_CRITICAL_SECTION CriticalSection; // 6 elements, 0x28 bytes (sizeof)
//		/*0x030*/     struct _RTL_HANDLE_TABLE RtlHandleTable;      // 7 elements, 0x30 bytes (sizeof)
//		/*0x060*/     ULONG32      NumberOfBuckets;
//		/*0x064*/     UINT8        _PADDING1_[0x4];
//		/*0x068*/     struct _RTL_ATOM_TABLE_ENTRY* Buckets[1];
//	}RTL_ATOM_TABLE, *PRTL_ATOM_TABLE;
//
//	typedef struct _RTL_ATOM_TABLE_ENTRY        // 7 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _RTL_ATOM_TABLE_ENTRY* HashLink;
//		/*0x008*/     UINT16       HandleIndex;
//		/*0x00A*/     UINT16       Atom;
//		/*0x00C*/     UINT16       ReferenceCount;
//		/*0x00E*/     UINT8        Flags;
//		/*0x00F*/     UINT8        NameLength;
//		/*0x010*/     WCHAR        Name[1];
//		/*0x012*/     UINT8        _PADDING0_[0x6];
//	}RTL_ATOM_TABLE_ENTRY, *PRTL_ATOM_TABLE_ENTRY;
//
//	typedef struct _RTL_AVL_TREE         // 1 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     struct _RTL_BALANCED_NODE* Root;
//	}RTL_AVL_TREE, *PRTL_AVL_TREE;
//
//	typedef struct _RTL_CRITICAL_SECTION_DEBUG         // 9 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Type;
//		/*0x002*/     UINT16       CreatorBackTraceIndex;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _RTL_CRITICAL_SECTION* CriticalSection;
//		/*0x010*/     struct _LIST_ENTRY ProcessLocksList;           // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     ULONG32      EntryCount;
//		/*0x024*/     ULONG32      ContentionCount;
//		/*0x028*/     ULONG32      Flags;
//		/*0x02C*/     UINT16       CreatorBackTraceIndexHigh;
//		/*0x02E*/     UINT16       SpareUSHORT;
//	}RTL_CRITICAL_SECTION_DEBUG, *PRTL_CRITICAL_SECTION_DEBUG;
//
//	typedef struct _RTL_DRIVE_LETTER_CURDIR // 4 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Flags;
//		/*0x002*/     UINT16       Length;
//		/*0x004*/     ULONG32      TimeStamp;
//		/*0x008*/     struct _STRING DosPath;             // 3 elements, 0x10 bytes (sizeof)
//	}RTL_DRIVE_LETTER_CURDIR, *PRTL_DRIVE_LETTER_CURDIR;
//
//	typedef struct _RTL_DYNAMIC_HASH_TABLE // 9 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Flags;
//		/*0x004*/     ULONG32      Shift;
//		/*0x008*/     ULONG32      TableSize;
//		/*0x00C*/     ULONG32      Pivot;
//		/*0x010*/     ULONG32      DivisorMask;
//		/*0x014*/     ULONG32      NumEntries;
//		/*0x018*/     ULONG32      NonEmptyBuckets;
//		/*0x01C*/     ULONG32      NumEnumerators;
//		/*0x020*/     VOID*        Directory;
//	}RTL_DYNAMIC_HASH_TABLE, *PRTL_DYNAMIC_HASH_TABLE;
//
//	typedef struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY* ChainHead;
//		/*0x008*/     struct _LIST_ENTRY* PrevLinkage;
//		/*0x010*/     UINT64       Signature;
//	}RTL_DYNAMIC_HASH_TABLE_CONTEXT, *PRTL_DYNAMIC_HASH_TABLE_CONTEXT;
//
//	typedef struct _RTL_DYNAMIC_HASH_TABLE_ENTRY // 2 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY Linkage;              // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     UINT64       Signature;
//	}RTL_DYNAMIC_HASH_TABLE_ENTRY, *PRTL_DYNAMIC_HASH_TABLE_ENTRY;
//
//	typedef struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR   // 3 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry; // 2 elements, 0x18 bytes (sizeof)
//		/*0x018*/     struct _LIST_ENTRY* ChainHead;
//		/*0x020*/     ULONG32      BucketIndex;
//		/*0x024*/     UINT8        _PADDING0_[0x4];
//	}RTL_DYNAMIC_HASH_TABLE_ENUMERATOR, *PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR;
//
//	typedef struct _RTL_HANDLE_TABLE_ENTRY            // 2 elements, 0x8 bytes (sizeof)
//	{
//		union                                         // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      Flags;
//			/*0x000*/         struct _RTL_HANDLE_TABLE_ENTRY* NextFree;
//		};
//	}RTL_HANDLE_TABLE_ENTRY, *PRTL_HANDLE_TABLE_ENTRY;
//
//	typedef struct _RTL_RANGE         // 6 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Start;
//		/*0x008*/     UINT64       End;
//		/*0x010*/     VOID*        UserData;
//		/*0x018*/     VOID*        Owner;
//		/*0x020*/     UINT8        Attributes;
//		/*0x021*/     UINT8        Flags;
//		/*0x022*/     UINT8        _PADDING0_[0x6];
//	}RTL_RANGE, *PRTL_RANGE;
//
//	typedef struct _RTL_RANGE_LIST    // 4 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY ListHead;  // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     ULONG32      Flags;
//		/*0x014*/     ULONG32      Count;
//		/*0x018*/     ULONG32      Stamp;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//	}RTL_RANGE_LIST, *PRTL_RANGE_LIST;
//
//	typedef struct _RTL_RB_TREE          // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _RTL_BALANCED_NODE* Root;
//		/*0x008*/     struct _RTL_BALANCED_NODE* Min;
//	}RTL_RB_TREE, *PRTL_RB_TREE;
//
//	typedef struct _RTL_UMS_CONTEXT                       // 28 elements, 0x540 bytes (sizeof)
//	{
//		/*0x000*/     struct _SINGLE_LIST_ENTRY Link;                   // 1 elements, 0x8 bytes (sizeof)
//		/*0x008*/     UINT8        _PADDING0_[0x8];
//		/*0x010*/     struct _CONTEXT Context;                          // 64 elements, 0x4D0 bytes (sizeof)
//		/*0x4E0*/     VOID*        Teb;
//		/*0x4E8*/     VOID*        UserContext;
//		union                                             // 2 elements, 0x8 bytes (sizeof)
//		{
//			struct                                        // 11 elements, 0x4 bytes (sizeof)
//			{
//				/*0x4F0*/             ULONG32      ScheduledThread : 1;         // 0 BitPosition
//				/*0x4F0*/             ULONG32      HasQuantumReq : 1;           // 1 BitPosition
//				/*0x4F0*/             ULONG32      HasAffinityReq : 1;          // 2 BitPosition
//				/*0x4F0*/             ULONG32      HasPriorityReq : 1;          // 3 BitPosition
//				/*0x4F0*/             ULONG32      Suspended : 1;               // 4 BitPosition
//				/*0x4F0*/             ULONG32      VolatileContext : 1;         // 5 BitPosition
//				/*0x4F0*/             ULONG32      Terminated : 1;              // 6 BitPosition
//				/*0x4F0*/             ULONG32      DebugActive : 1;             // 7 BitPosition
//				/*0x4F0*/             ULONG32      RunningOnSelfThread : 1;     // 8 BitPosition
//				/*0x4F0*/             ULONG32      DenyRunningOnSelfThread : 1; // 9 BitPosition
//				/*0x4F0*/             ULONG32      ReservedFlags : 22;          // 10 BitPosition
//			};
//			/*0x4F0*/         LONG32       Flags;
//		};
//		union                                             // 2 elements, 0x8 bytes (sizeof)
//		{
//			struct                                        // 3 elements, 0x8 bytes (sizeof)
//			{
//				/*0x4F8*/             UINT64       KernelUpdateLock : 1;        // 0 BitPosition
//				/*0x4F8*/             UINT64       Reserved : 1;                // 1 BitPosition
//				/*0x4F8*/             UINT64       PrimaryClientID : 62;        // 2 BitPosition
//			};
//			/*0x4F8*/         UINT64       ContextLock;
//		};
//		/*0x500*/     UINT64       QuantumValue;
//		/*0x508*/     struct _GROUP_AFFINITY AffinityMask;              // 3 elements, 0x10 bytes (sizeof)
//		/*0x518*/     LONG32       Priority;
//		/*0x51C*/     UINT8        _PADDING1_[0x4];
//		/*0x520*/     struct _RTL_UMS_CONTEXT* PrimaryUmsContext;
//		/*0x528*/     ULONG32      SwitchCount;
//		/*0x52C*/     ULONG32      KernelYieldCount;
//		/*0x530*/     ULONG32      MixedYieldCount;
//		/*0x534*/     ULONG32      YieldCount;
//		/*0x538*/     UINT8        _PADDING2_[0x8];
//	}RTL_UMS_CONTEXT, *PRTL_UMS_CONTEXT;
//
//	typedef struct _RTL_USER_PROCESS_PARAMETERS                // 30 elements, 0x400 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      MaximumLength;
//		/*0x004*/     ULONG32      Length;
//		/*0x008*/     ULONG32      Flags;
//		/*0x00C*/     ULONG32      DebugFlags;
//		/*0x010*/     VOID*        ConsoleHandle;
//		/*0x018*/     ULONG32      ConsoleFlags;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		/*0x020*/     VOID*        StandardInput;
//		/*0x028*/     VOID*        StandardOutput;
//		/*0x030*/     VOID*        StandardError;
//		/*0x038*/     struct _CURDIR CurrentDirectory;                       // 2 elements, 0x18 bytes (sizeof)
//		/*0x050*/     struct _UNICODE_STRING DllPath;                        // 3 elements, 0x10 bytes (sizeof)
//		/*0x060*/     struct _UNICODE_STRING ImagePathName;                  // 3 elements, 0x10 bytes (sizeof)
//		/*0x070*/     struct _UNICODE_STRING CommandLine;                    // 3 elements, 0x10 bytes (sizeof)
//		/*0x080*/     VOID*        Environment;
//		/*0x088*/     ULONG32      StartingX;
//		/*0x08C*/     ULONG32      StartingY;
//		/*0x090*/     ULONG32      CountX;
//		/*0x094*/     ULONG32      CountY;
//		/*0x098*/     ULONG32      CountCharsX;
//		/*0x09C*/     ULONG32      CountCharsY;
//		/*0x0A0*/     ULONG32      FillAttribute;
//		/*0x0A4*/     ULONG32      WindowFlags;
//		/*0x0A8*/     ULONG32      ShowWindowFlags;
//		/*0x0AC*/     UINT8        _PADDING1_[0x4];
//		/*0x0B0*/     struct _UNICODE_STRING WindowTitle;                    // 3 elements, 0x10 bytes (sizeof)
//		/*0x0C0*/     struct _UNICODE_STRING DesktopInfo;                    // 3 elements, 0x10 bytes (sizeof)
//		/*0x0D0*/     struct _UNICODE_STRING ShellInfo;                      // 3 elements, 0x10 bytes (sizeof)
//		/*0x0E0*/     struct _UNICODE_STRING RuntimeData;                    // 3 elements, 0x10 bytes (sizeof)
//		/*0x0F0*/     struct _RTL_DRIVE_LETTER_CURDIR CurrentDirectores[32];
//		/*0x3F0*/     UINT64       EnvironmentSize;
//		/*0x3F8*/     UINT64       EnvironmentVersion;
//	}RTL_USER_PROCESS_PARAMETERS, *PRTL_USER_PROCESS_PARAMETERS;
//
//	typedef struct _RTLP_RANGE_LIST_ENTRY    // 8 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Start;
//		/*0x008*/     UINT64       End;
//		union                                // 2 elements, 0x10 bytes (sizeof)
//		{
//			struct                           // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x010*/             VOID*        UserData;
//				/*0x018*/             VOID*        Owner;
//			}Allocated;
//			struct                           // 1 elements, 0x10 bytes (sizeof)
//			{
//				/*0x010*/             struct _LIST_ENTRY ListHead; // 2 elements, 0x10 bytes (sizeof)
//			}Merged;
//		};
//		/*0x020*/     UINT8        Attributes;
//		/*0x021*/     UINT8        PublicFlags;
//		/*0x022*/     UINT16       PrivateFlags;
//		/*0x024*/     UINT8        _PADDING0_[0x4];
//		/*0x028*/     struct _LIST_ENTRY ListEntry;        // 2 elements, 0x10 bytes (sizeof)
//	}RTLP_RANGE_LIST_ENTRY, *PRTLP_RANGE_LIST_ENTRY;
//
//	typedef struct _SCSI_REQUEST_BLOCK // 0 elements, 0x0 bytes (sizeof)
//	{
//	}SCSI_REQUEST_BLOCK, *PSCSI_REQUEST_BLOCK;
//
//	typedef struct _SECTION_OBJECT       // 6 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        StartingVa;
//		/*0x008*/     VOID*        EndingVa;
//		/*0x010*/     VOID*        Parent;
//		/*0x018*/     VOID*        LeftChild;
//		/*0x020*/     VOID*        RightChild;
//		/*0x028*/     struct _SEGMENT_OBJECT* Segment;
//	}SECTION_OBJECT, *PSECTION_OBJECT;
//
//	typedef struct _SECTION_OBJECT_POINTERS // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        DataSectionObject;
//		/*0x008*/     VOID*        SharedCacheMap;
//		/*0x010*/     VOID*        ImageSectionObject;
//	}SECTION_OBJECT_POINTERS, *PSECTION_OBJECT_POINTERS;
//
//	typedef struct _SECURITY_DESCRIPTOR // 7 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Revision;
//		/*0x001*/     UINT8        Sbz1;
//		/*0x002*/     UINT16       Control;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     VOID*        Owner;
//		/*0x010*/     VOID*        Group;
//		/*0x018*/     struct _ACL* Sacl;
//		/*0x020*/     struct _ACL* Dacl;
//	}SECURITY_DESCRIPTOR, *PSECURITY_DESCRIPTOR;
//
//	typedef struct _SEGMENT                                         // 12 elements, 0x50 bytes (sizeof)
//	{
//		/*0x000*/     struct _CONTROL_AREA* ControlArea;
//		/*0x008*/     ULONG32      TotalNumberOfPtes;
//		/*0x00C*/     struct _SEGMENT_FLAGS SegmentFlags;                         // 12 elements, 0x4 bytes (sizeof)
//		/*0x010*/     UINT64       NumberOfCommittedPages;
//		/*0x018*/     UINT64       SizeOfSegment;
//		union                                                       // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x020*/         struct _MMEXTEND_INFO* ExtendInfo;
//			/*0x020*/         VOID*        BasedAddress;
//		};
//		/*0x028*/     struct _EX_PUSH_LOCK SegmentLock;                           // 7 elements, 0x8 bytes (sizeof)
//		union                                                       // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x030*/         UINT64       ImageCommitment;
//			/*0x030*/         struct _EPROCESS* CreatingProcess;
//		}u1;
//		union                                                       // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x038*/         struct _MI_SECTION_IMAGE_INFORMATION* ImageInformation;
//			/*0x038*/         VOID*        FirstMappedVa;
//		}u2;
//		/*0x040*/     struct _MMPTE* PrototypePte;
//		/*0x048*/     struct _MMPTE ThePtes[1];
//	}SEGMENT, *PSEGMENT;
//
//	typedef struct _SEGMENT_OBJECT                     // 9 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        BaseAddress;
//		/*0x008*/     ULONG32      TotalNumberOfPtes;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     union _LARGE_INTEGER SizeOfSegment;            // 4 elements, 0x8 bytes (sizeof)
//		/*0x018*/     ULONG32      NonExtendedPtes;
//		/*0x01C*/     ULONG32      ImageCommitment;
//		/*0x020*/     struct _CONTROL_AREA* ControlArea;
//		/*0x028*/     struct _SUBSECTION* Subsection;
//		/*0x030*/     struct _MMSECTION_FLAGS* MmSectionFlags;
//		/*0x038*/     struct _MMSUBSECTION_FLAGS* MmSubSectionFlags;
//	}SEGMENT_OBJECT, *PSEGMENT_OBJECT;
//
//	typedef struct _TOKEN_AUDIT_POLICY  // 1 elements, 0x1B bytes (sizeof)
//	{
//		/*0x000*/     UINT8        PerUserPolicy[27];
//	}TOKEN_AUDIT_POLICY, *PTOKEN_AUDIT_POLICY;
//
//	typedef struct _SEP_AUDIT_POLICY               // 2 elements, 0x1C bytes (sizeof)
//	{
//		/*0x000*/     struct _TOKEN_AUDIT_POLICY AdtTokenPolicy; // 1 elements, 0x1B bytes (sizeof)
//		/*0x01B*/     UINT8        PolicySetStatus;
//	}SEP_AUDIT_POLICY, *PSEP_AUDIT_POLICY;
//
//	typedef struct _SEP_LOGON_SESSION_REFERENCES    // 9 elements, 0x50 bytes (sizeof)
//	{
//		/*0x000*/     struct _SEP_LOGON_SESSION_REFERENCES* Next;
//		/*0x008*/     struct _LUID LogonId;                       // 2 elements, 0x8 bytes (sizeof)
//		/*0x010*/     struct _LUID BuddyLogonId;                  // 2 elements, 0x8 bytes (sizeof)
//		/*0x018*/     ULONG32      ReferenceCount;
//		/*0x01C*/     ULONG32      Flags;
//		/*0x020*/     struct _DEVICE_MAP* pDeviceMap;
//		/*0x028*/     VOID*        Token;
//		/*0x030*/     struct _UNICODE_STRING AccountName;         // 3 elements, 0x10 bytes (sizeof)
//		/*0x040*/     struct _UNICODE_STRING AuthorityName;       // 3 elements, 0x10 bytes (sizeof)
//	}SEP_LOGON_SESSION_REFERENCES, *PSEP_LOGON_SESSION_REFERENCES;
//
//	typedef struct _SEP_TOKEN_PRIVILEGES // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Present;
//		/*0x008*/     UINT64       Enabled;
//		/*0x010*/     UINT64       EnabledByDefault;
//	}SEP_TOKEN_PRIVILEGES, *PSEP_TOKEN_PRIVILEGES;
//
//	typedef struct _SHARED_CACHE_MAP                          // 41 elements, 0x1F8 bytes (sizeof)
//	{
//		/*0x000*/     INT16        NodeTypeCode;
//		/*0x002*/     INT16        NodeByteSize;
//		/*0x004*/     ULONG32      OpenCount;
//		/*0x008*/     union _LARGE_INTEGER FileSize;                        // 4 elements, 0x8 bytes (sizeof)
//		/*0x010*/     struct _LIST_ENTRY BcbList;                           // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     union _LARGE_INTEGER SectionSize;                     // 4 elements, 0x8 bytes (sizeof)
//		/*0x028*/     union _LARGE_INTEGER ValidDataLength;                 // 4 elements, 0x8 bytes (sizeof)
//		/*0x030*/     union _LARGE_INTEGER ValidDataGoal;                   // 4 elements, 0x8 bytes (sizeof)
//		/*0x038*/     struct _VACB* InitialVacbs[4];
//		/*0x058*/     struct _VACB** Vacbs;
//		/*0x060*/     struct _EX_FAST_REF FileObjectFastRef;                // 3 elements, 0x8 bytes (sizeof)
//		/*0x068*/     struct _EX_PUSH_LOCK VacbLock;                        // 7 elements, 0x8 bytes (sizeof)
//		/*0x070*/     ULONG32      DirtyPages;
//		/*0x074*/     UINT8        _PADDING0_[0x4];
//		/*0x078*/     struct _LIST_ENTRY LoggedStreamLinks;                 // 2 elements, 0x10 bytes (sizeof)
//		/*0x088*/     struct _LIST_ENTRY SharedCacheMapLinks;               // 2 elements, 0x10 bytes (sizeof)
//		/*0x098*/     ULONG32      Flags;
//		/*0x09C*/     LONG32       Status;
//		/*0x0A0*/     struct _MBCB* Mbcb;
//		/*0x0A8*/     VOID*        Section;
//		/*0x0B0*/     struct _KEVENT* CreateEvent;
//		/*0x0B8*/     struct _KEVENT* WaitOnActiveCount;
//		/*0x0C0*/     ULONG32      PagesToWrite;
//		/*0x0C4*/     UINT8        _PADDING1_[0x4];
//		/*0x0C8*/     INT64        BeyondLastFlush;
//		/*0x0D0*/     struct _CACHE_MANAGER_CALLBACKS* Callbacks;
//		/*0x0D8*/     VOID*        LazyWriteContext;
//		/*0x0E0*/     struct _LIST_ENTRY PrivateList;                       // 2 elements, 0x10 bytes (sizeof)
//		/*0x0F0*/     VOID*        LogHandle;
//		/*0x0F8*/     FUNCT_00A3_1A8A_FlushToLsnRoutine* FlushToLsnRoutine;
//		/*0x100*/     ULONG32      DirtyPageThreshold;
//		/*0x104*/     ULONG32      LazyWritePassCount;
//		/*0x108*/     struct _CACHE_UNINITIALIZE_EVENT* UninitializeEvent;
//		/*0x110*/     struct _KGUARDED_MUTEX BcbLock;                       // 7 elements, 0x38 bytes (sizeof)
//		/*0x148*/     union _LARGE_INTEGER LastUnmapBehindOffset;           // 4 elements, 0x8 bytes (sizeof)
//		/*0x150*/     struct _KEVENT Event;                                 // 1 elements, 0x18 bytes (sizeof)
//		/*0x168*/     union _LARGE_INTEGER HighWaterMappingOffset;          // 4 elements, 0x8 bytes (sizeof)
//		/*0x170*/     struct _PRIVATE_CACHE_MAP PrivateCacheMap;            // 16 elements, 0x68 bytes (sizeof)
//		/*0x1D8*/     VOID*        WriteBehindWorkQueueEntry;
//		/*0x1E0*/     struct _VOLUME_CACHE_MAP* VolumeCacheMap;
//		/*0x1E8*/     ULONG32      ProcImagePathHash;
//		/*0x1EC*/     ULONG32      WritesInProgress;
//		/*0x1F0*/     ULONG32      PipelinedReadAheadSize;
//		/*0x1F4*/     UINT8        _PADDING2_[0x4];
//	}SHARED_CACHE_MAP, *PSHARED_CACHE_MAP;
//
//	typedef struct _SHARED_CACHE_MAP_LIST_CURSOR // 2 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY SharedCacheMapLinks;  // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     ULONG32      Flags;
//		/*0x014*/     UINT8        _PADDING0_[0x4];
//	}SHARED_CACHE_MAP_LIST_CURSOR, *PSHARED_CACHE_MAP_LIST_CURSOR;
//
//	typedef struct _SID_AND_ATTRIBUTES // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        Sid;
//		/*0x008*/     ULONG32      Attributes;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//	}SID_AND_ATTRIBUTES, *PSID_AND_ATTRIBUTES;
//
//	typedef struct _SID_AND_ATTRIBUTES_HASH  // 3 elements, 0x110 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      SidCount;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _SID_AND_ATTRIBUTES* SidAttr;
//		/*0x010*/     UINT64       Hash[32];
//	}SID_AND_ATTRIBUTES_HASH, *PSID_AND_ATTRIBUTES_HASH;
//
//	typedef struct _SINGLE_LIST_ENTRY32 // 1 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Next;
//	}SINGLE_LIST_ENTRY32, *PSINGLE_LIST_ENTRY32;
//
//	typedef struct _SMBIOS_TABLE_HEADER // 0 elements, 0x0 bytes (sizeof)
//	{
//	}SMBIOS_TABLE_HEADER, *PSMBIOS_TABLE_HEADER;
//
//	typedef struct _STACK_TABLE                   // 4 elements, 0x8088 bytes (sizeof)
//	{
//		/*0x000*/      UINT16       NumStackTraces;
//		/*0x002*/      UINT16       TraceCapacity;
//		/*0x004*/      UINT8        _PADDING0_[0x4];
//		/*0x008*/      struct _OBJECT_REF_TRACE* StackTrace[16];
//		/*0x088*/      UINT16       StackTableHash[16381];
//		/*0x8082*/     UINT8        _PADDING1_[0x6];
//	}STACK_TABLE, *PSTACK_TABLE;
//
//	typedef struct _SUBSECTION                          // 9 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     struct _CONTROL_AREA* ControlArea;
//		/*0x008*/     struct _MMPTE* SubsectionBase;
//		/*0x010*/     struct _SUBSECTION* NextSubsection;
//		/*0x018*/     ULONG32      PtesInSubsection;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		union                                           // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x020*/         ULONG32      UnusedPtes;
//			/*0x020*/         struct _MM_AVL_TABLE* GlobalPerSessionHead;
//		};
//		union                                           // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x028*/         ULONG32      LongFlags;
//			/*0x028*/         struct _MMSUBSECTION_FLAGS SubsectionFlags; // 8 elements, 0x4 bytes (sizeof)
//		}u;
//		/*0x02C*/     ULONG32      StartingSector;
//		/*0x030*/     ULONG32      NumberOfFullSectors;
//		/*0x034*/     UINT8        _PADDING1_[0x4];
//	}SUBSECTION, *PSUBSECTION;
//
//	typedef struct _SYSPTES_HEADER        // 4 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY ListHead;      // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     UINT64       Count;
//		/*0x018*/     UINT64       NumberOfEntries;
//		/*0x020*/     UINT64       NumberOfEntriesPeak;
//	}SYSPTES_HEADER, *PSYSPTES_HEADER;
//
//	typedef struct _SYSTEM_POWER_LEVEL           // 5 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Enable;
//		/*0x001*/     UINT8        Spare[3];
//		/*0x004*/     ULONG32      BatteryLevel;
//		/*0x008*/     struct _POWER_ACTION_POLICY PowerPolicy; // 3 elements, 0xC bytes (sizeof)
//		/*0x014*/     enum _SYSTEM_POWER_STATE MinSystemState;
//	}SYSTEM_POWER_LEVEL, *PSYSTEM_POWER_LEVEL;
//
//	typedef struct _SYSTEM_POWER_POLICY                // 28 elements, 0xE8 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Revision;
//		/*0x004*/     struct _POWER_ACTION_POLICY PowerButton;       // 3 elements, 0xC bytes (sizeof)
//		/*0x010*/     struct _POWER_ACTION_POLICY SleepButton;       // 3 elements, 0xC bytes (sizeof)
//		/*0x01C*/     struct _POWER_ACTION_POLICY LidClose;          // 3 elements, 0xC bytes (sizeof)
//		/*0x028*/     enum _SYSTEM_POWER_STATE LidOpenWake;
//		/*0x02C*/     ULONG32      Reserved;
//		/*0x030*/     struct _POWER_ACTION_POLICY Idle;              // 3 elements, 0xC bytes (sizeof)
//		/*0x03C*/     ULONG32      IdleTimeout;
//		/*0x040*/     UINT8        IdleSensitivity;
//		/*0x041*/     UINT8        DynamicThrottle;
//		/*0x042*/     UINT8        Spare2[2];
//		/*0x044*/     enum _SYSTEM_POWER_STATE MinSleep;
//		/*0x048*/     enum _SYSTEM_POWER_STATE MaxSleep;
//		/*0x04C*/     enum _SYSTEM_POWER_STATE ReducedLatencySleep;
//		/*0x050*/     ULONG32      WinLogonFlags;
//		/*0x054*/     ULONG32      Spare3;
//		/*0x058*/     ULONG32      DozeS4Timeout;
//		/*0x05C*/     ULONG32      BroadcastCapacityResolution;
//		/*0x060*/     struct _SYSTEM_POWER_LEVEL DischargePolicy[4];
//		/*0x0C0*/     ULONG32      VideoTimeout;
//		/*0x0C4*/     UINT8        VideoDimDisplay;
//		/*0x0C5*/     UINT8        _PADDING0_[0x3];
//		/*0x0C8*/     ULONG32      VideoReserved[3];
//		/*0x0D4*/     ULONG32      SpindownTimeout;
//		/*0x0D8*/     UINT8        OptimizeForPower;
//		/*0x0D9*/     UINT8        FanThrottleTolerance;
//		/*0x0DA*/     UINT8        ForcedThrottle;
//		/*0x0DB*/     UINT8        MinThrottle;
//		/*0x0DC*/     struct _POWER_ACTION_POLICY OverThrottled;     // 3 elements, 0xC bytes (sizeof)
//	}SYSTEM_POWER_POLICY, *PSYSTEM_POWER_POLICY;
//
//	typedef struct _SYSTEM_TRACE_HEADER      // 11 elements, 0x20 bytes (sizeof)
//	{
//		union                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      Marker;
//			struct                           // 3 elements, 0x4 bytes (sizeof)
//			{
//				/*0x000*/             UINT16       Version;
//				/*0x002*/             UINT8        HeaderType;
//				/*0x003*/             UINT8        Flags;
//			};
//		};
//		union                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x004*/         ULONG32      Header;
//			/*0x004*/         struct _WMI_TRACE_PACKET Packet; // 4 elements, 0x4 bytes (sizeof)
//		};
//		/*0x008*/     ULONG32      ThreadId;
//		/*0x00C*/     ULONG32      ProcessId;
//		/*0x010*/     union _LARGE_INTEGER SystemTime;     // 4 elements, 0x8 bytes (sizeof)
//		/*0x018*/     ULONG32      KernelTime;
//		/*0x01C*/     ULONG32      UserTime;
//	}SYSTEM_TRACE_HEADER, *PSYSTEM_TRACE_HEADER;
//
//	typedef struct _TEB                                                  // 101 elements, 0x1818 bytes (sizeof)
//	{
//		/*0x000*/      struct _NT_TIB NtTib;                                            // 8 elements, 0x38 bytes (sizeof)
//		/*0x038*/      VOID*        EnvironmentPointer;
//		/*0x040*/      struct _CLIENT_ID ClientId;                                      // 2 elements, 0x10 bytes (sizeof)
//		/*0x050*/      VOID*        ActiveRpcHandle;
//		/*0x058*/      VOID*        ThreadLocalStoragePointer;
//		/*0x060*/      struct _PEB* ProcessEnvironmentBlock;
//		/*0x068*/      ULONG32      LastErrorValue;
//		/*0x06C*/      ULONG32      CountOfOwnedCriticalSections;
//		/*0x070*/      VOID*        CsrClientThread;
//		/*0x078*/      VOID*        Win32ThreadInfo;
//		/*0x080*/      ULONG32      User32Reserved[26];
//		/*0x0E8*/      ULONG32      UserReserved[5];
//		/*0x0FC*/      UINT8        _PADDING0_[0x4];
//		/*0x100*/      VOID*        WOW32Reserved;
//		/*0x108*/      ULONG32      CurrentLocale;
//		/*0x10C*/      ULONG32      FpSoftwareStatusRegister;
//		/*0x110*/      VOID*        SystemReserved1[54];
//		/*0x2C0*/      LONG32       ExceptionCode;
//		/*0x2C4*/      UINT8        _PADDING1_[0x4];
//		/*0x2C8*/      struct _ACTIVATION_CONTEXT_STACK* ActivationContextStackPointer;
//		/*0x2D0*/      UINT8        SpareBytes[24];
//		/*0x2E8*/      ULONG32      TxFsContext;
//		/*0x2EC*/      UINT8        _PADDING2_[0x4];
//		/*0x2F0*/      struct _GDI_TEB_BATCH GdiTebBatch;                               // 3 elements, 0x4E8 bytes (sizeof)
//		/*0x7D8*/      struct _CLIENT_ID RealClientId;                                  // 2 elements, 0x10 bytes (sizeof)
//		/*0x7E8*/      VOID*        GdiCachedProcessHandle;
//		/*0x7F0*/      ULONG32      GdiClientPID;
//		/*0x7F4*/      ULONG32      GdiClientTID;
//		/*0x7F8*/      VOID*        GdiThreadLocalInfo;
//		/*0x800*/      UINT64       Win32ClientInfo[62];
//		/*0x9F0*/      VOID*        glDispatchTable[233];
//		/*0x1138*/     UINT64       glReserved1[29];
//		/*0x1220*/     VOID*        glReserved2;
//		/*0x1228*/     VOID*        glSectionInfo;
//		/*0x1230*/     VOID*        glSection;
//		/*0x1238*/     VOID*        glTable;
//		/*0x1240*/     VOID*        glCurrentRC;
//		/*0x1248*/     VOID*        glContext;
//		/*0x1250*/     ULONG32      LastStatusValue;
//		/*0x1254*/     UINT8        _PADDING3_[0x4];
//		/*0x1258*/     struct _UNICODE_STRING StaticUnicodeString;                      // 3 elements, 0x10 bytes (sizeof)
//		/*0x1268*/     WCHAR        StaticUnicodeBuffer[261];
//		/*0x1472*/     UINT8        _PADDING4_[0x6];
//		/*0x1478*/     VOID*        DeallocationStack;
//		/*0x1480*/     VOID*        TlsSlots[64];
//		/*0x1680*/     struct _LIST_ENTRY TlsLinks;                                     // 2 elements, 0x10 bytes (sizeof)
//		/*0x1690*/     VOID*        Vdm;
//		/*0x1698*/     VOID*        ReservedForNtRpc;
//		/*0x16A0*/     VOID*        DbgSsReserved[2];
//		/*0x16B0*/     ULONG32      HardErrorMode;
//		/*0x16B4*/     UINT8        _PADDING5_[0x4];
//		/*0x16B8*/     VOID*        Instrumentation[11];
//		/*0x1710*/     struct _GUID ActivityId;                                         // 4 elements, 0x10 bytes (sizeof)
//		/*0x1720*/     VOID*        SubProcessTag;
//		/*0x1728*/     VOID*        EtwLocalData;
//		/*0x1730*/     VOID*        EtwTraceData;
//		/*0x1738*/     VOID*        WinSockData;
//		/*0x1740*/     ULONG32      GdiBatchCount;
//		union                                                            // 3 elements, 0x4 bytes (sizeof)
//		{
//			/*0x1744*/         struct _PROCESSOR_NUMBER CurrentIdealProcessor;              // 3 elements, 0x4 bytes (sizeof)
//			/*0x1744*/         ULONG32      IdealProcessorValue;
//			struct                                                       // 4 elements, 0x4 bytes (sizeof)
//			{
//				/*0x1744*/             UINT8        ReservedPad0;
//				/*0x1745*/             UINT8        ReservedPad1;
//				/*0x1746*/             UINT8        ReservedPad2;
//				/*0x1747*/             UINT8        IdealProcessor;
//			};
//		};
//		/*0x1748*/     ULONG32      GuaranteedStackBytes;
//		/*0x174C*/     UINT8        _PADDING6_[0x4];
//		/*0x1750*/     VOID*        ReservedForPerf;
//		/*0x1758*/     VOID*        ReservedForOle;
//		/*0x1760*/     ULONG32      WaitingOnLoaderLock;
//		/*0x1764*/     UINT8        _PADDING7_[0x4];
//		/*0x1768*/     VOID*        SavedPriorityState;
//		/*0x1770*/     UINT64       SoftPatchPtr1;
//		/*0x1778*/     VOID*        ThreadPoolData;
//		/*0x1780*/     VOID**       TlsExpansionSlots;
//		/*0x1788*/     VOID*        DeallocationBStore;
//		/*0x1790*/     VOID*        BStoreLimit;
//		/*0x1798*/     ULONG32      MuiGeneration;
//		/*0x179C*/     ULONG32      IsImpersonating;
//		/*0x17A0*/     VOID*        NlsCache;
//		/*0x17A8*/     VOID*        pShimData;
//		/*0x17B0*/     ULONG32      HeapVirtualAffinity;
//		/*0x17B4*/     UINT8        _PADDING8_[0x4];
//		/*0x17B8*/     VOID*        CurrentTransactionHandle;
//		/*0x17C0*/     struct _TEB_ACTIVE_FRAME* ActiveFrame;
//		/*0x17C8*/     VOID*        FlsData;
//		/*0x17D0*/     VOID*        PreferredLanguages;
//		/*0x17D8*/     VOID*        UserPrefLanguages;
//		/*0x17E0*/     VOID*        MergedPrefLanguages;
//		/*0x17E8*/     ULONG32      MuiImpersonation;
//		union                                                            // 2 elements, 0x2 bytes (sizeof)
//		{
//			/*0x17EC*/         UINT16       CrossTebFlags;
//			/*0x17EC*/         UINT16       SpareCrossTebBits : 16;                         // 0 BitPosition
//		};
//		union                                                            // 2 elements, 0x2 bytes (sizeof)
//		{
//			/*0x17EE*/         UINT16       SameTebFlags;
//			struct                                                       // 12 elements, 0x2 bytes (sizeof)
//			{
//				/*0x17EE*/             UINT16       SafeThunkCall : 1;                          // 0 BitPosition
//				/*0x17EE*/             UINT16       InDebugPrint : 1;                           // 1 BitPosition
//				/*0x17EE*/             UINT16       HasFiberData : 1;                           // 2 BitPosition
//				/*0x17EE*/             UINT16       SkipThreadAttach : 1;                       // 3 BitPosition
//				/*0x17EE*/             UINT16       WerInShipAssertCode : 1;                    // 4 BitPosition
//				/*0x17EE*/             UINT16       RanProcessInit : 1;                         // 5 BitPosition
//				/*0x17EE*/             UINT16       ClonedThread : 1;                           // 6 BitPosition
//				/*0x17EE*/             UINT16       SuppressDebugMsg : 1;                       // 7 BitPosition
//				/*0x17EE*/             UINT16       DisableUserStackWalk : 1;                   // 8 BitPosition
//				/*0x17EE*/             UINT16       RtlExceptionAttached : 1;                   // 9 BitPosition
//				/*0x17EE*/             UINT16       InitialThread : 1;                          // 10 BitPosition
//				/*0x17EE*/             UINT16       SpareSameTebBits : 5;                       // 11 BitPosition
//			};
//		};
//		/*0x17F0*/     VOID*        TxnScopeEnterCallback;
//		/*0x17F8*/     VOID*        TxnScopeExitCallback;
//		/*0x1800*/     VOID*        TxnScopeContext;
//		/*0x1808*/     ULONG32      LockCount;
//		/*0x180C*/     ULONG32      SpareUlong0;
//		/*0x1810*/     VOID*        ResourceRetValue;
//	}TEB, *PTEB;
//
//	typedef struct _TEB_ACTIVE_FRAME               // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Flags;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _TEB_ACTIVE_FRAME* Previous;
//		/*0x010*/     struct _TEB_ACTIVE_FRAME_CONTEXT* Context;
//	}TEB_ACTIVE_FRAME, *PTEB_ACTIVE_FRAME;
//
//	typedef struct _TEB_ACTIVE_FRAME_CONTEXT // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Flags;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     CHAR*        FrameName;
//	}TEB_ACTIVE_FRAME_CONTEXT, *PTEB_ACTIVE_FRAME_CONTEXT;
//
//	typedef struct _TEB32                                   // 99 elements, 0xFE4 bytes (sizeof)
//	{
//		/*0x000*/     struct _NT_TIB32 NtTib;                             // 8 elements, 0x1C bytes (sizeof)
//		/*0x01C*/     ULONG32      EnvironmentPointer;
//		/*0x020*/     struct _CLIENT_ID32 ClientId;                       // 2 elements, 0x8 bytes (sizeof)
//		/*0x028*/     ULONG32      ActiveRpcHandle;
//		/*0x02C*/     ULONG32      ThreadLocalStoragePointer;
//		/*0x030*/     ULONG32      ProcessEnvironmentBlock;
//		/*0x034*/     ULONG32      LastErrorValue;
//		/*0x038*/     ULONG32      CountOfOwnedCriticalSections;
//		/*0x03C*/     ULONG32      CsrClientThread;
//		/*0x040*/     ULONG32      Win32ThreadInfo;
//		/*0x044*/     ULONG32      User32Reserved[26];
//		/*0x0AC*/     ULONG32      UserReserved[5];
//		/*0x0C0*/     ULONG32      WOW32Reserved;
//		/*0x0C4*/     ULONG32      CurrentLocale;
//		/*0x0C8*/     ULONG32      FpSoftwareStatusRegister;
//		/*0x0CC*/     ULONG32      SystemReserved1[54];
//		/*0x1A4*/     LONG32       ExceptionCode;
//		/*0x1A8*/     ULONG32      ActivationContextStackPointer;
//		/*0x1AC*/     UINT8        SpareBytes[36];
//		/*0x1D0*/     ULONG32      TxFsContext;
//		/*0x1D4*/     struct _GDI_TEB_BATCH32 GdiTebBatch;                // 3 elements, 0x4E0 bytes (sizeof)
//		/*0x6B4*/     struct _CLIENT_ID32 RealClientId;                   // 2 elements, 0x8 bytes (sizeof)
//		/*0x6BC*/     ULONG32      GdiCachedProcessHandle;
//		/*0x6C0*/     ULONG32      GdiClientPID;
//		/*0x6C4*/     ULONG32      GdiClientTID;
//		/*0x6C8*/     ULONG32      GdiThreadLocalInfo;
//		/*0x6CC*/     ULONG32      Win32ClientInfo[62];
//		/*0x7C4*/     ULONG32      glDispatchTable[233];
//		/*0xB68*/     ULONG32      glReserved1[29];
//		/*0xBDC*/     ULONG32      glReserved2;
//		/*0xBE0*/     ULONG32      glSectionInfo;
//		/*0xBE4*/     ULONG32      glSection;
//		/*0xBE8*/     ULONG32      glTable;
//		/*0xBEC*/     ULONG32      glCurrentRC;
//		/*0xBF0*/     ULONG32      glContext;
//		/*0xBF4*/     ULONG32      LastStatusValue;
//		/*0xBF8*/     struct _STRING32 StaticUnicodeString;               // 3 elements, 0x8 bytes (sizeof)
//		/*0xC00*/     WCHAR        StaticUnicodeBuffer[261];
//		/*0xE0A*/     UINT8        _PADDING0_[0x2];
//		/*0xE0C*/     ULONG32      DeallocationStack;
//		/*0xE10*/     ULONG32      TlsSlots[64];
//		/*0xF10*/     struct _LIST_ENTRY32 TlsLinks;                      // 2 elements, 0x8 bytes (sizeof)
//		/*0xF18*/     ULONG32      Vdm;
//		/*0xF1C*/     ULONG32      ReservedForNtRpc;
//		/*0xF20*/     ULONG32      DbgSsReserved[2];
//		/*0xF28*/     ULONG32      HardErrorMode;
//		/*0xF2C*/     ULONG32      Instrumentation[9];
//		/*0xF50*/     struct _GUID ActivityId;                            // 4 elements, 0x10 bytes (sizeof)
//		/*0xF60*/     ULONG32      SubProcessTag;
//		/*0xF64*/     ULONG32      EtwLocalData;
//		/*0xF68*/     ULONG32      EtwTraceData;
//		/*0xF6C*/     ULONG32      WinSockData;
//		/*0xF70*/     ULONG32      GdiBatchCount;
//		union                                               // 3 elements, 0x4 bytes (sizeof)
//		{
//			/*0xF74*/         struct _PROCESSOR_NUMBER CurrentIdealProcessor; // 3 elements, 0x4 bytes (sizeof)
//			/*0xF74*/         ULONG32      IdealProcessorValue;
//			struct                                          // 4 elements, 0x4 bytes (sizeof)
//			{
//				/*0xF74*/             UINT8        ReservedPad0;
//				/*0xF75*/             UINT8        ReservedPad1;
//				/*0xF76*/             UINT8        ReservedPad2;
//				/*0xF77*/             UINT8        IdealProcessor;
//			};
//		};
//		/*0xF78*/     ULONG32      GuaranteedStackBytes;
//		/*0xF7C*/     ULONG32      ReservedForPerf;
//		/*0xF80*/     ULONG32      ReservedForOle;
//		/*0xF84*/     ULONG32      WaitingOnLoaderLock;
//		/*0xF88*/     ULONG32      SavedPriorityState;
//		/*0xF8C*/     ULONG32      SoftPatchPtr1;
//		/*0xF90*/     ULONG32      ThreadPoolData;
//		/*0xF94*/     ULONG32      TlsExpansionSlots;
//		/*0xF98*/     ULONG32      MuiGeneration;
//		/*0xF9C*/     ULONG32      IsImpersonating;
//		/*0xFA0*/     ULONG32      NlsCache;
//		/*0xFA4*/     ULONG32      pShimData;
//		/*0xFA8*/     ULONG32      HeapVirtualAffinity;
//		/*0xFAC*/     ULONG32      CurrentTransactionHandle;
//		/*0xFB0*/     ULONG32      ActiveFrame;
//		/*0xFB4*/     ULONG32      FlsData;
//		/*0xFB8*/     ULONG32      PreferredLanguages;
//		/*0xFBC*/     ULONG32      UserPrefLanguages;
//		/*0xFC0*/     ULONG32      MergedPrefLanguages;
//		/*0xFC4*/     ULONG32      MuiImpersonation;
//		union                                               // 2 elements, 0x2 bytes (sizeof)
//		{
//			/*0xFC8*/         UINT16       CrossTebFlags;
//			/*0xFC8*/         UINT16       SpareCrossTebBits : 16;            // 0 BitPosition
//		};
//		union                                               // 2 elements, 0x2 bytes (sizeof)
//		{
//			/*0xFCA*/         UINT16       SameTebFlags;
//			struct                                          // 12 elements, 0x2 bytes (sizeof)
//			{
//				/*0xFCA*/             UINT16       SafeThunkCall : 1;             // 0 BitPosition
//				/*0xFCA*/             UINT16       InDebugPrint : 1;              // 1 BitPosition
//				/*0xFCA*/             UINT16       HasFiberData : 1;              // 2 BitPosition
//				/*0xFCA*/             UINT16       SkipThreadAttach : 1;          // 3 BitPosition
//				/*0xFCA*/             UINT16       WerInShipAssertCode : 1;       // 4 BitPosition
//				/*0xFCA*/             UINT16       RanProcessInit : 1;            // 5 BitPosition
//				/*0xFCA*/             UINT16       ClonedThread : 1;              // 6 BitPosition
//				/*0xFCA*/             UINT16       SuppressDebugMsg : 1;          // 7 BitPosition
//				/*0xFCA*/             UINT16       DisableUserStackWalk : 1;      // 8 BitPosition
//				/*0xFCA*/             UINT16       RtlExceptionAttached : 1;      // 9 BitPosition
//				/*0xFCA*/             UINT16       InitialThread : 1;             // 10 BitPosition
//				/*0xFCA*/             UINT16       SpareSameTebBits : 5;          // 11 BitPosition
//			};
//		};
//		/*0xFCC*/     ULONG32      TxnScopeEnterCallback;
//		/*0xFD0*/     ULONG32      TxnScopeExitCallback;
//		/*0xFD4*/     ULONG32      TxnScopeContext;
//		/*0xFD8*/     ULONG32      LockCount;
//		/*0xFDC*/     ULONG32      SpareUlong0;
//		/*0xFE0*/     ULONG32      ResourceRetValue;
//	}TEB32, *PTEB32;
//
//	typedef struct _TEB64                                   // 101 elements, 0x1818 bytes (sizeof)
//	{
//		/*0x000*/      struct _NT_TIB64 NtTib;                             // 8 elements, 0x38 bytes (sizeof)
//		/*0x038*/      UINT64       EnvironmentPointer;
//		/*0x040*/      struct _CLIENT_ID64 ClientId;                       // 2 elements, 0x10 bytes (sizeof)
//		/*0x050*/      UINT64       ActiveRpcHandle;
//		/*0x058*/      UINT64       ThreadLocalStoragePointer;
//		/*0x060*/      UINT64       ProcessEnvironmentBlock;
//		/*0x068*/      ULONG32      LastErrorValue;
//		/*0x06C*/      ULONG32      CountOfOwnedCriticalSections;
//		/*0x070*/      UINT64       CsrClientThread;
//		/*0x078*/      UINT64       Win32ThreadInfo;
//		/*0x080*/      ULONG32      User32Reserved[26];
//		/*0x0E8*/      ULONG32      UserReserved[5];
//		/*0x0FC*/      UINT8        _PADDING0_[0x4];
//		/*0x100*/      UINT64       WOW32Reserved;
//		/*0x108*/      ULONG32      CurrentLocale;
//		/*0x10C*/      ULONG32      FpSoftwareStatusRegister;
//		/*0x110*/      UINT64       SystemReserved1[54];
//		/*0x2C0*/      LONG32       ExceptionCode;
//		/*0x2C4*/      UINT8        _PADDING1_[0x4];
//		/*0x2C8*/      UINT64       ActivationContextStackPointer;
//		/*0x2D0*/      UINT8        SpareBytes[24];
//		/*0x2E8*/      ULONG32      TxFsContext;
//		/*0x2EC*/      UINT8        _PADDING2_[0x4];
//		/*0x2F0*/      struct _GDI_TEB_BATCH64 GdiTebBatch;                // 3 elements, 0x4E8 bytes (sizeof)
//		/*0x7D8*/      struct _CLIENT_ID64 RealClientId;                   // 2 elements, 0x10 bytes (sizeof)
//		/*0x7E8*/      UINT64       GdiCachedProcessHandle;
//		/*0x7F0*/      ULONG32      GdiClientPID;
//		/*0x7F4*/      ULONG32      GdiClientTID;
//		/*0x7F8*/      UINT64       GdiThreadLocalInfo;
//		/*0x800*/      UINT64       Win32ClientInfo[62];
//		/*0x9F0*/      UINT64       glDispatchTable[233];
//		/*0x1138*/     UINT64       glReserved1[29];
//		/*0x1220*/     UINT64       glReserved2;
//		/*0x1228*/     UINT64       glSectionInfo;
//		/*0x1230*/     UINT64       glSection;
//		/*0x1238*/     UINT64       glTable;
//		/*0x1240*/     UINT64       glCurrentRC;
//		/*0x1248*/     UINT64       glContext;
//		/*0x1250*/     ULONG32      LastStatusValue;
//		/*0x1254*/     UINT8        _PADDING3_[0x4];
//		/*0x1258*/     struct _STRING64 StaticUnicodeString;               // 3 elements, 0x10 bytes (sizeof)
//		/*0x1268*/     WCHAR        StaticUnicodeBuffer[261];
//		/*0x1472*/     UINT8        _PADDING4_[0x6];
//		/*0x1478*/     UINT64       DeallocationStack;
//		/*0x1480*/     UINT64       TlsSlots[64];
//		/*0x1680*/     struct _LIST_ENTRY64 TlsLinks;                      // 2 elements, 0x10 bytes (sizeof)
//		/*0x1690*/     UINT64       Vdm;
//		/*0x1698*/     UINT64       ReservedForNtRpc;
//		/*0x16A0*/     UINT64       DbgSsReserved[2];
//		/*0x16B0*/     ULONG32      HardErrorMode;
//		/*0x16B4*/     UINT8        _PADDING5_[0x4];
//		/*0x16B8*/     UINT64       Instrumentation[11];
//		/*0x1710*/     struct _GUID ActivityId;                            // 4 elements, 0x10 bytes (sizeof)
//		/*0x1720*/     UINT64       SubProcessTag;
//		/*0x1728*/     UINT64       EtwLocalData;
//		/*0x1730*/     UINT64       EtwTraceData;
//		/*0x1738*/     UINT64       WinSockData;
//		/*0x1740*/     ULONG32      GdiBatchCount;
//		union                                               // 3 elements, 0x4 bytes (sizeof)
//		{
//			/*0x1744*/         struct _PROCESSOR_NUMBER CurrentIdealProcessor; // 3 elements, 0x4 bytes (sizeof)
//			/*0x1744*/         ULONG32      IdealProcessorValue;
//			struct                                          // 4 elements, 0x4 bytes (sizeof)
//			{
//				/*0x1744*/             UINT8        ReservedPad0;
//				/*0x1745*/             UINT8        ReservedPad1;
//				/*0x1746*/             UINT8        ReservedPad2;
//				/*0x1747*/             UINT8        IdealProcessor;
//			};
//		};
//		/*0x1748*/     ULONG32      GuaranteedStackBytes;
//		/*0x174C*/     UINT8        _PADDING6_[0x4];
//		/*0x1750*/     UINT64       ReservedForPerf;
//		/*0x1758*/     UINT64       ReservedForOle;
//		/*0x1760*/     ULONG32      WaitingOnLoaderLock;
//		/*0x1764*/     UINT8        _PADDING7_[0x4];
//		/*0x1768*/     UINT64       SavedPriorityState;
//		/*0x1770*/     UINT64       SoftPatchPtr1;
//		/*0x1778*/     UINT64       ThreadPoolData;
//		/*0x1780*/     UINT64       TlsExpansionSlots;
//		/*0x1788*/     UINT64       DeallocationBStore;
//		/*0x1790*/     UINT64       BStoreLimit;
//		/*0x1798*/     ULONG32      MuiGeneration;
//		/*0x179C*/     ULONG32      IsImpersonating;
//		/*0x17A0*/     UINT64       NlsCache;
//		/*0x17A8*/     UINT64       pShimData;
//		/*0x17B0*/     ULONG32      HeapVirtualAffinity;
//		/*0x17B4*/     UINT8        _PADDING8_[0x4];
//		/*0x17B8*/     UINT64       CurrentTransactionHandle;
//		/*0x17C0*/     UINT64       ActiveFrame;
//		/*0x17C8*/     UINT64       FlsData;
//		/*0x17D0*/     UINT64       PreferredLanguages;
//		/*0x17D8*/     UINT64       UserPrefLanguages;
//		/*0x17E0*/     UINT64       MergedPrefLanguages;
//		/*0x17E8*/     ULONG32      MuiImpersonation;
//		union                                               // 2 elements, 0x2 bytes (sizeof)
//		{
//			/*0x17EC*/         UINT16       CrossTebFlags;
//			/*0x17EC*/         UINT16       SpareCrossTebBits : 16;            // 0 BitPosition
//		};
//		union                                               // 2 elements, 0x2 bytes (sizeof)
//		{
//			/*0x17EE*/         UINT16       SameTebFlags;
//			struct                                          // 12 elements, 0x2 bytes (sizeof)
//			{
//				/*0x17EE*/             UINT16       SafeThunkCall : 1;             // 0 BitPosition
//				/*0x17EE*/             UINT16       InDebugPrint : 1;              // 1 BitPosition
//				/*0x17EE*/             UINT16       HasFiberData : 1;              // 2 BitPosition
//				/*0x17EE*/             UINT16       SkipThreadAttach : 1;          // 3 BitPosition
//				/*0x17EE*/             UINT16       WerInShipAssertCode : 1;       // 4 BitPosition
//				/*0x17EE*/             UINT16       RanProcessInit : 1;            // 5 BitPosition
//				/*0x17EE*/             UINT16       ClonedThread : 1;              // 6 BitPosition
//				/*0x17EE*/             UINT16       SuppressDebugMsg : 1;          // 7 BitPosition
//				/*0x17EE*/             UINT16       DisableUserStackWalk : 1;      // 8 BitPosition
//				/*0x17EE*/             UINT16       RtlExceptionAttached : 1;      // 9 BitPosition
//				/*0x17EE*/             UINT16       InitialThread : 1;             // 10 BitPosition
//				/*0x17EE*/             UINT16       SpareSameTebBits : 5;          // 11 BitPosition
//			};
//		};
//		/*0x17F0*/     UINT64       TxnScopeEnterCallback;
//		/*0x17F8*/     UINT64       TxnScopeExitCallback;
//		/*0x1800*/     UINT64       TxnScopeContext;
//		/*0x1808*/     ULONG32      LockCount;
//		/*0x180C*/     ULONG32      SpareUlong0;
//		/*0x1810*/     UINT64       ResourceRetValue;
//	}TEB64, *PTEB64;
//
//	typedef struct _TERMINATION_PORT    // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     struct _TERMINATION_PORT* Next;
//		/*0x008*/     VOID*        Port;
//	}TERMINATION_PORT, *PTERMINATION_PORT;
//
//	typedef struct _THERMAL_INFORMATION    // 10 elements, 0x58 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      ThermalStamp;
//		/*0x004*/     ULONG32      ThermalConstant1;
//		/*0x008*/     ULONG32      ThermalConstant2;
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//		/*0x010*/     UINT64       Processors;
//		/*0x018*/     ULONG32      SamplingPeriod;
//		/*0x01C*/     ULONG32      CurrentTemperature;
//		/*0x020*/     ULONG32      PassiveTripPoint;
//		/*0x024*/     ULONG32      CriticalTripPoint;
//		/*0x028*/     UINT8        ActiveTripPointCount;
//		/*0x029*/     UINT8        _PADDING1_[0x3];
//		/*0x02C*/     ULONG32      ActiveTripPoint[10];
//		/*0x054*/     UINT8        _PADDING2_[0x4];
//	}THERMAL_INFORMATION, *PTHERMAL_INFORMATION;
//
//	typedef struct _THREAD_PERFORMANCE_DATA       // 10 elements, 0x1C0 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Size;
//		/*0x002*/     UINT16       Version;
//		/*0x004*/     struct _PROCESSOR_NUMBER ProcessorNumber; // 3 elements, 0x4 bytes (sizeof)
//		/*0x008*/     ULONG32      ContextSwitches;
//		/*0x00C*/     ULONG32      HwCountersCount;
//		/*0x010*/     UINT64       UpdateCount;
//		/*0x018*/     UINT64       WaitReasonBitMap;
//		/*0x020*/     UINT64       HardwareCounters;
//		/*0x028*/     struct _COUNTER_READING CycleTime;        // 4 elements, 0x18 bytes (sizeof)
//		/*0x040*/     struct _COUNTER_READING HwCounters[16];
//	}THREAD_PERFORMANCE_DATA, *PTHREAD_PERFORMANCE_DATA;
//
//	typedef struct _TIME_FIELDS    // 8 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     INT16        Year;
//		/*0x002*/     INT16        Month;
//		/*0x004*/     INT16        Day;
//		/*0x006*/     INT16        Hour;
//		/*0x008*/     INT16        Minute;
//		/*0x00A*/     INT16        Second;
//		/*0x00C*/     INT16        Milliseconds;
//		/*0x00E*/     INT16        Weekday;
//	}TIME_FIELDS, *PTIME_FIELDS;
//
//	typedef struct _TlgProvider_t                       // 8 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     UINT32       LevelPlus1;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     UINT16*      ProviderMetadataPtr;
//		/*0x010*/     UINT64       KeywordAny;
//		/*0x018*/     UINT64       KeywordAll;
//		/*0x020*/     UINT64       RegHandle;
//		/*0x028*/     FUNCT_00A3_1F2D_EnableCallback* EnableCallback;
//		/*0x030*/     VOID*        CallbackContext;
//		/*0x038*/     FUNCT_00A3_1F3B_AnnotationFunc* AnnotationFunc;
//	}TlgProvider_t, *PTlgProvider_t;
//
//	typedef struct _TlgProviderMetadata_t // 3 elements, 0x13 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        Type;
//		/*0x001*/     struct _GUID ProviderId;          // 4 elements, 0x10 bytes (sizeof)
//		/*0x011*/     UINT16       RemainingSize;
//	}TlgProviderMetadata_t, *PTlgProviderMetadata_t;
//
//	typedef struct _TOKEN                                                        // 33 elements, 0x310 bytes (sizeof)
//	{
//		/*0x000*/     struct _TOKEN_SOURCE TokenSource;                                        // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _LUID TokenId;                                                    // 2 elements, 0x8 bytes (sizeof)
//		/*0x018*/     struct _LUID AuthenticationId;                                           // 2 elements, 0x8 bytes (sizeof)
//		/*0x020*/     struct _LUID ParentTokenId;                                              // 2 elements, 0x8 bytes (sizeof)
//		/*0x028*/     union _LARGE_INTEGER ExpirationTime;                                     // 4 elements, 0x8 bytes (sizeof)
//		/*0x030*/     struct _ERESOURCE* TokenLock;
//		/*0x038*/     struct _LUID ModifiedId;                                                 // 2 elements, 0x8 bytes (sizeof)
//		/*0x040*/     struct _SEP_TOKEN_PRIVILEGES Privileges;                                 // 3 elements, 0x18 bytes (sizeof)
//		/*0x058*/     struct _SEP_AUDIT_POLICY AuditPolicy;                                    // 2 elements, 0x1C bytes (sizeof)
//		/*0x074*/     ULONG32      SessionId;
//		/*0x078*/     ULONG32      UserAndGroupCount;
//		/*0x07C*/     ULONG32      RestrictedSidCount;
//		/*0x080*/     ULONG32      VariableLength;
//		/*0x084*/     ULONG32      DynamicCharged;
//		/*0x088*/     ULONG32      DynamicAvailable;
//		/*0x08C*/     ULONG32      DefaultOwnerIndex;
//		/*0x090*/     struct _SID_AND_ATTRIBUTES* UserAndGroups;
//		/*0x098*/     struct _SID_AND_ATTRIBUTES* RestrictedSids;
//		/*0x0A0*/     VOID*        PrimaryGroup;
//		/*0x0A8*/     ULONG32*     DynamicPart;
//		/*0x0B0*/     struct _ACL* DefaultDacl;
//		/*0x0B8*/     enum _TOKEN_TYPE TokenType;
//		/*0x0BC*/     enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
//		/*0x0C0*/     ULONG32      TokenFlags;
//		/*0x0C4*/     UINT8        TokenInUse;
//		/*0x0C5*/     UINT8        _PADDING0_[0x3];
//		/*0x0C8*/     ULONG32      IntegrityLevelIndex;
//		/*0x0CC*/     ULONG32      MandatoryPolicy;
//		/*0x0D0*/     struct _SEP_LOGON_SESSION_REFERENCES* LogonSession;
//		/*0x0D8*/     struct _LUID OriginatingLogonSession;                                    // 2 elements, 0x8 bytes (sizeof)
//		/*0x0E0*/     struct _SID_AND_ATTRIBUTES_HASH SidHash;                                 // 3 elements, 0x110 bytes (sizeof)
//		/*0x1F0*/     struct _SID_AND_ATTRIBUTES_HASH RestrictedSidHash;                       // 3 elements, 0x110 bytes (sizeof)
//		/*0x300*/     struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pSecurityAttributes;
//		/*0x308*/     UINT64       VariablePart;
//	}TOKEN, *PTOKEN;
//
//	typedef struct _TOKEN_MANDATORY_POLICY // 1 elements, 0x4 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Policy;
//	}TOKEN_MANDATORY_POLICY, *PTOKEN_MANDATORY_POLICY;
//
//	typedef struct _TOKEN_ACCESS_INFORMATION                   // 8 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     struct _SID_AND_ATTRIBUTES_HASH* SidHash;
//		/*0x008*/     struct _SID_AND_ATTRIBUTES_HASH* RestrictedSidHash;
//		/*0x010*/     struct _TOKEN_PRIVILEGES* Privileges;
//		/*0x018*/     struct _LUID AuthenticationId;                         // 2 elements, 0x8 bytes (sizeof)
//		/*0x020*/     enum _TOKEN_TYPE TokenType;
//		/*0x024*/     enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
//		/*0x028*/     struct _TOKEN_MANDATORY_POLICY MandatoryPolicy;        // 1 elements, 0x4 bytes (sizeof)
//		/*0x02C*/     ULONG32      Flags;
//	}TOKEN_ACCESS_INFORMATION, *PTOKEN_ACCESS_INFORMATION;
//
//	typedef struct _TOKEN_PRIVILEGES               // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      PrivilegeCount;
//		/*0x004*/     struct _LUID_AND_ATTRIBUTES Privileges[1];
//	}TOKEN_PRIVILEGES, *PTOKEN_PRIVILEGES;
//
//	typedef struct _TP_CALLBACK_ENVIRON_V3                                                                          // 10 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Version;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     struct _TP_POOL* Pool;
//		/*0x010*/     struct _TP_CLEANUP_GROUP* CleanupGroup;
//		/*0x018*/     FUNCT_00A3_00A2_CleanupGroupCancelCallback_DeRefSecurityDescriptor_PostRoutine* CleanupGroupCancelCallback;
//		/*0x020*/     VOID*        RaceDll;
//		/*0x028*/     struct _ACTIVATION_CONTEXT* ActivationContext;
//		/*0x030*/     FUNCT_00A3_00AA_FinalizationCallback* FinalizationCallback;
//		union                                                                                                       // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x038*/         ULONG32      Flags;
//			struct                                                                                                  // 3 elements, 0x4 bytes (sizeof)
//			{
//				/*0x038*/             ULONG32      LongFunction : 1;                                                                      // 0 BitPosition
//				/*0x038*/             ULONG32      Persistent : 1;                                                                        // 1 BitPosition
//				/*0x038*/             ULONG32      Private : 30;                                                                          // 2 BitPosition
//			}s;
//		}u;
//		/*0x03C*/     enum _TP_CALLBACK_PRIORITY CallbackPriority;
//		/*0x040*/     ULONG32      Size;
//		/*0x044*/     UINT8        _PADDING1_[0x4];
//	}TP_CALLBACK_ENVIRON_V3, *PTP_CALLBACK_ENVIRON_V3;
//
//	typedef struct _TP_CALLBACK_INSTANCE // 0 elements, 0x0 bytes (sizeof)
//	{
//	}TP_CALLBACK_INSTANCE, *PTP_CALLBACK_INSTANCE;
//
//	typedef struct _TP_CLEANUP_GROUP // 0 elements, 0x0 bytes (sizeof)
//	{
//	}TP_CLEANUP_GROUP, *PTP_CLEANUP_GROUP;
//
//	typedef struct _TP_DIRECT               // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     FUNCT_00A3_00DF_Callback* Callback;
//		/*0x008*/     ULONG32      NumaNode;
//		/*0x00C*/     UINT8        IdealProcessor;
//		/*0x00D*/     UINT8        _PADDING0_[0x3];
//	}TP_DIRECT, *PTP_DIRECT;
//
//	typedef struct _TP_NBQ_GUARD       // 2 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY GuardLinks; // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     VOID*        Guards[2];
//	}TP_NBQ_GUARD, *PTP_NBQ_GUARD;
//
//	typedef struct _TP_POOL // 0 elements, 0x0 bytes (sizeof)
//	{
//	}TP_POOL, *PTP_POOL;
//
//	typedef struct _TP_TASK                   // 5 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     struct _TP_TASK_CALLBACKS* Callbacks;
//		/*0x008*/     ULONG32      NumaNode;
//		/*0x00C*/     UINT8        IdealProcessor;
//		/*0x00D*/     UINT8        _PADDING0_[0x3];
//		/*0x010*/     struct _TP_NBQ_GUARD PostGuard;       // 2 elements, 0x20 bytes (sizeof)
//		/*0x030*/     VOID*        NBQNode;
//	}TP_TASK, *PTP_TASK;
//
//	typedef struct _TP_TASK_CALLBACKS                     // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     FUNCT_00A3_00C7_ExecuteCallback* ExecuteCallback;
//		/*0x008*/     FUNCT_00A3_00CC_Unposted* Unposted;
//	}TP_TASK_CALLBACKS, *PTP_TASK_CALLBACKS;
//
//	typedef struct _TRACE_ENABLE_CONTEXT // 4 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       LoggerId;
//		/*0x002*/     UINT8        Level;
//		/*0x003*/     UINT8        InternalFlag;
//		/*0x004*/     ULONG32      EnableFlags;
//	}TRACE_ENABLE_CONTEXT, *PTRACE_ENABLE_CONTEXT;
//
//	typedef struct _TRACE_ENABLE_CONTEXT_EX // 6 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       LoggerId;
//		/*0x002*/     UINT8        Level;
//		/*0x003*/     UINT8        InternalFlag;
//		/*0x004*/     ULONG32      EnableFlags;
//		/*0x008*/     ULONG32      EnableFlagsHigh;
//		/*0x00C*/     ULONG32      Reserved;
//	}TRACE_ENABLE_CONTEXT_EX, *PTRACE_ENABLE_CONTEXT_EX;
//
//	typedef struct _TraceLoggingMetadata_t // 5 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT32       Signature;
//		/*0x004*/     UINT16       Size;
//		/*0x006*/     UINT8        Version;
//		/*0x007*/     UINT8        Flags;
//		/*0x008*/     UINT64       Magic;
//	}TraceLoggingMetadata_t, *PTraceLoggingMetadata_t;
//
//	typedef struct _TXN_PARAMETER_BLOCK // 3 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT16       Length;
//		/*0x002*/     UINT16       TxFsContext;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     VOID*        TransactionObject;
//	}TXN_PARAMETER_BLOCK, *PTXN_PARAMETER_BLOCK;
//
//	typedef struct _UMS_CONTROL_BLOCK                                // 23 elements, 0x98 bytes (sizeof)
//	{
//		/*0x000*/     struct _RTL_UMS_CONTEXT* UmsContext;
//		/*0x008*/     struct _SINGLE_LIST_ENTRY* CompletionListEntry;
//		/*0x010*/     struct _KEVENT* CompletionListEvent;
//		/*0x018*/     ULONG32      ServiceSequenceNumber;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//		union                                                        // 2 elements, 0x6C bytes (sizeof)
//		{
//			struct                                                   // 6 elements, 0x6C bytes (sizeof)
//			{
//				/*0x020*/             struct _KQUEUE UmsQueue;                             // 5 elements, 0x40 bytes (sizeof)
//				/*0x060*/             struct _LIST_ENTRY QueueEntry;                       // 2 elements, 0x10 bytes (sizeof)
//				/*0x070*/             struct _RTL_UMS_CONTEXT* YieldingUmsContext;
//				/*0x078*/             VOID*        YieldingParam;
//				/*0x080*/             VOID*        UmsTeb;
//				union                                                // 2 elements, 0x4 bytes (sizeof)
//				{
//					/*0x088*/                 ULONG32      PrimaryFlags;
//					/*0x088*/                 ULONG32      UmsContextHeaderReady : 1;          // 0 BitPosition
//				};
//			};
//			struct                                                   // 6 elements, 0x6C bytes (sizeof)
//			{
//				/*0x020*/             struct _KQUEUE* UmsAssociatedQueue;
//				/*0x028*/             struct _LIST_ENTRY* UmsQueueListEntry;
//				/*0x030*/             struct _KUMS_CONTEXT_HEADER* UmsContextHeader;
//				/*0x038*/             struct _KGATE UmsWaitGate;                           // 1 elements, 0x18 bytes (sizeof)
//				/*0x050*/             VOID*        StagingArea;
//				union                                                // 2 elements, 0x4 bytes (sizeof)
//				{
//					/*0x058*/                 LONG32       Flags;
//					struct                                           // 5 elements, 0x4 bytes (sizeof)
//					{
//						/*0x058*/                     ULONG32      UmsForceQueueTermination : 1;   // 0 BitPosition
//						/*0x058*/                     ULONG32      UmsAssociatedQueueUsed : 1;     // 1 BitPosition
//						/*0x058*/                     ULONG32      UmsThreadParked : 1;            // 2 BitPosition
//						/*0x058*/                     ULONG32      UmsPrimaryDeliveredContext : 1; // 3 BitPosition
//						/*0x058*/                     ULONG32      UmsPerformingSingleStep : 1;    // 4 BitPosition
//					};
//				};
//			};
//		};
//		/*0x090*/     UINT16       TebSelector;
//		/*0x092*/     UINT8        _PADDING1_[0x6];
//	}UMS_CONTROL_BLOCK, *PUMS_CONTROL_BLOCK;
//
//	typedef struct _UNEXPECTED_INTERRUPT // 5 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT8        PushImmOp;
//		/*0x001*/     ULONG32      PushImm;
//		/*0x005*/     UINT8        PushRbp;
//		/*0x006*/     UINT8        JmpOp;
//		/*0x007*/     LONG32       JmpOffset;
//		/*0x00B*/     UINT8        _PADDING0_[0x5];
//	}UNEXPECTED_INTERRUPT, *PUNEXPECTED_INTERRUPT;
//
//	typedef struct _VACB                          // 5 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        BaseAddress;
//		/*0x008*/     struct _SHARED_CACHE_MAP* SharedCacheMap;
//		union                                     // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x010*/         union _LARGE_INTEGER FileOffset;      // 4 elements, 0x8 bytes (sizeof)
//			/*0x010*/         UINT16       ActiveCount;
//		}Overlay;
//		/*0x018*/     struct _LIST_ENTRY Links;                 // 2 elements, 0x10 bytes (sizeof)
//		/*0x028*/     struct _VACB_ARRAY_HEADER* ArrayHead;
//	}VACB, *PVACB;
//
//	typedef struct _VACB_ARRAY_HEADER    // 4 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      VacbArrayIndex;
//		/*0x004*/     ULONG32      MappingCount;
//		/*0x008*/     ULONG32      HighestMappedIndex;
//		/*0x00C*/     ULONG32      Reserved;
//	}VACB_ARRAY_HEADER, *PVACB_ARRAY_HEADER;
//
//	typedef struct _VACB_LEVEL_ALLOCATION_LIST  // 3 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY VacbLevelList;       // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     VOID*        VacbLevelWithBcbListHeads;
//		/*0x018*/     ULONG32      VacbLevelsAllocated;
//		/*0x01C*/     UINT8        _PADDING0_[0x4];
//	}VACB_LEVEL_ALLOCATION_LIST, *PVACB_LEVEL_ALLOCATION_LIST;
//
//	typedef struct _VACB_LEVEL_REFERENCE // 2 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       Reference;
//		/*0x004*/     LONG32       SpecialReference;
//	}VACB_LEVEL_REFERENCE, *PVACB_LEVEL_REFERENCE;
//
//	typedef struct _VERIFIER_SHARED_EXPORT_THUNK // 0 elements, 0x0 bytes (sizeof)
//	{
//	}VERIFIER_SHARED_EXPORT_THUNK, *PVERIFIER_SHARED_EXPORT_THUNK;
//
//	typedef struct _VF_ADDRESS_RANGE // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     UINT8*       Start;
//		/*0x008*/     UINT8*       End;
//	}VF_ADDRESS_RANGE, *PVF_ADDRESS_RANGE;
//
//	typedef struct _VF_AVL_TABLE                // 2 elements, 0x70 bytes (sizeof)
//	{
//		/*0x000*/     struct _RTL_AVL_TABLE RtlTable;         // 11 elements, 0x68 bytes (sizeof)
//		/*0x068*/     struct _VF_AVL_TREE_NODE* ReservedNode;
//	}VF_AVL_TABLE, *PVF_AVL_TABLE;
//
//	typedef struct _VF_AVL_TREE        // 7 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     LONG32       Lock;
//		/*0x004*/     UINT8        _PADDING0_[0x4];
//		/*0x008*/     VOID*        NodeToFree;
//		/*0x010*/     UINT64       NodeRangeSize;
//		/*0x018*/     UINT64       NodeCount;
//		/*0x020*/     struct _VF_AVL_TABLE* Tables;
//		/*0x028*/     ULONG32      TablesNo;
//		union                          // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x02C*/         ULONG32      NodeSize;
//			/*0x02C*/         ULONG32      UseLookaside;
//		}u1;
//	}VF_AVL_TREE, *PVF_AVL_TREE;
//
//	typedef struct _VF_AVL_TREE_NODE // 2 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        p;
//		/*0x008*/     UINT64       RangeSize;
//	}VF_AVL_TREE_NODE, *PVF_AVL_TREE_NODE;
//
//	typedef struct _VF_KE_CRITICAL_REGION_TRACE // 2 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     struct _ETHREAD* Thread;
//		/*0x008*/     VOID*        StackTrace[7];
//	}VF_KE_CRITICAL_REGION_TRACE, *PVF_KE_CRITICAL_REGION_TRACE;
//
//	typedef struct _VF_POOL_TRACE    // 4 elements, 0x80 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        Address;
//		/*0x008*/     UINT64       Size;
//		/*0x010*/     struct _ETHREAD* Thread;
//		/*0x018*/     VOID*        StackTrace[13];
//	}VF_POOL_TRACE, *PVF_POOL_TRACE;
//
//	typedef struct _VF_SUSPECT_DRIVER_ENTRY // 4 elements, 0x28 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY Links;           // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     ULONG32      Loads;
//		/*0x014*/     ULONG32      Unloads;
//		/*0x018*/     struct _UNICODE_STRING BaseName;    // 3 elements, 0x10 bytes (sizeof)
//	}VF_SUSPECT_DRIVER_ENTRY, *PVF_SUSPECT_DRIVER_ENTRY;
//
//	typedef struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS                          // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _VERIFIER_SHARED_EXPORT_THUNK* SharedExportThunks;
//		/*0x008*/     struct _VERIFIER_SHARED_EXPORT_THUNK* PoolSharedExportThunks;
//		/*0x010*/     struct _VERIFIER_SHARED_EXPORT_THUNK* OrderDependentSharedExportThunks;
//	}VF_TARGET_ALL_SHARED_EXPORT_THUNKS, *PVF_TARGET_ALL_SHARED_EXPORT_THUNKS;
//
//	typedef struct _VF_TARGET_DRIVER                                          // 3 elements, 0x30 bytes (sizeof)
//	{
//		/*0x000*/     struct _VF_AVL_TREE_NODE TreeNode;                                    // 2 elements, 0x10 bytes (sizeof)
//		union                                                                 // 2 elements, 0x18 bytes (sizeof)
//		{
//			/*0x010*/         struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS AllSharedExportThunks; // 3 elements, 0x18 bytes (sizeof)
//			struct                                                            // 2 elements, 0x4 bytes (sizeof)
//			{
//				/*0x010*/             ULONG32      SnapSharedExportsFailed : 1;                     // 0 BitPosition
//				/*0x010*/             ULONG32      Spare : 31;                                      // 1 BitPosition
//			}Flags;
//		}u1;
//		/*0x028*/     struct _VF_TARGET_VERIFIED_DRIVER_DATA* VerifiedData;
//	}VF_TARGET_DRIVER, *PVF_TARGET_DRIVER;
//
//	typedef struct _VF_TARGET_VERIFIED_DRIVER_DATA           // 32 elements, 0x100 bytes (sizeof)
//	{
//		/*0x000*/     struct _VF_SUSPECT_DRIVER_ENTRY* SuspectDriverEntry;
//		/*0x008*/     VOID*        WMICallback;
//		/*0x010*/     struct _LIST_ENTRY EtwHandlesListHead;               // 2 elements, 0x10 bytes (sizeof)
//		union                                                // 2 elements, 0x4 bytes (sizeof)
//		{
//			struct                                           // 2 elements, 0x4 bytes (sizeof)
//			{
//				/*0x020*/             ULONG32      MissedEtwRegistration : 1;      // 0 BitPosition
//				/*0x020*/             ULONG32      Spare : 31;                     // 1 BitPosition
//			}Flags;
//			/*0x020*/         ULONG32      Whole;
//		}u1;
//		/*0x028*/     UINT64       Signature;
//		/*0x030*/     union _SLIST_HEADER PoolPageHeaders;                 // 5 elements, 0x10 bytes (sizeof)
//		/*0x040*/     union _SLIST_HEADER PoolTrackers;                    // 5 elements, 0x10 bytes (sizeof)
//		/*0x050*/     ULONG32      CurrentPagedPoolAllocations;
//		/*0x054*/     ULONG32      CurrentNonPagedPoolAllocations;
//		/*0x058*/     ULONG32      PeakPagedPoolAllocations;
//		/*0x05C*/     ULONG32      PeakNonPagedPoolAllocations;
//		/*0x060*/     UINT64       PagedBytes;
//		/*0x068*/     UINT64       NonPagedBytes;
//		/*0x070*/     UINT64       PeakPagedBytes;
//		/*0x078*/     UINT64       PeakNonPagedBytes;
//		/*0x080*/     ULONG32      RaiseIrqls;
//		/*0x084*/     ULONG32      AcquireSpinLocks;
//		/*0x088*/     ULONG32      SynchronizeExecutions;
//		/*0x08C*/     ULONG32      AllocationsWithNoTag;
//		/*0x090*/     ULONG32      AllocationsFailed;
//		/*0x094*/     ULONG32      AllocationsFailedDeliberately;
//		/*0x098*/     UINT64       LockedBytes;
//		/*0x0A0*/     UINT64       PeakLockedBytes;
//		/*0x0A8*/     UINT64       MappedLockedBytes;
//		/*0x0B0*/     UINT64       PeakMappedLockedBytes;
//		/*0x0B8*/     UINT64       MappedIoSpaceBytes;
//		/*0x0C0*/     UINT64       PeakMappedIoSpaceBytes;
//		/*0x0C8*/     UINT64       PagesForMdlBytes;
//		/*0x0D0*/     UINT64       PeakPagesForMdlBytes;
//		/*0x0D8*/     UINT64       ContiguousMemoryBytes;
//		/*0x0E0*/     UINT64       PeakContiguousMemoryBytes;
//		/*0x0E8*/     struct _LIST_ENTRY ContiguousMemoryListHead;         // 2 elements, 0x10 bytes (sizeof)
//		/*0x0F8*/     UINT8        _PADDING0_[0x8];
//	}VF_TARGET_VERIFIED_DRIVER_DATA, *PVF_TARGET_VERIFIED_DRIVER_DATA;
//
//	typedef struct _VF_TRACKER     // 4 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      TrackerFlags;
//		/*0x004*/     ULONG32      TrackerSize;
//		/*0x008*/     ULONG32      TrackerIndex;
//		/*0x00C*/     ULONG32      TraceDepth;
//	}VF_TRACKER, *PVF_TRACKER;
//
//	typedef struct _VF_TRACKER_STAMP  // 5 elements, 0x10 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        Thread;
//		/*0x008*/     UINT8        Flags : 8;       // 0 BitPosition
//		/*0x009*/     UINT8        OldIrql : 8;     // 0 BitPosition
//		/*0x00A*/     UINT8        NewIrql : 8;     // 0 BitPosition
//		/*0x00B*/     UINT8        Processor : 8;   // 0 BitPosition
//		/*0x00C*/     UINT8        _PADDING0_[0x4];
//	}VF_TRACKER_STAMP, *PVF_TRACKER_STAMP;
//
//	typedef struct _VF_WATCHDOG_IRP        // 6 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY ListEntry;      // 2 elements, 0x10 bytes (sizeof)
//		/*0x010*/     struct _IRP* Irp;
//		/*0x018*/     ULONG32      DueTickCount;
//		/*0x01C*/     UINT8        Inserted;
//		/*0x01D*/     CHAR         TrackedStackLocation;
//		/*0x01E*/     UINT16       CancelTimeoutTicks;
//	}VF_WATCHDOG_IRP, *PVF_WATCHDOG_IRP;
//
//	typedef struct _VI_DEADLOCK_GLOBALS                      // 28 elements, 0x8168 bytes (sizeof)
//	{
//		/*0x000*/      INT64        TimeAcquire;
//		/*0x008*/      INT64        TimeRelease;
//		/*0x010*/      struct _LIST_ENTRY* ResourceDatabase;
//		/*0x018*/      UINT64       ResourceDatabaseCount;
//		/*0x020*/      struct _VF_ADDRESS_RANGE ResourceAddressRange[1023];
//		/*0x4010*/     struct _LIST_ENTRY* ThreadDatabase;
//		/*0x4018*/     UINT64       ThreadDatabaseCount;
//		/*0x4020*/     struct _VF_ADDRESS_RANGE ThreadAddressRange[1023];
//		/*0x8010*/     ULONG32      AllocationFailures;
//		/*0x8014*/     ULONG32      NodesTrimmedBasedOnAge;
//		/*0x8018*/     ULONG32      NodesTrimmedBasedOnCount;
//		/*0x801C*/     ULONG32      NodesSearched;
//		/*0x8020*/     ULONG32      MaxNodesSearched;
//		/*0x8024*/     ULONG32      SequenceNumber;
//		/*0x8028*/     ULONG32      RecursionDepthLimit;
//		/*0x802C*/     ULONG32      SearchedNodesLimit;
//		/*0x8030*/     ULONG32      DepthLimitHits;
//		/*0x8034*/     ULONG32      SearchLimitHits;
//		/*0x8038*/     ULONG32      ABC_ACB_Skipped;
//		/*0x803C*/     ULONG32      OutOfOrderReleases;
//		/*0x8040*/     ULONG32      NodesReleasedOutOfOrder;
//		/*0x8044*/     ULONG32      TotalReleases;
//		/*0x8048*/     ULONG32      RootNodesDeleted;
//		/*0x804C*/     ULONG32      ForgetHistoryCounter;
//		/*0x8050*/     VOID*        Instigator;
//		/*0x8058*/     ULONG32      NumberOfParticipants;
//		/*0x805C*/     UINT8        _PADDING0_[0x4];
//		/*0x8060*/     struct _VI_DEADLOCK_NODE* Participant[32];
//		/*0x8160*/     LONG32       ChildrenCountWatermark;
//		/*0x8164*/     UINT8        _PADDING1_[0x4];
//	}VI_DEADLOCK_GLOBALS, *PVI_DEADLOCK_GLOBALS;
//
//	typedef struct _VI_DEADLOCK_NODE                 // 11 elements, 0xD0 bytes (sizeof)
//	{
//		/*0x000*/     struct _VI_DEADLOCK_NODE* Parent;
//		/*0x008*/     struct _LIST_ENTRY ChildrenList;             // 2 elements, 0x10 bytes (sizeof)
//		/*0x018*/     struct _LIST_ENTRY SiblingsList;             // 2 elements, 0x10 bytes (sizeof)
//		union                                        // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x028*/         struct _LIST_ENTRY ResourceList;         // 2 elements, 0x10 bytes (sizeof)
//			/*0x028*/         struct _LIST_ENTRY FreeListEntry;        // 2 elements, 0x10 bytes (sizeof)
//		};
//		/*0x038*/     struct _VI_DEADLOCK_RESOURCE* Root;
//		/*0x040*/     struct _VI_DEADLOCK_THREAD* ThreadEntry;
//		union                                        // 5 elements, 0x4 bytes (sizeof)
//		{
//			struct                                   // 4 elements, 0x4 bytes (sizeof)
//			{
//				/*0x048*/             ULONG32      Active : 1;             // 0 BitPosition
//				/*0x048*/             ULONG32      OnlyTryAcquireUsed : 1; // 1 BitPosition
//				/*0x048*/             ULONG32      ReleasedOutOfOrder : 1; // 2 BitPosition
//				/*0x048*/             ULONG32      SequenceNumber : 29;    // 3 BitPosition
//			};
//			/*0x048*/         ULONG32      Whole;
//		}u1;
//		/*0x04C*/     LONG32       ChildrenCount;
//		/*0x050*/     VOID*        StackTrace[8];
//		/*0x090*/     VOID*        ParentStackTrace[8];
//	}VI_DEADLOCK_NODE, *PVI_DEADLOCK_NODE;
//
//	typedef struct _VI_DEADLOCK_RESOURCE         // 11 elements, 0xF8 bytes (sizeof)
//	{
//		/*0x000*/     enum _VI_DEADLOCK_RESOURCE_TYPE Type;
//		struct                                   // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x004*/         ULONG32      NodeCount : 16;         // 0 BitPosition
//			/*0x004*/         ULONG32      RecursionCount : 16;    // 16 BitPosition
//		};
//		/*0x008*/     VOID*        ResourceAddress;
//		/*0x010*/     struct _VI_DEADLOCK_THREAD* ThreadOwner;
//		/*0x018*/     struct _LIST_ENTRY ResourceList;         // 2 elements, 0x10 bytes (sizeof)
//		union                                    // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x028*/         struct _LIST_ENTRY HashChainList;    // 2 elements, 0x10 bytes (sizeof)
//			/*0x028*/         struct _LIST_ENTRY FreeListEntry;    // 2 elements, 0x10 bytes (sizeof)
//		};
//		/*0x038*/     VOID*        StackTrace[8];
//		/*0x078*/     VOID*        LastAcquireTrace[8];
//		/*0x0B8*/     VOID*        LastReleaseTrace[8];
//	}VI_DEADLOCK_RESOURCE, *PVI_DEADLOCK_RESOURCE;
//
//	typedef struct _VI_DEADLOCK_THREAD              // 8 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     struct _KTHREAD* Thread;
//		/*0x008*/     struct _VI_DEADLOCK_NODE* CurrentSpinNode;
//		/*0x010*/     struct _VI_DEADLOCK_NODE* CurrentOtherNode;
//		union                                       // 2 elements, 0x10 bytes (sizeof)
//		{
//			/*0x018*/         struct _LIST_ENTRY ListEntry;           // 2 elements, 0x10 bytes (sizeof)
//			/*0x018*/         struct _LIST_ENTRY FreeListEntry;       // 2 elements, 0x10 bytes (sizeof)
//		};
//		/*0x028*/     ULONG32      NodeCount;
//		/*0x02C*/     ULONG32      PagingCount;
//		/*0x030*/     UINT8        ThreadUsesEresources;
//		/*0x031*/     UINT8        _PADDING0_[0x7];
//	}VI_DEADLOCK_THREAD, *PVI_DEADLOCK_THREAD;
//
//	typedef struct _VI_FAULT_TRACE  // 2 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     struct _ETHREAD* Thread;
//		/*0x008*/     VOID*        StackTrace[8];
//	}VI_FAULT_TRACE, *PVI_FAULT_TRACE;
//
//	typedef struct _VI_POOL_PAGE_HEADER // 3 elements, 0x18 bytes (sizeof)
//	{
//		/*0x000*/     struct _SLIST_ENTRY* NextPage;
//		/*0x008*/     VOID*        VerifierEntry;
//		/*0x010*/     UINT64       Signature;
//	}VI_POOL_PAGE_HEADER, *PVI_POOL_PAGE_HEADER;
//
//	typedef struct _VI_POOL_ENTRY_INUSE // 4 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        VirtualAddress;
//		/*0x008*/     VOID*        CallingAddress;
//		/*0x010*/     UINT64       NumberOfBytes;
//		/*0x018*/     UINT64       Tag;
//	}VI_POOL_ENTRY_INUSE, *PVI_POOL_ENTRY_INUSE;
//
//	typedef struct _VI_POOL_ENTRY                   // 3 elements, 0x20 bytes (sizeof)
//	{
//		union                                       // 3 elements, 0x20 bytes (sizeof)
//		{
//			/*0x000*/         struct _VI_POOL_PAGE_HEADER PageHeader; // 3 elements, 0x18 bytes (sizeof)
//			/*0x000*/         struct _VI_POOL_ENTRY_INUSE InUse;      // 4 elements, 0x20 bytes (sizeof)
//			/*0x000*/         struct _SLIST_ENTRY* NextFree;
//		};
//	}VI_POOL_ENTRY, *PVI_POOL_ENTRY;
//
//	typedef struct _VI_TRACK_IRQL   // 6 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     VOID*        Thread;
//		/*0x008*/     UINT8        OldIrql;
//		/*0x009*/     UINT8        NewIrql;
//		/*0x00A*/     UINT16       Processor;
//		/*0x00C*/     ULONG32      TickCount;
//		/*0x010*/     VOID*        StackTrace[5];
//	}VI_TRACK_IRQL, *PVI_TRACK_IRQL;
//
//	typedef struct _VI_VERIFIER_ISSUE // 3 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       IssueType;
//		/*0x008*/     VOID*        Address;
//		/*0x010*/     UINT64       Parameters[2];
//	}VI_VERIFIER_ISSUE, *PVI_VERIFIER_ISSUE;
//
//	typedef struct _VIRTUAL_EFI_RUNTIME_SERVICES // 14 elements, 0x70 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       GetTime;
//		/*0x008*/     UINT64       SetTime;
//		/*0x010*/     UINT64       GetWakeupTime;
//		/*0x018*/     UINT64       SetWakeupTime;
//		/*0x020*/     UINT64       SetVirtualAddressMap;
//		/*0x028*/     UINT64       ConvertPointer;
//		/*0x030*/     UINT64       GetVariable;
//		/*0x038*/     UINT64       GetNextVariableName;
//		/*0x040*/     UINT64       SetVariable;
//		/*0x048*/     UINT64       GetNextHighMonotonicCount;
//		/*0x050*/     UINT64       ResetSystem;
//		/*0x058*/     UINT64       UpdateCapsule;
//		/*0x060*/     UINT64       QueryCapsuleCapabilities;
//		/*0x068*/     UINT64       QueryVariableInfo;
//	}VIRTUAL_EFI_RUNTIME_SERVICES, *PVIRTUAL_EFI_RUNTIME_SERVICES;
//
//	typedef struct _VOLUME_CACHE_MAP            // 8 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     INT16        NodeTypeCode;
//		/*0x002*/     INT16        NodeByteCode;
//		/*0x004*/     ULONG32      UseCount;
//		/*0x008*/     struct _DEVICE_OBJECT* DeviceObject;
//		/*0x010*/     struct _LIST_ENTRY VolumeCacheMapLinks; // 2 elements, 0x10 bytes (sizeof)
//		/*0x020*/     ULONG32      Flags;
//		/*0x024*/     UINT8        _PADDING0_[0x4];
//		/*0x028*/     UINT64       DirtyPages;
//		/*0x030*/     ULONG32      PagesQueuedToDisk;
//		/*0x034*/     UINT8        _PADDING1_[0x4];
//	}VOLUME_CACHE_MAP, *PVOLUME_CACHE_MAP;
//
//	typedef struct _VPB                      // 9 elements, 0x60 bytes (sizeof)
//	{
//		/*0x000*/     INT16        Type;
//		/*0x002*/     INT16        Size;
//		/*0x004*/     UINT16       Flags;
//		/*0x006*/     UINT16       VolumeLabelLength;
//		/*0x008*/     struct _DEVICE_OBJECT* DeviceObject;
//		/*0x010*/     struct _DEVICE_OBJECT* RealDevice;
//		/*0x018*/     ULONG32      SerialNumber;
//		/*0x01C*/     ULONG32      ReferenceCount;
//		/*0x020*/     WCHAR        VolumeLabel[32];
//	}VPB, *PVPB;
//
//	typedef union _WHEA_ERROR_PACKET_FLAGS            // 8 elements, 0x4 bytes (sizeof)
//	{
//		struct                                        // 7 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      PreviousError : 1;           // 0 BitPosition
//			/*0x000*/         ULONG32      Reserved1 : 1;               // 1 BitPosition
//			/*0x000*/         ULONG32      HypervisorError : 1;         // 2 BitPosition
//			/*0x000*/         ULONG32      Simulated : 1;               // 3 BitPosition
//			/*0x000*/         ULONG32      PlatformPfaControl : 1;      // 4 BitPosition
//			/*0x000*/         ULONG32      PlatformDirectedOffline : 1; // 5 BitPosition
//			/*0x000*/         ULONG32      Reserved2 : 26;              // 6 BitPosition
//		};
//		/*0x000*/     ULONG32      AsULONG;
//	}WHEA_ERROR_PACKET_FLAGS, *PWHEA_ERROR_PACKET_FLAGS;
//
//	typedef struct _WHEA_ERROR_PACKET_V2                // 16 elements, 0x50 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Signature;
//		/*0x004*/     ULONG32      Version;
//		/*0x008*/     ULONG32      Length;
//		/*0x00C*/     union _WHEA_ERROR_PACKET_FLAGS Flags;           // 8 elements, 0x4 bytes (sizeof)
//		/*0x010*/     enum _WHEA_ERROR_TYPE ErrorType;
//		/*0x014*/     enum _WHEA_ERROR_SEVERITY ErrorSeverity;
//		/*0x018*/     ULONG32      ErrorSourceId;
//		/*0x01C*/     enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
//		/*0x020*/     struct _GUID NotifyType;                        // 4 elements, 0x10 bytes (sizeof)
//		/*0x030*/     UINT64       Context;
//		/*0x038*/     enum _WHEA_ERROR_PACKET_DATA_FORMAT DataFormat;
//		/*0x03C*/     ULONG32      Reserved1;
//		/*0x040*/     ULONG32      DataOffset;
//		/*0x044*/     ULONG32      DataLength;
//		/*0x048*/     ULONG32      PshedDataOffset;
//		/*0x04C*/     ULONG32      PshedDataLength;
//	}WHEA_ERROR_PACKET_V2, *PWHEA_ERROR_PACKET_V2;
//
//	typedef union _WHEA_REVISION        // 3 elements, 0x2 bytes (sizeof)
//	{
//		struct                          // 2 elements, 0x2 bytes (sizeof)
//		{
//			/*0x000*/         UINT8        MinorRevision;
//			/*0x001*/         UINT8        MajorRevision;
//		};
//		/*0x000*/     UINT16       AsUSHORT;
//	}WHEA_REVISION, *PWHEA_REVISION;
//
//	typedef union _WHEA_ERROR_RECORD_HEADER_VALIDBITS // 5 elements, 0x4 bytes (sizeof)
//	{
//		struct                                        // 4 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      PlatformId : 1;              // 0 BitPosition
//			/*0x000*/         ULONG32      Timestamp : 1;               // 1 BitPosition
//			/*0x000*/         ULONG32      PartitionId : 1;             // 2 BitPosition
//			/*0x000*/         ULONG32      Reserved : 29;               // 3 BitPosition
//		};
//		/*0x000*/     ULONG32      AsULONG;
//	}WHEA_ERROR_RECORD_HEADER_VALIDBITS, *PWHEA_ERROR_RECORD_HEADER_VALIDBITS;
//
//	typedef union _WHEA_TIMESTAMP             // 10 elements, 0x8 bytes (sizeof)
//	{
//		struct                                // 9 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         UINT64       Seconds : 8;         // 0 BitPosition
//			/*0x000*/         UINT64       Minutes : 8;         // 8 BitPosition
//			/*0x000*/         UINT64       Hours : 8;           // 16 BitPosition
//			/*0x000*/         UINT64       Precise : 1;         // 24 BitPosition
//			/*0x000*/         UINT64       Reserved : 7;        // 25 BitPosition
//			/*0x000*/         UINT64       Day : 8;             // 32 BitPosition
//			/*0x000*/         UINT64       Month : 8;           // 40 BitPosition
//			/*0x000*/         UINT64       Year : 8;            // 48 BitPosition
//			/*0x000*/         UINT64       Century : 8;         // 56 BitPosition
//		};
//		/*0x000*/     union _LARGE_INTEGER AsLARGE_INTEGER; // 4 elements, 0x8 bytes (sizeof)
//	}WHEA_TIMESTAMP, *PWHEA_TIMESTAMP;
//
//	typedef union _WHEA_ERROR_RECORD_HEADER_FLAGS // 5 elements, 0x4 bytes (sizeof)
//	{
//		struct                                    // 4 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      Recovered : 1;           // 0 BitPosition
//			/*0x000*/         ULONG32      PreviousError : 1;       // 1 BitPosition
//			/*0x000*/         ULONG32      Simulated : 1;           // 2 BitPosition
//			/*0x000*/         ULONG32      Reserved : 29;           // 3 BitPosition
//		};
//		/*0x000*/     ULONG32      AsULONG;
//	}WHEA_ERROR_RECORD_HEADER_FLAGS, *PWHEA_ERROR_RECORD_HEADER_FLAGS;
//
//	typedef union _WHEA_PERSISTENCE_INFO  // 7 elements, 0x8 bytes (sizeof)
//	{
//		struct                            // 6 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         UINT64       Signature : 16;  // 0 BitPosition
//			/*0x000*/         UINT64       Length : 24;     // 16 BitPosition
//			/*0x000*/         UINT64       Identifier : 16; // 40 BitPosition
//			/*0x000*/         UINT64       Attributes : 2;  // 56 BitPosition
//			/*0x000*/         UINT64       DoNotLog : 1;    // 58 BitPosition
//			/*0x000*/         UINT64       Reserved : 5;    // 59 BitPosition
//		};
//		/*0x000*/     UINT64       AsULONGLONG;
//	}WHEA_PERSISTENCE_INFO, *PWHEA_PERSISTENCE_INFO;
//
//	typedef struct _WHEA_ERROR_RECORD_HEADER                 // 16 elements, 0x80 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      Signature;
//		/*0x004*/     union _WHEA_REVISION Revision;                       // 3 elements, 0x2 bytes (sizeof)
//		/*0x006*/     ULONG32      SignatureEnd;
//		/*0x00A*/     UINT16       SectionCount;
//		/*0x00C*/     enum _WHEA_ERROR_SEVERITY Severity;
//		/*0x010*/     union _WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits; // 5 elements, 0x4 bytes (sizeof)
//		/*0x014*/     ULONG32      Length;
//		/*0x018*/     union _WHEA_TIMESTAMP Timestamp;                     // 10 elements, 0x8 bytes (sizeof)
//		/*0x020*/     struct _GUID PlatformId;                             // 4 elements, 0x10 bytes (sizeof)
//		/*0x030*/     struct _GUID PartitionId;                            // 4 elements, 0x10 bytes (sizeof)
//		/*0x040*/     struct _GUID CreatorId;                              // 4 elements, 0x10 bytes (sizeof)
//		/*0x050*/     struct _GUID NotifyType;                             // 4 elements, 0x10 bytes (sizeof)
//		/*0x060*/     UINT64       RecordId;
//		/*0x068*/     union _WHEA_ERROR_RECORD_HEADER_FLAGS Flags;         // 5 elements, 0x4 bytes (sizeof)
//		/*0x06C*/     union _WHEA_PERSISTENCE_INFO PersistenceInfo;        // 7 elements, 0x8 bytes (sizeof)
//		/*0x074*/     UINT8        Reserved[12];
//	}WHEA_ERROR_RECORD_HEADER, *PWHEA_ERROR_RECORD_HEADER;
//
//	typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS // 4 elements, 0x1 bytes (sizeof)
//	{
//		struct                                                    // 3 elements, 0x1 bytes (sizeof)
//		{
//			/*0x000*/         UINT8        FRUId : 1;                               // 0 BitPosition
//			/*0x000*/         UINT8        FRUText : 1;                             // 1 BitPosition
//			/*0x000*/         UINT8        Reserved : 6;                            // 2 BitPosition
//		};
//		/*0x000*/     UINT8        AsUCHAR;
//	}WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;
//
//	typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS // 8 elements, 0x4 bytes (sizeof)
//	{
//		struct                                                // 7 elements, 0x4 bytes (sizeof)
//		{
//			/*0x000*/         ULONG32      Primary : 1;                         // 0 BitPosition
//			/*0x000*/         ULONG32      ContainmentWarning : 1;              // 1 BitPosition
//			/*0x000*/         ULONG32      Reset : 1;                           // 2 BitPosition
//			/*0x000*/         ULONG32      ThresholdExceeded : 1;               // 3 BitPosition
//			/*0x000*/         ULONG32      ResourceNotAvailable : 1;            // 4 BitPosition
//			/*0x000*/         ULONG32      LatentError : 1;                     // 5 BitPosition
//			/*0x000*/         ULONG32      Reserved : 26;                       // 6 BitPosition
//		};
//		/*0x000*/     ULONG32      AsULONG;
//	}WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;
//
//	typedef struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR                 // 10 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      SectionOffset;
//		/*0x004*/     ULONG32      SectionLength;
//		/*0x008*/     union _WHEA_REVISION Revision;                                   // 3 elements, 0x2 bytes (sizeof)
//		/*0x00A*/     union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS ValidBits; // 4 elements, 0x1 bytes (sizeof)
//		/*0x00B*/     UINT8        Reserved;
//		/*0x00C*/     union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags;         // 8 elements, 0x4 bytes (sizeof)
//		/*0x010*/     struct _GUID SectionType;                                        // 4 elements, 0x10 bytes (sizeof)
//		/*0x020*/     struct _GUID FRUId;                                              // 4 elements, 0x10 bytes (sizeof)
//		/*0x030*/     enum _WHEA_ERROR_SEVERITY SectionSeverity;
//		/*0x034*/     CHAR         FRUText[20];
//	}WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
//
//	typedef struct _WHEA_ERROR_RECORD                                      // 2 elements, 0xC8 bytes (sizeof)
//	{
//		/*0x000*/     struct _WHEA_ERROR_RECORD_HEADER Header;                           // 16 elements, 0x80 bytes (sizeof)
//		/*0x080*/     struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR SectionDescriptor[1];
//	}WHEA_ERROR_RECORD, *PWHEA_ERROR_RECORD;
//
//	typedef union _WHEA_ERROR_STATUS     // 11 elements, 0x8 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       ErrorStatus;
//		struct                           // 10 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         UINT64       Reserved1 : 8;  // 0 BitPosition
//			/*0x000*/         UINT64       ErrorType : 8;  // 8 BitPosition
//			/*0x000*/         UINT64       Address : 1;    // 16 BitPosition
//			/*0x000*/         UINT64       Control : 1;    // 17 BitPosition
//			/*0x000*/         UINT64       Data : 1;       // 18 BitPosition
//			/*0x000*/         UINT64       Responder : 1;  // 19 BitPosition
//			/*0x000*/         UINT64       Requester : 1;  // 20 BitPosition
//			/*0x000*/         UINT64       FirstError : 1; // 21 BitPosition
//			/*0x000*/         UINT64       Overflow : 1;   // 22 BitPosition
//			/*0x000*/         UINT64       Reserved2 : 41; // 23 BitPosition
//		};
//	}WHEA_ERROR_STATUS, *PWHEA_ERROR_STATUS;
//
//	typedef union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS // 17 elements, 0x8 bytes (sizeof)
//	{
//		struct                                         // 16 elements, 0x8 bytes (sizeof)
//		{
//			/*0x000*/         UINT64       ErrorStatus : 1;              // 0 BitPosition
//			/*0x000*/         UINT64       PhysicalAddress : 1;          // 1 BitPosition
//			/*0x000*/         UINT64       PhysicalAddressMask : 1;      // 2 BitPosition
//			/*0x000*/         UINT64       Node : 1;                     // 3 BitPosition
//			/*0x000*/         UINT64       Card : 1;                     // 4 BitPosition
//			/*0x000*/         UINT64       Module : 1;                   // 5 BitPosition
//			/*0x000*/         UINT64       Bank : 1;                     // 6 BitPosition
//			/*0x000*/         UINT64       Device : 1;                   // 7 BitPosition
//			/*0x000*/         UINT64       Row : 1;                      // 8 BitPosition
//			/*0x000*/         UINT64       Column : 1;                   // 9 BitPosition
//			/*0x000*/         UINT64       BitPosition : 1;              // 10 BitPosition
//			/*0x000*/         UINT64       RequesterId : 1;              // 11 BitPosition
//			/*0x000*/         UINT64       ResponderId : 1;              // 12 BitPosition
//			/*0x000*/         UINT64       TargetId : 1;                 // 13 BitPosition
//			/*0x000*/         UINT64       ErrorType : 1;                // 14 BitPosition
//			/*0x000*/         UINT64       Reserved : 49;                // 15 BitPosition
//		};
//		/*0x000*/     UINT64       ValidBits;
//	}WHEA_MEMORY_ERROR_SECTION_VALIDBITS, *PWHEA_MEMORY_ERROR_SECTION_VALIDBITS;
//
//	typedef struct _WHEA_MEMORY_ERROR_SECTION                 // 16 elements, 0x49 bytes (sizeof)
//	{
//		/*0x000*/     union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS ValidBits; // 17 elements, 0x8 bytes (sizeof)
//		/*0x008*/     union _WHEA_ERROR_STATUS ErrorStatus;                 // 11 elements, 0x8 bytes (sizeof)
//		/*0x010*/     UINT64       PhysicalAddress;
//		/*0x018*/     UINT64       PhysicalAddressMask;
//		/*0x020*/     UINT16       Node;
//		/*0x022*/     UINT16       Card;
//		/*0x024*/     UINT16       Module;
//		/*0x026*/     UINT16       Bank;
//		/*0x028*/     UINT16       Device;
//		/*0x02A*/     UINT16       Row;
//		/*0x02C*/     UINT16       Column;
//		/*0x02E*/     UINT16       BitPosition;
//		/*0x030*/     UINT64       RequesterId;
//		/*0x038*/     UINT64       ResponderId;
//		/*0x040*/     UINT64       TargetId;
//		/*0x048*/     UINT8        ErrorType;
//	}WHEA_MEMORY_ERROR_SECTION, *PWHEA_MEMORY_ERROR_SECTION;
//
//	typedef struct _WMI_BUFFER_HEADER              // 19 elements, 0x48 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      BufferSize;
//		/*0x004*/     ULONG32      SavedOffset;
//		/*0x008*/     ULONG32      CurrentOffset;
//		/*0x00C*/     LONG32       ReferenceCount;
//		/*0x010*/     union _LARGE_INTEGER TimeStamp;            // 4 elements, 0x8 bytes (sizeof)
//		/*0x018*/     INT64        SequenceNumber;
//		union                                      // 3 elements, 0x8 bytes (sizeof)
//		{
//			/*0x020*/         ULONG32      Padding0[2];
//			/*0x020*/         struct _SINGLE_LIST_ENTRY SlistEntry;  // 1 elements, 0x8 bytes (sizeof)
//			/*0x020*/         struct _WMI_BUFFER_HEADER* NextBuffer;
//		};
//		/*0x028*/     struct _ETW_BUFFER_CONTEXT ClientContext;  // 4 elements, 0x4 bytes (sizeof)
//		/*0x02C*/     enum _ETW_BUFFER_STATE State;
//		/*0x030*/     ULONG32      Offset;
//		/*0x034*/     UINT16       BufferFlag;
//		/*0x036*/     UINT16       BufferType;
//		union                                      // 4 elements, 0x10 bytes (sizeof)
//		{
//			/*0x038*/         ULONG32      Padding1[4];
//			/*0x038*/         struct _ETW_REF_CLOCK ReferenceTime;   // 2 elements, 0x10 bytes (sizeof)
//			/*0x038*/         struct _LIST_ENTRY GlobalEntry;        // 2 elements, 0x10 bytes (sizeof)
//			struct                                 // 2 elements, 0x10 bytes (sizeof)
//			{
//				/*0x038*/             VOID*        Pointer0;
//				/*0x040*/             VOID*        Pointer1;
//			};
//		};
//	}WMI_BUFFER_HEADER, *PWMI_BUFFER_HEADER;
//
//	typedef struct _WMI_LOGGER_CONTEXT                            // 88 elements, 0x340 bytes (sizeof)
//	{
//		/*0x000*/     ULONG32      LoggerId;
//		/*0x004*/     ULONG32      BufferSize;
//		/*0x008*/     ULONG32      MaximumEventSize;
//		/*0x00C*/     LONG32       CollectionOn;
//		/*0x010*/     ULONG32      LoggerMode;
//		/*0x014*/     LONG32       AcceptNewEvents;
//		/*0x018*/     FUNCT_0075_1E90_GetCpuClock* GetCpuClock;
//		/*0x020*/     union _LARGE_INTEGER StartTime;                           // 4 elements, 0x8 bytes (sizeof)
//		/*0x028*/     VOID*        LogFileHandle;
//		/*0x030*/     struct _ETHREAD* LoggerThread;
//		/*0x038*/     LONG32       LoggerStatus;
//		/*0x03C*/     UINT8        _PADDING0_[0x4];
//		/*0x040*/     VOID*        NBQHead;
//		/*0x048*/     VOID*        OverflowNBQHead;
//		/*0x050*/     union _SLIST_HEADER QueueBlockFreeList;                   // 5 elements, 0x10 bytes (sizeof)
//		/*0x060*/     struct _LIST_ENTRY GlobalList;                            // 2 elements, 0x10 bytes (sizeof)
//		union                                                     // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x070*/         struct _WMI_BUFFER_HEADER* BatchedBufferList;
//			/*0x070*/         struct _EX_FAST_REF CurrentBuffer;                    // 3 elements, 0x8 bytes (sizeof)
//		};
//		/*0x078*/     struct _UNICODE_STRING LoggerName;                        // 3 elements, 0x10 bytes (sizeof)
//		/*0x088*/     struct _UNICODE_STRING LogFileName;                       // 3 elements, 0x10 bytes (sizeof)
//		/*0x098*/     struct _UNICODE_STRING LogFilePattern;                    // 3 elements, 0x10 bytes (sizeof)
//		/*0x0A8*/     struct _UNICODE_STRING NewLogFileName;                    // 3 elements, 0x10 bytes (sizeof)
//		/*0x0B8*/     ULONG32      ClockType;
//		/*0x0BC*/     ULONG32      MaximumFileSize;
//		/*0x0C0*/     ULONG32      LastFlushedBuffer;
//		/*0x0C4*/     ULONG32      FlushTimer;
//		/*0x0C8*/     ULONG32      FlushThreshold;
//		/*0x0CC*/     UINT8        _PADDING1_[0x4];
//		/*0x0D0*/     union _LARGE_INTEGER ByteOffset;                          // 4 elements, 0x8 bytes (sizeof)
//		/*0x0D8*/     ULONG32      MinimumBuffers;
//		/*0x0DC*/     LONG32       BuffersAvailable;
//		/*0x0E0*/     LONG32       NumberOfBuffers;
//		/*0x0E4*/     ULONG32      MaximumBuffers;
//		/*0x0E8*/     ULONG32      EventsLost;
//		/*0x0EC*/     ULONG32      BuffersWritten;
//		/*0x0F0*/     ULONG32      LogBuffersLost;
//		/*0x0F4*/     ULONG32      RealTimeBuffersDelivered;
//		/*0x0F8*/     ULONG32      RealTimeBuffersLost;
//		/*0x0FC*/     UINT8        _PADDING2_[0x4];
//		/*0x100*/     LONG32*      SequencePtr;
//		/*0x108*/     ULONG32      LocalSequence;
//		/*0x10C*/     struct _GUID InstanceGuid;                                // 4 elements, 0x10 bytes (sizeof)
//		/*0x11C*/     LONG32       FileCounter;
//		/*0x120*/     FUNCT_00A3_1EB6_BufferCallback* BufferCallback;
//		/*0x128*/     enum _POOL_TYPE PoolType;
//		/*0x12C*/     UINT8        _PADDING3_[0x4];
//		/*0x130*/     struct _ETW_REF_CLOCK ReferenceTime;                      // 2 elements, 0x10 bytes (sizeof)
//		/*0x140*/     struct _LIST_ENTRY Consumers;                             // 2 elements, 0x10 bytes (sizeof)
//		/*0x150*/     ULONG32      NumConsumers;
//		/*0x154*/     UINT8        _PADDING4_[0x4];
//		/*0x158*/     struct _ETW_REALTIME_CONSUMER* TransitionConsumer;
//		/*0x160*/     VOID*        RealtimeLogfileHandle;
//		/*0x168*/     struct _UNICODE_STRING RealtimeLogfileName;               // 3 elements, 0x10 bytes (sizeof)
//		/*0x178*/     union _LARGE_INTEGER RealtimeWriteOffset;                 // 4 elements, 0x8 bytes (sizeof)
//		/*0x180*/     union _LARGE_INTEGER RealtimeReadOffset;                  // 4 elements, 0x8 bytes (sizeof)
//		/*0x188*/     union _LARGE_INTEGER RealtimeLogfileSize;                 // 4 elements, 0x8 bytes (sizeof)
//		/*0x190*/     UINT64       RealtimeLogfileUsage;
//		/*0x198*/     UINT64       RealtimeMaximumFileSize;
//		/*0x1A0*/     ULONG32      RealtimeBuffersSaved;
//		/*0x1A4*/     UINT8        _PADDING5_[0x4];
//		/*0x1A8*/     struct _ETW_REF_CLOCK RealtimeReferenceTime;              // 2 elements, 0x10 bytes (sizeof)
//		/*0x1B8*/     enum _ETW_RT_EVENT_LOSS NewRTEventsLost;
//		/*0x1BC*/     UINT8        _PADDING6_[0x4];
//		/*0x1C0*/     struct _KEVENT LoggerEvent;                               // 1 elements, 0x18 bytes (sizeof)
//		/*0x1D8*/     struct _KEVENT FlushEvent;                                // 1 elements, 0x18 bytes (sizeof)
//		/*0x1F0*/     struct _KTIMER FlushTimeOutTimer;                         // 6 elements, 0x40 bytes (sizeof)
//		/*0x230*/     struct _KDPC FlushDpc;                                    // 9 elements, 0x40 bytes (sizeof)
//		/*0x270*/     struct _KMUTANT LoggerMutex;                              // 5 elements, 0x38 bytes (sizeof)
//		/*0x2A8*/     struct _EX_PUSH_LOCK LoggerLock;                          // 7 elements, 0x8 bytes (sizeof)
//		union                                                     // 2 elements, 0x8 bytes (sizeof)
//		{
//			/*0x2B0*/         UINT64       BufferListSpinLock;
//			/*0x2B0*/         struct _EX_PUSH_LOCK BufferListPushLock;              // 7 elements, 0x8 bytes (sizeof)
//		};
//		/*0x2B8*/     struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;    // 6 elements, 0x48 bytes (sizeof)
//		/*0x300*/     struct _TOKEN_ACCESS_INFORMATION* TokenAccessInformation;
//		/*0x308*/     struct _EX_FAST_REF SecurityDescriptor;                   // 3 elements, 0x8 bytes (sizeof)
//		/*0x310*/     INT64        BufferSequenceNumber;
//		union                                                     // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x318*/         ULONG32      Flags;
//			struct                                                // 10 elements, 0x4 bytes (sizeof)
//			{
//				/*0x318*/             ULONG32      Persistent : 1;                      // 0 BitPosition
//				/*0x318*/             ULONG32      AutoLogger : 1;                      // 1 BitPosition
//				/*0x318*/             ULONG32      FsReady : 1;                         // 2 BitPosition
//				/*0x318*/             ULONG32      RealTime : 1;                        // 3 BitPosition
//				/*0x318*/             ULONG32      Wow : 1;                             // 4 BitPosition
//				/*0x318*/             ULONG32      KernelTrace : 1;                     // 5 BitPosition
//				/*0x318*/             ULONG32      NoMoreEnable : 1;                    // 6 BitPosition
//				/*0x318*/             ULONG32      StackTracing : 1;                    // 7 BitPosition
//				/*0x318*/             ULONG32      ErrorLogged : 1;                     // 8 BitPosition
//				/*0x318*/             ULONG32      RealtimeLoggerContextFreed : 1;      // 9 BitPosition
//			};
//		};
//		union                                                     // 2 elements, 0x4 bytes (sizeof)
//		{
//			/*0x31C*/         ULONG32      RequestFlag;
//			struct                                                // 6 elements, 0x4 bytes (sizeof)
//			{
//				/*0x31C*/             ULONG32      RequestNewFie : 1;                   // 0 BitPosition
//				/*0x31C*/             ULONG32      RequestUpdateFile : 1;               // 1 BitPosition
//				/*0x31C*/             ULONG32      RequestFlush : 1;                    // 2 BitPosition
//				/*0x31C*/             ULONG32      RequestDisableRealtime : 1;          // 3 BitPosition
//				/*0x31C*/             ULONG32      RequestDisconnectConsumer : 1;       // 4 BitPosition
//				/*0x31C*/             ULONG32      RequestConnectConsumer : 1;          // 5 BitPosition
//			};
//		};
//		/*0x320*/     struct _RTL_BITMAP HookIdMap;                             // 2 elements, 0x10 bytes (sizeof)
//		/*0x330*/     struct _DISALLOWED_GUIDS DisallowedGuids;                 // 2 elements, 0x10 bytes (sizeof)
//	}WMI_LOGGER_CONTEXT, *PWMI_LOGGER_CONTEXT;
//
//	typedef struct _WORK_QUEUE_ENTRY                      // 3 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     struct _LIST_ENTRY WorkQueueLinks;                // 2 elements, 0x10 bytes (sizeof)
//		union                                             // 4 elements, 0x8 bytes (sizeof)
//		{
//			struct                                        // 1 elements, 0x8 bytes (sizeof)
//			{
//				/*0x010*/             struct _FILE_OBJECT* FileObject;
//			}Read;
//			struct                                        // 1 elements, 0x8 bytes (sizeof)
//			{
//				/*0x010*/             struct _SHARED_CACHE_MAP* SharedCacheMap;
//			}Write;
//			struct                                        // 1 elements, 0x8 bytes (sizeof)
//			{
//				/*0x010*/             struct _KEVENT* Event;
//			}Event;
//			struct                                        // 1 elements, 0x4 bytes (sizeof)
//			{
//				/*0x010*/             ULONG32      Reason;
//			}Notification;
//		}Parameters;
//		/*0x018*/     UINT8        Function;
//		/*0x019*/     UINT8        _PADDING0_[0x7];
//	}WORK_QUEUE_ENTRY, *PWORK_QUEUE_ENTRY;
//
//	typedef struct _XSAVE_AREA_HEADER // 2 elements, 0x40 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Mask;
//		/*0x008*/     UINT64       Reserved[7];
//	}XSAVE_AREA_HEADER, *PXSAVE_AREA_HEADER;
//
//	typedef struct _XSAVE_AREA            // 2 elements, 0x240 bytes (sizeof)
//	{
//		/*0x000*/     struct _XSAVE_FORMAT LegacyState; // 16 elements, 0x200 bytes (sizeof)
//		/*0x200*/     struct _XSAVE_AREA_HEADER Header; // 2 elements, 0x40 bytes (sizeof)
//	}XSAVE_AREA, *PXSAVE_AREA;
//
//	typedef struct _XSTATE_CONTEXT // 5 elements, 0x20 bytes (sizeof)
//	{
//		/*0x000*/     UINT64       Mask;
//		/*0x008*/     ULONG32      Length;
//		/*0x00C*/     ULONG32      Reserved1;
//		/*0x010*/     struct _XSAVE_AREA* Area;
//		/*0x018*/     VOID*        Buffer;
//	}XSTATE_CONTEXT, *PXSTATE_CONTEXT;
//
//	typedef struct _XSTATE_SAVE               // 4 elements, 0x38 bytes (sizeof)
//	{
//		/*0x000*/     struct _XSTATE_SAVE* Prev;
//		/*0x008*/     struct _KTHREAD* Thread;
//		/*0x010*/     UINT8        Level;
//		/*0x011*/     UINT8        _PADDING0_[0x7];
//		/*0x018*/     struct _XSTATE_CONTEXT XStateContext; // 5 elements, 0x20 bytes (sizeof)
//	}XSTATE_SAVE, *PXSTATE_SAVE;
//
//#ifdef __cplusplus
//}
//#endif
