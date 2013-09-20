/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1994-1998  Microsoft Corporation

Module Name:

    ntiodump.h

Abstract:

    This is the include file that defines all constants and types for
    accessing memory dump files.

Author:

    Darryl Havens (darrylh) 6-jan-1994

Revision History:


--*/

#ifndef _NTIODUMP_
#define _NTIODUMP_

#ifdef __cplusplus
extern "C" {
#endif

//
// Define the information required to process memory dumps.
//


// Dump Types
typedef enum _DUMP_TYPES {
    DUMP_TYPE_UNKNOWN,
    DUMP_TYPE_FULL,
    DUMP_TYPE_SUMMARY,
    DUMP_TYPE_HEADER,
    DUMP_TYPE_INVALID
} DUMP_TYPE;

//
// Define dump header longword offset constants.
//

#define DH_PHYSICAL_MEMORY_BLOCK        25
#define DH_CONTEXT_RECORD               200
#define DH_EXCEPTION_RECORD             500

#define DH_REBOOT_AFTER_CRASHDUMP       900
#define DH_DUMP_TYPE                    994
#define DH_REQUIRED_DUMP_SPACE          1000
#define DH_CRASH_DUMP_TIMESTAMP         1008
// Summary dump starts on the second page
#define DH_SUMMARY_DUMP_RECORD          1024


//
// Define the dump header structure.
//

typedef struct _DUMP_HEADER {
    ULONG Signature;
    ULONG ValidDump;
    ULONG MajorVersion;
    ULONG MinorVersion;
    ULONG_PTR DirectoryTableBase;
    PULONG PfnDataBase;
    PLIST_ENTRY PsLoadedModuleList;
    PLIST_ENTRY PsActiveProcessHead;
    ULONG MachineImageType;
    ULONG NumberProcessors;
    ULONG BugCheckCode;
    ULONG_PTR BugCheckParameter1;
    ULONG_PTR BugCheckParameter2;
    ULONG_PTR BugCheckParameter3;
    ULONG_PTR BugCheckParameter4;
    CHAR VersionUser[32];
    ULONG Spare1;
    ULONG Spare2;
} DUMP_HEADER, *PDUMP_HEADER;

// Options for summary dump
#define VALID_KERNEL_VA                     1
#define VALID_CURRENT_USER_VA               2

// Only exists for summary dumps
// If summary dump exists when header contains a valid signature
typedef struct _SUMMARY_DUMP_HEADER {
    ULONG       Signature;
    ULONG       ValidDump;
    ULONG       DumpOptions;      //Summary Dump Options
    ULONG       HeaderSize;       //Offset to the start of actual memory dump
    ULONG       BitmapSize;       //Total bitmap size (i.e., maximum #bits)
    ULONG       Pages;            //Total bits set in bitmap (i.e., total pages in sdump)
} SUMMARY_DUMP_HEADER, *PSUMMARY_DUMP_HEADER;


#ifdef __cplusplus
}
#endif

#endif // _NTIODUMP_
