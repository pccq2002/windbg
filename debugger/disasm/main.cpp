/*-------------------------------------------------  
 
 Oleh Yuschuk反汇编引擎Visual C++ 6.0移植版

 感谢CoDe_Inject所做的修改
 -------------------------------------------------*/

//project Sectings/ C/C++ Language/ Project Options里加个/J

#include <windows.h>
#include "odDisasm/disasm.h"
#define CODESIZE 0x7748

TCHAR  *pBuffer ;
UINT nIndex=0;

int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance,
                    PSTR szCmdLine, int iCmdShow)
{
	
	int nCodelen;
	DWORD szTemp;
	HANDLE hFile;	
	TCHAR szFileName[MAX_PATH ] = "TraceMe.exe";                         
	t_disasm da;
					
				
	
   	hFile = CreateFile(
		szFileName,
		GENERIC_READ | GENERIC_WRITE, 
		FILE_SHARE_READ, 
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL);
	if( hFile == INVALID_HANDLE_VALUE )
		return 0;
	
	pBuffer = new TCHAR [CODESIZE];  
	SetFilePointer(hFile,0x1000,NULL,FILE_BEGIN);
	
    ReadFile(hFile, pBuffer,CODESIZE, &szTemp, NULL);


	
	while(nIndex<CODESIZE)
	{
		
		nCodelen= Disasm(&pBuffer[nIndex], 20,0, &da,DISASM_CODE);//调用反汇编引擎
		nIndex+=nCodelen;
		//你的代码
		//printf();

	}
	CloseHandle(hFile);	
	
	return 1;
}