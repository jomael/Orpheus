# * ***** BEGIN LICENSE BLOCK *****                                              *
# * Version: MPL 1.1                                                             *
# *                                                                              *
# * The contents of this file are subject to the Mozilla Public License          *
# * Version 1.1 (the "License"); you may not use this file except in             *
# * compliance with the License. You may obtain a copy of the License at         *
# * http://www.mozilla.org/MPL/                                                  *
# *                                                                              *
# * Software distributed under the License is distributed on an "AS IS" basis,   *
# * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License     *
# * for the specific language governing rights and limitations under the         *
# * License.                                                                     *
# *                                                                              *
# * The Original Code is TurboPower Orpheus                                      *
# *                                                                              *
# * The Initial Developer of the Original Code is TurboPower Software            *
# *                                                                              *
# * Portions created by TurboPower Software Co. are Copyright (C) 1995-2002      *
# * TurboPower Software Co. All Rights Reserved.                                 *
# *                                                                              *
# * Contributor(s):                                                              *
# *                                                                              *
# * ***** END LICENSE BLOCK *****                                                *

# ---------------------------------------------------------------------------
!if !$d(BCB)
BCB = $(MAKEDIR)\..
!endif

# ---------------------------------------------------------------------------
# IDE SECTION
# ---------------------------------------------------------------------------
# The following section of the project makefile is managed by the BCB IDE.
# It is recommended to use the IDE to change any of the values in this
# section.
# ---------------------------------------------------------------------------

VERSION = BCB.06.00
# ---------------------------------------------------------------------------
PROJECT = O406_d61.bpl
OBJFILES = O406_d61.obj allordesign.obj
RESFILES = O406_d61.res
MAINSOURCE = O406_d61.cpp
RESDEPEN = $(RESFILES)
LIBFILES =
IDLFILES =
IDLGENFILES =
LIBRARIES = bcb2kaxserver.lib indy.lib dbxcds.lib dclocx.lib soaprtl.lib bcbie.lib \
    nmfast.lib dbexpress.lib inetdbxpress.lib inetdbbde.lib bcbsmp.lib \
    dsnapcon.lib dsnapcrba.lib visualdbclx.lib teeqr.lib dss.lib tee.lib \
    teedb.lib teeui.lib qrpt.lib bdecds.lib cds.lib ibxpress.lib vcldbx.lib \
    bdertl.lib adortl.lib vcldb.lib
PACKAGES = rtl.bpi designide.bpi vclx.bpi vcl.bpi O406_r61.bpi
SPARELIBS = rtl.lib vcldb.lib adortl.lib bdertl.lib vcldbx.lib ibxpress.lib cds.lib \
    bdecds.lib qrpt.lib teeui.lib teedb.lib tee.lib dss.lib teeqr.lib \
    visualdbclx.lib dsnapcrba.lib dsnapcon.lib bcbsmp.lib inetdbbde.lib \
    inetdbxpress.lib dbexpress.lib nmfast.lib bcbie.lib soaprtl.lib dclocx.lib \
    dbxcds.lib indy.lib bcb2kaxserver.lib
DEFFILE =
OTHERFILES =
# ---------------------------------------------------------------------------
DEBUGLIBPATH = $(BCB)\lib\debug
RELEASELIBPATH = $(BCB)\lib\release
USERDEFINES = BCB
SYSDEFINES = _RTLDLL;NO_STRICT;USEPACKAGES
INCLUDEPATH = $(BCB)\include;$(BCB)\include\vcl
LIBPATH = $(BCB)\Projects\Lib;$(BCB)\lib;$(BCB)\lib\obj;$(BCB)\lib\release
WARNINGS= -w-par
PATHCPP = .;
PATHASM = .;
PATHPAS = .;
PATHRC = .;
PATHOBJ = .;$(LIBPATH)
# ---------------------------------------------------------------------------
CFLAG1 = -Od -H=$(BCB)\lib\vcl60.csm -Hc -Vx -Ve -X- -r- -a8 -b- -k -y -v -vi- -c \
    -tWM
IDLCFLAGS = -I$(BCB)\include -I$(BCB)\include\vcl -src_suffix cpp -DBCB -boa
PFLAGS = -$YD -$W -$O- -$A8 -v -JPHNE -M -LUDesignIDE
RFLAGS =
AFLAGS = /mx /w2 /zd
LFLAGS = -D"TurboPower Orpheus 4.06 designtime package - VCL61" " -aa -Tpp -Gpd -x -Gn -Gl \
    -Gi -v
