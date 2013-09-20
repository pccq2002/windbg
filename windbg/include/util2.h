/*++ BUILD Version: 0001    // Increment this if a change has global effects
---*/
BOOL FAR  QueryCloseAllChildren(
    void);


// BUGBUG - dead code - kcarlos
#if 0
BOOL FAR  QueryCloseChild(
    HWND hwnd, BOOL b);
#endif

int FAR  AddFile(
    WORD mode,
    WORD type,
    LPSTR pName,
    LPWININFO win,
    HFONT font,
    BOOL readOnly,
    int dupView,
    int Preference,
    BOOL bUserActivated
    );

// BUGBUG - dead code - kcarlos
#if 0
BOOL FAR  SaveFile(
    /*HWND*/ int);
#endif

// BUGBUG - dead code - kcarlos
#if 0
BOOL FAR  SaveAsFile(
    /*HWND*/ int);
#endif

void FAR  WindowTitle(
    int view,
    int duplicateNbr);

void AddToSearchPath(
   LPSTR lpstrFile);

int matchExt (char * pTargExt, char * pSrcList);

void RefreshWindowsTitle(
    int doc);

BOOL FindLineStatus(
    int view,
    BYTE target,
    BOOL forward,
    long *line);

//Start the Edit Project dialog box
void  StartEditProjDlg(
    HWND hParent);

void  FAR  Find(
    void);

void Replace(
    void);

BOOL MoreFindToDo(
    void);

void  OpenProject(
    PSTR ProjectName,
    HWND ParentWnd,
    BOOL TryForWorkspace);

void  EditProject(
    HWND ParentWnd);

void  CloseProject(
    void);

BOOL DestroyView(
    int view);

void ResizeEditWindow(
    int view,
    int width,
    int height,
    int winNbLines,
    BOOL forceMove);

void ActivateNewMDIChild(
    HWND hwndPrev,
    HWND hwndNew,
    BOOL bUserActivated);

void ActivateMDIChild(
    HWND hwndNew,
    BOOL bUserActivated);

void SetProgramArguments(
    LPSTR lpszTmp);

UINT_PTR
APIENTRY
OpenExeWithArgsHookProc(
    HWND    hDlg,
    UINT    msg,
    WPARAM  wParam,
    LPARAM  lParam);

void
AppendTextToAnEditControl(
    HWND hwnd,
    PTSTR pszNewText);

int
GenericExceptionFilter(
    LPEXCEPTION_POINTERS lpep
    );

