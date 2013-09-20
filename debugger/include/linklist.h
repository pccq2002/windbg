#ifndef _LINKLIST_
#define _LINKLIST_

#ifdef  __cplusplus
extern "C" {
#endif

//
//
// -- Here's the APIs
//
extern  HLLI      LLHlliInit( DWORD, LLF, LPFNKILLNODE, LPFNFCMPNODE );
extern  HLLE      LLHlleCreate( HLLI );
extern  void      LLAddHlleToLl( HLLI, HLLE );
extern  void      LLInsertHlleInLl( HLLI, HLLE, DWORD );
extern  BOOL      LLFDeleteHlleIndexed( HLLI, DWORD );
extern  BOOL      LLFDeleteLpvFromLl( HLLI, HLLE, LPV, DWORD );
extern  BOOL      LLFDeleteHlleFromLl( HLLI, HLLE );
extern  HLLE      LLHlleFindNext( HLLI, HLLE );
#ifdef DBLLINK
extern  HLLE      LLHlleFindPrev( HLLI, HLLE );
#endif // DBLLINK
extern  DWORD     LLChlleDestroyLl( HLLI );
extern  HLLE      LLHlleFindLpv( HLLI, HLLE, LPV, DWORD );
extern  DWORD     LLChlleInLl( HLLI );
extern  LPV       LLLpvFromHlle( HLLE );
extern  HLLE      LLHlleGetLast( HLLI );
extern  void      LLHlleAddToHeadOfLI( HLLI, HLLE );
extern  BOOL      LLFRemoveHlleFromLl( HLLI, HLLE );

//
// FCheckHlli is for debug versions ONLY as an integrity check
//
#ifdef DEBUGVER
extern  BOOL    LLFCheckHlli( HLLI );
#else // DEBUGVER
#define LLFCheckHlli(hlli)  1
#endif // DEBUGVER
//
// Map memory manager to our source versions
//
#ifdef NT_BUILD
#define AllocHmem(cb) malloc(cb)
#define FreeHmem(h) free(h)
#define LockHmem(h) (h)
#define UnlockHmem(p) (0)
#else
    #define AllocHmem(cb)   BMAlloc(cb) // _fmalloc(cb)
    #define FreeHmem(h)     BMFree(h)          // _ffree(h)
    #define LockHmem(h)     BMLock(h)          // (h)
    #define UnlockHmem(h)   BMUnlock(h)          //
#endif

//
//  This helps the codes appearance!
//
#define UnlockHlle(hlle)    UnlockHmem(hlle)
#define UnlockHlli(hlli)    UnlockHmem(hlli)

#ifndef hlleNull
#define hlleNull    (HLLE)NULL
#endif // !hlleNull

#ifdef  __cplusplus
}
#endif

#endif // _LINKLIST_
