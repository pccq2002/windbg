
#ifndef _sundown_h_
#define _sundown_h_


#define SE32To64(x32) ((ULONG64)(LONG64)(LONG)(x32))
#define SEPtrTo64(x32) ((ULONG64)(LONG64)(LONG_PTR)(x32))

#define BREAKPOINT_TABLE_SIZE 32
//
// DebuggerDataList is valid
//
#define DBGKD_VERS_FLAG_DATA							0x0002
#define DBGKD_VERS_FLAG_MP                              0x0001
__inline
BOOL
Is64PtrSE(
    ULONG64 p64
    )
/*++
Description:
    Is the pointer sign extended? It is an error if the pointer 
    is in the range of 2GB and 4GB
--*/
{
    return ((p64 < 0x0000000080000000) || (0x100000000 <= p64));
}

#define IN 
#define OUT 

#ifndef FORCEINLINE
#define FORCEINLINE __inline
#endif

typedef struct _EXCEPTION_RECORD32 {
    NTSTATUS ExceptionCode;
    ULONG ExceptionFlags;
    ULONG ExceptionRecord;
    ULONG ExceptionAddress;
    ULONG NumberParameters;
    ULONG ExceptionInformation[EXCEPTION_MAXIMUM_PARAMETERS];
} EXCEPTION_RECORD32, *PEXCEPTION_RECORD32;

typedef struct _EXCEPTION_DEBUG_INFO32 {
    EXCEPTION_RECORD32 ExceptionRecord;
    DWORD dwFirstChance;
} EXCEPTION_DEBUG_INFO32, *LPEXCEPTION_DEBUG_INFO32;


#define KDBG_TAG    'GBDK'

typedef struct LIST_ENTRY32 {
    ULONG Flink;
    ULONG Blink;
} LIST_ENTRY32;
typedef LIST_ENTRY32 *PLIST_ENTRY32;

typedef struct _DBGKD_DEBUG_DATA_HEADER32 {
	
    //
    // Link to other blocks
    //
	
    LIST_ENTRY32 List;
	
    //
    // This is a unique tag to identify the owner of the block.
    // If your component only uses one pool tag, use it for this, too.
    //
	
    ULONG           OwnerTag;
	
    //
    // This must be initialized to the size of the data block,
    // including this structure.
    //
	
    ULONG           Size;
	
} DBGKD_DEBUG_DATA_HEADER32, *PDBGKD_DEBUG_DATA_HEADER32;


typedef struct _EXCEPTION_RECORD64 {
    NTSTATUS ExceptionCode;
    ULONG ExceptionFlags;
    ULONG64 ExceptionRecord;
    ULONG64 ExceptionAddress;
    ULONG NumberParameters;
    ULONG __unusedAlignment;
    ULONG64 ExceptionInformation[EXCEPTION_MAXIMUM_PARAMETERS];
} EXCEPTION_RECORD64, *PEXCEPTION_RECORD64;



typedef struct _EXCEPTION_DEBUG_INFO64 {
    EXCEPTION_RECORD64 ExceptionRecord;
    DWORD dwFirstChance;
} EXCEPTION_DEBUG_INFO64, *LPEXCEPTION_DEBUG_INFO64;


typedef struct _STRING32 {
    USHORT   Length;
    USHORT   MaximumLength;
    ULONG  Buffer;
} STRING32;
typedef STRING32 *PSTRING32;

typedef struct _STRING64 {
    USHORT   Length;
    USHORT   MaximumLength;
    ULONGLONG  Buffer;
} STRING64;
typedef STRING64 *PSTRING64;


typedef STRING32 UNICODE_STRING32;
typedef UNICODE_STRING32 *PUNICODE_STRING32;

typedef STRING32 ANSI_STRING32;
typedef ANSI_STRING32 *PANSI_STRING32;

typedef STRING64 UNICODE_STRING64;
typedef UNICODE_STRING64 *PUNICODE_STRING64;

typedef STRING64 ANSI_STRING64;
typedef ANSI_STRING64 *PANSI_STRING64;


//
// Conversion Macros
//
#define COPYSE(p64, p32, f)                 \
    p64->f = (ULONG64)(LONG64)(LONG)p32->f

//
// Packet Size and Control Stream Size
//
#define PACKET_MAX_SIZE                     4000
#define DBGKD_MAXSTREAM                     16

//
// Magic Packet IDs
//
#define INITIAL_PACKET_ID                   0x80800000
#define SYNC_PACKET_ID                      0x00000800

//
// Magic Packet bytes
//
#define BREAKIN_PACKET                      0x62626262
#define BREAKIN_PACKET_BYTE                 0x62
#define PACKET_LEADER                       0x30303030
#define PACKET_LEADER_BYTE                  0x30
#define CONTROL_PACKET_LEADER               0x69696969
#define CONTROL_PACKET_LEADER_BYTE          0x69
#define PACKET_TRAILING_BYTE                0xAA

//
// Packet Types
//
#define PACKET_TYPE_UNUSED                  0
#define PACKET_TYPE_KD_STATE_CHANGE32       1
#define PACKET_TYPE_KD_STATE_MANIPULATE     2
#define PACKET_TYPE_KD_DEBUG_IO             3
#define PACKET_TYPE_KD_ACKNOWLEDGE          4
#define PACKET_TYPE_KD_RESEND               5
#define PACKET_TYPE_KD_RESET                6
#define PACKET_TYPE_KD_STATE_CHANGE64       7
#define PACKET_TYPE_KD_POLL_BREAKIN         8
#define PACKET_TYPE_KD_TRACE_IO             9
#define PACKET_TYPE_KD_CONTROL_REQUEST      10
#define PACKET_TYPE_KD_FILE_IO              11
#define PACKET_TYPE_MAX                     12

//
// Wait State Change Types
//
#define DbgKdMinimumStateChange             0x00003030
#define DbgKdExceptionStateChange           0x00003030
#define DbgKdLoadSymbolsStateChange         0x00003031
#define DbgKdCommandStringStateChange       0x00003032
#define DbgKdMaximumStateChange             0x00003033

//
// Manipulate Types
//
#define DbgKdMinimumManipulate              0x00003130
#define DbgKdReadVirtualMemoryApi           0x00003130
#define DbgKdWriteVirtualMemoryApi          0x00003131
#define DbgKdGetContextApi                  0x00003132
#define DbgKdSetContextApi                  0x00003133
#define DbgKdWriteBreakPointApi             0x00003134
#define DbgKdRestoreBreakPointApi           0x00003135
#define DbgKdContinueApi                    0x00003136
#define DbgKdReadControlSpaceApi            0x00003137
#define DbgKdWriteControlSpaceApi           0x00003138
#define DbgKdReadIoSpaceApi                 0x00003139
#define DbgKdWriteIoSpaceApi                0x0000313A
#define DbgKdRebootApi                      0x0000313B
#define DbgKdContinueApi2                   0x0000313C
#define DbgKdReadPhysicalMemoryApi          0x0000313D
#define DbgKdWritePhysicalMemoryApi         0x0000313E
#define DbgKdQuerySpecialCallsApi           0x0000313F
#define DbgKdSetSpecialCallApi              0x00003140
#define DbgKdClearSpecialCallsApi           0x00003141
#define DbgKdSetInternalBreakPointApi       0x00003142
#define DbgKdGetInternalBreakPointApi       0x00003143
#define DbgKdReadIoSpaceExtendedApi         0x00003144
#define DbgKdWriteIoSpaceExtendedApi        0x00003145
#define DbgKdGetVersionApi                  0x00003146
#define DbgKdWriteBreakPointExApi           0x00003147
#define DbgKdRestoreBreakPointExApi         0x00003148
#define DbgKdCauseBugCheckApi               0x00003149
#define DbgKdSwitchProcessor                0x00003150
#define DbgKdPageInApi                      0x00003151
#define DbgKdReadMachineSpecificRegister    0x00003152
#define DbgKdWriteMachineSpecificRegister   0x00003153
#define OldVlm1                             0x00003154
#define OldVlm2                             0x00003155
#define DbgKdSearchMemoryApi                0x00003156
#define DbgKdGetBusDataApi                  0x00003157
#define DbgKdSetBusDataApi                  0x00003158
#define DbgKdCheckLowMemoryApi              0x00003159
#define DbgKdClearAllInternalBreakpointsApi 0x0000315A
#define DbgKdFillMemoryApi                  0x0000315B
#define DbgKdQueryMemoryApi                 0x0000315C
#define DbgKdSwitchPartition                0x0000315D
#define DbgKdMaximumManipulate              0x0000315E

//
// Debug I/O Types
//
#define DbgKdPrintStringApi                 0x00003230
#define DbgKdGetStringApi                   0x00003231

//
// Control Report Flags
//
#define REPORT_INCLUDES_SEGS                0x0001
#define REPORT_INCLUDES_CS                  0x0002

//
// Protocol Versions
//
#define DBGKD_64BIT_PROTOCOL_VERSION1       5
#define DBGKD_64BIT_PROTOCOL_VERSION2       6

//
// Query Memory Address Spaces
//
#define DBGKD_QUERY_MEMORY_VIRTUAL          0
#define DBGKD_QUERY_MEMORY_PROCESS          0
#define DBGKD_QUERY_MEMORY_SESSION          1
#define DBGKD_QUERY_MEMORY_KERNEL           2

//
// Query Memory Flags
//
#define DBGKD_QUERY_MEMORY_READ             0x01
#define DBGKD_QUERY_MEMORY_WRITE            0x02
#define DBGKD_QUERY_MEMORY_EXECUTE          0x04
#define DBGKD_QUERY_MEMORY_FIXED            0x08

