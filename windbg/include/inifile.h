/*++ BUILD Version: 0001    // Increment this if a change has global effects
---*/
//Loads ini file from disk into memory
int FAR  LoadIniFile(
    void);

//Saves ini file to disk
void FAR  SaveIniFile(void );

BOOL FAR  ReadStrFromFile(int hFile, LPSTR lpszStr, int wMaxSize, BOOL iniFile);

BOOL FAR  WriteStrToFile(
    int hFile,
    LPSTR lpszStr,
    BOOL iniFile);
