

#ifndef EM_TYPE_H
#define EM_TYPE_H

#define _WIN32_WINDOWS 0x501
#define _WIN32_WINNT 0x501
#define CONST const
#define VOID void
#define FAR  far

typedef char CHAR;
typedef CONST CHAR *LPCSTR, *PCSTR;
typedef unsigned long ULONG;
typedef void *PVOID;
typedef unsigned char UCHAR;
typedef UCHAR *PUCHAR;
typedef ULONG *PULONG;
typedef short SHORT;
typedef long LONG;
typedef unsigned long ULONG_PTR, *PULONG_PTR;
typedef ULONG_PTR DWORD_PTR;
typedef long LONG_PTR;
#define CALLBACK    __stdcall
#define WINAPI      __stdcall
typedef ULONG NTSTATUS;


#define _fmemcpy memcpy
#define _fmemset memset
#define _fmemmove memmove

__inline
long 
HandleToLong( 
	const void *h 
	) 
{ 
    return((long) (LONG_PTR) h ); 
} 

#endif