/*++ BUILD Version: 0001    // Increment this if a change has global effects
---*/
BOOL

CreateRecBuf(
    int doc,
    BYTE recType,
    long bytes
    );

BOOL

DestroyRecBuf(
    int doc,
    WORD recType
    );

BOOL

ResizeRecBuf(
    int doc,
    long bytes
    );

BOOL

OpenRec(
    int doc,
    BYTE action,
    int col,
    int line
    );

void

CloseRec(
    int doc,
    int col,
    int line,
    BOOL keepRec
    );

BOOL

AppendToRec(
    int doc,
    LPSTR chars,
    int size,
    BOOL isLine,
    int *totalSize
    );

BOOL

PlayRec(
    int doc,
    WORD recType,
    BOOL untilUserMark,
    BOOL prompt
    );

void

ReadLineFromBuf(
    LPUNDOREDOREC p,
    LPSTR dest,
    int *size,
    int *expandedLen,
    LPSTR *charsEnd
    );

BOOL

CheckRecBuf(
    int doc,
    WORD recType
    );

void

DumpRec(
    int doc,
    WORD recType
    );
