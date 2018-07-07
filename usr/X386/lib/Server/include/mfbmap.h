/* $XFree86: mit/server/ddx/mfb/mfbmap.h,v 1.3 1993/02/27 04:31:11 dawes Exp $ */

#if __STDC__ && !defined(UNIXCPP)
#define CATNAME(prefix,subname) prefix##subname
#else
#define CATNAME(prefix,subname) prefix/**/subname
#endif

#ifdef CUSTOMNAME

#define InverseAlu CUSTOMNAME(_InverseAlu)
#define starttab CUSTOMNAME(_starttab)
#define endtab CUSTOMNAME(_endtab)
#define partmasks CUSTOMNAME(_partmasks)
#define mask CUSTOMNAME(_mask)
#define rmask CUSTOMNAME(_rmask)
#define mergeRopBits CUSTOMNAME(_mergeRopBits)
#define mfbBSFuncRec CUSTOMNAME(_mfbBSFuncRec)
#define mfbWindowPrivateIndex CUSTOMNAME(_mfbWindowPrivateIndex)
#define mfbGCPrivateIndex CUSTOMNAME(_mfbGCPrivateIndex)
#define mfbValidateGC CUSTOMNAME(_mfbValidateGC)
#define mfbChangeGC CUSTOMNAME(_mfbChangeGC)
#define mfbCopyGC CUSTOMNAME(_mfbCopyGC)
#define mfbDestroyGC CUSTOMNAME(_mfbDestroyGC)
#define mfbChangeClip CUSTOMNAME(_mfbChangeClip)
#define mfbDestroyClip CUSTOMNAME(_mfbDestroyClip)
#define mfbCopyClip CUSTOMNAME(_mfbCopyClip)
#define mfbCreateGC CUSTOMNAME(_mfbCreateGC)
#define mfbReduceRop CUSTOMNAME(_mfbReduceRop)
#define mfbCreateWindow CUSTOMNAME(_mfbCreateWindow)
#define mfbDestroyWindow CUSTOMNAME(_mfbDestroyWindow)
#define mfbMapWindow CUSTOMNAME(_mfbMapWindow)
#define mfbPositionWindow CUSTOMNAME(_mfbPositionWindow)
#define mfbUnmapWindow CUSTOMNAME(_mfbUnmapWindow)
#define mfbCopyWindow CUSTOMNAME(_mfbCopyWindow)
#define mfbChangeWindowAttributes CUSTOMNAME(_mfbChangeWindowAttributes)
#define mfbRealizeFont CUSTOMNAME(_mfbRealizeFont)
#define mfbUnrealizeFont CUSTOMNAME(_mfbUnrealizeFont)
#define mfbPolyFillRect CUSTOMNAME(_mfbPolyFillRect)
#define mfbPaintWindow CUSTOMNAME(_mfbPaintWindow)
#define mfbCreatePixmap CUSTOMNAME(_mfbCreatePixmap)
#define mfbDestroyPixmap CUSTOMNAME(_mfbDestroyPixmap)
#define mfbCopyPixmap CUSTOMNAME(_mfbCopyPixmap)
#define mfbPadPixmap CUSTOMNAME(_mfbPadPixmap)
#define mfbXRotatePixmap CUSTOMNAME(_mfbXRotatePixmap)
#define mfbYRotatePixmap CUSTOMNAME(_mfbYRotatePixmap)
#define mfbCopyRotatePixmap CUSTOMNAME(_mfbCopyRotatePixmap)
#define mfbPutImage CUSTOMNAME(_mfbPutImage)
#define mfbGetImage CUSTOMNAME(_mfbGetImage)
#define mfbLineSS CUSTOMNAME(_mfbLineSS)
#define mfbClipLine CUSTOMNAME(_mfbClipLine)
#define mfbLineSD CUSTOMNAME(_mfbLineSD)
#define mfbBresS CUSTOMNAME(_mfbBresS)
#define mfbHorzS CUSTOMNAME(_mfbHorzS)
#define mfbVertS CUSTOMNAME(_mfbVertS)
#define mfbBresD CUSTOMNAME(_mfbBresD)
#define mfbSegmentSS CUSTOMNAME(_mfbSegmentSS)
#define mfbSegmentSD CUSTOMNAME(_mfbSegmentSD)
#define mfbSolidPP CUSTOMNAME(_mfbSolidPP)
#define mfbPushPixels CUSTOMNAME(_mfbPushPixels)
#define mfbZeroPolyArcSS CUSTOMNAME(_mfbZeroPolyArcSS)
#define mfbPolyFillArcSolid CUSTOMNAME(_mfbPolyFillArcSolid)
#define mfbBlackSolidFS CUSTOMNAME(_mfbBlackSolidFS)
#define mfbWhiteSolidFS CUSTOMNAME(_mfbWhiteSolidFS)
#define mfbInvertSolidFS CUSTOMNAME(_mfbInvertSolidFS)
#define mfbWhiteStippleFS CUSTOMNAME(_mfbWhiteStippleFS)
#define mfbBlackStippleFS CUSTOMNAME(_mfbBlackStippleFS)
#define mfbInvertStippleFS CUSTOMNAME(_mfbInvertStippleFS)
#define mfbTileFS CUSTOMNAME(_mfbTileFS)
#define mfbUnnaturalTileFS CUSTOMNAME(_mfbUnnaturalTileFS)
#define mfbUnnaturalStippleFS CUSTOMNAME(_mfbUnnaturalStippleFS)
#define mfbSetScanline CUSTOMNAME(_mfbSetScanline)
#define mfbSetSpans CUSTOMNAME(_mfbSetSpans)
#define mfbAllocatePrivates CUSTOMNAME(_mfbAllocatePrivates)
#define mfbScreenInit CUSTOMNAME(_mfbScreenInit)
#define mfbCloseScreen CUSTOMNAME(_mfbCloseScreen)
#define mfbPixmapToRegion CUSTOMNAME(_mfbPixmapToRegion)
#define mfbDoBitblt CUSTOMNAME(_mfbDoBitblt)
#define mfbCopyArea CUSTOMNAME(_mfbCopyArea)
#define mfbRegisterCopyPlaneProc CUSTOMNAME(_mfbRegisterCopyPlaneProc)
#define mfbCopyPlane CUSTOMNAME(_mfbCopyPlane)
#define mfbGetSpans CUSTOMNAME(_mfbGetSpans)
#define mfbPolyPoint CUSTOMNAME(_mfbPolyPoint)
#define mfbDoBitbltCopy CUSTOMNAME(_mfbDoBitbltCopy)
#define mfbDoBitbltXor CUSTOMNAME(_mfbDoBitbltXor)
#define mfbDoBitbltCopyInverted CUSTOMNAME(_mfbDoBitbltCopyInverted)
#define mfbDoBitbltOr CUSTOMNAME(_mfbDoBitbltOr)
#define mfbDoBitbltGeneral CUSTOMNAME(_mfbDoBitbltGeneral)
#define mfbPolyGlyphBltWhite CUSTOMNAME(_mfbPolyGlyphBltWhite)
#define mfbPolyGlyphBltBlack CUSTOMNAME(_mfbPolyGlyphBltBlack)
#define mfbPolyGlyphBltInvert CUSTOMNAME(_mfbPolyGlyphBltInvert)
#define mfbImageGlyphBltWhite CUSTOMNAME(_mfbImageGlyphBltWhite)
#define mfbImageGlyphBltBlack CUSTOMNAME(_mfbImageGlyphBltBlack)
#define mfbListInstalledColormaps CUSTOMNAME(_mfbListInstalledColormaps)
#define mfbInstallColormap CUSTOMNAME(_mfbInstallColormap)
#define mfbUninstallColormap CUSTOMNAME(_mfbUninstallColormap)
#define mfbResolveColor CUSTOMNAME(_mfbResolveColor)
#define mfbCreateColormap CUSTOMNAME(_mfbCreateColormap)
#define mfbDestroyColormap CUSTOMNAME(_mfbDestroyColormap)
#define mfbCreateDefColormap CUSTOMNAME(_mfbCreateDefColormap)
#define mfbSolidWhiteArea CUSTOMNAME(_mfbSolidWhiteArea)
#define mfbStippleWhiteArea CUSTOMNAME(_mfbStippleWhiteArea)
#define mfbSolidBlackArea CUSTOMNAME(_mfbSolidBlackArea)
#define mfbStippleBlackArea CUSTOMNAME(_mfbStippleBlackArea)
#define mfbSolidInvertArea CUSTOMNAME(_mfbSolidInvertArea)
#define mfbStippleInvertArea CUSTOMNAME(_mfbStippleInvertArea)
#define mfbTileArea32Copy CUSTOMNAME(_mfbTileArea32Copy)
#define mfbTileArea32General CUSTOMNAME(_mfbTileArea32General)
#define mfbTileArea32 CUSTOMNAME(_mfbTileArea32)
#define mfbTEGlyphBltWhite CUSTOMNAME(_mfbTEGlyphBltWhite)
#define mfbTEGlyphBltBlack CUSTOMNAME(_mfbTEGlyphBltBlack)
#define mfbQueryBestSize CUSTOMNAME(_mfbQueryBestSize)
#define mfbSaveAreas CUSTOMNAME(_mfbSaveAreas)
#define mfbRestoreAreas CUSTOMNAME(_mfbRestoreAreas)

#endif