//
// KD Packet Structure
//
typedef struct _KD_PACKET
{
    ULONG PacketLeader;
    USHORT PacketType;
    USHORT ByteCount;
    ULONG PacketId;
    ULONG Checksum;
} KD_PACKET, *PKD_PACKET;

//
// KD Context
//
typedef struct _KD_CONTEXT
{
    ULONG KdpDefaultRetries;
    BOOLEAN KdpControlCPending;
} KD_CONTEXT, *PKD_CONTEXT;

//
// Control Sets for Supported Architectures
//
#include <pshpack4.h>
typedef struct _X86_DBGKD_CONTROL_SET
{
    ULONG TraceFlag;
    ULONG Dr7;
    ULONG CurrentSymbolStart;
    ULONG CurrentSymbolEnd;
} X86_DBGKD_CONTROL_SET, *PX86_DBGKD_CONTROL_SET;

typedef struct _IA64_DBGKD_CONTROL_SET
{
    ULONG Continue;
    ULONG64 CurrentSymbolStart;
    ULONG64 CurrentSymbolEnd;
} IA64_DBGKD_CONTROL_SET, *PIA64_DBGKD_CONTROL_SET;

typedef struct _AMD64_DBGKD_CONTROL_SET
{
    ULONG TraceFlag;
    ULONG64 Dr7;
    ULONG64 CurrentSymbolStart;
    ULONG64 CurrentSymbolEnd;
} AMD64_DBGKD_CONTROL_SET, *PAMD64_DBGKD_CONTROL_SET;

typedef struct _DBGKD_ANY_CONTROL_SET
{
    union
    {
        X86_DBGKD_CONTROL_SET X86ControlSet;
        IA64_DBGKD_CONTROL_SET IA64ControlSet;
        AMD64_DBGKD_CONTROL_SET Amd64ControlSet;
    };
} DBGKD_ANY_CONTROL_SET, *PDBGKD_ANY_CONTROL_SET;
#include <poppack.h>

typedef X86_DBGKD_CONTROL_SET DBGKD_CONTROL_SET, *PDBGKD_CONTROL_SET;
//
// DBGKM Structure for Exceptions
//
typedef struct _DBGKM_EXCEPTION64
{
    EXCEPTION_RECORD64 ExceptionRecord;
    ULONG FirstChance;
} DBGKM_EXCEPTION64, *PDBGKM_EXCEPTION64;

//
// DBGKD Structure for State Change
//
typedef struct _DBGKD_CONTROL_REPORT
{
    ULONG Dr6;
    ULONG Dr7;
    USHORT InstructionCount;
    USHORT ReportFlags;
    UCHAR InstructionStream[DBGKD_MAXSTREAM];
    USHORT SegCs;
    USHORT SegDs;
    USHORT SegEs;
    USHORT SegFs;
    ULONG EFlags;
} DBGKD_CONTROL_REPORT, *PDBGKD_CONTROL_REPORT;

//
// DBGKD Structure for Debug I/O Type Print String
//
typedef struct _DBGKD_PRINT_STRING
{
    ULONG LengthOfString;
} DBGKD_PRINT_STRING, *PDBGKD_PRINT_STRING;

//
// DBGKD Structure for Debug I/O Type Get String
//
typedef struct _DBGKD_GET_STRING
{
    ULONG LengthOfPromptString;
    ULONG LengthOfStringRead;
} DBGKD_GET_STRING, *PDBGKD_GET_STRING;

//
// DBGKD Structure for Debug I/O
//
typedef struct _DBGKD_DEBUG_IO
{
    ULONG ApiNumber;
    USHORT ProcessorLevel;
    USHORT Processor;
    union
    {
        DBGKD_PRINT_STRING PrintString;
        DBGKD_GET_STRING GetString;
    } u;
} DBGKD_DEBUG_IO, *PDBGKD_DEBUG_IO;

//
// DBGKD Structure for Load Symbols
//
typedef struct _DBGKD_LOAD_SYMBOLS64
{
    ULONG PathNameLength;
    ULONG64 BaseOfDll;
    ULONG64 ProcessId;
    ULONG CheckSum;
    ULONG SizeOfImage;
    BOOLEAN UnloadSymbols;
} DBGKD_LOAD_SYMBOLS64, *PDBGKD_LOAD_SYMBOLS64;

//
// DBGKD Structure for Wait State Change
//
typedef struct _DBGKD_WAIT_STATE_CHANGE64
{
    ULONG NewState;
    USHORT ProcessorLevel;
    USHORT Processor;
    ULONG NumberProcessors;
    ULONG64 Thread;
    ULONG64 ProgramCounter;
    union
    {
        DBGKM_EXCEPTION64 Exception;
        DBGKD_LOAD_SYMBOLS64 LoadSymbols;
    } u;
    DBGKD_CONTROL_REPORT ControlReport;
    CONTEXT Context;
} DBGKD_WAIT_STATE_CHANGE64, *PDBGKD_WAIT_STATE_CHANGE64;

//
// DBGKD Manipulate Structures
//
typedef struct _DBGKD_READ_MEMORY64
{
    ULONG64 TargetBaseAddress;
    ULONG TransferCount;
    ULONG ActualBytesRead;
} DBGKD_READ_MEMORY64, *PDBGKD_READ_MEMORY64;

typedef struct _DBGKD_WRITE_MEMORY64
{
    ULONG64 TargetBaseAddress;
    ULONG TransferCount;
    ULONG ActualBytesWritten;
} DBGKD_WRITE_MEMORY64, *PDBGKD_WRITE_MEMORY64;

typedef struct _DBGKD_GET_CONTEXT
{
    ULONG Unused;
} DBGKD_GET_CONTEXT, *PDBGKD_GET_CONTEXT;

typedef struct _DBGKD_SET_CONTEXT
{
    ULONG ContextFlags;
} DBGKD_SET_CONTEXT, *PDBGKD_SET_CONTEXT;

typedef struct _DBGKD_WRITE_BREAKPOINT64
{
    ULONG64 BreakPointAddress;
    ULONG BreakPointHandle;
} DBGKD_WRITE_BREAKPOINT64, *PDBGKD_WRITE_BREAKPOINT64;

typedef struct _DBGKD_RESTORE_BREAKPOINT
{
    ULONG BreakPointHandle;
} DBGKD_RESTORE_BREAKPOINT, *PDBGKD_RESTORE_BREAKPOINT;

typedef struct _DBGKD_CONTINUE
{
    NTSTATUS ContinueStatus;
} DBGKD_CONTINUE, *PDBGKD_CONTINUE;

#include <pshpack4.h>
typedef struct _DBGKD_CONTINUE2
{
    NTSTATUS ContinueStatus;
    union
    {
        DBGKD_CONTROL_SET ControlSet;
        DBGKD_ANY_CONTROL_SET AnyControlSet;
    };
} DBGKD_CONTINUE2, *PDBGKD_CONTINUE2;
#include <poppack.h>

typedef struct _DBGKD_READ_WRITE_IO64
{
    ULONG64 IoAddress;
    ULONG DataSize;
    ULONG DataValue;
} DBGKD_READ_WRITE_IO64, *PDBGKD_READ_WRITE_IO64;

typedef struct _DBGKD_READ_WRITE_IO_EXTENDED64
{
    ULONG DataSize;
    ULONG InterfaceType;
    ULONG BusNumber;
    ULONG AddressSpace;
    ULONG64 IoAddress;
    ULONG DataValue;
} DBGKD_READ_WRITE_IO_EXTENDED64, *PDBGKD_READ_WRITE_IO_EXTENDED64;

typedef struct _DBGKD_READ_WRITE_MSR
{
    ULONG Msr;
    ULONG DataValueLow;
    ULONG DataValueHigh;
} DBGKD_READ_WRITE_MSR, *PDBGKD_READ_WRITE_MSR;

typedef struct _DBGKD_QUERY_SPECIAL_CALLS
{
    ULONG NumberOfSpecialCalls;
} DBGKD_QUERY_SPECIAL_CALLS, *PDBGKD_QUERY_SPECIAL_CALLS;

typedef struct _DBGKD_SET_SPECIAL_CALL64
{
    ULONG64 SpecialCall;
} DBGKD_SET_SPECIAL_CALL64, *PDBGKD_SET_SPECIAL_CALL64;

typedef struct _DBGKD_SET_INTERNAL_BREAKPOINT64
{
    ULONG64 BreakpointAddress;
    ULONG Flags;
} DBGKD_SET_INTERNAL_BREAKPOINT64, *PDBGKD_SET_INTERNAL_BREAKPOINT64;

typedef struct _DBGKD_GET_INTERNAL_BREAKPOINT64
{
    ULONG64 BreakpointAddress;
    ULONG Flags;
    ULONG Calls;
    ULONG MaxCallsPerPeriod;
    ULONG MinInstructions;
    ULONG MaxInstructions;
    ULONG TotalInstructions;
} DBGKD_GET_INTERNAL_BREAKPOINT64, *PDBGKD_GET_INTERNAL_BREAKPOINT64;

typedef struct _DBGKD_BREAKPOINTEX
{
    ULONG BreakPointCount;
    NTSTATUS ContinueStatus;
} DBGKD_BREAKPOINTEX, *PDBGKD_BREAKPOINTEX;

typedef struct _DBGKD_SEARCH_MEMORY
{
    union
    {
        ULONG64 SearchAddress;
        ULONG64 FoundAddress;
    };
    ULONG64 SearchLength;
    ULONG PatternLength;
} DBGKD_SEARCH_MEMORY, *PDBGKD_SEARCH_MEMORY;

