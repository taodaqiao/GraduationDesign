#include "Gdi.h"


extern "C" {
	namespace Driver {
		namespace ShadowFunc {

			PEPROCESS WinProcess = NULL;

			typedef struct _SHADOWINFO {
				UINT32 Index;
				PCHAR FuncName;
			}SHADOWINFO, *pSHADOWINFO;

			SHADOWINFO TABLE7601[] = {
	{ 0, "NtUserGetThreadState" },
	{ 1, "NtUserPeekMessage" },
	{ 2, "NtUserCallOneParam" },
	{ 3, "NtUserGetKeyState" },
	{ 4, "NtUserInvalidateRect" },
	{ 5, "NtUserCallNoParam" },
	{ 6, "NtUserGetMessage" },
	{ 7, "NtUserMessageCall" },
	{ 8, "NtGdiBitBlt" },
	{ 9, "NtGdiGetCharSet" },
	{ 10, "NtUserGetDC" },
	{ 11, "NtGdiSelectBitmap" },
	{ 12, "NtUserWaitMessage" },
	{ 13, "NtUserTranslateMessage" },
	{ 14, "NtUserGetProp" },
	{ 15, "NtUserPostMessage" },
	{ 16, "NtUserQueryWindow" },
	{ 17, "NtUserTranslateAccelerator" },
	{ 18, "NtGdiFlush" },
	{ 19, "NtUserRedrawWindow" },
	{ 20, "NtUserWindowFromPoint" },
	{ 21, "NtUserCallMsgFilter" },
	{ 22, "NtUserValidateTimerCallback" },
	{ 23, "NtUserBeginPaint" },
	{ 24, "NtUserSetTimer" },
	{ 25, "NtUserEndPaint" },
	{ 26, "NtUserSetCursor" },
	{ 27, "NtUserKillTimer" },
	{ 28, "NtUserBuildHwndList" },
	{ 29, "NtUserSelectPalette" },
	{ 30, "NtUserCallNextHookEx" },
	{ 31, "NtUserHideCaret" },
	{ 32, "NtGdiIntersectClipRect" },
	{ 33, "NtUserCallHwndLock" },
	{ 34, "NtUserGetProcessWindowStation" },
	{ 35, "NtGdiDeleteObjectApp" },
	{ 36, "NtUserSetWindowPos" },
	{ 37, "NtUserShowCaret" },
	{ 38, "NtUserEndDeferWindowPosEx" },
	{ 39, "NtUserCallHwndParamLock" },
	{ 40, "NtUserVkKeyScanEx" },
	{ 41, "NtGdiSetDIBitsToDeviceInternal" },
	{ 42, "NtUserCallTwoParam" },
	{ 43, "NtGdiGetRandomRgn" },
	{ 44, "NtUserCopyAcceleratorTable" },
	{ 45, "NtUserNotifyWinEvent" },
	{ 46, "NtGdiExtSelectClipRgn" },
	{ 47, "NtUserIsClipboardFormatAvailable" },
	{ 48, "NtUserSetScrollInfo" },
	{ 49, "NtGdiStretchBlt" },
	{ 50, "NtUserCreateCaret" },
	{ 51, "NtGdiRectVisible" },
	{ 52, "NtGdiCombineRgn" },
	{ 53, "NtGdiGetDCObject" },
	{ 54, "NtUserDispatchMessage" },
	{ 55, "NtUserRegisterWindowMessage" },
	{ 56, "NtGdiExtTextOutW" },
	{ 57, "NtGdiSelectFont" },
	{ 58, "NtGdiRestoreDC" },
	{ 59, "NtGdiSaveDC" },
	{ 60, "NtUserGetForegroundWindow" },
	{ 61, "NtUserShowScrollBar" },
	{ 62, "NtUserFindExistingCursorIcon" },
	{ 63, "NtGdiGetDCDword" },
	{ 64, "NtGdiGetRegionData" },
	{ 65, "NtGdiLineTo" },
	{ 66, "NtUserSystemParametersInfo" },
	{ 67, "NtGdiGetAppClipBox" },
	{ 68, "NtUserGetAsyncKeyState" },
	{ 69, "NtUserGetCPD" },
	{ 70, "NtUserRemoveProp" },
	{ 71, "NtGdiDoPalette" },
	{ 72, "NtGdiPolyPolyDraw" },
	{ 73, "NtUserSetCapture" },
	{ 74, "NtUserEnumDisplayMonitors" },
	{ 75, "NtGdiCreateCompatibleBitmap" },
	{ 76, "NtUserSetProp" },
	{ 77, "NtGdiGetTextCharsetInfo" },
	{ 78, "NtUserSBGetParms" },
	{ 79, "NtUserGetIconInfo" },
	{ 80, "NtUserExcludeUpdateRgn" },
	{ 81, "NtUserSetFocus" },
	{ 82, "NtGdiExtGetObjectW" },
	{ 83, "NtUserDeferWindowPos" },
	{ 84, "NtUserGetUpdateRect" },
	{ 85, "NtGdiCreateCompatibleDC" },
	{ 86, "NtUserGetClipboardSequenceNumber" },
	{ 87, "NtGdiCreatePen" },
	{ 88, "NtUserShowWindow" },
	{ 89, "NtUserGetKeyboardLayoutList" },
	{ 90, "NtGdiPatBlt" },
	{ 91, "NtUserMapVirtualKeyEx" },
	{ 92, "NtUserSetWindowLong" },
	{ 93, "NtGdiHfontCreate" },
	{ 94, "NtUserMoveWindow" },
	{ 95, "NtUserPostThreadMessage" },
	{ 96, "NtUserDrawIconEx" },
	{ 97, "NtUserGetSystemMenu" },
	{ 98, "NtGdiDrawStream" },
	{ 99, "NtUserInternalGetWindowText" },
	{ 100, "NtUserGetWindowDC" },
	{ 101, "NtGdiD3dDrawPrimitives2" },
	{ 102, "NtGdiInvertRgn" },
	{ 103, "NtGdiGetRgnBox" },
	{ 104, "NtGdiGetAndSetDCDword" },
	{ 105, "NtGdiMaskBlt" },
	{ 106, "NtGdiGetWidthTable" },
	{ 107, "NtUserScrollDC" },
	{ 108, "NtUserGetObjectInformation" },
	{ 109, "NtGdiCreateBitmap" },
	{ 110, "NtUserFindWindowEx" },
	{ 111, "NtGdiPolyPatBlt" },
	{ 112, "NtUserUnhookWindowsHookEx" },
	{ 113, "NtGdiGetNearestColor" },
	{ 114, "NtGdiTransformPoints" },
	{ 115, "NtGdiGetDCPoint" },
	{ 116, "NtGdiCreateDIBBrush" },
	{ 117, "NtGdiGetTextMetricsW" },
	{ 118, "NtUserCreateWindowEx" },
	{ 119, "NtUserSetParent" },
	{ 120, "NtUserGetKeyboardState" },
	{ 121, "NtUserToUnicodeEx" },
	{ 122, "NtUserGetControlBrush" },
	{ 123, "NtUserGetClassName" },
	{ 124, "NtGdiAlphaBlend" },
	{ 125, "NtGdiDdBlt" },
	{ 126, "NtGdiOffsetRgn" },
	{ 127, "NtUserDefSetText" },
	{ 128, "NtGdiGetTextFaceW" },
	{ 129, "NtGdiStretchDIBitsInternal" },
	{ 130, "NtUserSendInput" },
	{ 131, "NtUserGetThreadDesktop" },
	{ 132, "NtGdiCreateRectRgn" },
	{ 133, "NtGdiGetDIBitsInternal" },
	{ 134, "NtUserGetUpdateRgn" },
	{ 135, "NtGdiDeleteClientObj" },
	{ 136, "NtUserGetIconSize" },
	{ 137, "NtUserFillWindow" },
	{ 138, "NtGdiExtCreateRegion" },
	{ 139, "NtGdiComputeXformCoefficients" },
	{ 140, "NtUserSetWindowsHookEx" },
	{ 141, "NtUserNotifyProcessCreate" },
	{ 142, "NtGdiUnrealizeObject" },
	{ 143, "NtUserGetTitleBarInfo" },
	{ 144, "NtGdiRectangle" },
	{ 145, "NtUserSetThreadDesktop" },
	{ 146, "NtUserGetDCEx" },
	{ 147, "NtUserGetScrollBarInfo" },
	{ 148, "NtGdiGetTextExtent" },
	{ 149, "NtUserSetWindowFNID" },
	{ 150, "NtGdiSetLayout" },
	{ 151, "NtUserCalcMenuBar" },
	{ 152, "NtUserThunkedMenuItemInfo" },
	{ 153, "NtGdiExcludeClipRect" },
	{ 154, "NtGdiCreateDIBSection" },
	{ 155, "NtGdiGetDCforBitmap" },
	{ 156, "NtUserDestroyCursor" },
	{ 157, "NtUserDestroyWindow" },
	{ 158, "NtUserCallHwndParam" },
	{ 159, "NtGdiCreateDIBitmapInternal" },
	{ 160, "NtUserOpenWindowStation" },
	{ 161, "NtGdiDdDeleteSurfaceObject" },
	{ 162, "NtGdiDdCanCreateSurface" },
	{ 163, "NtGdiDdCreateSurface" },
	{ 164, "NtUserSetCursorIconData" },
	{ 165, "NtGdiDdDestroySurface" },
	{ 166, "NtUserCloseDesktop" },
	{ 167, "NtUserOpenDesktop" },
	{ 168, "NtUserSetProcessWindowStation" },
	{ 169, "NtUserGetAtomName" },
	{ 170, "NtGdiDdResetVisrgn" },
	{ 171, "NtGdiExtCreatePen" },
	{ 172, "NtGdiCreatePaletteInternal" },
	{ 173, "NtGdiSetBrushOrg" },
	{ 174, "NtUserBuildNameList" },
	{ 175, "NtGdiSetPixel" },
	{ 176, "NtUserRegisterClassExWOW" },
	{ 177, "NtGdiCreatePatternBrushInternal" },
	{ 178, "NtUserGetAncestor" },
	{ 179, "NtGdiGetOutlineTextMetricsInternalW" },
	{ 180, "NtGdiSetBitmapBits" },
	{ 181, "NtUserCloseWindowStation" },
	{ 182, "NtUserGetDoubleClickTime" },
	{ 183, "NtUserEnableScrollBar" },
	{ 184, "NtGdiCreateSolidBrush" },
	{ 185, "NtUserGetClassInfoEx" },
	{ 186, "NtGdiCreateClientObj" },
	{ 187, "NtUserUnregisterClass" },
	{ 188, "NtUserDeleteMenu" },
	{ 189, "NtGdiRectInRegion" },
	{ 190, "NtUserScrollWindowEx" },
	{ 191, "NtGdiGetPixel" },
	{ 192, "NtUserSetClassLong" },
	{ 193, "NtUserGetMenuBarInfo" },
	{ 194, "NtGdiDdCreateSurfaceEx" },
	{ 195, "NtGdiDdCreateSurfaceObject" },
	{ 196, "NtGdiGetNearestPaletteIndex" },
	{ 197, "NtGdiDdLockD3D" },
	{ 198, "NtGdiDdUnlockD3D" },
	{ 199, "NtGdiGetCharWidthW" },
	{ 200, "NtUserInvalidateRgn" },
	{ 201, "NtUserGetClipboardOwner" },
	{ 202, "NtUserSetWindowRgn" },
	{ 203, "NtUserBitBltSysBmp" },
	{ 204, "NtGdiGetCharWidthInfo" },
	{ 205, "NtUserValidateRect" },
	{ 206, "NtUserCloseClipboard" },
	{ 207, "NtUserOpenClipboard" },
	{ 208, "NtGdiGetStockObject" },
	{ 209, "NtUserSetClipboardData" },
	{ 210, "NtUserEnableMenuItem" },
	{ 211, "NtUserAlterWindowStyle" },
	{ 212, "NtGdiFillRgn" },
	{ 213, "NtUserGetWindowPlacement" },
	{ 214, "NtGdiModifyWorldTransform" },
	{ 215, "NtGdiGetFontData" },
	{ 216, "NtUserGetOpenClipboardWindow" },
	{ 217, "NtUserSetThreadState" },
	{ 218, "NtGdiOpenDCW" },
	{ 219, "NtUserTrackMouseEvent" },
	{ 220, "NtGdiGetTransform" },
	{ 221, "NtUserDestroyMenu" },
	{ 222, "NtGdiGetBitmapBits" },
	{ 223, "NtUserConsoleControl" },
	{ 224, "NtUserSetActiveWindow" },
	{ 225, "NtUserSetInformationThread" },
	{ 226, "NtUserSetWindowPlacement" },
	{ 227, "NtUserGetControlColor" },
	{ 228, "NtGdiSetMetaRgn" },
	{ 229, "NtGdiSetMiterLimit" },
	{ 230, "NtGdiSetVirtualResolution" },
	{ 231, "NtGdiGetRasterizerCaps" },
	{ 232, "NtUserSetWindowWord" },
	{ 233, "NtUserGetClipboardFormatName" },
	{ 234, "NtUserRealInternalGetMessage" },
	{ 235, "NtUserCreateLocalMemHandle" },
	{ 236, "NtUserAttachThreadInput" },
	{ 237, "NtGdiCreateHalftonePalette" },
	{ 238, "NtUserPaintMenuBar" },
	{ 239, "NtUserSetKeyboardState" },
	{ 240, "NtGdiCombineTransform" },
	{ 241, "NtUserCreateAcceleratorTable" },
	{ 242, "NtUserGetCursorFrameInfo" },
	{ 243, "NtUserGetAltTabInfo" },
	{ 244, "NtUserGetCaretBlinkTime" },
	{ 245, "NtGdiQueryFontAssocInfo" },
	{ 246, "NtUserProcessConnect" },
	{ 247, "NtUserEnumDisplayDevices" },
	{ 248, "NtUserEmptyClipboard" },
	{ 249, "NtUserGetClipboardData" },
	{ 250, "NtUserRemoveMenu" },
	{ 251, "NtGdiSetBoundsRect" },
	{ 252, "NtGdiGetBitmapDimension" },
	{ 253, "NtUserConvertMemHandle" },
	{ 254, "NtUserDestroyAcceleratorTable" },
	{ 255, "NtUserGetGUIThreadInfo" },
	{ 256, "NtGdiCloseFigure" },
	{ 257, "NtUserSetWindowsHookAW" },
	{ 258, "NtUserSetMenuDefaultItem" },
	{ 259, "NtUserCheckMenuItem" },
	{ 260, "NtUserSetWinEventHook" },
	{ 261, "NtUserUnhookWinEvent" },
	{ 262, "NtUserLockWindowUpdate" },
	{ 263, "NtUserSetSystemMenu" },
	{ 264, "NtUserThunkedMenuInfo" },
	{ 265, "NtGdiBeginPath" },
	{ 266, "NtGdiEndPath" },
	{ 267, "NtGdiFillPath" },
	{ 268, "NtUserCallHwnd" },
	{ 269, "NtUserDdeInitialize" },
	{ 270, "NtUserModifyUserStartupInfoFlags" },
	{ 271, "NtUserCountClipboardFormats" },
	{ 272, "NtGdiAddFontMemResourceEx" },
	{ 273, "NtGdiEqualRgn" },
	{ 274, "NtGdiGetSystemPaletteUse" },
	{ 275, "NtGdiRemoveFontMemResourceEx" },
	{ 276, "NtUserEnumDisplaySettings" },
	{ 277, "NtUserPaintDesktop" },
	{ 278, "NtGdiExtEscape" },
	{ 279, "NtGdiSetBitmapDimension" },
	{ 280, "NtGdiSetFontEnumeration" },
	{ 281, "NtUserChangeClipboardChain" },
	{ 282, "NtUserSetClipboardViewer" },
	{ 283, "NtUserShowWindowAsync" },
	{ 284, "NtGdiCreateColorSpace" },
	{ 285, "NtGdiDeleteColorSpace" },
	{ 286, "NtUserActivateKeyboardLayout" },
	{ 287, "NtGdiAbortDoc" },
	{ 288, "NtGdiAbortPath" },
	{ 289, "NtGdiAddEmbFontToDC" },
	{ 290, "NtGdiAddFontResourceW" },
	{ 291, "NtGdiAddRemoteFontToDC" },
	{ 292, "NtGdiAddRemoteMMInstanceToDC" },
	{ 293, "NtGdiAngleArc" },
	{ 294, "NtGdiAnyLinkedFonts" },
	{ 295, "NtGdiArcInternal" },
	{ 296, "NtGdiBRUSHOBJ_DeleteRbrush" },
	{ 297, "NtGdiBRUSHOBJ_hGetColorTransform" },
	{ 298, "NtGdiBRUSHOBJ_pvAllocRbrush" },
	{ 299, "NtGdiBRUSHOBJ_pvGetRbrush" },
	{ 300, "NtGdiBRUSHOBJ_ulGetBrushColor" },
	{ 301, "NtGdiBeginGdiRendering" },
	{ 302, "NtGdiCLIPOBJ_bEnum" },
	{ 303, "NtGdiCLIPOBJ_cEnumStart" },
	{ 304, "NtGdiCLIPOBJ_ppoGetPath" },
	{ 305, "NtGdiCancelDC" },
	{ 306, "NtGdiChangeGhostFont" },
	{ 307, "NtGdiCheckBitmapBits" },
	{ 308, "NtGdiClearBitmapAttributes" },
	{ 309, "NtGdiClearBrushAttributes" },
	{ 310, "NtGdiColorCorrectPalette" },
	{ 311, "NtGdiConfigureOPMProtectedOutput" },
	{ 312, "NtGdiConvertMetafileRect" },
	{ 313, "NtGdiCreateBitmapFromDxSurface" },
	{ 314, "NtGdiCreateColorTransform" },
	{ 315, "NtGdiCreateEllipticRgn" },
	{ 316, "NtGdiCreateHatchBrushInternal" },
	{ 317, "NtGdiCreateMetafileDC" },
	{ 318, "NtGdiCreateOPMProtectedOutputs" },
	{ 319, "NtGdiCreateRoundRectRgn" },
	{ 320, "NtGdiCreateServerMetaFile" },
	{ 321, "NtGdiD3dContextCreate" },
	{ 322, "NtGdiD3dContextDestroy" },
	{ 323, "NtGdiD3dContextDestroyAll" },
	{ 324, "NtGdiD3dValidateTextureStageState" },
	{ 325, "NtGdiDDCCIGetCapabilitiesString" },
	{ 326, "NtGdiDDCCIGetCapabilitiesStringLength" },
	{ 327, "NtGdiDDCCIGetTimingReport" },
	{ 328, "NtGdiDDCCIGetVCPFeature" },
	{ 329, "NtGdiDDCCISaveCurrentSettings" },
	{ 330, "NtGdiDDCCISetVCPFeature" },
	{ 331, "NtGdiDdAddAttachedSurface" },
	{ 332, "NtGdiDdAlphaBlt" },
	{ 333, "NtGdiDdAttachSurface" },
	{ 334, "NtGdiDdBeginMoCompFrame" },
	{ 335, "NtGdiDdCanCreateD3DBuffer" },
	{ 336, "NtGdiDdColorControl" },
	{ 337, "NtGdiDdCreateD3DBuffer" },
	{ 338, "NtGdiDdCreateDirectDrawObject" },
	{ 339, "NtGdiDdCreateFullscreenSprite" },
	{ 340, "NtGdiDdCreateMoComp" },
	{ 341, "NtGdiDdDDIAcquireKeyedMutex" },
	{ 342, "NtGdiDdDDICheckExclusiveOwnership" },
	{ 343, "NtGdiDdDDICheckMonitorPowerState" },
	{ 344, "NtGdiDdDDICheckOcclusion" },
	{ 345, "NtGdiDdDDICheckSharedResourceAccess" },
	{ 346, "NtGdiDdDDICheckVidPnExclusiveOwnership" },
	{ 347, "NtGdiDdDDICloseAdapter" },
	{ 348, "NtGdiDdDDIConfigureSharedResource" },
	{ 349, "NtGdiDdDDICreateAllocation" },
	{ 350, "NtGdiDdDDICreateContext" },
	{ 351, "NtGdiDdDDICreateDCFromMemory" },
	{ 352, "NtGdiDdDDICreateDevice" },
	{ 353, "NtGdiDdDDICreateKeyedMutex" },
	{ 354, "NtGdiDdDDICreateOverlay" },
	{ 355, "NtGdiDdDDICreateSynchronizationObject" },
	{ 356, "NtGdiDdDDIDestroyAllocation" },
	{ 357, "NtGdiDdDDIDestroyContext" },
	{ 358, "NtGdiDdDDIDestroyDCFromMemory" },
	{ 359, "NtGdiDdDDIDestroyDevice" },
	{ 360, "NtGdiDdDDIDestroyKeyedMutex" },
	{ 361, "NtGdiDdDDIDestroyOverlay" },
	{ 362, "NtGdiDdDDIDestroySynchronizationObject" },
	{ 363, "NtGdiDdDDIEscape" },
	{ 364, "NtGdiDdDDIFlipOverlay" },
	{ 365, "NtGdiDdDDIGetContextSchedulingPriority" },
	{ 366, "NtGdiDdDDIGetDeviceState" },
	{ 367, "NtGdiDdDDIGetDisplayModeList" },
	{ 368, "NtGdiDdDDIGetMultisampleMethodList" },
	{ 369, "NtGdiDdDDIGetOverlayState" },
	{ 370, "NtGdiDdDDIGetPresentHistory" },
	{ 371, "NtGdiDdDDIGetPresentQueueEvent" },
	{ 372, "NtGdiDdDDIGetProcessSchedulingPriorityClass" },
	{ 373, "NtGdiDdDDIGetRuntimeData" },
	{ 374, "NtGdiDdDDIGetScanLine" },
	{ 375, "NtGdiDdDDIGetSharedPrimaryHandle" },
	{ 376, "NtGdiDdDDIInvalidateActiveVidPn" },
	{ 377, "NtGdiDdDDILock" },
	{ 378, "NtGdiDdDDIOpenAdapterFromDeviceName" },
	{ 379, "NtGdiDdDDIOpenAdapterFromHdc" },
	{ 380, "NtGdiDdDDIOpenKeyedMutex" },
	{ 381, "NtGdiDdDDIOpenResource" },
	{ 382, "NtGdiDdDDIOpenSynchronizationObject" },
	{ 383, "NtGdiDdDDIPollDisplayChildren" },
	{ 384, "NtGdiDdDDIPresent" },
	{ 385, "NtGdiDdDDIQueryAdapterInfo" },
	{ 386, "NtGdiDdDDIQueryAllocationResidency" },
	{ 387, "NtGdiDdDDIQueryResourceInfo" },
	{ 388, "NtGdiDdDDIQueryStatistics" },
	{ 389, "NtGdiDdDDIReleaseKeyedMutex" },
	{ 390, "NtGdiDdDDIReleaseProcessVidPnSourceOwners" },
	{ 391, "NtGdiDdDDIRender" },
	{ 392, "NtGdiDdDDISetAllocationPriority" },
	{ 393, "NtGdiDdDDISetContextSchedulingPriority" },
	{ 394, "NtGdiDdDDISetDisplayMode" },
	{ 395, "NtGdiDdDDISetDisplayPrivateDriverFormat" },
	{ 396, "NtGdiDdDDISetGammaRamp" },
	{ 397, "NtGdiDdDDISetProcessSchedulingPriorityClass" },
	{ 398, "NtGdiDdDDISetQueuedLimit" },
	{ 399, "NtGdiDdDDISetVidPnSourceOwner" },
	{ 400, "NtGdiDdDDISharedPrimaryLockNotification" },
	{ 401, "NtGdiDdDDISharedPrimaryUnLockNotification" },
	{ 402, "NtGdiDdDDISignalSynchronizationObject" },
	{ 403, "NtGdiDdDDIUnlock" },
	{ 404, "NtGdiDdDDIUpdateOverlay" },
	{ 405, "NtGdiDdDDIWaitForIdle" },
	{ 406, "NtGdiDdDDIWaitForSynchronizationObject" },
	{ 407, "NtGdiDdDDIWaitForVerticalBlankEvent" },
	{ 408, "NtGdiDdDeleteDirectDrawObject" },
	{ 409, "NtGdiDdDestroyD3DBuffer" },
	{ 410, "NtGdiDdDestroyFullscreenSprite" },
	{ 411, "NtGdiDdDestroyMoComp" },
	{ 412, "NtGdiDdEndMoCompFrame" },
	{ 413, "NtGdiDdFlip" },
	{ 414, "NtGdiDdFlipToGDISurface" },
	{ 415, "NtGdiDdGetAvailDriverMemory" },
	{ 416, "NtGdiDdGetBltStatus" },
	{ 417, "NtGdiDdGetDC" },
	{ 418, "NtGdiDdGetDriverInfo" },
	{ 419, "NtGdiDdGetDriverState" },
	{ 420, "NtGdiDdGetDxHandle" },
	{ 421, "NtGdiDdGetFlipStatus" },
	{ 422, "NtGdiDdGetInternalMoCompInfo" },
	{ 423, "NtGdiDdGetMoCompBuffInfo" },
	{ 424, "NtGdiDdGetMoCompFormats" },
	{ 425, "NtGdiDdGetMoCompGuids" },
	{ 426, "NtGdiDdGetScanLine" },
	{ 427, "NtGdiDdLock" },
	{ 428, "NtGdiDdNotifyFullscreenSpriteUpdate" },
	{ 429, "NtGdiDdQueryDirectDrawObject" },
	{ 430, "NtGdiDdQueryMoCompStatus" },
	{ 431, "NtGdiDdQueryVisRgnUniqueness" },
	{ 432, "NtGdiDdReenableDirectDrawObject" },
	{ 433, "NtGdiDdReleaseDC" },
	{ 434, "NtGdiDdRenderMoComp" },
	{ 435, "NtGdiDdSetColorKey" },
	{ 436, "NtGdiDdSetExclusiveMode" },
	{ 437, "NtGdiDdSetGammaRamp" },
	{ 438, "NtGdiDdSetOverlayPosition" },
	{ 439, "NtGdiDdUnattachSurface" },
	{ 440, "NtGdiDdUnlock" },
	{ 441, "NtGdiDdUpdateOverlay" },
	{ 442, "NtGdiDdWaitForVerticalBlank" },
	{ 443, "NtGdiDeleteColorTransform" },
	{ 444, "NtGdiDescribePixelFormat" },
	{ 445, "NtGdiDestroyOPMProtectedOutput" },
	{ 446, "NtGdiDestroyPhysicalMonitor" },
	{ 447, "NtGdiDoBanding" },
	{ 448, "NtGdiDrawEscape" },
	{ 449, "NtGdiDvpAcquireNotification" },
	{ 450, "NtGdiDvpCanCreateVideoPort" },
	{ 451, "NtGdiDvpColorControl" },
	{ 452, "NtGdiDvpCreateVideoPort" },
	{ 453, "NtGdiDvpDestroyVideoPort" },
	{ 454, "NtGdiDvpFlipVideoPort" },
	{ 455, "NtGdiDvpGetVideoPortBandwidth" },
	{ 456, "NtGdiDvpGetVideoPortConnectInfo" },
	{ 457, "NtGdiDvpGetVideoPortField" },
	{ 458, "NtGdiDvpGetVideoPortFlipStatus" },
	{ 459, "NtGdiDvpGetVideoPortInputFormats" },
	{ 460, "NtGdiDvpGetVideoPortLine" },
	{ 461, "NtGdiDvpGetVideoPortOutputFormats" },
	{ 462, "NtGdiDvpGetVideoSignalStatus" },
	{ 463, "NtGdiDvpReleaseNotification" },
	{ 464, "NtGdiDvpUpdateVideoPort" },
	{ 465, "NtGdiDvpWaitForVideoPortSync" },
	{ 466, "NtGdiDxgGenericThunk" },
	{ 467, "NtGdiEllipse" },
	{ 468, "NtGdiEnableEudc" },
	{ 469, "NtGdiEndDoc" },
	{ 470, "NtGdiEndGdiRendering" },
	{ 471, "NtGdiEndPage" },
	{ 472, "NtGdiEngAlphaBlend" },
	{ 473, "NtGdiEngAssociateSurface" },
	{ 474, "NtGdiEngBitBlt" },
	{ 475, "NtGdiEngCheckAbort" },
	{ 476, "NtGdiEngComputeGlyphSet" },
	{ 477, "NtGdiEngCopyBits" },
	{ 478, "NtGdiEngCreateBitmap" },
	{ 479, "NtGdiEngCreateClip" },
	{ 480, "NtGdiEngCreateDeviceBitmap" },
	{ 481, "NtGdiEngCreateDeviceSurface" },
	{ 482, "NtGdiEngCreatePalette" },
	{ 483, "NtGdiEngDeleteClip" },
	{ 484, "NtGdiEngDeletePalette" },
	{ 485, "NtGdiEngDeletePath" },
	{ 486, "NtGdiEngDeleteSurface" },
	{ 487, "NtGdiEngEraseSurface" },
	{ 488, "NtGdiEngFillPath" },
	{ 489, "NtGdiEngGradientFill" },
	{ 490, "NtGdiEngLineTo" },
	{ 491, "NtGdiEngLockSurface" },
	{ 492, "NtGdiEngMarkBandingSurface" },
	{ 493, "NtGdiEngPaint" },
	{ 494, "NtGdiEngPlgBlt" },
	{ 495, "NtGdiEngStretchBlt" },
	{ 496, "NtGdiEngStretchBltROP" },
	{ 497, "NtGdiEngStrokeAndFillPath" },
	{ 498, "NtGdiEngStrokePath" },
	{ 499, "NtGdiEngTextOut" },
	{ 500, "NtGdiEngTransparentBlt" },
	{ 501, "NtGdiEngUnlockSurface" },
	{ 502, "NtGdiEnumFonts" },
	{ 503, "NtGdiEnumObjects" },
	{ 504, "NtGdiEudcLoadUnloadLink" },
	{ 505, "NtGdiExtFloodFill" },
	{ 506, "NtGdiFONTOBJ_cGetAllGlyphHandles" },
	{ 507, "NtGdiFONTOBJ_cGetGlyphs" },
	{ 508, "NtGdiFONTOBJ_pQueryGlyphAttrs" },
	{ 509, "NtGdiFONTOBJ_pfdg" },
	{ 510, "NtGdiFONTOBJ_pifi" },
	{ 511, "NtGdiFONTOBJ_pvTrueTypeFontFile" },
	{ 512, "NtGdiFONTOBJ_pxoGetXform" },
	{ 513, "NtGdiFONTOBJ_vGetInfo" },
	{ 514, "NtGdiFlattenPath" },
	{ 515, "NtGdiFontIsLinked" },
	{ 516, "NtGdiForceUFIMapping" },
	{ 517, "NtGdiFrameRgn" },
	{ 518, "NtGdiFullscreenControl" },
	{ 519, "NtGdiGetBoundsRect" },
	{ 520, "NtGdiGetCOPPCompatibleOPMInformation" },
	{ 521, "NtGdiGetCertificate" },
	{ 522, "NtGdiGetCertificateSize" },
	{ 523, "NtGdiGetCharABCWidthsW" },
	{ 524, "NtGdiGetCharacterPlacementW" },
	{ 525, "NtGdiGetColorAdjustment" },
	{ 526, "NtGdiGetColorSpaceforBitmap" },
	{ 527, "NtGdiGetDeviceCaps" },
	{ 528, "NtGdiGetDeviceCapsAll" },
	{ 529, "NtGdiGetDeviceGammaRamp" },
	{ 530, "NtGdiGetDeviceWidth" },
	{ 531, "NtGdiGetDhpdev" },
	{ 532, "NtGdiGetETM" },
	{ 533, "NtGdiGetEmbUFI" },
	{ 534, "NtGdiGetEmbedFonts" },
	{ 535, "NtGdiGetEudcTimeStampEx" },
	{ 536, "NtGdiGetFontFileData" },
	{ 537, "NtGdiGetFontFileInfo" },
	{ 538, "NtGdiGetFontResourceInfoInternalW" },
	{ 539, "NtGdiGetFontUnicodeRanges" },
	{ 540, "NtGdiGetGlyphIndicesW" },
	{ 541, "NtGdiGetGlyphIndicesWInternal" },
	{ 542, "NtGdiGetGlyphOutline" },
	{ 543, "NtGdiGetKerningPairs" },
	{ 544, "NtGdiGetLinkedUFIs" },
	{ 545, "NtGdiGetMiterLimit" },
	{ 546, "NtGdiGetMonitorID" },
	{ 547, "NtGdiGetNumberOfPhysicalMonitors" },
	{ 548, "NtGdiGetOPMInformation" },
	{ 549, "NtGdiGetOPMRandomNumber" },
	{ 550, "NtGdiGetObjectBitmapHandle" },
	{ 551, "NtGdiGetPath" },
	{ 552, "NtGdiGetPerBandInfo" },
	{ 553, "NtGdiGetPhysicalMonitorDescription" },
	{ 554, "NtGdiGetPhysicalMonitors" },
	{ 555, "NtGdiGetRealizationInfo" },
	{ 556, "NtGdiGetServerMetaFileBits" },
	{ 557, "DxgStubAlphaBlt" },
	{ 558, "NtGdiGetStats" },
	{ 559, "NtGdiGetStringBitmapW" },
	{ 560, "NtGdiGetSuggestedOPMProtectedOutputArraySize" },
	{ 561, "NtGdiGetTextExtentExW" },
	{ 562, "NtGdiGetUFI" },
	{ 563, "NtGdiGetUFIPathname" },
	{ 564, "NtGdiGradientFill" },
	{ 565, "NtGdiHLSurfGetInformation" },
	{ 566, "NtGdiHLSurfSetInformation" },
	{ 567, "NtGdiHT_Get8BPPFormatPalette" },
	{ 568, "NtGdiHT_Get8BPPMaskPalette" },
	{ 569, "NtGdiIcmBrushInfo" },
	{ 570, "EngRestoreFloatingPointState" },
	{ 571, "NtGdiInitSpool" },
	{ 572, "NtGdiMakeFontDir" },
	{ 573, "NtGdiMakeInfoDC" },
	{ 574, "NtGdiMakeObjectUnXferable" },
	{ 575, "NtGdiMakeObjectXferable" },
	{ 576, "NtGdiMirrorWindowOrg" },
	{ 577, "NtGdiMonoBitmap" },
	{ 578, "NtGdiMoveTo" },
	{ 579, "NtGdiOffsetClipRgn" },
	{ 580, "NtGdiPATHOBJ_bEnum" },
	{ 581, "NtGdiPATHOBJ_bEnumClipLines" },
	{ 582, "NtGdiPATHOBJ_vEnumStart" },
	{ 583, "NtGdiPATHOBJ_vEnumStartClipLines" },
	{ 584, "NtGdiPATHOBJ_vGetBounds" },
	{ 585, "NtGdiPathToRegion" },
	{ 586, "NtGdiPlgBlt" },
	{ 587, "NtGdiPolyDraw" },
	{ 588, "NtGdiPolyTextOutW" },
	{ 589, "NtGdiPtInRegion" },
	{ 590, "NtGdiPtVisible" },
	{ 591, "NtGdiQueryFonts" },
	{ 592, "NtGdiRemoveFontResourceW" },
	{ 593, "NtGdiRemoveMergeFont" },
	{ 594, "NtGdiResetDC" },
	{ 595, "NtGdiResizePalette" },
	{ 596, "NtGdiRoundRect" },
	{ 597, "NtGdiSTROBJ_bEnum" },
	{ 598, "NtGdiSTROBJ_bEnumPositionsOnly" },
	{ 599, "NtGdiSTROBJ_bGetAdvanceWidths" },
	{ 600, "NtGdiSTROBJ_dwGetCodePage" },
	{ 601, "NtGdiSTROBJ_vEnumStart" },
	{ 602, "NtGdiScaleViewportExtEx" },
	{ 603, "NtGdiScaleWindowExtEx" },
	{ 604, "NtGdiSelectBrush" },
	{ 605, "NtGdiSelectClipPath" },
	{ 606, "NtGdiSelectPen" },
	{ 607, "NtGdiSetBitmapAttributes" },
	{ 608, "NtGdiSetBrushAttributes" },
	{ 609, "NtGdiSetColorAdjustment" },
	{ 610, "NtGdiSetColorSpace" },
	{ 611, "NtGdiSetDeviceGammaRamp" },
	{ 612, "NtGdiSetFontXform" },
	{ 613, "NtGdiSetIcmMode" },
	{ 614, "NtGdiSetLinkedUFIs" },
	{ 615, "NtGdiSetMagicColors" },
	{ 616, "NtGdiSetOPMSigningKeyAndSequenceNumbers" },
	{ 617, "NtGdiSetPUMPDOBJ" },
	{ 618, "NtGdiSetPixelFormat" },
	{ 619, "NtGdiSetRectRgn" },
	{ 620, "NtGdiSetSizeDevice" },
	{ 621, "NtGdiSetSystemPaletteUse" },
	{ 622, "NtGdiSetTextJustification" },
	{ 623, "NtGdiSfmGetNotificationTokens" },
	{ 624, "NtGdiStartDoc" },
	{ 625, "NtGdiStartPage" },
	{ 626, "NtGdiStrokeAndFillPath" },
	{ 627, "NtGdiStrokePath" },
	{ 628, "NtGdiSwapBuffers" },
	{ 629, "NtGdiTransparentBlt" },
	{ 630, "NtGdiUMPDEngFreeUserMem" },
	{ 631, "DxgStubAlphaBlt" },
	{ 632, "EngRestoreFloatingPointState" },
	{ 633, "NtGdiUpdateColors" },
	{ 634, "NtGdiUpdateTransform" },
	{ 635, "NtGdiWidenPath" },
	{ 636, "NtGdiXFORMOBJ_bApplyXform" },
	{ 637, "NtGdiXFORMOBJ_iGetXform" },
	{ 638, "NtGdiXLATEOBJ_cGetPalette" },
	{ 639, "NtGdiXLATEOBJ_hGetColorTransform" },
	{ 640, "NtGdiXLATEOBJ_iXlate" },
	{ 641, "NtUserAddClipboardFormatListener" },
	{ 642, "NtUserAssociateInputContext" },
	{ 643, "NtUserBlockInput" },
	{ 644, "NtUserBuildHimcList" },
	{ 645, "NtUserBuildPropList" },
	{ 646, "NtUserCalculatePopupWindowPosition" },
	{ 647, "NtUserCallHwndOpt" },
	{ 648, "NtUserChangeDisplaySettings" },
	{ 649, "NtUserChangeWindowMessageFilterEx" },
	{ 650, "NtUserCheckAccessForIntegrityLevel" },
	{ 651, "NtUserCheckDesktopByThreadId" },
	{ 652, "NtUserCheckWindowThreadDesktop" },
	{ 653, "NtUserChildWindowFromPointEx" },
	{ 654, "NtUserClipCursor" },
	{ 655, "NtUserCreateDesktopEx" },
	{ 656, "NtUserCreateInputContext" },
	{ 657, "NtUserCreateWindowStation" },
	{ 658, "NtUserCtxDisplayIOCtl" },
	{ 659, "NtUserDestroyInputContext" },
	{ 660, "NtUserDisableThreadIme" },
	{ 661, "NtUserDisplayConfigGetDeviceInfo" },
	{ 662, "NtUserDisplayConfigSetDeviceInfo" },
	{ 663, "NtUserDoSoundConnect" },
	{ 664, "NtUserDoSoundDisconnect" },
	{ 665, "NtUserDragDetect" },
	{ 666, "NtUserDragObject" },
	{ 667, "NtUserDrawAnimatedRects" },
	{ 668, "NtUserDrawCaption" },
	{ 669, "NtUserDrawCaptionTemp" },
	{ 670, "NtUserDrawMenuBarTemp" },
	{ 671, "NtUserDwmStartRedirection" },
	{ 672, "NtUserDwmStopRedirection" },
	{ 673, "NtUserEndMenu" },
	{ 674, "NtUserEndTouchOperation" },
	{ 675, "NtUserEvent" },
	{ 676, "NtUserFlashWindowEx" },
	{ 677, "NtUserFrostCrashedWindow" },
	{ 678, "NtUserGetAppImeLevel" },
	{ 679, "NtUserGetCaretPos" },
	{ 680, "NtUserGetClipCursor" },
	{ 681, "NtUserGetClipboardViewer" },
	{ 682, "NtUserGetComboBoxInfo" },
	{ 683, "NtUserGetCursorInfo" },
	{ 684, "NtUserGetDisplayConfigBufferSizes" },
	{ 685, "NtUserGetGestureConfig" },
	{ 686, "NtUserGetGestureExtArgs" },
	{ 687, "NtUserGetGestureInfo" },
	{ 688, "NtUserGetGuiResources" },
	{ 689, "NtUserGetImeHotKey" },
	{ 690, "NtUserGetImeInfoEx" },
	{ 691, "NtUserGetInputLocaleInfo" },
	{ 692, "NtUserGetInternalWindowPos" },
	{ 693, "NtUserGetKeyNameText" },
	{ 694, "NtUserGetKeyboardLayoutName" },
	{ 695, "NtUserGetLayeredWindowAttributes" },
	{ 696, "NtUserGetListBoxInfo" },
	{ 697, "NtUserGetMenuIndex" },
	{ 698, "NtUserGetMenuItemRect" },
	{ 699, "NtUserGetMouseMovePointsEx" },
	{ 700, "NtUserGetPriorityClipboardFormat" },
	{ 701, "NtUserGetRawInputBuffer" },
	{ 702, "NtUserGetRawInputData" },
	{ 703, "NtUserGetRawInputDeviceInfo" },
	{ 704, "NtUserGetRawInputDeviceList" },
	{ 705, "NtUserGetRegisteredRawInputDevices" },
	{ 706, "NtUserGetTopLevelWindow" },
	{ 707, "NtUserGetTouchInputInfo" },
	{ 708, "NtUserGetUpdatedClipboardFormats" },
	{ 709, "NtUserGetWOWClass" },
	{ 710, "NtUserGetWindowCompositionAttribute" },
	{ 711, "NtUserGetWindowCompositionInfo" },
	{ 712, "NtUserGetWindowDisplayAffinity" },
	{ 713, "NtUserGetWindowMinimizeRect" },
	{ 714, "NtUserGetWindowRgnEx" },
	{ 715, "NtUserGhostWindowFromHungWindow" },
	{ 716, "NtUserHardErrorControl" },
	{ 717, "NtUserHiliteMenuItem" },
	{ 718, "NtUserHungWindowFromGhostWindow" },
	{ 719, "NtUserHwndQueryRedirectionInfo" },
	{ 720, "NtUserHwndSetRedirectionInfo" },
	{ 721, "NtUserImpersonateDdeClientWindow" },
	{ 722, "NtUserInitTask" },
	{ 723, "NtUserInitialize" },
	{ 724, "NtUserInitializeClientPfnArrays" },
	{ 725, "NtUserInjectGesture" },
	{ 726, "NtUserInternalGetWindowIcon" },
	{ 727, "NtUserIsTopLevelWindow" },
	{ 728, "NtUserIsTouchWindow" },
	{ 729, "NtUserLoadKeyboardLayoutEx" },
	{ 730, "NtUserLockWindowStation" },
	{ 731, "NtUserLockWorkStation" },
	{ 732, "NtUserLogicalToPhysicalPoint" },
	{ 733, "NtUserMNDragLeave" },
	{ 734, "NtUserMNDragOver" },
	{ 735, "NtUserMagControl" },
	{ 736, "NtUserMagGetContextInformation" },
	{ 737, "NtUserMagSetContextInformation" },
	{ 738, "NtUserManageGestureHandlerWindow" },
	{ 739, "NtUserMenuItemFromPoint" },
	{ 740, "NtUserMinMaximize" },
	{ 741, "NtUserModifyWindowTouchCapability" },
	{ 742, "NtUserNotifyIMEStatus" },
	{ 743, "NtUserOpenInputDesktop" },
	{ 744, "NtUserOpenThreadDesktop" },
	{ 745, "NtUserPaintMonitor" },
	{ 746, "NtUserPhysicalToLogicalPoint" },
	{ 747, "NtUserPrintWindow" },
	{ 748, "NtUserQueryDisplayConfig" },
	{ 749, "NtUserQueryInformationThread" },
	{ 750, "NtUserQueryInputContext" },
	{ 751, "NtUserQuerySendMessage" },
	{ 752, "NtUserRealChildWindowFromPoint" },
	{ 753, "NtUserRealWaitMessageEx" },
	{ 754, "NtUserRegisterErrorReportingDialog" },
	{ 755, "NtUserRegisterHotKey" },
	{ 756, "NtUserRegisterRawInputDevices" },
	{ 757, "NtUserRegisterServicesProcess" },
	{ 758, "NtUserRegisterSessionPort" },
	{ 759, "NtUserRegisterTasklist" },
	{ 760, "NtUserRegisterUserApiHook" },
	{ 761, "NtUserRemoteConnect" },
	{ 762, "NtUserRemoteRedrawRectangle" },
	{ 763, "NtUserRemoteRedrawScreen" },
	{ 764, "NtUserRemoteStopScreenUpdates" },
	{ 765, "NtUserRemoveClipboardFormatListener" },
	{ 766, "NtUserResolveDesktopForWOW" },
	{ 767, "NtUserSendTouchInput" },
	{ 768, "NtUserSetAppImeLevel" },
	{ 769, "NtUserSetChildWindowNoActivate" },
	{ 770, "NtUserSetClassWord" },
	{ 771, "NtUserSetCursorContents" },
	{ 772, "NtUserSetDisplayConfig" },
	{ 773, "NtUserSetGestureConfig" },
	{ 774, "NtUserSetImeHotKey" },
	{ 775, "NtUserSetImeInfoEx" },
	{ 776, "NtUserSetImeOwnerWindow" },
	{ 777, "NtUserSetInternalWindowPos" },
	{ 778, "NtUserSetLayeredWindowAttributes" },
	{ 779, "NtUserSetMenu" },
	{ 780, "NtUserSetMenuContextHelpId" },
	{ 781, "NtUserSetMenuFlagRtoL" },
	{ 782, "NtUserSetMirrorRendering" },
	{ 783, "NtUserSetObjectInformation" },
	{ 784, "NtUserSetProcessDPIAware" },
	{ 785, "NtUserSetShellWindowEx" },
	{ 786, "NtUserSetSysColors" },
	{ 787, "NtUserSetSystemCursor" },
	{ 788, "NtUserSetSystemTimer" },
	{ 789, "NtUserSetThreadLayoutHandles" },
	{ 790, "NtUserSetWindowCompositionAttribute" },
	{ 791, "NtUserSetWindowDisplayAffinity" },
	{ 792, "NtUserSetWindowRgnEx" },
	{ 793, "NtUserSetWindowStationUser" },
	{ 794, "NtUserSfmDestroyLogicalSurfaceBinding" },
	{ 795, "NtUserSfmDxBindSwapChain" },
	{ 796, "NtUserSfmDxGetSwapChainStats" },
	{ 797, "NtUserSfmDxOpenSwapChain" },
	{ 798, "NtUserSfmDxQuerySwapChainBindingStatus" },
	{ 799, "NtUserSfmDxReleaseSwapChain" },
	{ 800, "NtUserSfmDxReportPendingBindingsToDwm" },
	{ 801, "NtUserSfmDxSetSwapChainBindingStatus" },
	{ 802, "NtUserSfmDxSetSwapChainStats" },
	{ 803, "NtUserSfmGetLogicalSurfaceBinding" },
	{ 804, "NtUserShowSystemCursor" },
	{ 805, "NtUserSoundSentry" },
	{ 806, "NtUserSwitchDesktop" },
	{ 807, "NtUserTestForInteractiveUser" },
	{ 808, "NtUserTrackPopupMenuEx" },
	{ 809, "NtUserUnloadKeyboardLayout" },
	{ 810, "NtUserUnlockWindowStation" },
	{ 811, "NtUserUnregisterHotKey" },
	{ 812, "NtUserUnregisterSessionPort" },
	{ 813, "NtUserUnregisterUserApiHook" },
	{ 814, "NtUserUpdateInputContext" },
	{ 815, "NtUserUpdateInstance" },
	{ 816, "NtUserUpdateLayeredWindow" },
	{ 817, "NtUserUpdatePerUserSystemParameters" },
	{ 818, "NtUserUpdateWindowTransform" },
	{ 819, "NtUserUserHandleGrantAccess" },
	{ 820, "NtUserValidateHandleSecure" },
	{ 821, "NtUserWaitForInputIdle" },
	{ 822, "NtUserWaitForMsgAndEvent" },
	{ 823, "NtUserWindowFromPhysicalPoint" },
	{ 824, "NtUserYieldTask" },
	{ 825, "NtUserSetClassLongPtr" },
	{ 826, "NtUserSetWindowLongPtr" }
			};



			//以下直接调用的shadow ssdt函数都会检查地址空间是否在用户空间内


			HWND GetForegroundWindow()
			{

				pNtUserGetForegroundWindow NtUserGetForegroundWindow = reinterpret_cast<pNtUserGetForegroundWindow>(Driver::FindSSDT::GetSSDTShadowFunctionAddress(60));
				if (!NtUserGetForegroundWindow)
					return NULL;
				KAPC_STATE apcstate;
				KeStackAttachProcess(WinProcess, &apcstate);
				HWND ret = NtUserGetForegroundWindow();
				KeUnstackDetachProcess(&apcstate);
				return ret;
			}


			HDC GetDC(HWND hWnd)
			{
				pNtUserGetDC NtUserGetDC = reinterpret_cast<pNtUserGetDC>(Driver::FindSSDT::GetSSDTShadowFunctionAddress(10));
				if (!NtUserGetDC)
					return NULL;
				KAPC_STATE apcstate;
				KeStackAttachProcess(WinProcess, &apcstate);
				HDC ret = NtUserGetDC(hWnd);
				KeUnstackDetachProcess(&apcstate);
				return ret;
			}


			//kd > uf NtUserCallOneParam
			//win32k!NtUserCallOneParam:
			//fffff960`001b3f6c 48895c2408      mov     qword ptr[rsp + 8], rbx
			//fffff960`001b3f71 57              push    rdi
			//fffff960`001b3f72 4883ec20        sub     rsp, 20h
			//fffff960`001b3f76 488bd9          mov     rbx, rcx
			//fffff960`001b3f79 488b0d98a92000  mov     rcx, qword ptr[win32k!gpresUser(fffff960`003be918)]
			//fffff960`001b3f80 8bfa            mov     edi, edx //这里传入第二个参数 也就是下标
			//fffff960`001b3f82 83fa3b          cmp     edx, 3Bh
			//fffff960`001b3f85 7508            jne     win32k!NtUserCallOneParam + 0x23 (fffff960`001b3f8f)
			//
			//win32k!NtUserCallOneParam + 0x1b:
			//fffff960`001b3f87 ff15f3d41c00    call    qword ptr[win32k!_imp_ExEnterPriorityRegionAndAcquireResourceShared(fffff960`00381480)]
			//fffff960`001b3f8d eb1e            jmp     win32k!NtUserCallOneParam + 0x41 (fffff960`001b3fad)
			//
			//win32k!NtUserCallOneParam + 0x23:
			//fffff960`001b3f8f ff15dbd41c00    call    qword ptr[win32k!_imp_ExEnterPriorityRegionAndAcquireResourceExclusive(fffff960`00381470)]
			//fffff960`001b3f95 c6050ca0200001  mov     byte ptr[win32k!gbValidateHandleForIL(fffff960`003bdfa8)], 1
			//fffff960`001b3f9c 4889054dc52000  mov     qword ptr[win32k!gptiCurrent(fffff960`003c04f0)], rax
			//fffff960`001b3fa3 83ff22          cmp     edi, 22h
			//fffff960`001b3fa6 7227            jb      win32k!NtUserCallOneParam + 0x63 (fffff960`001b3fcf)
			//
			//win32k!NtUserCallOneParam + 0x3c:
			//fffff960`001b3fa8 83ff47          cmp     edi, 47h
			//fffff960`001b3fab 7322            jae     win32k!NtUserCallOneParam + 0x63 (fffff960`001b3fcf)
			//
			//	win32k!NtUserCallOneParam + 0x41:
			//fffff960`001b3fad 488d154c3d1d00  lea     rdx, [win32k!apfnSimpleCall(fffff960`00387d00)]
			//fffff960`001b3fb4 488bcb          mov     rcx, rbx
			//fffff960`001b3fb7 ff14fa          call    qword ptr[rdx + rdi * 8]   //关键call,下标在rdi
			//
			BOOL ReleaseDC(HWND hWnd, HDC hdc)
			{
				pNtUserCallOneParam  NtUserCallOneParam = reinterpret_cast<pNtUserCallOneParam>(Driver::FindSSDT::GetSSDTShadowFunctionAddress(2));
				if (!NtUserCallOneParam)
					return FALSE;
				KAPC_STATE apcstate;
				KeStackAttachProcess(WinProcess, &apcstate);
				BOOL ret = (BOOL)NtUserCallOneParam(reinterpret_cast<DWORD_PTR>(hdc), 0x3b); ////ReleaseDc 0x3b
				KeUnstackDetachProcess(&apcstate);
				return ret;
			}





			HWND FindWindowW(LPCWSTR lpClassName, LPCWSTR lpWindowName)
			{
				//__debugbreak();
				//DbgPrint("process id: %lld", PsGetCurrentProcessId(PsGetCurrentProcess()));
				pNtUserFindWindowEx NtUserFindWindowEx = reinterpret_cast<pNtUserFindWindowEx>(Driver::FindSSDT::GetSSDTShadowFunctionAddress(110));
				if (!NtUserFindWindowEx)
					return NULL;
				SIZE_T allocSize = sizeof(UNICODE_STRING) * 2 + MAX_PATH * sizeof(WCHAR) * 2;
				SIZE_T ModuleBase = Driver::Process::GetMoudleBase(WinProcess);
				DbgPrint("Process Base: %llx", ModuleBase);

				//操作内存要在目标进程空间
				KAPC_STATE apcstate;
				KeStackAttachProcess(WinProcess, &apcstate);
				//在用户空间申请内存
				HANDLE ProcessHandle = NULL;
				//根据eprocess获取进程句柄
				auto ns = ObOpenObjectByPointer(WinProcess, OBJ_KERNEL_HANDLE, NULL, PROCESS_ALL_ACCESS, *PsProcessType, KernelMode, (PHANDLE)&ProcessHandle);

				if (!NT_SUCCESS(ns))
				{
					KeUnstackDetachProcess(&apcstate);
					DbgPrint("%s,ObOpenObjectByPointer failed\n");
					return NULL;
				}
				PVOID temp = Driver::Memory::AllocateInjectMemory(ProcessHandle, (PVOID)ModuleBase, &allocSize);
				if (!temp) {
					KeUnstackDetachProcess(&apcstate);
					DbgPrint("alloc memory failed");
					return NULL;
				}
				if (allocSize < sizeof(UNICODE_STRING) * 2 + MAX_PATH * sizeof(WCHAR) * 2) {
					KeUnstackDetachProcess(&apcstate);
					DbgPrint("alloc memory failed 2");
					return NULL;
				}
				PUCHAR pBuffer = (PUCHAR)temp;
				RtlZeroMemory(pBuffer, allocSize);
				PUNICODE_STRING usClassName = (PUNICODE_STRING)(pBuffer);
				PUNICODE_STRING usWindowName = (PUNICODE_STRING)(pBuffer + sizeof(UNICODE_STRING));
				PUCHAR str_buffer = pBuffer + sizeof(UNICODE_STRING) * 2;
				if (lpClassName)
				{
					RtlCopyMemory(str_buffer, lpClassName, sizeof(WCHAR)*wcslen(lpClassName));
					RtlInitUnicodeString(usClassName, (PCWSTR)str_buffer);
					str_buffer += sizeof(WCHAR)*(wcslen(lpClassName) + 1);
				}
				if (lpWindowName)
				{
					RtlCopyMemory(str_buffer, lpWindowName, sizeof(WCHAR)*wcslen(lpWindowName));
					RtlInitUnicodeString(usWindowName, (PCWSTR)str_buffer);
				}

				HWND ret = NtUserFindWindowEx(NULL, NULL, usClassName, usWindowName, 0);
				if (!NT_SUCCESS(Driver::Memory::FreeInjectMemory(ProcessHandle, &temp)))
				{
					KeUnstackDetachProcess(&apcstate);
					DbgPrint("realease memory failed\n");
					return NULL;
				}
				KeUnstackDetachProcess(&apcstate);
				return ret;
			}


			BOOL TextOutW(
				HDC hdc,
				INT x,
				INT y,
				LPCWSTR lpString,
				INT size)
			{
				pNtGdiExtTextOutW NtGdiExtTextOutW = reinterpret_cast<pNtGdiExtTextOutW>(Driver::FindSSDT::GetSSDTShadowFunctionAddress(56));
				if (!NtGdiExtTextOutW)
					return FALSE;
				SIZE_T  allocSize = (size + 1) * sizeof(WCHAR);
				SIZE_T  ModuleBase = Driver::Process::GetMoudleBase(WinProcess);
				HANDLE  ProcessHandle = NULL;
				KAPC_STATE apcstate;
				KeStackAttachProcess(WinProcess, &apcstate);
				auto ns = ObOpenObjectByPointer(WinProcess, OBJ_KERNEL_HANDLE, NULL, PROCESS_ALL_ACCESS, *PsProcessType, KernelMode, (PHANDLE)&ProcessHandle);
				if (!NT_SUCCESS(ns))
				{
					KeUnstackDetachProcess(&apcstate);
					DbgPrint("%s,ObOpenObjectByPointer failed\n");
					return NULL;
				}
				PVOID buffer = Driver::Memory::AllocateInjectMemory(ProcessHandle, (PVOID)ModuleBase, &allocSize);
				if (!buffer) {
					DbgPrint("alloc memory failed");
					KeUnstackDetachProcess(&apcstate);
					return FALSE;
				}
				if (allocSize < (size + 1) * sizeof(WCHAR)) {
					DbgPrint("alloc memory failed 2");
					KeUnstackDetachProcess(&apcstate);
					return FALSE;
				}
				RtlZeroMemory(buffer, allocSize);
				RtlCopyMemory(buffer, lpString, size * sizeof(WCHAR));
				DbgPrint("%ws", buffer);
				BOOL ret = NtGdiExtTextOutW(hdc, x, y, 0, NULL, (LPWSTR)buffer, size, NULL, 0);
				if (!NT_SUCCESS(Driver::Memory::FreeInjectMemory(ProcessHandle, &buffer)))
				{
					DbgPrint("realease memory failed\n");
					KeUnstackDetachProcess(&apcstate);
					return FALSE;
				}
				KeUnstackDetachProcess(&apcstate);
				return ret;
			}



			BOOL Polyline(_In_ HDC hdc, _In_reads_(cpt) CONST POINT * apt, _In_ DWORD cpt)
			{
				pNtGdiPolyPolyDraw NtGdiPolyPolyDraw = reinterpret_cast<pNtGdiPolyPolyDraw>(Driver::FindSSDT::GetSSDTShadowFunctionAddress(56));
				if (!NtGdiPolyPolyDraw)
					return FALSE;
				//多4字节预留给数量
				SIZE_T allocSize = sizeof(POINT)*cpt + sizeof(DWORD);
				SIZE_T  ModuleBase = Driver::Process::GetMoudleBase(WinProcess);
				HANDLE  ProcessHandle = NULL;
				KAPC_STATE apcstate;
				KeStackAttachProcess(WinProcess, &apcstate);
				auto ns = ObOpenObjectByPointer(WinProcess, OBJ_KERNEL_HANDLE, NULL, PROCESS_ALL_ACCESS, *PsProcessType, KernelMode, (PHANDLE)&ProcessHandle);
				if (!NT_SUCCESS(ns))
				{
					KeUnstackDetachProcess(&apcstate);
					DbgPrint("%s,ObOpenObjectByPointer failed\n");
					return NULL;
				}
				PVOID buffer = Driver::Memory::AllocateInjectMemory(ProcessHandle, (PVOID)ModuleBase, &allocSize);
				if (!buffer) {
					KeUnstackDetachProcess(&apcstate);
					DbgPrint("alloc memory failed");
					return FALSE;
				}
				if (allocSize < sizeof(POINT)*cpt + sizeof(DWORD)) {
					KeUnstackDetachProcess(&apcstate);
					DbgPrint("alloc memory failed2");
					return FALSE;
				}
				RtlZeroMemory(buffer, allocSize);
				RtlCopyMemory(buffer, apt, sizeof(POINT)*cpt);
				PDWORD lpcpt = (PDWORD)((PUCHAR)buffer + sizeof(POINT)*cpt);
				*lpcpt = cpt;
				BOOL ret = NtGdiPolyPolyDraw(hdc, (PPOINT)buffer, lpcpt, 1, 2);
				if (!NT_SUCCESS(Driver::Memory::FreeInjectMemory(ProcessHandle, &buffer)))
				{
					DbgPrint("realease memory failed\n");
					KeUnstackDetachProcess(&apcstate);
					return FALSE;
				}
				KeUnstackDetachProcess(&apcstate);
				return ret;
			}
		}
	}
}