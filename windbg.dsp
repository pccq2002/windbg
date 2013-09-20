# Microsoft Developer Studio Project File - Name="windbg" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=windbg - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "windbg.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "windbg.mak" CFG="windbg - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "windbg - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "windbg - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "windbg - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD BASE RSC /l 0x804 /d "NDEBUG"
# ADD RSC /l 0x804 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386

!ELSEIF  "$(CFG)" == "windbg - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /I "\." /I "langapi\include" /I "langapi\debugger" /I ".\windbg\include" /I ".\debugger\include" /I "include" /I "windbg\include" /I "debugger\wrkspc" /I "langapi\undname" /I "debugger\od" /I "debugger\od\include" /I "lib" /I "debugger\em" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /FR /YX /FD /GZ /GZ /c
# ADD BASE RSC /l 0x804 /d "_DEBUG"
# ADD RSC /l 0x804 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# SUBTRACT LINK32 /pdb:none

!ENDIF 

# Begin Target

# Name "windbg - Win32 Release"
# Name "windbg - Win32 Debug"
# Begin Group "windbg"

# PROP Default_Filter ""
# Begin Group "include"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\windbg\include\apisupp.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\asertdbg.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\bpitypes.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\bpprotos.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\bptypes.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\breakpts.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\callswin.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\change.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\cl.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\cmdexec.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\cmdwin.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\cmgrhigh.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\cntxthlp.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\codemgr.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\colors.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\cp.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\cpuwin.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\cvextras.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\dbugdll.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\dbugexcp.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\debug.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\debugger.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\dialogs.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\disasm.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\docfile.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\document.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\edit.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\editutil.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\eeproto.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\extern.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\filedll.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\findrep.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\fonts.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\global.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\helpid.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\imports.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\inifile.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\init.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\kdopt.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\linklist.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\localwin.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\makeeng.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\memwin.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\menu.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\mstools.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\ncmdwin.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\newrem.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\ntexpr.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\ntsdsup.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\ntsdtok.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\optsheet.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\panemgr.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\pidtid.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\pipeex.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\program.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\quickw.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\re.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\remi.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\remote.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\res_str.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\res_str.rc
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\windbg\include\resource.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\ribbon.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\sbconst.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\settings.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\shproto.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\status.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\syntax.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\toolbar.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\undoredo.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\userctrl.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\userdll.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\util.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\util2.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\vapi.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\vib.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\watchwin.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\windbg.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\winpck.h
# End Source File
# Begin Source File

SOURCE=.\windbg\include\wrkspace.h
# End Source File
# End Group
# Begin Group "bitmaps"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\windbg\bitmaps\asm.ico
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\asmda.bmp
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\asmdn.bmp
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\asmup.bmp
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\brkpt-da.bmp"
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\brkpt-dn.bmp"
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\brkpt-up.bmp"
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\memory.ico
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\minus.bvg
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\ncmdwin.ico
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\opt-da.bmp"
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\opt-dn.bmp"
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\opt-up.bmp"
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\plus.bvg
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\qcfloat.ico
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\qclocal.ico
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\qcreg.ico
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\qcwatch.ico
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\runda.bmp
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\rundn.bmp
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\runup.bmp
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\source.ico
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\src-da.bmp"
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\src-dn.bmp"
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\src-up.bmp"
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\step-da.bmp"
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\step-dn.bmp"
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\step-up.bmp"
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\stpda.bmp
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\stpdn.bmp
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\stpup.bmp
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\toolbar.bmp
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\trace-da.bmp"
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\trace-dn.bmp"
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\trace-up.bmp"
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\windbg.ico
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\wtch-da.bmp"
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\wtch-dn.bmp"
# End Source File
# Begin Source File

SOURCE=".\windbg\bitmaps\wtch-up.bmp"
# End Source File
# End Group
# Begin Source File

SOURCE=.\windbg\apisupp.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\arrange.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\blank.bvg
# End Source File
# Begin Source File