typedef struct _DBGKD_GET_SET_BUS_DATA
{
    ULONG BusDataType;
    ULONG BusNumber;
    ULONG SlotNumber;
    ULONG Offset;
    ULONG Length;
} DBGKD_GET_SET_BUS_DATA, *PDBGKD_GET_SET_BUS_DATA;

typedef struct _DBGKD_FILL_MEMORY
{
    ULONG64 Address;
    ULONG Length;
    USHORT Flags;
    USHORT PatternLength;
} DBGKD_FILL_MEMORY, *PDBGKD_FILL_MEMORY;

typedef struct _DBGKD_QUERY_MEMORY
{
    ULONG64 Address;
    ULONG64 Reserved;
    ULONG AddressSpace;
    ULONG Flags;
} DBGKD_QUERY_MEMORY, *PDBGKD_QUERY_MEMORY;

typedef struct _DBGKD_SWITCH_PARTITION
{
    ULONG Partition;
} DBGKD_SWITCH_PARTITION;

typedef struct _DBGKD_GET_VERSION64 {
    USHORT  MajorVersion;
    USHORT  MinorVersion;
    USHORT  ProtocolVersion;
    USHORT  Flags;
    USHORT  MachineType;
	
    USHORT  Unused[3];
	
    ULONG64 KernBase;
    ULONG64 PsLoadedModuleList;
	
    //
    // Components may register a debug data block for use by
    // debugger extensions.  This is the address of the list head.
    //
    // There will always be an entry for the debugger.
    //
	
    ULONG64 DebuggerDataList;
	
} DBGKD_GET_VERSION64, *PDBGKD_GET_VERSION64;

//
// DBGKD Structure for Manipulate
//
typedef struct _DBGKD_MANIPULATE_STATE64
{
    ULONG ApiNumber;
    USHORT ProcessorLevel;
    USHORT Processor;
    NTSTATUS ReturnStatus;
    union
    {
        DBGKD_READ_MEMORY64 ReadMemory;
        DBGKD_WRITE_MEMORY64 WriteMemory;
        DBGKD_GET_CONTEXT GetContext;
        DBGKD_SET_CONTEXT SetContext;
        DBGKD_WRITE_BREAKPOINT64 WriteBreakPoint;
        DBGKD_RESTORE_BREAKPOINT RestoreBreakPoint;
        DBGKD_CONTINUE Continue;
        DBGKD_CONTINUE2 Continue2;
        DBGKD_READ_WRITE_IO64 ReadWriteIo;
        DBGKD_READ_WRITE_IO_EXTENDED64 ReadWriteIoExtended;
        DBGKD_QUERY_SPECIAL_CALLS QuerySpecialCalls;
        DBGKD_SET_SPECIAL_CALL64 SetSpecialCall;
        DBGKD_SET_INTERNAL_BREAKPOINT64 SetInternalBreakpoint;
        DBGKD_GET_INTERNAL_BREAKPOINT64 GetInternalBreakpoint;
        DBGKD_GET_VERSION64 GetVersion64;
        DBGKD_BREAKPOINTEX BreakPointEx;
        DBGKD_READ_WRITE_MSR ReadWriteMsr;
        DBGKD_SEARCH_MEMORY SearchMemory;
        DBGKD_GET_SET_BUS_DATA GetSetBusData;
        DBGKD_FILL_MEMORY FillMemory;
        DBGKD_QUERY_MEMORY QueryMemory;
        DBGKD_SWITCH_PARTITION SwitchPartition;
    } u;
} DBGKD_MANIPULATE_STATE64, *PDBGKD_MANIPULATE_STATE64;

FORCEINLINE
VOID
ExceptionRecord32To64(IN PEXCEPTION_RECORD32 Ex32,
                      OUT PEXCEPTION_RECORD64 Ex64)
{
    ULONG i;

    Ex64->ExceptionCode = Ex32->ExceptionCode;
    Ex64->ExceptionFlags = Ex32->ExceptionFlags;
    Ex64->ExceptionRecord = Ex32->ExceptionRecord;
    COPYSE(Ex64,Ex32,ExceptionAddress);
    Ex64->NumberParameters = Ex32->NumberParameters;

    for (i = 0; i < EXCEPTION_MAXIMUM_PARAMETERS; i++)
    {
        COPYSE(Ex64,Ex32,ExceptionInformation[i]);
    }
}


#ifndef WINDBG_POINTERS_MACROS_ONLY

__inline
void
String32To64(
    PSTRING32 p32,
    PSTRING64 p64
    )
{
    p64->Length = p32->Length;
    p64->MaximumLength = p32->MaximumLength;
    COPYSE(p64, p32, Buffer);
	//memcpy(p64->Buffer, p32->Buffer, p32->Length);
	
}

__inline
void
AnsiString32To64(
    PANSI_STRING32 p32,
    PANSI_STRING64 p64
    )
{
    p64->Length = p32->Length;
    p64->MaximumLength = p32->MaximumLength;
    COPYSE(p64, p32, Buffer);
	//memcpy(p64->Buffer, p32->Buffer, p32->Length);
}

__inline
void
UnicodeString32To64(
    PUNICODE_STRING32 p32,
    PUNICODE_STRING64 p64
    )
{
    p64->Length = p32->Length;
    p64->MaximumLength = p32->MaximumLength;
    COPYSE(p64, p32, Buffer);
}

__inline
VOID
ExceptionDebugInfo32To64(
    LPEXCEPTION_DEBUG_INFO32 e32,
    LPEXCEPTION_DEBUG_INFO64 e64
    )
{
    ExceptionRecord32To64(&e32->ExceptionRecord, &e64->ExceptionRecord);
    e64->dwFirstChance = e32->dwFirstChance;
}

__inline
VOID
ExceptionDebugInfo64To32(
    LPEXCEPTION_DEBUG_INFO64 e64,
    LPEXCEPTION_DEBUG_INFO32 e32
    )
{
	__asm int 3;
    //ExceptionRecord64To32(&e64->ExceptionRecord, &e32->ExceptionRecord);
    e32->dwFirstChance = e64->dwFirstChance;
}

typedef struct _CREATE_THREAD_DEBUG_INFO32 {
    HANDLE hThread;
    DWORD lpThreadLocalBase;
    DWORD lpStartAddress;
} CREATE_THREAD_DEBUG_INFO32, *LPCREATE_THREAD_DEBUG_INFO32;

typedef struct _CREATE_THREAD_DEBUG_INFO64 {
    HANDLE hThread;
    DWORD64 lpThreadLocalBase;
    DWORD64 lpStartAddress;
} CREATE_THREAD_DEBUG_INFO64, *LPCREATE_THREAD_DEBUG_INFO64;

__inline
VOID
CreateThreadDebugInfo32To64(
    LPCREATE_THREAD_DEBUG_INFO32 c32,
    LPCREATE_THREAD_DEBUG_INFO64 c64
    )
{
    c64->hThread = c32->hThread;
    c64->lpThreadLocalBase = SE32To64( c32->lpThreadLocalBase );
    c64->lpStartAddress = SE32To64( c32->lpStartAddress );
}

__inline
VOID
CreateThreadDebugInfo64To32(
    LPCREATE_THREAD_DEBUG_INFO64 c64,
    LPCREATE_THREAD_DEBUG_INFO32 c32
    )
{
    c32->hThread = c64->hThread;
    c32->lpThreadLocalBase = (DWORD)c64->lpThreadLocalBase;
    c32->lpStartAddress = (DWORD)c64->lpStartAddress;
}

typedef struct _CREATE_PROCESS_DEBUG_INFO32 {
    HANDLE hFile;
    HANDLE hProcess;
    HANDLE hThread;
    DWORD lpBaseOfImage;
    DWORD dwDebugInfoFileOffset;
    DWORD nDebugInfoSize;
    DWORD lpThreadLocalBase;
    DWORD lpStartAddress;
    DWORD lpImageName;
    WORD fUnicode;
} CREATE_PROCESS_DEBUG_INFO32, *LPCREATE_PROCESS_DEBUG_INFO32;

typedef struct _CREATE_PROCESS_DEBUG_INFO64 {
    HANDLE hFile;
    HANDLE hProcess;
    HANDLE hThread;
    DWORD64 lpBaseOfImage;
    DWORD dwDebugInfoFileOffset;
    DWORD nDebugInfoSize;
    DWORD64 lpThreadLocalBase;
    DWORD64 lpStartAddress;
    DWORD64 lpImageName;
    WORD fUnicode;
} CREATE_PROCESS_DEBUG_INFO64, *LPCREATE_PROCESS_DEBUG_INFO64;

__inline
VOID
CreateProcessDebugInfo32To64(
    LPCREATE_PROCESS_DEBUG_INFO32 c32,
    LPCREATE_PROCESS_DEBUG_INFO64 c64
    )
{
    c64->hFile = c32->hFile;
    c64->hProcess = c32->hProcess;
    c64->hThread = c32->hThread;
    c64->lpBaseOfImage = SE32To64( c32->lpBaseOfImage );
    c64->dwDebugInfoFileOffset = c32->dwDebugInfoFileOffset;
    c64->nDebugInfoSize = c32->nDebugInfoSize;
    c64->lpThreadLocalBase = SE32To64( c32->lpThreadLocalBase );
    c64->lpStartAddress = SE32To64( c32->lpStartAddress );
    c64->lpImageName = SE32To64( c32->lpImageName );
    c64->fUnicode = c32->fUnicode;
}

