#ifndef _WINDBGKD_
#define _WINDBGKG_

#include "type.h"
#include "sundown.h"
//
// Packet Size and Control Stream Size
//
#define PACKET_MAX_SIZE                 4000
#define DBGKD_MAXSTREAM                 16

//
// Magic Packet IDs
//
#define INITIAL_PACKET_ID               0x80800000
#define SYNC_PACKET_ID                  0x00000800

//
// Magic Packet bytes
//
#define BREAKIN_PACKET                  0x62626262
#define BREAKIN_PACKET_BYTE             0x62
#define PACKET_LEADER                   0x30303030
#define PACKET_LEADER_BYTE              0x30
#define CONTROL_PACKET_LEADER           0x69696969
#define CONTROL_PACKET_LEADER_BYTE      0x69
#define PACKET_TRAILING_BYTE            0xAA

//
// Packet Types
//
#define PACKET_TYPE_UNUSED              0
#define PACKET_TYPE_KD_STATE_CHANGE32   1
#define PACKET_TYPE_KD_STATE_MANIPULATE 2
#define PACKET_TYPE_KD_DEBUG_IO         3
#define PACKET_TYPE_KD_ACKNOWLEDGE      4
#define PACKET_TYPE_KD_RESEND           5
#define PACKET_TYPE_KD_RESET            6
#define PACKET_TYPE_KD_STATE_CHANGE64   7
//#define PACKET_TYPE_MAX                 8

//
// Wait State Change Types
//
#define DbgKdExceptionStateChange       0x00003030
#define DbgKdLoadSymbolsStateChange     0x00003031

//
// Debug I/O Types
//
#define DbgKdPrintStringApi             0x00003230
#define DbgKdGetStringApi               0x00003231

//
// Control Report Flags
//
#define REPORT_INCLUDES_SEGS            0x0001

//
// KD Packet Structure
//
// typedef struct _KD_PACKET
// {
//     ULONG PacketLeader;
//     USHORT PacketType;
//     USHORT ByteCount;
//     ULONG PacketId;
//     ULONG Checksum;
// } KD_PACKET, *PKD_PACKET;

// typedef struct _EXCEPTION_RECORD64 {
//     NTSTATUS ExceptionCode;
//     ULONG ExceptionFlags;
//     ULONG64 ExceptionRecord;
//     ULONG64 ExceptionAddress;
//     ULONG NumberParameters;
//     ULONG __unusedAlignment;
//     ULONG64 ExceptionInformation[EXCEPTION_MAXIMUM_PARAMETERS];
// } EXCEPTION_RECORD64, *PEXCEPTION_RECORD64;

//
// DBGKM Structure for Exceptions
//
// typedef struct _DBGKM_EXCEPTION64
// {
//     EXCEPTION_RECORD64 ExceptionRecord;
//     ULONG FirstChance;
// } DBGKM_EXCEPTION64, *PDBGKM_EXCEPTION64;

//
// DBGKD Structure for State Change
//
// typedef struct _DBGKD_CONTROL_REPORT
// {
//     ULONG Dr6;
//     ULONG Dr7;
//     USHORT InstructionCount;
//     USHORT ReportFlags;
//     UCHAR InstructionStream[DBGKD_MAXSTREAM];
//     USHORT SegCs;
//     USHORT SegDs;
//     USHORT SegEs;
//     USHORT SegFs;
//     ULONG EFlags;
// } DBGKD_CONTROL_REPORT, *PDBGKD_CONTROL_REPORT;

//
// DBGKD Structure for Debug I/O Type Print String
//
// typedef struct _DBGKD_PRINT_STRING
// {
//     ULONG LengthOfString;
// } DBGKD_PRINT_STRING, *PDBGKD_PRINT_STRING;

//
// DBGKD Structure for Debug I/O Type Get String
//
// typedef struct _DBGKD_GET_STRING
// {
//     ULONG LengthOfPromptString;
//     ULONG LengthOfStringRead;
// } DBGKD_GET_STRING, *PDBGKD_GET_STRING;

//
// DBGKD Structure for Debug I/O
//
// typedef struct _DBGKD_DEBUG_IO
// {
//     ULONG ApiNumber;
//     USHORT ProcessorLevel;
//     USHORT Processor;
//     union
//     {
//         DBGKD_PRINT_STRING PrintString;
//         DBGKD_GET_STRING GetString;
//     } u;
// } DBGKD_DEBUG_IO, *PDBGKD_DEBUG_IO;

//
// DBGKD Structure for Load Symbols
//
// typedef struct _DBGKD_LOAD_SYMBOLS64
// {
//     ULONG PathNameLength;
//     ULONG64 BaseOfDll;
//     ULONG64 ProcessId;
//     ULONG CheckSum;
//     ULONG SizeOfImage;
//     BOOLEAN UnloadSymbols;
// } DBGKD_LOAD_SYMBOLS64, *PDBGKD_LOAD_SYMBOLS64;

//
// DBGKD Structure for Wait State Change
//
// typedef struct _DBGKD_WAIT_STATE_CHANGE64
// {
//     ULONG NewState;
//     USHORT ProcessorLevel;
//     USHORT Processor;
//     ULONG NumberProcessors;
//     ULONG64 Thread;
//     ULONG64 ProgramCounter;
//     union
//     {
//         DBGKM_EXCEPTION64 Exception;
//         DBGKD_LOAD_SYMBOLS64 LoadSymbols;
//     } u;
//     DBGKD_CONTROL_REPORT ControlReport;
//     CONTEXT Context;
// } DBGKD_WAIT_STATE_CHANGE64, *PDBGKD_WAIT_STATE_CHANGE64;

#endif
