/*++ BUILD Version: 0001    // Increment this if a change has global effects
---*/
/***********************************************************************

    EDITUTIL.H

    Interface routines to the editor.

***********************************************************************/

// prototypes
void  InsertEditLine(
    int doc,
    LPSTR EditText,
    int y,
    BOOL VisualUpdate);

void  DeleteEditLine(
    int doc,
    int y,
    BOOL VisualUpdate);

void  AddEditLine(
    int doc,
    LPSTR EditText,
    BOOL VisualUpdate);

void  ReplaceEditLine(
    int doc,
    LPSTR EditText,
    int y,
    BOOL VisualUpdate);

void  SetDocLines(
    int doc,
    int lines);