__inline
VOID
CreateProcessDebugInfo64To32(
    LPCREATE_PROCESS_DEBUG_INFO64 c64,
    LPCREATE_PROCESS_DEBUG_INFO32 c32
    )
{
    c32->hFile = c64->hFile;
    c32->hProcess = c64->hProcess;
    c32->hThread = c64->hThread;
    c32->lpBaseOfImage = (DWORD)c64->lpBaseOfImage;
    c32->dwDebugInfoFileOffset = c64->dwDebugInfoFileOffset;
    c32->nDebugInfoSize = c64->nDebugInfoSize;
    c32->lpThreadLocalBase = (DWORD)c64->lpThreadLocalBase;
    c32->lpStartAddress = (DWORD)c64->lpStartAddress;
    c32->lpImageName = (DWORD)c64->lpImageName;
    c32->fUnicode = c64->fUnicode;
}

typedef struct _EXIT_THREAD_DEBUG_INFO32 {
    DWORD dwExitCode;
} EXIT_THREAD_DEBUG_INFO32, *LPEXIT_THREAD_DEBUG_INFO32;

typedef struct _EXIT_THREAD_DEBUG_INFO64 {
    DWORD dwExitCode;
} EXIT_THREAD_DEBUG_INFO64, *LPEXIT_THREAD_DEBUG_INFO64;

__inline
VOID
ExitThreadDebugInfo32To64(
    LPEXIT_THREAD_DEBUG_INFO32 e32,
    LPEXIT_THREAD_DEBUG_INFO64 e64
    )
{
    e64->dwExitCode = e32->dwExitCode;
}

__inline
VOID
ExitThreadDebugInfo64To32(
    LPEXIT_THREAD_DEBUG_INFO64 e64,
    LPEXIT_THREAD_DEBUG_INFO32 e32
    )
{
    e32->dwExitCode = e64->dwExitCode;
}

typedef struct _EXIT_PROCESS_DEBUG_INFO32 {
    DWORD dwExitCode;
} EXIT_PROCESS_DEBUG_INFO32, *LPEXIT_PROCESS_DEBUG_INFO32;

typedef struct _EXIT_PROCESS_DEBUG_INFO64 {
    DWORD dwExitCode;
} EXIT_PROCESS_DEBUG_INFO64, *LPEXIT_PROCESS_DEBUG_INFO64;

__inline
VOID
ExitProcessDebugInfo32To64(
    LPEXIT_PROCESS_DEBUG_INFO32 e32,
    LPEXIT_PROCESS_DEBUG_INFO64 e64
    )
{
    e64->dwExitCode = e32->dwExitCode;
}

__inline
VOID
ExitProcessDebugInfo64To32(
    LPEXIT_PROCESS_DEBUG_INFO64 e64,
    LPEXIT_PROCESS_DEBUG_INFO32 e32
    )
{
    e32->dwExitCode = e64->dwExitCode;
}

typedef struct _LOAD_DLL_DEBUG_INFO32 {
    HANDLE hFile;
    DWORD lpBaseOfDll;
    DWORD dwDebugInfoFileOffset;
    DWORD nDebugInfoSize;
    DWORD lpImageName;
    WORD fUnicode;
} LOAD_DLL_DEBUG_INFO32, *LPLOAD_DLL_DEBUG_INFO32;

typedef struct _LOAD_DLL_DEBUG_INFO64 {
    HANDLE hFile;
    DWORD64 lpBaseOfDll;
    DWORD dwDebugInfoFileOffset;
    DWORD nDebugInfoSize;
    DWORD64 lpImageName;
    WORD fUnicode;
} LOAD_DLL_DEBUG_INFO64, *LPLOAD_DLL_DEBUG_INFO64;

__inline
VOID
LoadDllDebugInfo32To64(
    LPLOAD_DLL_DEBUG_INFO32 l32,
    LPLOAD_DLL_DEBUG_INFO64 l64
    )
{
    l64->hFile = l32->hFile;
    l64->lpBaseOfDll = SE32To64( l32->lpBaseOfDll );
    l64->dwDebugInfoFileOffset = l32->dwDebugInfoFileOffset;
    l64->nDebugInfoSize = l32->nDebugInfoSize;
    l64->lpImageName = SE32To64(l32->lpImageName );
    l64->fUnicode = l32->fUnicode;
}

__inline
VOID
LoadDllDebugInfo64To32(
    LPLOAD_DLL_DEBUG_INFO64 l64,
    LPLOAD_DLL_DEBUG_INFO32 l32
    )
{
    l32->hFile = l64->hFile;
    l32->lpBaseOfDll = (DWORD)l64->lpBaseOfDll;
    l32->dwDebugInfoFileOffset = l64->dwDebugInfoFileOffset;
    l32->nDebugInfoSize = l64->nDebugInfoSize;
    l32->lpImageName = (DWORD)l64->lpImageName;
    l32->fUnicode = l64->fUnicode;
}

typedef struct _UNLOAD_DLL_DEBUG_INFO32 {
    DWORD lpBaseOfDll;
} UNLOAD_DLL_DEBUG_INFO32, *LPUNLOAD_DLL_DEBUG_INFO32;

typedef struct _UNLOAD_DLL_DEBUG_INFO64 {
    DWORD64 lpBaseOfDll;
} UNLOAD_DLL_DEBUG_INFO64, *LPUNLOAD_DLL_DEBUG_INFO64;

__inline
VOID
UnloadDllDebugInfo32To64(
    LPUNLOAD_DLL_DEBUG_INFO32 u32,
    LPUNLOAD_DLL_DEBUG_INFO64 u64
    )
{
    u64->lpBaseOfDll = SE32To64(u32->lpBaseOfDll);
}

__inline
VOID
UnloadDllDebugInfo64To32(
    LPUNLOAD_DLL_DEBUG_INFO64 u64,
    LPUNLOAD_DLL_DEBUG_INFO32 u32
    )
{
    u32->lpBaseOfDll = (DWORD)u64->lpBaseOfDll;
}

typedef struct _OUTPUT_DEBUG_STRING_INFO32 {
    DWORD lpDebugStringData;
    WORD fUnicode;
    WORD nDebugStringLength;
} OUTPUT_DEBUG_STRING_INFO32, *LPOUTPUT_DEBUG_STRING_INFO32;

typedef struct _OUTPUT_DEBUG_STRING_INFO64 {
    DWORD64 lpDebugStringData;
    WORD fUnicode;
    WORD nDebugStringLength;
} OUTPUT_DEBUG_STRING_INFO64, *LPOUTPUT_DEBUG_STRING_INFO64;

__inline
VOID
OutputDebugStringInfo32To64(
    LPOUTPUT_DEBUG_STRING_INFO32 o32,
    LPOUTPUT_DEBUG_STRING_INFO64 o64
    )
{
    o64->lpDebugStringData = SE32To64( o32->lpDebugStringData );
    o64->fUnicode = o32->fUnicode;
    o64->nDebugStringLength = o32->nDebugStringLength;
}

__inline
VOID
OutputDebugStringInfo64To32(
    LPOUTPUT_DEBUG_STRING_INFO64 o64,
    LPOUTPUT_DEBUG_STRING_INFO32 o32
    )
{
    o32->lpDebugStringData = (DWORD)o64->lpDebugStringData;
    o32->fUnicode = o64->fUnicode;
    o32->nDebugStringLength = o64->nDebugStringLength;
}

typedef struct _RIP_INFO32 {
    DWORD dwError;
    DWORD dwType;
} RIP_INFO32, *LPRIP_INFO32;

typedef struct _RIP_INFO64 {
    DWORD dwError;
    DWORD dwType;
} RIP_INFO64, *LPRIP_INFO64;

__inline
VOID
RipInfo32To64(
    LPRIP_INFO32 r32,
    LPRIP_INFO64 r64
    )
{
    r64->dwError = r32->dwType;
    r64->dwError = r32->dwError;
}

__inline
VOID
RipInfo64To32(
    LPRIP_INFO64 r64,
    LPRIP_INFO32 r32
    )
{
    r32->dwError = r64->dwType;
    r32->dwError = r64->dwError;
}


typedef struct _DEBUG_EVENT32 {
    DWORD dwDebugEventCode;
    DWORD dwProcessId;
    DWORD dwThreadId;
    union {
        EXCEPTION_DEBUG_INFO32 Exception;
        CREATE_THREAD_DEBUG_INFO32 CreateThread;
        CREATE_PROCESS_DEBUG_INFO32 CreateProcessInfo;
        EXIT_THREAD_DEBUG_INFO32 ExitThread;
        EXIT_PROCESS_DEBUG_INFO32 ExitProcess;
        LOAD_DLL_DEBUG_INFO32 LoadDll;
        UNLOAD_DLL_DEBUG_INFO32 UnloadDll;
        OUTPUT_DEBUG_STRING_INFO32 DebugString;
        RIP_INFO32 RipInfo;
    } u;
} DEBUG_EVENT32, *LPDEBUG_EVENT32;

typedef struct _DEBUG_EVENT64 {
    DWORD dwDebugEventCode;
    DWORD dwProcessId;
    DWORD dwThreadId;
    union {
        EXCEPTION_DEBUG_INFO64 Exception;
        CREATE_THREAD_DEBUG_INFO64 CreateThread;
        CREATE_PROCESS_DEBUG_INFO64 CreateProcessInfo;
        EXIT_THREAD_DEBUG_INFO64 ExitThread;
        EXIT_PROCESS_DEBUG_INFO64 ExitProcess;
        LOAD_DLL_DEBUG_INFO64 LoadDll;
        UNLOAD_DLL_DEBUG_INFO64 UnloadDll;
        OUTPUT_DEBUG_STRING_INFO64 DebugString;
        RIP_INFO64 RipInfo;
    } u;
} DEBUG_EVENT64, *LPDEBUG_EVENT64;

