/*++ BUILD Version: 0001    // Increment this if a change has global effects
---*/
void FAR  SetStopLimit();

BOOL FindNext(
             HWND hwndParent,
             long startingLine,
             int startingCol,
             BOOL startFromSelection,
             BOOL selectFoundText,
             BOOL errorIfNotFound);

void FAR  Find();

void FAR  ReplaceOne();

void FAR  ReplaceAll(HWND);

void FAR  Replace(HWND);

BOOL FAR  InsertInPickList(WORD type);

void FAR  RemoveFromPick(WORD type);

void FAR  TagAll(HWND, int y);
