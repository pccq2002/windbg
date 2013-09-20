
#ifndef _edit_h
#define _edit_h
#endif
void FAR   PaintText(int view, HDC hDC, PRECT rcl);
void FAR   VertScroll(int view, UINT uMsg, WPARAM wParam, LPARAM lParam);
void FAR   HorzScroll(int view, WPARAM wParam,  LPARAM lParam);
void FAR   KeyDown(int view, WPARAM wParam, BOOL shiftDown, BOOL ctrlDown);
void FAR   PressChar(HWND hwnd, WPARAM wParam, LPARAM lParam);
void FAR   SetCaret(int view, int X, int Y, int pixelPos);
void FAR   MouseMove(int view, WPARAM wParam, int X, int Y);
void FAR   ButtonDown( int view, WPARAM wParam, int X, int Y);
void FAR   ButtonUp(int view, WPARAM wParam, int X, int Y);
BOOL FAR   GetSelectedText(int view, BOOL *lookAround, LPSTR pText, int maxSize, LPINT leftCol, LPINT rightCol);
int FAR   Pix2Pos(int view, int X, long Y);
void FAR   TimeOut(int view);
void FAR   InvalidateLines(int actualView, int FromL, int ToL, BOOL propagate);
void FAR   PosXY(int view, int X, int Y, BOOL fDebugger);
void FAR   PosXYCenter(int view, int X, int Y, BOOL fDebugger);
void FAR   GetBlockCoord(int view, long *XL, long *YL, long *XR, long *YR);
BOOL FAR   DeleteStream(int view, int XL, int YL, int XR, int YR, BOOL destroyRedo);
BOOL FAR   DeleteAllStream(int view, BOOL destroyRedo);
BOOL FAR   InsertStream(int view, int X, int Y, int Size, LPSTR Buf, BOOL destroyRedo);
BOOL FAR   ReplaceChar(int view, int x, int y, int ch, BOOL destroyRedo);
BOOL FAR   PasteStream(int view, long XL, long YL, long XR, long YR);
void FAR   DeleteKey(int view);
void FAR   ClearSelection(int view);
void SetRORegion (int view, int Xro, int Yro);
BOOL GetRORegion (int view, LPINT Xro, LPINT Yro);
int  FAR   GetLineLength (int view, BOOL skipBlanks, long line);
