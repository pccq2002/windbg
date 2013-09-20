/*--

Copyright (c) 1992  Microsoft Corporation

Module Name:

    precomp.h

Abstract:

    Header file that is pre-compiled into a .pch file

Author:

    Wesley Witt (wesw) 21-Sep-1993

Environment:

    Win32, User Mode

--*/

// an astonishingly stupid warning
#ifndef _precomp_h
#define _precomp_h

//#define KERNEL 

#pragma warning(disable:4124)
#define _WIN32_WINNT 0x0501
#define PAGE_SIZE 0x2000

#define NOEXTAPI
#define CONST const
#define VOID void
#define far 
typedef char CHAR;
typedef unsigned long DWORD;
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
#define CALLBACK    __stdcall
#define WINAPI      __stdcall
#define far 
typedef unsigned char BYTE;
typedef unsigned short USHORT;

typedef CHAR *LPSTR, *PSTR;
typedef __int64 LONGLONG;
typedef void *PVOID;
typedef PVOID HANDLE;
typedef long *PDWORD_PTR;

typedef long LONG_PTR;
typedef char CHAR;
typedef CHAR *PCHAR;
typedef USHORT RTL_STRING_LENGTH_TYPE;
typedef ULONG NTSTATUS;
#define NT_SUCCESS(Status) ((NTSTATUS)(Status) >= 0)
typedef struct _STRING {
    USHORT Length;
    USHORT MaximumLength;
	PCHAR Buffer;
} STRING;
typedef STRING *PSTRING;

typedef STRING ANSI_STRING;
typedef PSTRING PANSI_STRING;
typedef unsigned __int64 ULONGLONG;
#define CONTAINING_RECORD64(address, type, field) ((ULONGLONG)(address) - (ULONGLONG)(&((type *)0)->field)) 
#define CONTAINING_RECORD32(address, type, field)  ((type *)(((ULONG_PTR)address) - (ULONG_PTR)(&(((type *)0)->field))))

#define NOEXTAPI

#include "biavst.h"
#pragma 

#include <windows.H>
#include <windef.h>

#include <stdio.h>

#include <memory.h>
#include <malloc.h>
#include <process.h>
#include <stdlib.h>
#include <tchar.h>
//#include <crt\io.h>
#include <fcntl.h>
#include <setjmp.h>
//#include <dbghelp.h>




#include <cvinfo.h>
#include "od.h"
#include "odp.h"
#include "emdm.h"
#include "win32dm.h"
//#include "windbgkd.h"
#include "sundown.h"

#include <wdbgexts.h>

#include "i386.h"
#include "dm.h"
#include "resource.h"
#include "list.h"
#include "bp.h"
#include "dmkd.h"
#include "funccall.h"
#include "debug.h"
#include "dbgver.h"
#include "splay.h"
#include "dmkd.h"

#include "dm.h"
#include "resource.h"
#include "dmole.h"
#include "list.h"
#include "bp.h"
#include "funccall.h"
#include "debug.h"
#include "dbgver.h"
#include "NTIODUMP.H"
#include "VDMDBG.H"


#define _fmemcpy memcpy
#define _fmemmove memmove
#define STATUS_DATA_ERROR ((NTSTATUS)0xC000003EL)
#define _fmemcmp memcmp

#endif