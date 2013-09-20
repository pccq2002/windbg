
#ifndef _callswin_h
#define _callswin_h

#include <IMAGEHLP.H>

typedef struct _KDHELP64 {
	DWORD64 Thread;
	DWORD   ThCallbackStack;
	DWORD   ThCallbackBStore;
	DWORD   NextCallback;
	DWORD   FramePointer;
	DWORD64 KiCallUserMode;
	DWORD64 KeUserCallbackDispatcher;
	DWORD64 SystemRangeStart;
	DWORD64 KiUserExceptionDispatcher;
	DWORD64 StackBase;
	DWORD64 StackLimit;
	DWORD64 Reserved[5];
} KDHELP64, *PKDHELP64;

// typedef enum {
// 	AddrMode1616,
// 	AddrMode1632,
// 	AddrModeReal,
// 	AddrModeFlat
// } ADDRESS_MODE;

typedef struct _tagADDRESS64 {
	DWORD64      Offset;
	WORD         Segment;
	ADDRESS_MODE Mode;
} ADDRESS64, *LPADDRESS64;

typedef struct _tagSTACKFRAME64 {
	ADDRESS64 AddrPC;
	ADDRESS64 AddrReturn;
	ADDRESS64 AddrFrame;
	ADDRESS64 AddrStack;
	ADDRESS64 AddrBStore;
	PVOID     FuncTableEntry;
	DWORD64   Params[4];
	BOOL      Far;
	BOOL      Virtual;
	DWORD64   Reserved[3];
	KDHELP64  KdHelp;
} STACKFRAME64, *LPSTACKFRAME64;


// typedef struct _tagSTACKFRAME {
//     ADDRESS     AddrPC;               // program counter
//     ADDRESS     AddrReturn;           // return address
//     ADDRESS     AddrFrame;            // frame pointer
//     ADDRESS     AddrStack;            // stack pointer
//     LPVOID      FuncTableEntry;       // pointer to pdata/fpo or NULL
//     DWORD       Params[4];            // possible arguments to the function
//     BOOL        Far;                  // WOW far call
//     BOOL        Virtual;              // is this a virtual frame?
//     DWORD       Reserved[3];
//     KDHELP      KdHelp;
// } STACKFRAME, *LPSTACKFRAME;

typedef struct _tagSTACKINFO {
    STACKFRAME64   StkFrame;
    DWORD        FrameNum;
    CHAR         ProcName[MAX_PATH];
    CHAR         Params[MAX_PATH*3];
    CHAR         Context[MAX_PATH];
    CHAR         Module[MAX_PATH];
    DWORDLONG    Displacement;
    ADDR         ProcAddr;
    CXF          Cxf;
    BOOL         fInProlog;
} STACKINFO, *LPSTACKINFO;

#define MAX_FRAMES  1000



#if defined( NEW_WINDOWING_CODE )

LRESULT
CALLBACK
NewCalls_WindowProc(
    HWND   hwnd,
    UINT   message,
    WPARAM wParam,
    LPARAM lParam
    );

#else

LRESULT
CALLBACK
CallsWndProc(
    HWND   hwnd,
    UINT   message,
    WPARAM wParam,
    LPARAM lParam
    );

#endif


void
OpenCallsWindow(
    int         type,
    LPWININFO   lpWinInfo,
    int         Preference,
    BOOL        bUserActivated
    );

HWND
GetCallsHWND(
    VOID
    );


BOOL
IsCallsInFocus(
    VOID
    );

LPSTR
GetLastFrameFuncName(
    VOID
    );

BOOL
GetCompleteStackTrace(
    DWORD64       FramePointer,
    DWORD64       StackPointer,
    DWORD64       ProgramCounter,
    LPSTACKINFO   StackInfo,
    LPDWORD       lpdwFrames,
    BOOL          fQuick,
    BOOL          fFull
    );

BOOL
GotoFrame(
    int         iCall,
    BOOL        bUserActivated
    );

PCXF
ChangeFrame(
    int iCall
    );

BOOL
IsValidFrameNumber(
    INT FrameNumber
    );

#endif