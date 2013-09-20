/*--

Copyright (c) 1992  Microsoft Corporation

Module Name:

    precomp.h

Abstract:

    Header file that is pre-compiled into a .pch file

Author:

    Wesley Witt (wesw) 21-Sep-1993

Environment:

    Win32, User Mode

--*/

#define OEMRESOURCE

//
// DbgPrint, ASSERT & ASSERTMSG access.
//
// 
//#include <nt.h>
//#include <ntrtl.h>
//#include <nturtl.h>

#define CALLBACK    __stdcall
#define WINAPI      __stdcall

#define IG_GET_TEB_ADDRESS         128

#include <windows.h>
#include "types.h"	
#include <wdbgexts.h>
//#include <ntdbg.h>
#define DWORDLONG ULONGLONG

#define _tsizeof(str) (sizeof(str)/sizeof(TCHAR))




#include <shellapi.h>
#include <winver.h>

#include <commctrl.h>
#include <richedit.h>

#if DEBUGVER
#include <typeinfo.h>
#endif

//
// CRT Headers
//

#include <ctype.h>
#include <direct.h>
#include <dlgs.h>
#include <dos.h>
#include <errno.h>
#include <fcntl.h>
#include <io.h>
#include <malloc.h>
#include <math.h>
#include <memory.h>
#include <process.h>
#include <search.h>
#include <share.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>
#include <time.h>
#include <limits.h>

#include <sys\types.h>
#include <sys\stat.h>
#include <sys\timeb.h>


//#include <dbghelp.h>

#define NOEXTAPI
#include <wdbgexts.h>


#include "cvinfo.h"

#include "cvtypes.h"
#include "shapi.h"
#include "od.h"
#include "dbgver.h"
#include "linklist.h"
#include "eeapi.h"




#include "sundown.h"

#include "win32dm.h"
#include "windbg.h"
#include "heap.h"
#include "util.h"

#include "apisupp.h"
#include "change.h"
#include "cl.h"
#include "cmdexec.h"
#include "cmgrhigh.h"
#include "codemgr.h"
#include "debug.h"
#include "dialogs.h"
#include "eeproto.h"
#include "extern.h"
#include "filedll.h"
#include "inifile.h"
#include "mstools.h"
#include "re.h"
#include "resource.h"
#include "res_str.h"
#include "sbconst.h"
#include "settings.h"
#include "shproto.h"
#include "vapi.h"
#include "winpck.h"


#include "asertdbg.h"
#include "cp.h"
#include "debugger.h"
#include "userdll.h"
#include "dbugdll.h"
#include "menu.h"
#include "breakpts.h"
#include "cvextras.h"
#include "disasm.h"
#include "pidtid.h"

// wrkspc
#include "wdbg_def.h"
#include "ws_resrc.h"
#include "tlist.h"
#include "ws_misc.h"
#include "ws_comon.h"
#include "ws_items.h"
#include "ws_defs.h"
#include "ws_impl.h"
#include "ws_items.inl"
#include "ws_defs.inl"


#include "wrkspace.h"
#include "bptypes.h"
#include "bpprotos.h"
#include "localwin.h"
#include "document.h"
#include "edit.h"
#include "cmdwin.h"
#include "makeeng.h"
#include "util2.h"
#include "memwin.h"
#include "colors.h"
#include "findrep.h"
#include "panemgr.h"
#include "cpuwin.h"
#include "vib.h"
#include "docfile.h"
#include "undoredo.h"
#include "editutil.h"
#include "fonts.h"
#include "init.h"
#include "userctrl.h"
#include "watchwin.h"
#include "quickw.h"
#include "program.h"
#include "remi.h"
#include "toolbar.h"
#include "status.h"
#include "newrem.h"
#include "callswin.h"
#include "kdopt.h"
#include "ncmdwin.h"
#include "optsheet.h"
#include "pipeex.h"


#include    <mbstring.h>


typedef struct _EXTSTACKTRACE64 { 
    ULONG64     FramePointer; 
    ULONG64     ProgramCounter; 
    ULONG64     ReturnAddress; 
    ULONG64     Args[4]; 
} EXTSTACKTRACE64, *PEXTSTACKTRACE64; 


#ifndef GWLP_WNDPROC 
#define GWLP_WNDPROC        (-4) 
#endif 
#ifndef GWLP_HINSTANCE 
#define GWLP_HINSTANCE      (-6) 
#endif 
#ifndef GWLP_HWNDPARENT 
#define GWLP_HWNDPARENT    (-8) 
#endif 
#ifndef GWLP_USERDATA 
#define GWLP_USERDATA      (-21) 
#endif 
#ifndef GWLP_ID 
#define GWLP_ID            (-12) 
#endif 
#ifndef DWLP_MSGRESULT 
#define DWLP_MSGRESULT  0 
#endif 
#ifndef DWLP_DLGPROC 
#define DWLP_DLGPROC    DWLP_MSGRESULT + sizeof(LRESULT) 
#endif 
#ifndef DWLP_USER 
#define DWLP_USER      DWLP_DLGPROC + sizeof(DLGPROC) 
#endif 


#ifndef SetWindowLongPtr 
#define SetWindowLongPtrA  SetWindowLongA 
#define SetWindowLongPtrW  SetWindowLongW 
#ifdef UNICODE 
#define SetWindowLongPtr  SetWindowLongPtrW 
#else 
#define SetWindowLongPtr  SetWindowLongPtrA 
#endif // !UNICODE 
#endif // !SetWindowLongPtr 


#ifndef GetWindowLongPtr 
#define GetWindowLongPtrA  GetWindowLongA 
#define GetWindowLongPtrW  GetWindowLongW 
#ifdef UNICODE 
#define GetWindowLongPtr  GetWindowLongPtrW 
#else 
#define GetWindowLongPtr  GetWindowLongPtrA 
#endif // !UNICODE 
#endif // !SetWindowLongPtr 


#define WM_MOUSEWHEEL 0x020A
#define WHEEL_DELTA 120


//#define HandleToLong (LONG)

typedef struct _GET_TEB_ADDRESS { 
    ULONGLONG   Address; 
} GET_TEB_ADDRESS, *PGET_TEB_ADDRESS; 