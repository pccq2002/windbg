# Microsoft Developer Studio Project File - Name="dm" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=dm - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "dm.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "dm.mak" CFG="dm - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "dm - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "dm - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "dm - Win32 Release"

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
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "DM_EXPORTS" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "DM_EXPORTS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG"
# ADD RSC /l 0x804 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "DM_EXPORTS" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /I "p_i386" /I "..\..\langapi\include" /I "..\..\langapi\debugger" /I "..\..\debugger\od\include" /I "..\..\debugger\include" /I "..\..\include" /I "..\..\sapi\inc" /I "debugger\em" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "DM_EXPORTS" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG"
# ADD RSC /l 0x804 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "dm - Win32 Release"
# Name "dm - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Group "user"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\dmole.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\dmole.h
# End Source File
# Begin Source File

SOURCE=.\dmsql.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\glue.h
# End Source File
# Begin Source File

SOURCE=.\i386troj.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\i386troj.h
# End Source File
# Begin Source File

SOURCE=.\process.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\sqlinfo.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\sqlinfo.h
# End Source File
# Begin Source File

SOURCE=.\userapi.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\wow.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# End Group
# Begin Source File

SOURCE=.\bp.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\cache.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\com.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\dmdisasm.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\dmx32.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\event.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\funccall.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\i386d3dm.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\i386mach.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\i386thnk.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\kdwow.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\packet.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\procem.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\splay.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\step.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\support.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\util.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\walk.cpp

!IF  "$(CFG)" == "dm - Win32 Release"

!ELSEIF  "$(CFG)" == "dm - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\align.h
# End Source File
# Begin Source File

SOURCE=.\alpdis.h
# End Source File
# Begin Source File

SOURCE=.\alphaasm.h
# End Source File
# Begin Source File

SOURCE=.\alphaopt.h
# End Source File
# Begin Source File

SOURCE=.\alphastr.h
# End Source File
# Begin Source File

SOURCE=.\biavst.h
# End Source File
# Begin Source File

SOURCE=.\bp.h
# End Source File
# Begin Source File

SOURCE=.\debug.h
# End Source File
# Begin Source File

SOURCE=.\dm.h
# End Source File
# Begin Source File

SOURCE=.\dmkd.h
# End Source File
# Begin Source File

SOURCE=.\dmsql.h
# End Source File
# Begin Source File

SOURCE=.\fiber.h
# End Source File
# Begin Source File

SOURCE=.\funccall.h
# End Source File
# Begin Source File

SOURCE=.\i386excp.h
# End Source File
# Begin Source File

SOURCE=.\list.h
# End Source File
# Begin Source File

SOURCE=.\resource.h
# End Source File
# Begin Source File

SOURCE=.\splay.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\p_i386\dmkdx86.def
# End Source File
# End Group
# End Target
# End Project
