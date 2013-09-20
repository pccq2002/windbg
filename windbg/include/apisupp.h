/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1992  Microsoft Corporation

Module Name:

    Apisupp.h

Abstract:

Author:

    David J. Gilman (davegi) 04-May-1992

Environment:

    Win32, User Mode

--*/

#if ! defined( _APISUPP_ )
#define _APISUPP_


#define MHOmfLock(a) (a)
#define MHOmfUnLock(a)

extern LPTD LptdFuncEval;


typedef struct _SYM_FILE_LOAD_ERR {
    struct _SYM_FILE_LOAD_ERR * Flink;
    struct _SYM_FILE_LOAD_ERR * Blink;
    
    // Handle to symbol file
    HANDLE  hSymFile;

    // Load error
    SHE     she;

    // Sym handler errors
    PTSTR   pszSHE;
    PTSTR   pszExtendedSHE;
    
    // Path to symbol file
    TCHAR   szSymFilePath[_MAX_PATH];
} SYM_FILE_LOAD_ERR, * PSYM_FILE_LOAD_ERR;

typedef struct {
    BOOL                bFound;
    PFNVALIDATEEXE      pfnValidateExe;
    PVLDCHK             pVldChk;
    TCHAR               szImageFilePath[_MAX_PATH];
    // Head of the list. The head of the
    // list may contain information.
    SYM_FILE_LOAD_ERR   LoadErr;
} FIND_SYM_FILE, * PFIND_SYM_FILE;


void
CopyShToEe(
    void
    );

void
SYSetFrame(
    HFRAME
    hFrame
    );

XOSD __stdcall
SYFixupAddr(
    PADDR paddr
    );

XOSD __stdcall
SYUnFixupAddr(
    PADDR addr
    );

XOSD
SYSanitizeAddr(
    PADDR paddr
    );

XOSD
SYIsStackSetup(
    HPID hpidCurr,
    HTID htidCurr,
    PADDR paddr
    );

VOID
SetFindExeBaseName(
    LPSTR lpName
    );

// kcarlos
// BUGBUG
// dead code
/*
VOID
SplitPath(
    LSZ  lsz1,
    LSZ  lsz2,
    LSZ  lsz3,
    LSZ  lsz4,
    LSZ  lsz5
    );
*/


PVOID __stdcall
MHAlloc(
    size_t cb
    );

PVOID __stdcall
MHRealloc(
    PVOID lpv,
    size_t cb
    );

void __stdcall
MHFree(
    PVOID lpv
    );

LPTSTR
MHStrdup(
    LPCTSTR str
    );


HDEP __stdcall
MMAllocHmem(
    size_t cb
    );

HDEP __stdcall
MMReallocHmem(
    HDEP hmem,
    size_t cb
    );

void __stdcall
MMFreeHmem(
    HDEP hmem
    );

BOOL __stdcall
MMFIsLocked(
    HDEP hMem
    );

void* __stdcall
MMLpvLockMb(
    HDEP hmem
    );

void __stdcall
MMbUnlockMb(
    HDEP hmem
    );

DWORD
OSDAPI
DHGetNumber(
    LPSTR String,
    LPLONG Result
    );


typedef struct _NEARESTSYM {
    CXT     cxt;
    ADDR    addrP;
    HSYM    hsymP;
    ADDR    addrN;
    HSYM    hsymN;
} NEARESTSYM, *LPNEARESTSYM;

LPSTR __stdcall GetNearestSymbolFromAddr(LPADDR lpaddr, LPADDR lpAddrRet);
BOOL __stdcall GetNearestSymbolInfo(LPADDR lpaddr, LPNEARESTSYM lpnsym);
LPSTR FormatSymbol(HSYM hsym, PCXT lpcxt);

#endif // _APISUPP_