__inline
VOID
DebugEvent32To64(
    LPDEBUG_EVENT32 d32,
    LPDEBUG_EVENT64 d64
    )
{
    d64->dwDebugEventCode = d32->dwDebugEventCode;
    d64->dwProcessId = d32->dwProcessId;
    d64->dwThreadId = d32->dwThreadId;

    switch (d32->dwDebugEventCode) {
        case EXCEPTION_DEBUG_EVENT:
            ExceptionDebugInfo32To64(&d32->u.Exception, &d64->u.Exception);
            break;

        case CREATE_THREAD_DEBUG_EVENT:
            CreateThreadDebugInfo32To64(&d32->u.CreateThread, &d64->u.CreateThread);
            break;

        case CREATE_PROCESS_DEBUG_EVENT:
            CreateProcessDebugInfo32To64(&d32->u.CreateProcessInfo, &d64->u.CreateProcessInfo);
            break;

        case EXIT_THREAD_DEBUG_EVENT:
            ExitThreadDebugInfo32To64(&d32->u.ExitThread, &d64->u.ExitThread);
            break;

        case EXIT_PROCESS_DEBUG_EVENT:
            ExitProcessDebugInfo32To64(&d32->u.ExitProcess, &d64->u.ExitProcess);
            break;

        case LOAD_DLL_DEBUG_EVENT:
            LoadDllDebugInfo32To64(&d32->u.LoadDll, &d64->u.LoadDll);
            break;

        case UNLOAD_DLL_DEBUG_EVENT:
            UnloadDllDebugInfo32To64(&d32->u.UnloadDll, &d64->u.UnloadDll);
            break;

        case OUTPUT_DEBUG_STRING_EVENT:
            OutputDebugStringInfo32To64(&d32->u.DebugString, &d64->u.DebugString);
            break;

        case RIP_EVENT:
            RipInfo32To64(&d32->u.RipInfo, &d64->u.RipInfo);
            break;

#if DBG
        default:
            DebugBreak();
            //ASSERT(0);
            break;
#endif
    }
}

__inline
VOID
DebugEvent64To32(
    LPDEBUG_EVENT64 d64,
    LPDEBUG_EVENT32 d32
    )
{
    d32->dwDebugEventCode = d64->dwDebugEventCode;
    d32->dwProcessId = d64->dwProcessId;
    d32->dwThreadId = d64->dwThreadId;

    switch (d64->dwDebugEventCode) {
        case EXCEPTION_DEBUG_EVENT:
            ExceptionDebugInfo64To32(&d64->u.Exception, &d32->u.Exception);
            break;

        case CREATE_THREAD_DEBUG_EVENT:
            CreateThreadDebugInfo64To32(&d64->u.CreateThread, &d32->u.CreateThread);
            break;

        case CREATE_PROCESS_DEBUG_EVENT:
            CreateProcessDebugInfo64To32(&d64->u.CreateProcessInfo, &d32->u.CreateProcessInfo);
            break;

        case EXIT_THREAD_DEBUG_EVENT:
            ExitThreadDebugInfo64To32(&d64->u.ExitThread, &d32->u.ExitThread);
            break;

        case EXIT_PROCESS_DEBUG_EVENT:
            ExitProcessDebugInfo64To32(&d64->u.ExitProcess, &d32->u.ExitProcess);
            break;

        case LOAD_DLL_DEBUG_EVENT:
            LoadDllDebugInfo64To32(&d64->u.LoadDll, &d32->u.LoadDll);
            break;

        case UNLOAD_DLL_DEBUG_EVENT:
            UnloadDllDebugInfo64To32(&d64->u.UnloadDll, &d32->u.UnloadDll);
            break;

        case OUTPUT_DEBUG_STRING_EVENT:
            OutputDebugStringInfo64To32(&d64->u.DebugString, &d32->u.DebugString);
            break;

        case RIP_EVENT:
            RipInfo64To32(&d64->u.RipInfo, &d32->u.RipInfo);
            break;

#if DBG
        default:
            DebugBreak();
            //ASSERT(0);
            break;
#endif
    }
}



typedef struct _CURDIR32 {
    UNICODE_STRING32 DosPath;
    HANDLE Handle;
} CURDIR32, *PCURDIR32;

typedef struct _CURDIR64 {
    UNICODE_STRING64 DosPath;
    HANDLE Handle;
} CURDIR64, *PCURDIR64;


__inline
void
Curdir32To64(
    PCURDIR32 p32,
    PCURDIR64 p64
    )
{
    UnicodeString32To64(&p32->DosPath, &p64->DosPath);
    p64->Handle = p32->Handle;
}


typedef struct _RTL_DRIVE_LETTER_CURDIR32 {
    USHORT Flags;
    USHORT Length;
    ULONG TimeStamp;
    STRING32 DosPath;
} RTL_DRIVE_LETTER_CURDIR32, *PRTL_DRIVE_LETTER_CURDIR32;


typedef struct _RTL_DRIVE_LETTER_CURDIR64 {
    USHORT Flags;
    USHORT Length;
    ULONG TimeStamp;
    STRING64 DosPath;
} RTL_DRIVE_LETTER_CURDIR64, *PRTL_DRIVE_LETTER_CURDIR64;


__inline
void
DriveLetterCurdir32To64(
    PRTL_DRIVE_LETTER_CURDIR32 p32,
    PRTL_DRIVE_LETTER_CURDIR64 p64
    )
{
    p64->Flags = p32->Flags;
    p64->Length = p32->Length;
    p64->TimeStamp = p32->TimeStamp;
    String32To64(&p32->DosPath, &p64->DosPath);
}

typedef struct _UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
#ifdef MIDL_PASS
    [size_is(MaximumLength / 2), length_is((Length) / 2) ] USHORT * Buffer;
#else // MIDL_PASS
    PWSTR  Buffer;
#endif // MIDL_PASS
} UNICODE_STRING;
typedef UNICODE_STRING *PUNICODE_STRING;
typedef const UNICODE_STRING *PCUNICODE_STRING;

#define RTL_MAX_DRIVE_LETTERS 32
typedef struct _RTL_USER_PROCESS_PARAMETERS32 {
    ULONG MaximumLength;
    ULONG Length;

    ULONG Flags;
    ULONG DebugFlags;

    HANDLE ConsoleHandle;
    ULONG  ConsoleFlags;
    HANDLE StandardInput;
    HANDLE StandardOutput;
    HANDLE StandardError;

    CURDIR32 CurrentDirectory;        // ProcessParameters
    UNICODE_STRING32 DllPath;         // ProcessParameters
    UNICODE_STRING32 ImagePathName;   // ProcessParameters
    UNICODE_STRING32 CommandLine;     // ProcessParameters
    /*PVOID*/ ULONG Environment;              // NtAllocateVirtualMemory

    ULONG StartingX;
    ULONG StartingY;
    ULONG CountX;
    ULONG CountY;
    ULONG CountCharsX;
    ULONG CountCharsY;
    ULONG FillAttribute;

    ULONG WindowFlags;
    ULONG ShowWindowFlags;
    UNICODE_STRING32 WindowTitle;     // ProcessParameters
    UNICODE_STRING32 DesktopInfo;     // ProcessParameters
    UNICODE_STRING32 ShellInfo;       // ProcessParameters
    UNICODE_STRING32 RuntimeData;     // ProcessParameters
    RTL_DRIVE_LETTER_CURDIR32 CurrentDirectores[ RTL_MAX_DRIVE_LETTERS ];
} RTL_USER_PROCESS_PARAMETERS32, *PRTL_USER_PROCESS_PARAMETERS32;

typedef struct _RTL_USER_PROCESS_PARAMETERS64 {
    ULONG MaximumLength;
    ULONG Length;

    ULONG Flags;
    ULONG DebugFlags;

    HANDLE ConsoleHandle;
    ULONG  ConsoleFlags;
    HANDLE StandardInput;
    HANDLE StandardOutput;
    HANDLE StandardError;

    CURDIR64 CurrentDirectory;        // ProcessParameters
    UNICODE_STRING64 DllPath;         // ProcessParameters
    UNICODE_STRING64 ImagePathName;   // ProcessParameters
    UNICODE_STRING64 CommandLine;     // ProcessParameters
    /*PVOID*/ ULONG64 Environment;              // NtAllocateVirtualMemory

    ULONG StartingX;
    ULONG StartingY;
    ULONG CountX;
    ULONG CountY;
    ULONG CountCharsX;
    ULONG CountCharsY;
    ULONG FillAttribute;

    ULONG WindowFlags;
    ULONG ShowWindowFlags;
    UNICODE_STRING64 WindowTitle;     // ProcessParameters
    UNICODE_STRING64 DesktopInfo;     // ProcessParameters
    UNICODE_STRING64 ShellInfo;       // ProcessParameters
    UNICODE_STRING64 RuntimeData;     // ProcessParameters
    RTL_DRIVE_LETTER_CURDIR64 CurrentDirectores[ RTL_MAX_DRIVE_LETTERS ];
} RTL_USER_PROCESS_PARAMETERS64, *PRTL_USER_PROCESS_PARAMETERS64;

typedef struct _LDR_DATA_TABLE_ENTRY {
    LIST_ENTRY     LoadOrder;
    LIST_ENTRY     MemoryOrder;
    LIST_ENTRY     InitializationOrder;
    PVOID          ModuleBaseAddress;
    PVOID          EntryPoint;
    ULONG          ModuleSize;
    UNICODE_STRING FullModuleName;
    UNICODE_STRING ModuleName;
    ULONG          Flags;
    USHORT         LoadCount;
    USHORT         TlsIndex;
    union {
        LIST_ENTRY Hash;
        struct {
            PVOID SectionPointer;
            ULONG CheckSum;
        };
    };
    ULONG   TimeStamp;
} LDR_DATA_TABLE_ENTRY, *PLDR_DATA_TABLE_ENTRY;

