/*++ BUILD Version: 0001    // Increment this if a change has global effects
---*/
#define SRCSTEPPING 0
#define ASMSTEPPING 1

void InitCodemgr(void);
void   Go(void);
void   StepAndGo(void);
int   Step(int Overcalls, int StepMode);
int   StepN(int Overcalls, int StepMode, int Steps);
BOOL   ContinueToCursor(int View, int line);
void FormatKdParams(LPSTR);

WORD RemoveAllBreakpoints(void);
BOOL KillDebuggee(void);
void ClearDebuggee(void);
void DisconnectDebuggee(void);
BOOL ConnectDebugger(BOOL *pfReconnecting);
BOOL StartKernelDebugger( VOID );
BOOL AttachDebuggee(DWORD dwProcessId, HANDLE hEventGo);
BOOL RestartDebuggee(LPSTR ExeName, LPSTR Args);
BOOL DebuggeeAlive(void);
BOOL GetCurrentSource(PSTR SrcFname, int SrcLen, DWORD *pSrcLine);
BOOL   ToggleLocBP(void);
PSTR   GetExecutableFilename(PSTR executable, UINT size);
void   GetUserCommandLine(PSTR CommandLine, UINT size);
void   LoadAdditionalDLLs(void);
void SetProcessExceptions(LPPD);
void ClearProcessExceptions(LPPD);
HINSTANCE LoadHelperDll(PCTSTR psz, PCTSTR pType, BOOL fError);
INT_PTR ExeBrowseBadSym(PFIND_SYM_FILE);

// #defines for UpdateFlags passed to UpdateDebuggerState
#define UPDATE_NONE             0x0000
#define UPDATE_CPU              0x0001
#define UPDATE_LOCALS           0x0002
#define UPDATE_WATCH            0x0004
#define UPDATE_SOURCE           0x0008
#define UPDATE_DEBUGGEE         0x0010
#define UPDATE_DISASM           0x0020
#define UPDATE_FLOAT            0x0040
#define UPDATE_MEMORY           0x0080
#define UPDATE_CALLS            0x0100
#define UPDATE_CONTEXT          0x1000
#define UPDATE_NOFORCE          0x2000
#define UPDATE_SYMBOLS_CHANGED  0x4000

#define UPDATE_ALLDBGWIN (UPDATE_CPU    \
                         |UPDATE_LOCALS \
                         |UPDATE_WATCH  \
                         |UPDATE_SOURCE \
                         |UPDATE_DISASM \
                         |UPDATE_FLOAT  \
                         |UPDATE_MEMORY \
                         |UPDATE_CALLS  \
                         |UPDATE_CONTEXT\
                         )


#define UPDATE_ALLSTATES (UPDATE_ALLDBGWIN|UPDATE_DEBUGGEE)
#define UPDATE_WINDOWS   (UPDATE_ALLDBGWIN|UPDATE_NOFORCE)

// windows that need to be updated when memory or registers change
#define UPDATE_DATAWINS  (UPDATE_CPU    \
                         |UPDATE_LOCALS \
                         |UPDATE_WATCH  \
                         |UPDATE_FLOAT  \
                         |UPDATE_MEMORY \
                         |UPDATE_CALLS  \
                         )

// update these when radix changes
#define UPDATE_RADIX     (UPDATE_CPU|UPDATE_LOCALS|UPDATE_WATCH)

// Given a filename from CodeView source line information
//  return the fully specified filename.
void
 
BuildRelativeFilename(
    LPSTR SrcName,
    LPSTR BaseDir,
    LPSTR CanonSrcName,
    int CanonLen
    );

// Sends messages to appropriate windows to update their displays according
// to the value of UpdateFlags
void
 
UpdateDebuggerState(
    UINT UpdateFlags
    );

//Set in an newly opened file, visual breakpoints and current line
void
SetDebugLines(
    int doc,
    BOOL fReset
    );

void
 
HighlightAllBPNodes(
    BOOL Set
    );

void
 
AdjustDebugLines(
    int DocNumber,
    int StartLine,
    int NumberLines,
    BOOL Added
    );

BOOL
 
CheckExpression(
    LPSTR Expr,
    EERADIX Radix,
    int Case
    );

void
 
UpdateRadix(
    UINT newradix
    );

BOOL
 
DebuggeeRunning(
    void
    );

BOOL
 
IsProcRunning(
    LPPD lppd
    );

BOOL
 
IsProcStopped(
    LPPD lppd
    );

BOOL
 
DbgCommandOk(
    void
    );

BOOL
 
DbgFEmLoaded(
    void
    );

BOOL
GetSourceFromAddress(
    PADDR pADDR,
    PSTR SrcFname,
    int SrcLen,
    DWORD* pSrcLine
    );

BOOL
HighlightBP(
    PADDR pAddr,
    BOOL Set
    );

BOOL
MoveEditorToAddr(
    PADDR   pAddr,
    BOOL    bUserActivated
    );

