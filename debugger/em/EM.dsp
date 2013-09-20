# Microsoft Developer Studio Project File - Name="EM" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=EM - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "EM.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "EM.mak" CFG="EM - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "EM - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "EM - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "EM - Win32 Release"

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
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "EM_EXPORTS" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "EM_EXPORTS" /Yu"stdafx.h" /FD /c
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

!ELSEIF  "$(CFG)" == "EM - Win32 Debug"

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
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "EM_EXPORTS" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /I "../../langapi/include" /I "../../langapi/debugger" /I "../../debugger/od/include" /I "../../debugger/include" /I "debugger\em" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "EM_EXPORTS" /FR /Yu"stdafx.h" /FD /GZ /c
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

# Name "EM - Win32 Release"
# Name "EM - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\emdisasm.cpp

!IF  "$(CFG)" == "EM - Win32 Release"

!ELSEIF  "$(CFG)" == "EM - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\emdp.cpp

!IF  "$(CFG)" == "EM - Win32 Release"

!ELSEIF  "$(CFG)" == "EM - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\emdp2.cpp

!IF  "$(CFG)" == "EM - Win32 Release"

!ELSEIF  "$(CFG)" == "EM - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\emdp3.cpp

!IF  "$(CFG)" == "EM - Win32 Release"

!ELSEIF  "$(CFG)" == "EM - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\emdp_x86.cpp

!IF  "$(CFG)" == "EM - Win32 Release"

!ELSEIF  "$(CFG)" == "EM - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Group "falcon"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\falcon\decem.h
# End Source File
# Begin Source File

SOURCE=.\falcon\disem.h
# End Source File
# Begin Source File

SOURCE=.\falcon\em.h
# End Source File
# Begin Source File

SOURCE=.\falcon\em_hints.h
# End Source File
# Begin Source File

SOURCE=.\falcon\em_tools.h
# End Source File
# Begin Source File

SOURCE=.\falcon\emdb_types.h
# End Source File
# Begin Source File

SOURCE=.\falcon\iel.h
# End Source File
# Begin Source File

SOURCE=.\falcon\inst_ids.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\biavst.h
# End Source File
# Begin Source File

SOURCE=.\ehdata.h
# End Source File
# Begin Source File

SOURCE=.\emcpu.h
# End Source File
# Begin Source File

SOURCE=.\emdata.h
# End Source File
# Begin Source File

SOURCE=.\emdp.h
# End Source File
# Begin Source File

SOURCE=.\emdp_plt.h
# End Source File
# Begin Source File

SOURCE=.\emproto.h
# End Source File
# Begin Source File

SOURCE=.\flag_axp.h
# End Source File
# Begin Source File

SOURCE=.\flag_mip.h
# End Source File
# Begin Source File

SOURCE=.\flag_ppc.h
# End Source File
# Begin Source File

SOURCE=.\flag_x86.h
# End Source File
# Begin Source File

SOURCE=.\reg_x86.h
# End Source File
# Begin Source File

SOURCE=.\regs_mip.h
# End Source File
# Begin Source File

SOURCE=.\regs_ppc.h
# End Source File
# Begin Source File

SOURCE=.\regs_x86.h
# End Source File
# Begin Source File

SOURCE=.\res_str.h
# End Source File
# Begin Source File

SOURCE=.\resource.h
# End Source File
# Begin Source File

SOURCE=.\str_axp.h
# End Source File
# Begin Source File

SOURCE=.\str_mip.h
# End Source File
# Begin Source File

SOURCE=.\str_ppc.h
# End Source File
# Begin Source File

SOURCE=.\str_x86.h
# End Source File
# Begin Source File

SOURCE=.\win32msg.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\em.def
# End Source File
# End Group
# Begin Group "oddisasm"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\disasm\ODDisasm\asmserv.cpp

!IF  "$(CFG)" == "EM - Win32 Release"

!ELSEIF  "$(CFG)" == "EM - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=..\disasm\ODDisasm\assembl.cpp

!IF  "$(CFG)" == "EM - Win32 Release"

!ELSEIF  "$(CFG)" == "EM - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=..\disasm\ODDisasm\disasm.cpp

!IF  "$(CFG)" == "EM - Win32 Release"

!ELSEIF  "$(CFG)" == "EM - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=..\disasm\ODDisasm\disasm.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