// typedef struct _KDHELP64
// {
//     DWORD64     Thread;
//     DWORD       ThCallbackStack;
//     DWORD       ThCallbackBStore;
//     DWORD       NextCallback;
//     DWORD       FramePointer;
//     DWORD64     KiCallUserMode;
//     DWORD64     KeUserCallbackDispatcher;
//     DWORD64     SystemRangeStart;
//     DWORD64     Reserved[8];
// } KDHELP64, *PKDHELP64;

//
// DBGKD Manipulate Structures
//
typedef struct _DBGKD_READ_MEMORY32
{
    ULONG TargetBaseAddress;
    ULONG TransferCount;
    ULONG ActualBytesRead;
} DBGKD_READ_MEMORY32, *PDBGKD_READ_MEMORY32;

typedef struct _DBGKD_WRITE_MEMORY32
{
    ULONG TargetBaseAddress;
    ULONG TransferCount;
    ULONG ActualBytesWritten;
} DBGKD_WRITE_MEMORY32, *PDBGKD_WRITE_MEMORY32;


typedef struct _DBGKD_WRITE_BREAKPOINT32
{
    ULONG BreakPointAddress;
    ULONG BreakPointHandle;
} DBGKD_WRITE_BREAKPOINT32, *PDBGKD_WRITE_BREAKPOINT32;

typedef struct _DBGKD_READ_WRITE_IO32
{
    ULONG IoAddress;
    ULONG DataSize;
    ULONG DataValue;
} DBGKD_READ_WRITE_IO32, *PDBGKD_READ_WRITE_IO32;

typedef struct _DBGKD_READ_WRITE_IO_EXTENDED32
{
    ULONG DataSize;
    ULONG InterfaceType;
    ULONG BusNumber;
    ULONG AddressSpace;
    ULONG IoAddress;
    ULONG DataValue;
} DBGKD_READ_WRITE_IO_EXTENDED32, *PDBGKD_READ_WRITE_IO_EXTENDED32;

typedef struct _DBGKD_SET_SPECIAL_CALL32
{
    ULONG SpecialCall;
} DBGKD_SET_SPECIAL_CALL32, *PDBGKD_SET_SPECIAL_CALL32;

typedef struct _DBGKD_SET_INTERNAL_BREAKPOINT32
{
    ULONG BreakpointAddress;
    ULONG Flags;
} DBGKD_SET_INTERNAL_BREAKPOINT32, *PDBGKD_SET_INTERNAL_BREAKPOINT32;

typedef struct _DBGKD_GET_INTERNAL_BREAKPOINT32
{
    ULONG BreakpointAddress;
    ULONG Flags;
    ULONG Calls;
    ULONG MaxCallsPerPeriod;
    ULONG MinInstructions;
    ULONG MaxInstructions;
    ULONG TotalInstructions;
} DBGKD_GET_INTERNAL_BREAKPOINT32, *PDBGKD_GET_INTERNAL_BREAKPOINT32;

//
// The following structures have changed in more than pointer size.
//
//
// This is the version packet for pre-NT5 Beta 2 systems.
// For now, it is also still used on x86
//
typedef struct _DBGKD_GET_VERSION32 {
    USHORT  MajorVersion;
    USHORT  MinorVersion;
    USHORT  ProtocolVersion;
    USHORT  Flags;
    ULONG   KernBase;
    ULONG   PsLoadedModuleList;
	
    USHORT  MachineType;
	
    //
    // help for walking stacks with user callbacks:
    //
	
    //
    // The address of the thread structure is provided in the
    // WAIT_STATE_CHANGE packet.  This is the offset from the base of
    // the thread structure to the pointer to the kernel stack frame
    // for the currently active usermode callback.
    //
	
    USHORT  ThCallbackStack;            // offset in thread data
	
    //
    // these values are offsets into that frame:
    //
	
    USHORT  NextCallback;               // saved pointer to next callback frame
    USHORT  FramePointer;               // saved frame pointer
	
    //
    // Address of the kernel callout routine.
    //
	
    ULONG   KiCallUserMode;             // kernel routine
	
    //
    // Address of the usermode entry point for callbacks.
    //
	
    ULONG   KeUserCallbackDispatcher;   // address in ntdll
	
    //
    // DbgBreakPointWithStatus is a function which takes a ULONG argument
    // and hits a breakpoint.  This field contains the address of the
    // breakpoint instruction.  When the debugger sees a breakpoint
    // at this address, it may retrieve the argument from the first
    // argument register, or on x86 the eax register.
    //
	
    ULONG   BreakpointWithStatus;       // address of breakpoint
	
    //
    // Components may register a debug data block for use by
    // debugger extensions.  This is the address of the list head.
    //
	
    ULONG   DebuggerDataList;
	
} DBGKD_GET_VERSION32, *PDBGKD_GET_VERSION32;

//
// DBGKD Structure for Manipulate
//
typedef struct _DBGKD_MANIPULATE_STATE32
{
    ULONG ApiNumber;
    USHORT ProcessorLevel;
    USHORT Processor;
    NTSTATUS ReturnStatus;
    union
    {
        DBGKD_READ_MEMORY32 ReadMemory;
        DBGKD_WRITE_MEMORY32 WriteMemory;
        DBGKD_READ_MEMORY64 ReadMemory64;
        DBGKD_WRITE_MEMORY64 WriteMemory64;
        DBGKD_GET_CONTEXT GetContext;
        DBGKD_SET_CONTEXT SetContext;
        DBGKD_WRITE_BREAKPOINT32 WriteBreakPoint;
        DBGKD_RESTORE_BREAKPOINT RestoreBreakPoint;
        DBGKD_CONTINUE Continue;
        DBGKD_CONTINUE2 Continue2;
        DBGKD_READ_WRITE_IO32 ReadWriteIo;
        DBGKD_READ_WRITE_IO_EXTENDED32 ReadWriteIoExtended;
        DBGKD_QUERY_SPECIAL_CALLS QuerySpecialCalls;
        DBGKD_SET_SPECIAL_CALL32 SetSpecialCall;
        DBGKD_SET_INTERNAL_BREAKPOINT32 SetInternalBreakpoint;
        DBGKD_GET_INTERNAL_BREAKPOINT32 GetInternalBreakpoint;
        DBGKD_GET_VERSION32 GetVersion32;
        DBGKD_BREAKPOINTEX BreakPointEx;
        DBGKD_READ_WRITE_MSR ReadWriteMsr;
        DBGKD_SEARCH_MEMORY SearchMemory;
        DBGKD_GET_SET_BUS_DATA GetSetBusData;
        DBGKD_FILL_MEMORY FillMemory;
        DBGKD_QUERY_MEMORY QueryMemory;
        DBGKD_SWITCH_PARTITION SwitchPartition;
    } u;
} DBGKD_MANIPULATE_STATE32, *PDBGKD_MANIPULATE_STATE32;

//
// DBGKM Structure for Exceptions
//
typedef struct _DBGKM_EXCEPTION32
{
    EXCEPTION_RECORD32 ExceptionRecord;
    ULONG FirstChance;
} DBGKM_EXCEPTION32, *PDBGKM_EXCEPTION32;

typedef struct _KDDEBUGGER_DATA32 {
	
    DBGKD_DEBUG_DATA_HEADER32 Header;
    ULONG   KernBase;
    ULONG   BreakpointWithStatus;       // address of breakpoint
    ULONG   SavedContext;
    USHORT  ThCallbackStack;            // offset in thread data
    USHORT  NextCallback;               // saved pointer to next callback frame
    USHORT  FramePointer;               // saved frame pointer
    USHORT  PaeEnabled:1;
    ULONG   KiCallUserMode;             // kernel routine
    ULONG   KeUserCallbackDispatcher;   // address in ntdll
	
    ULONG   PsLoadedModuleList;
    ULONG   PsActiveProcessHead;
    ULONG   PspCidTable;
	
    ULONG   ExpSystemResourcesList;
    ULONG   ExpPagedPoolDescriptor;
    ULONG   ExpNumberOfPagedPools;
	
    ULONG   KeTimeIncrement;
    ULONG   KeBugCheckCallbackListHead;
    ULONG   KiBugcheckData;
	
    ULONG   IopErrorLogListHead;
	
    ULONG   ObpRootDirectoryObject;
    ULONG   ObpTypeObjectType;
	
    ULONG   MmSystemCacheStart;
    ULONG   MmSystemCacheEnd;
    ULONG   MmSystemCacheWs;
	
    ULONG   MmPfnDatabase;
    ULONG   MmSystemPtesStart;
    ULONG   MmSystemPtesEnd;
    ULONG   MmSubsectionBase;
    ULONG   MmNumberOfPagingFiles;
	
    ULONG   MmLowestPhysicalPage;
    ULONG   MmHighestPhysicalPage;
    ULONG   MmNumberOfPhysicalPages;
	
    ULONG   MmMaximumNonPagedPoolInBytes;
    ULONG   MmNonPagedSystemStart;
    ULONG   MmNonPagedPoolStart;
    ULONG   MmNonPagedPoolEnd;
	
    ULONG   MmPagedPoolStart;
    ULONG   MmPagedPoolEnd;
    ULONG   MmPagedPoolInformation;
    ULONG   MmPageSize;
	
    ULONG   MmSizeOfPagedPoolInBytes;
	
    ULONG   MmTotalCommitLimit;
    ULONG   MmTotalCommittedPages;
    ULONG   MmSharedCommit;
    ULONG   MmDriverCommit;
    ULONG   MmProcessCommit;
    ULONG   MmPagedPoolCommit;
    ULONG   MmExtendedCommit;
	
    ULONG   MmZeroedPageListHead;
    ULONG   MmFreePageListHead;
    ULONG   MmStandbyPageListHead;
    ULONG   MmModifiedPageListHead;
    ULONG   MmModifiedNoWritePageListHead;
    ULONG   MmAvailablePages;
    ULONG   MmResidentAvailablePages;
	
    ULONG   PoolTrackTable;
    ULONG   NonPagedPoolDescriptor;
	
    ULONG   MmHighestUserAddress;
    ULONG   MmSystemRangeStart;
    ULONG   MmUserProbeAddress;
	
    ULONG   KdPrintCircularBuffer;
    ULONG   KdPrintCircularBufferEnd;
    ULONG   KdPrintWritePointer;
    ULONG   KdPrintRolloverCount;
	
    ULONG   MmLoadedUserImageList;
	
} KDDEBUGGER_DATA32, *PKDDEBUGGER_DATA32;

