//  API callback function prototypes (internal to SAPI)

VOID        WINAPI SHUnloadSymbolHandler( BOOL );
VOID        WINAPI SHFree( PVOID );

HEXE        WINAPI SHHexeAddNew( HPDS, HEXG, UOFFSET );
UOFFSET     WINAPI SHGetDebugStart( HSYM );
LSZ         WINAPI SHGetSymName( HSYM, LSZ );
BOOL        WINAPI SHAddrFromHsym( LPADDR, HSYM );
HMOD        WINAPI SHHmodGetNextGlobal( HEXE *, HMOD );
BOOL        WINAPI SHModHasSrc( HMOD );
LSZ         WINAPI SHGetSymbol( LPADDR, LPADDR, SOP, LPODR );
LSZ         WINAPI SHGetModule( LPADDR, LSZ );
BOOL        WINAPI SHGetPublicAddr( LPADDR, LSZ );
SHE         WINAPI SHAddDll( LSZ, BOOL );
BOOL        WINAPI SHIsLabel( HSYM );
VOID        WINAPI SHSetDebuggeeDir( LSZ );
VOID        WINAPI SHUnloadDll( HEXE );
SHE         WINAPI SHLoadDll( LSZ, BOOL );
BOOL        WINAPI PHGetAddr ( LPADDR, LSZ );
SHE         WINAPI SHAddDllsToProcess ( VOID );

HEXE        WINAPI SHHexeFromHmod ( HMOD );
HEXE        WINAPI SHGetNextExe(HEXE);
HMOD        WINAPI SHGetNextMod( HEXE, HMOD );
HMOD        WINAPI SHHmodGetNext( HEXE, HMOD );

PCXT        WINAPI SHGetCxtFromHexe(HEXE, PCXT);
PCXT        WINAPI SHGetCxtFromHmod( HMOD, PCXT );
PCXT        WINAPI SHSetCxt( LPADDR, PCXT );
PCXT        WINAPI SHSetCxtMod( LPADDR, PCXT );
HSYM        WINAPI SHFindNameInGlobal( HSYM, PCXT, LPSSTR, SHFLAG, PFNCMP, PCXT );
HSYM        WINAPI SHFindNameInTypes( PCXT, LPSSTR, SHFLAG, PFNCMP, PCXT);
HSYM        WINAPI SHFindNameInContext( HSYM, PCXT, LPSSTR, SHFLAG, PFNCMP, PCXT );
HSYM        WINAPI SHGoToParent( PCXT, PCXT );
HSYM        WINAPI SHHsymFromPcxt(PCXT);
HSYM        WINAPI SHNextHsym(HMOD, HSYM);
SHFLAG      WINAPI SHCompareRE (LPCH, LPCH, BOOL);
SHFLAG      WINAPI SHFixupAddr (LPADDR);
SHFLAG      WINAPI SHUnFixupAddr (LPADDR);
PCHAR       WINAPI SHGetModName(HMOD);
PCHAR       WINAPI SHGetExeName(HEXE);
LSZ         WINAPI SHGetSymFName(HEXE);
HEXE        WINAPI SHGethExeFromModuleName(LSZ);
LSZ         WINAPI SHLszGetErrorText(SHE);
BOOL        WINAPI SHWantSymbols(HEXE);
SHE         WINAPI SHUnloadSymbols(HEXE);

HFL         WINAPI SHGethFileFromhMod(HMOD);
HMOD        WINAPI SHGethModFromName(HEXE, PCHAR);
HEXE        WINAPI SHGethExeFromName(PCHAR);
BOOL        WINAPI SHCanDisplay ( HSYM );
UOFF32      WINAPI SHGetNearestHsym(LPADDR, HMOD, int, PHSYM);
HSYM        WINAPI SHFindSymInExe(HEXE, LPSSTR, BOOL);

// questionable API calls
int         WINAPI SHPublicNameToAddr(LPADDR, LPADDR, PCHAR, PFNCMP);
int         WINAPI SHModelFromAddr ( LPADDR, WORD *, LPB, UOFFSET * );
SHFLAG      WINAPI SHIsInProlog(PCXT);          // it can be done by EE
SHFLAG      WINAPI SHIsAddrInCxt(PCXT, LPADDR);
BOOL        WINAPI SHFindSymbol ( LSZ, PADDR, LPASR );

// end questionable API calls

