/***
 *
 *  Breakpoint Handler API
 *  
 */

extern  BPSTATUS      BPInit( void );
extern  BPSTATUS      BPTerm( void );

extern  BPSTATUS      BPParse(HBPT FAR * pHbpt, char FAR * szBpt, char FAR * szMod, char FAR * szFile, HPID hPid);
extern  BPSTATUS      BPBindHbpt( HBPT, CXF * );

extern  BPSTATUS      BPAddToList( HBPT, int );
extern  BPSTATUS      BPChange( HBPT, int );
extern  BPSTATUS      BPDelete( HBPT );
extern  BPSTATUS      BPDeleteAll( VOID );

extern  BPSTATUS      BPGetFinalHbpt( HBPT, HBPT FAR *);
extern  BPSTATUS      BPNextHbpt( HBPT FAR *, enumBptSearchOrder);
extern  BPSTATUS      BPFormatHbpt( HBPT, char FAR *, DWORD, DWORD);

extern  BPSTATUS      BPCommit(void);
extern  BPSTATUS      BPUnCommit(void);

extern  BPSTATUS      BPHighlightSourceFile( char *fname );

extern  BPSTATUS      BPSetHpid(HBPT, HPID);
extern  BPSTATUS      BPGetHpid(HBPT, HPID *);
extern  BPSTATUS      BPGetIpid(HBPT, DWORD *);
extern  BPSTATUS      BPGetHtid(HBPT, HTID *);

extern  BPSTATUS      BPSetTmp(LPADDR, HPID, HTID, HBPT FAR *);
extern  BPSTATUS      BPClearAllTmp(HPID, HTID);

extern  BPSTATUS      BPDisable(HBPT);
extern  BPSTATUS      BPEnable(HBPT);

extern  BPSTATUS      BPHbptFromI(HBPT FAR *, DWORD);

extern  BPSTATUS      BPHbptFromFileLine(char FAR *, DWORD, HBPT FAR *);
extern  BPSTATUS      BPHbptFromAddr(ADDR FAR *, HBPT FAR *);

extern  BPSTATUS      BPAddrFromHbpt(HBPT, ADDR FAR *);
extern  BPSTATUS      BPIFromHbpt(DWORD FAR *, HBPT);
extern  BPSTATUS      BPFreeHbpt(HBPT);

extern  BPSTATUS      BPCheckHbpt(CXF, LPFNBPCALLBACK, HPID, HTID, DWORD64);

extern  BPSTATUS      BPQueryBPTypeOfHbpt(HBPT, int FAR *);
extern  BPSTATUS      BPQueryCmdOfHbpt(HBPT, char FAR *, DWORD);
extern  BPSTATUS      BPQueryLocationOfHbpt(HBPT, char FAR *, DWORD);
extern  BPSTATUS      BPQueryExprOfHbpt(HBPT, char FAR *, DWORD);
extern  BPSTATUS      BPQueryMemoryOfHbpt(HBPT, char FAR *, DWORD);
extern  BPSTATUS      BPQueryMemorySizeOfHbpt(HBPT, char FAR *, DWORD);
extern  BPSTATUS      BPQueryPassCntOfHbpt(HBPT, char FAR *, DWORD);
extern  BPSTATUS      BPQueryPassLeftOfHbpt(HBPT, char FAR *, DWORD);
extern  BPSTATUS      BPQueryProcessOfHbpt(HBPT, char FAR *, DWORD);
extern  BPSTATUS      BPQueryThreadOfHbpt(HBPT, char FAR *, DWORD);
extern  BPSTATUS      BPQueryMessageOfHbpt(HBPT, char FAR *, DWORD);
extern  BPSTATUS      BPUpdateMemory( ULONG );
extern  BPSTATUS      BPQueryHighlightLineOfHbpt( HBPT, DWORD *);

extern EESTATUS  BPADDRFromTM (PHTM, LPDWORD, PADDR);

extern LPSTR  BPShortenContext(const TCHAR *lpSrc, TCHAR *lpDest);

extern HMOD  BPFileNameToMod( char * FileName );

/*
**  THe following are the set of callback routines used by the
**      breakpoint engine
*/

extern  BOOL          BPCBBindHbpt( HBPT );
extern  BOOL          BPCBSetHighlight(char FAR *, DWORD, BOOL, BOOL, WORD);
extern  BOOL          BPCBSetUHighlight(char FAR *, DWORD, BOOL, BOOL);
extern  BOOL          BPCBGetSourceFromAddr(PADDR, char FAR *, int, int FAR *);

extern  BOOL          BPIsMarkedForDeletion( HBPT );
extern  BOOL          BPIsDisabled( HBPT );
extern  BOOL          BPIsInstantiated( HBPT );
extern  BOOL          BPUninstantiate( HBPT );
extern  BOOL          BPIsQuiet( HBPT );
extern  VOID          BPSetQuiet( HBPT );
extern  VOID          BPSegLoad( ULONG );
extern  BOOL          BPSymbolLoading( BOOL );
extern  BOOL          BPSymbolsMayBeAvailable( HBPT );