//
// DBGKD Structure for Load Symbols
//
typedef struct _DBGKD_LOAD_SYMBOLS32
{
    ULONG PathNameLength;
    ULONG BaseOfDll;
    ULONG ProcessId;
    ULONG CheckSum;
    ULONG SizeOfImage;
    BOOLEAN UnloadSymbols;
} DBGKD_LOAD_SYMBOLS32, *PDBGKD_LOAD_SYMBOLS32;

typedef struct _DBGKD_WAIT_STATE_CHANGE32
{
    ULONG NewState;
    USHORT ProcessorLevel;
    USHORT Processor;
    ULONG NumberProcessors;
    ULONG Thread;
    ULONG ProgramCounter;
    union
	{
        DBGKM_EXCEPTION32 Exception;
        DBGKD_LOAD_SYMBOLS32 LoadSymbols;
    } u;
    DBGKD_CONTROL_REPORT ControlReport;
    CONTEXT Context;
} DBGKD_WAIT_STATE_CHANGE32, *PDBGKD_WAIT_STATE_CHANGE32;

typedef struct _LDR_DATA_TABLE_ENTRY32 {
    LIST_ENTRY32 InLoadOrderLinks;
    LIST_ENTRY32 InMemoryOrderLinks;
    LIST_ENTRY32 InInitializationOrderLinks;
    ULONG DllBase;
    ULONG EntryPoint;
    ULONG SizeOfImage;
    UNICODE_STRING32 FullDllName;
    UNICODE_STRING32 BaseDllName;
    ULONG Flags;
    USHORT LoadCount;
    USHORT TlsIndex;
    union {
        LIST_ENTRY32 HashLinks;
        struct {
            ULONG SectionPointer;
            ULONG  CheckSum;
        };
    };
    union {
        struct {
            ULONG  TimeDateStamp;
        };
        struct {
            ULONG LoadedImports;
        };
    };
	
    //
    // NOTE : Do not grow this structure at the dump files used a packed
    // array of these structures.
    //
	
} LDR_DATA_TABLE_ENTRY32, *PLDR_DATA_TABLE_ENTRY32;

typedef struct LIST_ENTRY64 {
    ULONGLONG Flink;
    ULONGLONG Blink;
} LIST_ENTRY64;
typedef LIST_ENTRY64 *PLIST_ENTRY64;

typedef struct _LDR_DATA_TABLE_ENTRY64 {
    LIST_ENTRY64 InLoadOrderLinks;
    LIST_ENTRY64 InMemoryOrderLinks;
    LIST_ENTRY64 InInitializationOrderLinks;
    ULONG64 DllBase;
    ULONG64 EntryPoint;
    ULONG SizeOfImage;
    UNICODE_STRING64 FullDllName;
    UNICODE_STRING64 BaseDllName;
    ULONG   Flags;
    USHORT  LoadCount;
    USHORT TlsIndex;
    union {
        LIST_ENTRY64 HashLinks;
        struct {
            ULONG64 SectionPointer;
			ULONG   CheckSum;
        };
    };
    union {
        struct {
            ULONG   TimeDateStamp;
        };
        struct {
            ULONG64 LoadedImports;
        };
    };
	
    //
    // NOTE : Do not grow this structure at the dump files used a packed
    // array of these structures.
    //
	
} LDR_DATA_TABLE_ENTRY64, *PLDR_DATA_TABLE_ENTRY64;

__inline
void
UserProcessParameters32To64(
    PRTL_USER_PROCESS_PARAMETERS32 p32,
    PRTL_USER_PROCESS_PARAMETERS64 p64
    )
{
    int i;

    p64->MaximumLength = p32->MaximumLength;
    p64->Length = p32->Length;

    p64->Flags = p32->Flags;
    p64->DebugFlags = p32->DebugFlags;

    p64->ConsoleHandle = p32->ConsoleHandle;
    p64->ConsoleFlags = p32->ConsoleFlags;
    p64->StandardInput = p32->StandardInput;
    p64->StandardOutput = p32->StandardOutput;
    p64->StandardError = p32->StandardError;

    Curdir32To64(&p32->CurrentDirectory, &p64->CurrentDirectory);

    UnicodeString32To64(&p32->DllPath, &p64->DllPath);
    UnicodeString32To64(&p32->ImagePathName, &p64->ImagePathName);
    UnicodeString32To64(&p32->CommandLine, &p64->CommandLine);

    p64->Environment = p32->Environment;              // NtAllocateVirtualMemory

    p64->StartingX = p32->StartingX;
    p64->StartingY = p32->StartingY;
    p64->CountX = p32->CountX;
    p64->CountY = p32->CountY;
    p64->CountCharsX = p32->CountCharsX;
    p64->CountCharsY = p32->CountCharsY;
    p64->FillAttribute = p32->FillAttribute;

    p64->WindowFlags = p32->WindowFlags;
    p64->ShowWindowFlags = p32->ShowWindowFlags;

    UnicodeString32To64(&p32->WindowTitle, &p64->WindowTitle);
    UnicodeString32To64(&p32->DesktopInfo, &p64->DesktopInfo);
    UnicodeString32To64(&p32->ShellInfo, &p64->ShellInfo);
    UnicodeString32To64(&p32->RuntimeData, &p64->RuntimeData);

    for (i = 0; i < RTL_MAX_DRIVE_LETTERS; i++) {
        DriveLetterCurdir32To64(&p32->CurrentDirectores[i], &p64->CurrentDirectores[i]);
    }
}

__inline
void
ListEntry32To64(
				IN PLIST_ENTRY32 l32,
				OUT PLIST_ENTRY64 l64
				)
{
    l64->Flink = (ULONGLONG)(LONGLONG)(LONG)l32->Flink;
    l64->Blink = (ULONGLONG)(LONGLONG)(LONG)l32->Blink;
}

__inline
void
LdrDataTableEntry32To64(
    PLDR_DATA_TABLE_ENTRY32 pLdr32,
    PLDR_DATA_TABLE_ENTRY64 pLdr64
    )
{
    ListEntry32To64(&pLdr32->InLoadOrderLinks, &pLdr64->InLoadOrderLinks);
    ListEntry32To64(&pLdr32->InMemoryOrderLinks, &pLdr64->InMemoryOrderLinks);
    ListEntry32To64(&pLdr32->InInitializationOrderLinks, &pLdr64->InInitializationOrderLinks);
    
    COPYSE(pLdr64, pLdr32, DllBase);
    COPYSE(pLdr64, pLdr32, EntryPoint);
    
    pLdr64->SizeOfImage = pLdr32->SizeOfImage;
    
    UnicodeString32To64(&pLdr32->FullDllName, &pLdr64->FullDllName);
    UnicodeString32To64(&pLdr32->BaseDllName, &pLdr64->BaseDllName);
    
    pLdr64->Flags = pLdr32->Flags;
    pLdr64->LoadCount = pLdr32->LoadCount;
    pLdr64->TlsIndex = pLdr32->TlsIndex;
    
    ListEntry32To64(&pLdr32->HashLinks, &pLdr64->HashLinks);
    
    COPYSE(pLdr64, pLdr32, LoadedImports);
}

typedef struct _PEB_LDR_DATA
{
    ULONG Length;
    BOOLEAN Initialized;
    PVOID SsHandle;
    LIST_ENTRY InLoadOrderModuleList;
    LIST_ENTRY InMemoryOrderModuleList;
    LIST_ENTRY InInitializationOrderModuleList;
    PVOID EntryInProgress;
} PEB_LDR_DATA, *PPEB_LDR_DATA;

typedef struct RTL_DRIVE_LETTER_CURDIR
{
    USHORT Flags;
    USHORT Length;
    ULONG TimeStamp;
    UNICODE_STRING DosPath;
} RTL_DRIVE_LETTER_CURDIR, *PRTL_DRIVE_LETTER_CURDIR;

typedef struct _CURDIR
{
    UNICODE_STRING DosPath;
    HANDLE Handle;
} CURDIR, *PCURDIR;