UOFF32      WINAPI PHGetNearestHsym(LPADDR, HEXE, PHSYM);
HSYM        WINAPI PHFindNameInPublics(HSYM, HEXE, LPSSTR, SHFLAG, PFNCMP);

HTYPE       WINAPI THGetTypeFromIndex( HMOD, THIDX );
HTYPE       WINAPI THGetNextType(HMOD, HTYPE);
BOOL        WINAPI THAreTypesEqual(HMOD, CV_typ_t, CV_typ_t);

// Source Line Handler

BOOL        WINAPI SLLineFromAddr ( LPADDR, LPDWORD, SHOFF *, SHOFF * );
BOOL        WINAPI SLFLineToAddr  ( HSF, DWORD, LPADDR, SHOFF * , DWORD * );
LPCH        WINAPI SLNameFromHsf  ( HVOID );
LPCH        WINAPI SLNameFromHmod ( HMOD, WORD );
BOOL        WINAPI SLFQueryModSrc ( HMOD );
HMOD        WINAPI SLHmodFromHsf  ( HEXE, HSF );
HSF         WINAPI SLHsfFromPcxt  ( PCXT );
HSF         WINAPI SLHsfFromFile  ( HMOD, LSZ );
int         WINAPI SLCAddrFromLine( HEXE, HMOD, LSZ, WORD, LPSLP *);

HDEP        WINAPI MHMemAllocate( unsigned short);
HDEP        WINAPI MHMemReAlloc(HDEP, unsigned short);
VOID        WINAPI MHMemFree(HDEP);

HVOID       WINAPI MHMemLock(HDEP);
VOID        WINAPI MHMemUnLock(HDEP);
HVOID       WINAPI MHOmfLock(HVOID);
VOID        WINAPI MHOmfUnLock(HVOID);
SHFLAG      WINAPI MHIsMemLocked(HDEP);

SHFLAG      WINAPI DHExecProc(LPADDR, SHCALL);
USHORT      WINAPI DHGetDebugeeBytes(ADDR, unsigned short, PVOID);
USHORT      WINAPI DHPutDebugeeBytes(ADDR, unsigned short, PVOID);
PSHREG      WINAPI DHGetReg(PSHREG, HFRAME);
PSHREG      WINAPI DHSetReg(PSHREG, HFRAME);
HDEP        WINAPI DHSaveReg(VOID);
VOID        WINAPI DHRestoreReg(HDEP);

HFL         WINAPI SHHFLFromCXT(PCXT);
HSYM        WINAPI SHFindNameInSym( HSYM, PCXT, LPSSTR, SHFLAG, PFNCMP, PCXT );

VOID        WINAPI SHSetEmiOfAddr( LPADDR );

int         WINAPI SYLoadOmf( PCHAR, unsigned short * );

HFL         WINAPI SHGETMODHFL( HMOD );

extern HPID hpidCurr;

LPB         WINAPI SHlszGetSymName ( SYMPTR );
SHFLAG      WINAPI ExactCmp ( LSZ, HSYM, LSZ, SHFLAG );
HEXG        WINAPI SHHexgFromHmod ( HMOD hmod );
HEXG        WINAPI SHHexgFromHmod ( HMOD );
HEXE        WINAPI SHHexeFromHmod ( HMOD );
VOID        WINAPI KillPdsNode ( PVOID );
VOID        WINAPI SHpSymlplLabLoc ( LPLBS );
HPDS        WINAPI SHFAddNewPds ( VOID );
VOID        WINAPI SHSetUserDir ( LSZ );
LSZ         WINAPI SHGetSourceName ( HFL, LPCH );
BOOL        WINAPI SHAddrToLabel ( LPADDR, LSZ );
BOOL        WINAPI SHIsEmiLoaded ( HEXE );
BOOL        WINAPI SHSymbolsLoaded( HEXE, SHE * );
BOOL        WINAPI SHSymbolsLoadError( HEXE, SHE * );
BOOL        WINAPI SHFIsAddrNonVirtual ( LPADDR );
BOOL        WINAPI SHIsFarProc ( HSYM );
int         WINAPI SHGetSymLoc ( HSYM, LSZ, UINT, PCXT );
SHE         WINAPI OLLoadOmf ( HEXG, VLDCHK *, UOFFSET);
BOOL        WINAPI OLUnloadOmf (LPEXG);
PVOID       WINAPI SHLpGSNGetTable( HEXE );
VOID        WINAPI SHPdbNameFromExe( LSZ, LSZ, UINT );