SOURCE=.\windbg\breakpts.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\brkpt0.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\callswin.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\cl.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\cmdexec0.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\cmdexec1.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\cmdexec2.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\cmdwin.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\codemgr.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\colors.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\confirm.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\cp.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\cpuwin.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\cvextras.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\data.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\dbgext.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\dbugdll.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\dbugexcp.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\dialogs.dlg
# End Source File
# Begin Source File

SOURCE=.\windbg\disasm.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\docfile.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\document.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\edit.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\editutil.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\environ.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\find.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\findnext.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\findrep.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\fonts.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\function.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\bitmaps\help.cppur
# End Source File
# Begin Source File

SOURCE=.\windbg\init.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\kdopt.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\line.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\linklist.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\localwin.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\makeeng.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\memory.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\memwin.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\menu.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\ncmdwin.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\newrem.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\ntexpr.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\ntsdsup.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\old_wksp.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\optsheet.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\panemgr.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\paneopt.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\paneuser.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\pidtid.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\pipeex.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\precomp.h
# End Source File
# Begin Source File

SOURCE=.\windbg\process.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\program.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\quickw.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\re_mi.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\remote.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\reparse.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\replace.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\setbreak.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\status.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\tasklist.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\thread.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\toolbar.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\undoredo.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\userctrl.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\userdll.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\util.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\util2.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\vib.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\watch.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\watchwin.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\wcrash.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\windbg.cpp
# End Source File
# Begin Source File

SOURCE=.\windbg\windbg.rc
# End Source File
# Begin Source File

SOURCE=.\windbg\wksp.h
# End Source File
# Begin Source File

SOURCE=.\windbg\wrkspace.cpp
# End Source File
# End Group
# Begin Group "langapi"

# PROP Default_Filter ""
# Begin Group "langapi_include"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\langapi\include\bsc.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\clstypes.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\cpdbase.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\cpdguid.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\crefobj.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\cvexefmt.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\cvinfo.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\cvinfo16.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\cvinfo32.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\cvr.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\cvr16.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\cvr32.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\ehdata.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\exe_vxd.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\fbrdbg.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\getmsg.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\ilstore.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\instrapi.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\macimage.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\miscimage.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\mrengine.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\nowin.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\objectfile.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\pdb.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\ppcimage.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\prodids.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\ref.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\rttidata.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\sbrfdef.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\sdci.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\sdi.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\simparray.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\simpldis.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\sqlguid.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\sqlpkapi.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\sqlprxky.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\ssvc.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\typesrvr.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\vcbudefs.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\vcexcept.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\vcver.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\version.h
# End Source File
# Begin Source File

SOURCE=.\langapi\include\verstamp.h
# End Source File
# End Group
# Begin Group "debugger"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\langapi\debugger\cvtypes.h
# End Source File
# Begin Source File

SOURCE=.\langapi\debugger\dbapiver.h
# End Source File
# Begin Source File

SOURCE=.\langapi\debugger\dbc.h
# End Source File
# Begin Source File

SOURCE=.\langapi\debugger\dbgver.h
# End Source File
# Begin Source File

SOURCE=.\langapi\debugger\eeapi.h
# End Source File
# Begin Source File

SOURCE=.\langapi\debugger\newexe.h
# End Source File
# Begin Source File

SOURCE=.\langapi\debugger\od.h
# End Source File
# Begin Source File

SOURCE=.\langapi\debugger\odtypes.h
# End Source File
# Begin Source File

SOURCE=.\langapi\debugger\orpc_dbg.cpp
# End Source File
# Begin Source File

SOURCE=.\langapi\debugger\orpc_dbg.h
# End Source File
# Begin Source File

SOURCE=.\langapi\debugger\shapi.h
# End Source File
# Begin Source File

SOURCE=.\langapi\debugger\sherror.h
# End Source File
# Begin Source File

SOURCE=.\langapi\debugger\sqldbapi.h
# End Source File
# Begin Source File

SOURCE=.\langapi\debugger\tlui.h
# End Source File
# Begin Source File

SOURCE=.\langapi\debugger\types.h
# End Source File
# Begin Source File

SOURCE=.\langapi\debugger\xosd.h
# End Source File
# End Group
# End Group
# Begin Group "debugger No. 1"

