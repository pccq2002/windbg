/*++ BUILD Version: 0002    // Increment this if a change has global effects
**                                  **
**              CMDWIN.H              **
**                                  **
**  Description:                            **
**  This file contains the prototypes and common declarations   **
**  for the command window                      **
**                                  **
*************************************************************************/

#define MAX_CMDWIN_LINES    30000
#define MAX_CMDWIN_HISTORY  1000

typedef BOOL (WINAPI * CTRLC_HANDLER_PROC)(DWORD);

typedef struct _CTRLC_HANDLER {
    struct _CTRLC_HANDLER * next;
    CTRLC_HANDLER_PROC      pfnFunc;
    DWORD                   dwParam;
} CTRLC_HANDLER, *PCTRLC_HANDLER;

extern BOOL WDBGAPI SetAutoRunSuppress(BOOL);
extern BOOL WDBGAPI GetAutoRunSuppress(void);
void WDBGAPI CmdSetAutoHistOK(BOOL);
BOOL WDBGAPI CmdGetAutoHistOK(void);

LRESULT FAR  EXPORT WDBGAPI CmdEditProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
BOOL FAR  WDBGAPI  CmdExecNext(DBC dbcCallback, LPARAM lParam);
BOOL FAR  WDBGAPI  DoStopEvent(LPTD);
void FAR  WDBGAPI  SetCtrlCTrap( void );
void FAR  WDBGAPI  ClearCtrlCTrap( void );
ULONG WDBGAPI CheckCtrlCTrap( void );
BOOL FAR  WDBGAPI  CmdSetEatEOLWhitespace( BOOL ff );
VOID FAR  WDBGAPI  DispatchCtrlCEvent(VOID);

BOOL CmdHelp ( LPSTR Topic );