typedef struct _RTL_USER_PROCESS_PARAMETERS
{
    ULONG               AllocationSize;
    ULONG               Size;
    ULONG               Flags;
    ULONG               DebugFlags;
    HANDLE              ConsoleHandle;
    ULONG               ConsoleFlags;
    HANDLE              hStdInput;
    HANDLE              hStdOutput;
    HANDLE              hStdError;
    CURDIR              CurrentDirectory;
    UNICODE_STRING      DllPath;
    UNICODE_STRING      ImagePathName;
    UNICODE_STRING      CommandLine;
    PWSTR               Environment;
    ULONG               dwX;
    ULONG               dwY;
    ULONG               dwXSize;
    ULONG               dwYSize;
    ULONG               dwXCountChars;
    ULONG               dwYCountChars;
    ULONG               dwFillAttribute;
    ULONG               dwFlags;
    ULONG               wShowWindow;
    UNICODE_STRING      WindowTitle;
    UNICODE_STRING      Desktop;
    UNICODE_STRING      ShellInfo;
    UNICODE_STRING      RuntimeInfo;
    RTL_DRIVE_LETTER_CURDIR DLCurrentDirectory[0x20];
} RTL_USER_PROCESS_PARAMETERS, *PRTL_USER_PROCESS_PARAMETERS;


typedef struct _PEB
{
    BOOLEAN                      InheritedAddressSpace;             /*  00 */
    BOOLEAN                      ReadImageFileExecOptions;          /*  01 */
    BOOLEAN                      BeingDebugged;                     /*  02 */
    BOOLEAN                      SpareBool;                         /*  03 */
    HANDLE                       Mutant;                            /*  04 */
    HMODULE                      ImageBaseAddress;                  /*  08 */
    PPEB_LDR_DATA                LdrData;                           /*  0c */
    RTL_USER_PROCESS_PARAMETERS *ProcessParameters;                 /*  10 */
    PVOID                        SubSystemData;                     /*  14 */
    HANDLE                       ProcessHeap;                       /*  18 */
    PRTL_CRITICAL_SECTION        FastPebLock;                       /*  1c */
    PVOID /*PPEBLOCKROUTINE*/    FastPebLockRoutine;                /*  20 */
    PVOID /*PPEBLOCKROUTINE*/    FastPebUnlockRoutine;              /*  24 */
    ULONG                        EnvironmentUpdateCount;            /*  28 */
    PVOID                        KernelCallbackTable;               /*  2c */
    PVOID                        EventLogSection;                   /*  30 */
    PVOID                        EventLog;                          /*  34 */
    PVOID /*PPEB_FREE_BLOCK*/    FreeList;                          /*  38 */
    ULONG                        TlsExpansionCounter;               /*  3c */
    PVOID                  TlsBitmap;                         /*  40 */
    ULONG                        TlsBitmapBits[2];                  /*  44 */
    PVOID                        ReadOnlySharedMemoryBase;          /*  4c */
    PVOID                        ReadOnlySharedMemoryHeap;          /*  50 */
    PVOID                       *ReadOnlyStaticServerData;          /*  54 */
    PVOID                        AnsiCodePageData;                  /*  58 */
    PVOID                        OemCodePageData;                   /*  5c */
    PVOID                        UnicodeCaseTableData;              /*  60 */
    ULONG                        NumberOfProcessors;                /*  64 */
    ULONG                        NtGlobalFlag;                      /*  68 */
    BYTE                         Spare2[4];                         /*  6c */
    LARGE_INTEGER                CriticalSectionTimeout;            /*  70 */
    ULONG                        HeapSegmentReserve;                /*  78 */
    ULONG                        HeapSegmentCommit;                 /*  7c */
    ULONG                        HeapDeCommitTotalFreeThreshold;    /*  80 */
    ULONG                        HeapDeCommitFreeBlockThreshold;    /*  84 */
    ULONG                        NumberOfHeaps;                     /*  88 */
    ULONG                        MaximumNumberOfHeaps;              /*  8c */
    PVOID                       *ProcessHeaps;                      /*  90 */
    PVOID                        GdiSharedHandleTable;              /*  94 */
    PVOID                        ProcessStarterHelper;              /*  98 */
    PVOID                        GdiDCAttributeList;                /*  9c */
    PVOID                        LoaderLock;                        /*  a0 */
    ULONG                        OSMajorVersion;                    /*  a4 */
    ULONG                        OSMinorVersion;                    /*  a8 */
    ULONG                        OSBuildNumber;                     /*  ac */
    ULONG                        OSPlatformId;                      /*  b0 */
    ULONG                        ImageSubSystem;                    /*  b4 */
    ULONG                        ImageSubSystemMajorVersion;        /*  b8 */
    ULONG                        ImageSubSystemMinorVersion;        /*  bc */
    ULONG                        ImageProcessAffinityMask;          /*  c0 */
    ULONG                        GdiHandleBuffer[34];               /*  c4 */
    ULONG                        PostProcessInitRoutine;            /* 14c */
    PVOID                  TlsExpansionBitmap;                /* 150 */
    ULONG                        TlsExpansionBitmapBits[32];        /* 154 */
    ULONG                        SessionId;                         /* 1d4 */
} PEB, *PPEB;

typedef struct _GDI_TEB_BATCH
{
    ULONG  Offset;
    HANDLE HDC;
    ULONG  Buffer[0x136];
} GDI_TEB_BATCH;

typedef struct _CLIENT_ID {
    HANDLE UniqueProcess;
    HANDLE UniqueThread;
} CLIENT_ID;
typedef CLIENT_ID *PCLIENT_ID;

//
// Thread Environment Block (TEB)
//
typedef struct _TEB
{
    NT_TIB NtTib;
    PVOID EnvironmentPointer;
    CLIENT_ID Cid;
    PVOID ActiveRpcHandle;
    PVOID ThreadLocalStoragePointer;
    struct _PEB *ProcessEnvironmentBlock;
    ULONG LastErrorValue;
    ULONG CountOfOwnedCriticalSections;
    PVOID CsrClientThread;
    PVOID Win32ThreadInfo;
    ULONG User32Reserved[0x1A];
    ULONG UserReserved[5];
    PVOID WOW32Reserved;
    LCID CurrentLocale;
    ULONG FpSoftwareStatusRegister;
    PVOID SystemReserved1[0x36];
    LONG ExceptionCode;
    PVOID ActivationContextStackPointer;
    UCHAR SpareBytes1[0x24];
    ULONG TxFsContext;
    GDI_TEB_BATCH GdiTebBatch;
    CLIENT_ID RealClientId;
    PVOID GdiCachedProcessHandle;
    ULONG GdiClientPID;
    ULONG GdiClientTID;
    PVOID GdiThreadLocalInfo;
    ULONG Win32ClientInfo[62];
    PVOID glDispatchTable[0xE9];
    ULONG glReserved1[0x1D];
    PVOID glReserved2;
    PVOID glSectionInfo;
    PVOID glSection;
    PVOID glTable;
    PVOID glCurrentRC;
    PVOID glContext;
    NTSTATUS LastStatusValue;
    UNICODE_STRING StaticUnicodeString;
    WCHAR StaticUnicodeBuffer[0x105];
    PVOID DeallocationStack;
    PVOID TlsSlots[0x40];
    LIST_ENTRY TlsLinks;
    PVOID Vdm;
    PVOID ReservedForNtRpc;
    PVOID DbgSsReserved[0x2];
    ULONG HardErrorDisabled;
    PVOID Instrumentation[9];
    GUID ActivityId;
    PVOID SubProcessTag;
    PVOID EtwTraceData;
    PVOID WinSockData;
    ULONG GdiBatchCount;
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
    BOOLEAN SpareBool0;
    BOOLEAN SpareBool1;
    BOOLEAN SpareBool2;
#else
    BOOLEAN InDbgPrint;
    BOOLEAN FreeStackOnTermination;
    BOOLEAN HasFiberData;
#endif
    UCHAR IdealProcessor;
    ULONG GuaranteedStackBytes;
    PVOID ReservedForPerf;
    PVOID ReservedForOle;
    ULONG WaitingOnLoaderLock;
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
    PVOID SavedPriorityState;
#else
    ULONG SparePointer1;
#endif
    ULONG SoftPatchPtr1;
    ULONG SoftPatchPtr2;
    PVOID *TlsExpansionSlots;
    ULONG ImpersonationLocale;
    ULONG IsImpersonating;
    PVOID NlsCache;
    PVOID pShimData;
    ULONG HeapVirualAffinity;
    PVOID CurrentTransactionHandle;
    PVOID ActiveFrame;
#if (NTDDI_VERSION >= NTDDI_WS03)
    PVOID FlsData;
#endif
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
    PVOID PreferredLangauges;
    PVOID UserPrefLanguages;
    PVOID MergedPrefLanguages;
    ULONG MuiImpersonation;
    union
    {
        struct
        {
            USHORT SpareCrossTebFlags:16;
        };
        USHORT CrossTebFlags;
    };
    union
    {
        struct
        {
            USHORT DbgSafeThunkCall:1;
            USHORT DbgInDebugPrint:1;
            USHORT DbgHasFiberData:1;
            USHORT DbgSkipThreadAttach:1;
            USHORT DbgWerInShipAssertCode:1;
            USHORT DbgIssuedInitialBp:1;
            USHORT DbgClonedThread:1;
            USHORT SpareSameTebBits:9;
        };
        USHORT SameTebFlags;
    };
    PVOID TxnScopeEntercallback;
    PVOID TxnScopeExitCAllback;
    PVOID TxnScopeContext;
    ULONG LockCount;
    ULONG ProcessRundown;
    ULONGLONG LastSwitchTime;
    ULONGLONG TotalSwitchOutTime;
    LARGE_INTEGER WaitReasonBitMap;
#else
    UCHAR SafeThunkCall;
    UCHAR BooleanSpare[3];
#endif
} TEB, *PTEB;

#endif //WINDBG_POINTERS_MACROS_ONLY

#endif // _sundown_h_