HPDS        WINAPI SHCreateProcess ( VOID );
VOID        WINAPI SHSetHpid ( HPID );
BOOL        WINAPI SHDeleteProcess ( HPDS );
HPDS        WINAPI SHChangeProcess ( HPDS );
SHE         WINAPI SHAddDllExt( LSZ, BOOL, BOOL, VLDCHK *, HEXG * );
VOID        WINAPI LoadDefered( HEXG );
VOID        WINAPI UnloadDefered( HEXG );
SHE         WINAPI UnloadNow(HEXG);

VOID        WINAPI VoidCaches(VOID);


VOID        WINAPI SHSplitPath ( LSZ, LSZ, LSZ, LSZ, LSZ );
int         WINAPI SumUCChar ( LPSSTR, int );

// REVIEW: piersh
SHE         WINAPI SHGetExeTimeStamp( LSZ, DWORD * );

HEXE        WINAPI SHHexeFromHmod ( HMOD );

VOID        WINAPI SetAddrFromMod(LPMDS lpmds, UNALIGNED ADDR* paddr);

LPVOID      WINAPI SHGetDebugData( HEXE );
LSZ         WINAPI SHGetModNameFromHexe(HEXE);

BOOL        WINAPI SHIsThunk ( HSYM );
HSYM        WINAPI SHFindSLink32 ( PCXT );

BOOL        WINAPI FInitLists(VOID);

VOID        WINAPI KillExgNode( PVOID );
VOID        WINAPI KillExeNode( PVOID );
VOID        WINAPI KillMdsNode( PVOID );
VOID        WINAPI KillPdsNode( PVOID );
VOID        WINAPI KillGst( LPGST );

int         WINAPI CmpExgNode( PVOID, PVOID, LONG );
int         WINAPI CmpExeNode( PVOID, PVOID, LONG );
int         WINAPI CmpMdsNode( PVOID, PVOID, LONG );
int         WINAPI CmpPdsNode( PVOID, PVOID, LONG );
int         WINAPI SHFindBpOrReg( LPADDR, UOFFSET, WORD, PCHAR );
VOID        WINAPI SHdNearestSymbol( PCXT, SOP, LPODR );
PCXT        WINAPI SHSetCxtMod( LPADDR, PCXT );
LSZ         WINAPI NameOnly( LSZ );
BOOL        WINAPI IsAddrInMod(LPMDS, LPADDR, ISECT*, OFF*, CB*);

LPALM       WINAPI BuildALM (BOOL, WORD, LPB, DWORD, WORD);
VOID        WINAPI FixAlign (LPB, PVOID, WORD);
PVOID       WINAPI LpvFromAlmLfo (LPALM, DWORD);
SYMPTR      WINAPI GetNextSym (SYMPTR, LPALM);

HSYM        WINAPI FindNameInStatics (HSYM, PCXT, LPSSTR, SHFLAG, PFNCMP, PCXT);

PVOID       WINAPI GetSymbols (LPMDS);

BOOL    WINAPI STABOpen(STAB **ppstab);
BOOL    WINAPI STABFindUDTSym(STAB* pstab, LPSSTR lpsstr, PFNCMP pfnCmp, SHFLAG fCase, UDTPTR *ppsym, unsigned *piHash);
BOOL    WINAPI STABAddUDTSym(STAB* pstab, LPSSTR lpsstr, unsigned iHash, UDTPTR* ppsym);
void    WINAPI STABClose(STAB* pstab);
unsigned WINAPI hashPbCb(PB pb, CB cb, unsigned long ulMod);

BOOL        WINAPI VerifyHexe ( HEXE hexe );

BOOL    WINAPI StartLazyLoader(void);
void    WINAPI StopLazyLoader(void);

__inline MPT
GetTargetMachine(
    )
{
    MPT     TargetMachine;
    TargetMachine = SYProcessor();
    return(TargetMachine);
}


// Interesting data items

extern HLLI         HlliPds;    // List of processes
extern HPDS         hpdsCur;    // Current process which is being debugged
extern CRITICAL_SECTION csSh;   // Global synchronization object
extern HMODULE      hLib;       // Handle to symcvt dll.
extern CONVERTPROC  pfConvertSymbolsForImage;   // Symcvt ptr.
