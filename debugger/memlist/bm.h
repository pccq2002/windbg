/*** bm.h - Memory Manager routines
*
*   Copyright <C> 1990, Microsoft Corporation
*
* Purpose:  handle the near and far memory requests of dlls & linked list
*
*
*************************************************************************/

BOOL   BMInit ( VOID );
HMEM   BMAlloc ( UINT );
HMEM   BMRealloc ( HMEM, UINT );
VOID   BMFree ( HMEM );
LPV    BMLock ( HMEM );
VOID   BMUnlock ( HMEM );
BOOL   BMIsLocked ( HMEM );