# ---------------------------------------------------------------------------
ALLOBJ = c0pkg32.obj $(PACKAGES) Memmgr.Lib sysinit.obj $(OBJFILES)
ALLRES = $(RESFILES)
ALLLIB = $(LIBFILES) $(LIBRARIES) import32.lib cp32mti.lib
# ---------------------------------------------------------------------------
!ifdef IDEOPTIONS

[Version Info]
IncludeVerInfo=0
AutoIncBuild=0
MajorVer=4
MinorVer=0
Release=6
Build=0
Debug=0
PreRelease=0
Special=0
Private=0
DLL=0

[Version Info Keys]
CompanyName=TurboPower Software Company
FileDescription=
FileVersion=4.0.6.0
InternalName=
LegalCopyright=Copyright (C) 1995-2002 TurboPower Software Company
LegalTrademarks=
OriginalFilename=
ProductName=
ProductVersion=4.06
Comments=

[Debugging]
DebugSourceDirs=$(BCB)\source\vcl

!endif





# ---------------------------------------------------------------------------
# MAKE SECTION
# ---------------------------------------------------------------------------
# This section of the project file is not used by the BCB IDE.  It is for
# the benefit of building from the command-line using the MAKE utility.
# ---------------------------------------------------------------------------

.autodepend
# ---------------------------------------------------------------------------
!if "$(USERDEFINES)" != ""
AUSERDEFINES = -d$(USERDEFINES:;= -d)
!else
AUSERDEFINES =
!endif

!if !$d(BCC32)
BCC32 = bcc32
!endif

!if !$d(CPP32)
CPP32 = cpp32
!endif

!if !$d(DCC32)
DCC32 = dcc32
!endif

!if !$d(TASM32)
TASM32 = tasm32
!endif

!if !$d(LINKER)
LINKER = ilink32
!endif

!if !$d(BRCC32)
BRCC32 = brcc32
!endif


# ---------------------------------------------------------------------------
!if $d(PATHCPP)
.PATH.CPP = $(PATHCPP)
.PATH.C   = $(PATHCPP)
!endif

!if $d(PATHPAS)
.PATH.PAS = $(PATHPAS)
!endif

!if $d(PATHASM)
.PATH.ASM = $(PATHASM)
!endif

!if $d(PATHRC)
.PATH.RC  = $(PATHRC)
!endif

!if $d(PATHOBJ)
.PATH.OBJ  = $(PATHOBJ)
!endif
# ---------------------------------------------------------------------------
$(PROJECT): $(OTHERFILES) $(IDLGENFILES) $(OBJFILES) $(RESDEPEN) $(DEFFILE)
    $(BCB)\BIN\$(LINKER) @&&!
    $(LFLAGS) -L$(LIBPATH) +
    $(ALLOBJ), +
    $(PROJECT),, +
    $(ALLLIB), +
    $(DEFFILE), +
    $(ALLRES)
!
# ---------------------------------------------------------------------------
.pas.hpp:
    $(BCB)\BIN\$(DCC32) $(PFLAGS) -U$(INCLUDEPATH) -D$(USERDEFINES);$(SYSDEFINES) -O$(INCLUDEPATH) --BCB {$< }

.pas.obj:
    $(BCB)\BIN\$(DCC32) $(PFLAGS) -U$(INCLUDEPATH) -D$(USERDEFINES);$(SYSDEFINES) -O$(INCLUDEPATH) --BCB {$< }

.cpp.obj:
    $(BCB)\BIN\$(BCC32) $(CFLAG1) $(WARNINGS) -I$(INCLUDEPATH) -D$(USERDEFINES);$(SYSDEFINES) -n$(@D) {$< }

.c.obj:
    $(BCB)\BIN\$(BCC32) $(CFLAG1) $(WARNINGS) -I$(INCLUDEPATH) -D$(USERDEFINES);$(SYSDEFINES) -n$(@D) {$< }

.c.i:
    $(BCB)\BIN\$(CPP32) $(CFLAG1) $(WARNINGS) -I$(INCLUDEPATH) -D$(USERDEFINES);$(SYSDEFINES) -n. {$< }

.cpp.i:
    $(BCB)\BIN\$(CPP32) $(CFLAG1) $(WARNINGS) -I$(INCLUDEPATH) -D$(USERDEFINES);$(SYSDEFINES) -n. {$< }

.asm.obj:
    $(BCB)\BIN\$(TASM32) $(AFLAGS) -i$(INCLUDEPATH:;= -i) $(AUSERDEFINES) -d$(SYSDEFINES:;= -d) $<, $@

.rc.res:
    $(BCB)\BIN\$(BRCC32) $(RFLAGS) -I$(INCLUDEPATH) -D$(USERDEFINES);$(SYSDEFINES) -fo$@ $<



# ---------------------------------------------------------------------------




