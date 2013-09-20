/*++ BUILD Version: 0001    // Increment this if a change has global effects
---*/
//Initialize document module
void InitializeDocument(void);

void FAR  EnableReadOnlyBeep( BOOL f );

BOOL FAR  QueryReadOnlyError( void );

BOOL FAR  FirstLine(int doc, LPLINEREC *pl, long *lineNb, LPBLOCKDEF *pb);

BOOL FAR  NextLine(int doc, LPLINEREC *pl, long *lineNb, LPBLOCKDEF *pb);

BOOL FAR  PreviousLine(int doc, LPLINEREC *pl, long lineNb, LPBLOCKDEF *pb);

void FAR  CloseLine(int doc, LPLINEREC *pl, long lineNb, LPBLOCKDEF *pb);

int FAR  FirstNonBlank(int doc, long line);

//Delete a block from Col1,Line1 (inclusive) to Col2,Line2 (exclusive)
BOOL FAR  DeleteBlock(
    int doc,
    int col1,
    long line1,
    int col2,
    long line2);

//Delete all text
BOOL FAR  DeleteAll(
    int doc);

//Insert a block at Col,Line
BOOL FAR  InsertBlock( int doc, int col, long line, int size, LPSTR buf);

//Replace a char in a block
BOOL FAR  ReplaceCharInBlock(
    int doc,
    int x,
    long y,
    int ch);

//Count chars in document
ULONG FAR  CountCharsInDocument(
    int doc);

//Compact document in mem
BOOL FAR  CompactDocument(
    int doc);

//Check document coherence
BOOL FAR  CheckDocument(
    int doc);

void FAR  DumpDocument(
    int doc);

//Destroy memory allocated for a document
BOOL FAR  DestroyDocument(
    int doc);

//Allocate a block for document data
BOOL FAR  AllocateBlock(
    LPBLOCKDEF pPrevBlock,
    LPBLOCKDEF pNextBlock,
    LPBLOCKDEF *pNewBlock);

//Retrieve chars on a line
BOOL FAR  GetTextAtLine(
    int doc,
    long line,
    int col1,
    int col2,
    LPSTR text);

//Change tabulations in a document
void FAR  SetTabs(
    int doc,
    int oldTab,
    int newTab);

BOOL FAR  CreateNewBlock(
    LPBLOCKDEF *pNewBlock);

LPSTR FAR  DocAlloc(
    WORD bytes);

BOOL FAR  DocFree(
    LPVOID lpv);

int FAR  AlignToTabs(
    int editCol,
    int len,
    LPSTR pc);

void FAR  ExpandTabs(
    LPLINEREC *pl);

void FAR  CheckSyntax(
    int doc);