# PROP Default_Filter ""
# Begin Group "include No. 1"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\debugger\include\ctxptrs.h
# End Source File
# Begin Source File

SOURCE=.\debugger\include\dbgfindi.h
# End Source File
# Begin Source File

SOURCE=.\debugger\include\emdm.h
# End Source File
# Begin Source File

SOURCE=.\debugger\include\linklist.h
# End Source File
# Begin Source File

SOURCE=.\debugger\include\memlist.h
# End Source File
# Begin Source File

SOURCE=.\debugger\include\mm.h
# End Source File
# Begin Source File

SOURCE=.\debugger\include\ppcregs.h
# End Source File
# Begin Source File

SOURCE=.\debugger\include\sundown.h
# End Source File
# Begin Source File

SOURCE=.\debugger\include\win32dm.h
# End Source File
# Begin Source File

SOURCE=.\debugger\include\x86regs.h
# End Source File
# End Group
# Begin Group "wrkspc"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\debugger\wrkspc\cppmacro.h
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\hmacro.h
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\tlist.h
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\tsgllist.h
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\wdbg_def.h
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\windbgrm.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\windbgrm.h
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\wrk_windbg.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\wrk_windbg.h
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\ws_comon.h
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\ws_defs.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\ws_defs.h
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\ws_defs.inl
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\ws_impl.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\ws_impl.h
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\ws_items.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\ws_items.h
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\ws_items.inl
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\ws_lib.rc
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\ws_misc.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\ws_misc.h
# End Source File
# Begin Source File

SOURCE=.\debugger\wrkspc\ws_resrc.h
# End Source File
# End Group
# Begin Group "ee"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\debugger\ee\debapi.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\debbind.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\deberr.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\debeval.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\debfmt.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\deblex.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\deblexr.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\debparse.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\debsrch.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\debsup.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\debsym.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\debtree.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\debtyper.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\debutil.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\debwalk.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\dllmain.cpp
# End Source File
# Begin Source File

SOURCE=.\debugger\ee\ldouble.cpp
# End Source File
# End Group
# Begin Group "od"

# PROP Default_Filter ""
# Begin Group "include No. 3"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\debugger\od\include\emf.h
# End Source File
# Begin Source File

SOURCE=.\debugger\od\include\odassert.h
# End Source File
# Begin Source File

SOURCE=.\debugger\od\include\odp.h
# End Source File
# Begin Source File

SOURCE=.\debugger\od\include\types.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\debugger\od\od.cpp
# End Source File
# End Group
# End Group
# Begin Group "include No. 2"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\include\heap.h
# End Source File
# Begin Source File

SOURCE=.\include\mathsup.h
# End Source File
# Begin Source File

SOURCE=.\include\rtlproto.h
# End Source File
# End Group
# Begin Group "lib"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\lib\assrt.c
# End Source File
# Begin Source File

SOURCE=.\lib\atold.c
# End Source File
# Begin Source File

SOURCE=.\lib\cfin.c
# End Source File
# Begin Source File

SOURCE=.\lib\cfout.c
# End Source File
# Begin Source File

SOURCE=.\lib\constpow.c
# End Source File
# Begin Source File

SOURCE=.\lib\cv.h
# End Source File
# Begin Source File

SOURCE=.\lib\cvt.c
# End Source File
# Begin Source File

SOURCE=.\lib\heap.c
# End Source File
# Begin Source File

SOURCE=.\lib\intrncvt.c
# End Source File
# Begin Source File

SOURCE=.\lib\mantold.c
# End Source File
# Begin Source File

SOURCE=.\lib\rtlproto.h
# End Source File
# Begin Source File

SOURCE=.\lib\strgtold.c
# End Source File
# Begin Source File

SOURCE=.\lib\strtoli.c
# End Source File
# Begin Source File

SOURCE=.\lib\tenpow.c
# End Source File
# Begin Source File

SOURCE=.\lib\x10fout.c
# End Source File
# End Group
# Begin Source File

SOURCE=.\windbg\bitmaps\help.cur
# End Source File
# End Target
# End Project
