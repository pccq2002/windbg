/*++ BUILD Version: 0001    // Increment this if a change has global effects

    FILE:           BREAKPTS.H

    PURPOSE:        Defines and prototypes for the QCQP persistent
                    breakpoint handler.

**********************************************************************/

/*
**  QCWin breakpoint support functions
*/

void       BPTResolveAll(HPID,BOOL);
DWORD      BPTIsUnresolvedCount(HPID hpid);
void       BPTUnResolve(HEXE);
void       BPTUnResolveAll(HPID);
int        BPTResolve( LPSTR, PVOID, PCXF, BOOL);
void       BPTUnResolvePidTid( HPID, HTID);
BOOL       BPTCanIUseThunk( LPSTR );


//
//  Workspace support.
//
BOOL ClearWndProcHistory ( void );
BOOL SetWndProcHistory ( LPSTR, DWORD );
LPSTR   GetWndProcHistory ( DWORD* );



#define BP_LINELEADER '@'

