﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ovcexcpt.pas' rev: 27.00 (Windows)

#ifndef OvcexcptHPP
#define OvcexcptHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <ovcdata.hpp>	// Pascal unit
#include <ovcconst.hpp>	// Pascal unit
#include <ovcintl.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ovcexcpt
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS EOvcException;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EOvcException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	int ErrorCode;
public:
	/* Exception.Create */ inline __fastcall EOvcException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EOvcException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOvcException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOvcException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOvcException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOvcException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOvcException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOvcException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOvcException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOvcException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOvcException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOvcException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOvcException(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ENoTimersAvailable;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ENoTimersAvailable : public EOvcException
{
	typedef EOvcException inherited;
	
public:
	__fastcall ENoTimersAvailable(void);
public:
	/* Exception.CreateFmt */ inline __fastcall ENoTimersAvailable(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EOvcException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ENoTimersAvailable(NativeUInt Ident)/* overload */ : EOvcException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ENoTimersAvailable(System::PResStringRec ResStringRec)/* overload */ : EOvcException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ENoTimersAvailable(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ENoTimersAvailable(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ENoTimersAvailable(const System::UnicodeString Msg, int AHelpContext) : EOvcException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ENoTimersAvailable(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EOvcException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENoTimersAvailable(NativeUInt Ident, int AHelpContext)/* overload */ : EOvcException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENoTimersAvailable(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOvcException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENoTimersAvailable(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENoTimersAvailable(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ENoTimersAvailable(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EControllerError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EControllerError : public EOvcException
{
	typedef EOvcException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EControllerError(const System::UnicodeString Msg) : EOvcException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EControllerError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EOvcException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EControllerError(NativeUInt Ident)/* overload */ : EOvcException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EControllerError(System::PResStringRec ResStringRec)/* overload */ : EOvcException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EControllerError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EControllerError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EControllerError(const System::UnicodeString Msg, int AHelpContext) : EOvcException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EControllerError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EOvcException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EControllerError(NativeUInt Ident, int AHelpContext)/* overload */ : EOvcException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EControllerError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOvcException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EControllerError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EControllerError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EControllerError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ENoControllerAssigned;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ENoControllerAssigned : public EControllerError
{
	typedef EControllerError inherited;
	
public:
	__fastcall ENoControllerAssigned(void);
public:
	/* Exception.CreateFmt */ inline __fastcall ENoControllerAssigned(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EControllerError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ENoControllerAssigned(NativeUInt Ident)/* overload */ : EControllerError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ENoControllerAssigned(System::PResStringRec ResStringRec)/* overload */ : EControllerError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ENoControllerAssigned(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EControllerError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ENoControllerAssigned(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EControllerError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ENoControllerAssigned(const System::UnicodeString Msg, int AHelpContext) : EControllerError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ENoControllerAssigned(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EControllerError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENoControllerAssigned(NativeUInt Ident, int AHelpContext)/* overload */ : EControllerError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENoControllerAssigned(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EControllerError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENoControllerAssigned(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EControllerError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENoControllerAssigned(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EControllerError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ENoControllerAssigned(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ECmdProcessorError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ECmdProcessorError : public EOvcException
{
	typedef EOvcException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECmdProcessorError(const System::UnicodeString Msg) : EOvcException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECmdProcessorError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EOvcException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECmdProcessorError(NativeUInt Ident)/* overload */ : EOvcException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECmdProcessorError(System::PResStringRec ResStringRec)/* overload */ : EOvcException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECmdProcessorError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECmdProcessorError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECmdProcessorError(const System::UnicodeString Msg, int AHelpContext) : EOvcException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECmdProcessorError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EOvcException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECmdProcessorError(NativeUInt Ident, int AHelpContext)/* overload */ : EOvcException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECmdProcessorError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOvcException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECmdProcessorError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECmdProcessorError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECmdProcessorError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EDuplicateCommand;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EDuplicateCommand : public ECmdProcessorError
{
	typedef ECmdProcessorError inherited;
	
public:
	__fastcall EDuplicateCommand(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EDuplicateCommand(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ECmdProcessorError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EDuplicateCommand(NativeUInt Ident)/* overload */ : ECmdProcessorError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EDuplicateCommand(System::PResStringRec ResStringRec)/* overload */ : ECmdProcessorError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EDuplicateCommand(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ECmdProcessorError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EDuplicateCommand(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ECmdProcessorError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EDuplicateCommand(const System::UnicodeString Msg, int AHelpContext) : ECmdProcessorError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EDuplicateCommand(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ECmdProcessorError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDuplicateCommand(NativeUInt Ident, int AHelpContext)/* overload */ : ECmdProcessorError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDuplicateCommand(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ECmdProcessorError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDuplicateCommand(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ECmdProcessorError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDuplicateCommand(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ECmdProcessorError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EDuplicateCommand(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ETableNotFound;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ETableNotFound : public ECmdProcessorError
{
	typedef ECmdProcessorError inherited;
	
public:
	__fastcall ETableNotFound(void);
public:
	/* Exception.CreateFmt */ inline __fastcall ETableNotFound(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ECmdProcessorError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETableNotFound(NativeUInt Ident)/* overload */ : ECmdProcessorError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETableNotFound(System::PResStringRec ResStringRec)/* overload */ : ECmdProcessorError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETableNotFound(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ECmdProcessorError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETableNotFound(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ECmdProcessorError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETableNotFound(const System::UnicodeString Msg, int AHelpContext) : ECmdProcessorError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETableNotFound(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ECmdProcessorError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETableNotFound(NativeUInt Ident, int AHelpContext)/* overload */ : ECmdProcessorError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETableNotFound(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ECmdProcessorError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETableNotFound(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ECmdProcessorError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETableNotFound(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ECmdProcessorError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETableNotFound(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EEntryFieldError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EEntryFieldError : public EOvcException
{
	typedef EOvcException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EEntryFieldError(const System::UnicodeString Msg) : EOvcException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EEntryFieldError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EOvcException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EEntryFieldError(NativeUInt Ident)/* overload */ : EOvcException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EEntryFieldError(System::PResStringRec ResStringRec)/* overload */ : EOvcException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EEntryFieldError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EEntryFieldError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EEntryFieldError(const System::UnicodeString Msg, int AHelpContext) : EOvcException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EEntryFieldError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EOvcException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EEntryFieldError(NativeUInt Ident, int AHelpContext)/* overload */ : EOvcException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EEntryFieldError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOvcException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EEntryFieldError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EEntryFieldError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EEntryFieldError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EInvalidDataType;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EInvalidDataType : public EEntryFieldError
{
	typedef EEntryFieldError inherited;
	
public:
	__fastcall EInvalidDataType(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EInvalidDataType(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EEntryFieldError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidDataType(NativeUInt Ident)/* overload */ : EEntryFieldError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidDataType(System::PResStringRec ResStringRec)/* overload */ : EEntryFieldError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidDataType(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EEntryFieldError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidDataType(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EEntryFieldError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidDataType(const System::UnicodeString Msg, int AHelpContext) : EEntryFieldError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidDataType(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EEntryFieldError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidDataType(NativeUInt Ident, int AHelpContext)/* overload */ : EEntryFieldError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidDataType(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EEntryFieldError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidDataType(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EEntryFieldError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidDataType(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EEntryFieldError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidDataType(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EInvalidPictureMask;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EInvalidPictureMask : public EEntryFieldError
{
	typedef EEntryFieldError inherited;
	
public:
	__fastcall EInvalidPictureMask(const System::UnicodeString Mask);
public:
	/* Exception.CreateFmt */ inline __fastcall EInvalidPictureMask(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EEntryFieldError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidPictureMask(NativeUInt Ident)/* overload */ : EEntryFieldError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidPictureMask(System::PResStringRec ResStringRec)/* overload */ : EEntryFieldError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidPictureMask(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EEntryFieldError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidPictureMask(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EEntryFieldError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidPictureMask(const System::UnicodeString Msg, int AHelpContext) : EEntryFieldError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidPictureMask(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EEntryFieldError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidPictureMask(NativeUInt Ident, int AHelpContext)/* overload */ : EEntryFieldError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidPictureMask(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EEntryFieldError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidPictureMask(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EEntryFieldError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidPictureMask(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EEntryFieldError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidPictureMask(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EInvalidRangeValue;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EInvalidRangeValue : public EEntryFieldError
{
	typedef EEntryFieldError inherited;
	
public:
	__fastcall EInvalidRangeValue(System::Byte DataType);
public:
	/* Exception.CreateFmt */ inline __fastcall EInvalidRangeValue(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EEntryFieldError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidRangeValue(NativeUInt Ident)/* overload */ : EEntryFieldError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidRangeValue(System::PResStringRec ResStringRec)/* overload */ : EEntryFieldError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidRangeValue(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EEntryFieldError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidRangeValue(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EEntryFieldError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidRangeValue(const System::UnicodeString Msg, int AHelpContext) : EEntryFieldError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidRangeValue(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EEntryFieldError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidRangeValue(NativeUInt Ident, int AHelpContext)/* overload */ : EEntryFieldError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidRangeValue(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EEntryFieldError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidRangeValue(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EEntryFieldError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidRangeValue(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EEntryFieldError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidRangeValue(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EInvalidDateForMask;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EInvalidDateForMask : public EEntryFieldError
{
	typedef EEntryFieldError inherited;
	
public:
	__fastcall EInvalidDateForMask(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EInvalidDateForMask(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EEntryFieldError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidDateForMask(NativeUInt Ident)/* overload */ : EEntryFieldError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidDateForMask(System::PResStringRec ResStringRec)/* overload */ : EEntryFieldError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidDateForMask(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EEntryFieldError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidDateForMask(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EEntryFieldError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidDateForMask(const System::UnicodeString Msg, int AHelpContext) : EEntryFieldError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidDateForMask(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EEntryFieldError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidDateForMask(NativeUInt Ident, int AHelpContext)/* overload */ : EEntryFieldError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidDateForMask(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EEntryFieldError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidDateForMask(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EEntryFieldError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidDateForMask(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EEntryFieldError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidDateForMask(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EEditorError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EEditorError : public EOvcException
{
	typedef EOvcException inherited;
	
public:
	__fastcall EEditorError(const System::UnicodeString Msg, unsigned Error);
public:
	/* Exception.CreateFmt */ inline __fastcall EEditorError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EOvcException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EEditorError(NativeUInt Ident)/* overload */ : EOvcException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EEditorError(System::PResStringRec ResStringRec)/* overload */ : EOvcException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EEditorError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EEditorError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EEditorError(const System::UnicodeString Msg, int AHelpContext) : EOvcException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EEditorError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EOvcException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EEditorError(NativeUInt Ident, int AHelpContext)/* overload */ : EOvcException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EEditorError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOvcException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EEditorError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EEditorError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EEditorError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EInvalidLineOrCol;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EInvalidLineOrCol : public EEditorError
{
	typedef EEditorError inherited;
	
public:
	__fastcall EInvalidLineOrCol(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EInvalidLineOrCol(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EEditorError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidLineOrCol(NativeUInt Ident)/* overload */ : EEditorError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidLineOrCol(System::PResStringRec ResStringRec)/* overload */ : EEditorError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidLineOrCol(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EEditorError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidLineOrCol(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EEditorError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidLineOrCol(const System::UnicodeString Msg, int AHelpContext) : EEditorError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidLineOrCol(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EEditorError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidLineOrCol(NativeUInt Ident, int AHelpContext)/* overload */ : EEditorError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidLineOrCol(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EEditorError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidLineOrCol(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EEditorError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidLineOrCol(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EEditorError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidLineOrCol(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EInvalidLineOrPara;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EInvalidLineOrPara : public EEditorError
{
	typedef EEditorError inherited;
	
public:
	__fastcall EInvalidLineOrPara(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EInvalidLineOrPara(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EEditorError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidLineOrPara(NativeUInt Ident)/* overload */ : EEditorError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidLineOrPara(System::PResStringRec ResStringRec)/* overload */ : EEditorError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidLineOrPara(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EEditorError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidLineOrPara(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EEditorError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidLineOrPara(const System::UnicodeString Msg, int AHelpContext) : EEditorError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidLineOrPara(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EEditorError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidLineOrPara(NativeUInt Ident, int AHelpContext)/* overload */ : EEditorError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidLineOrPara(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EEditorError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidLineOrPara(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EEditorError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidLineOrPara(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EEditorError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidLineOrPara(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EViewerError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EViewerError : public EOvcException
{
	typedef EOvcException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EViewerError(const System::UnicodeString Msg) : EOvcException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EViewerError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EOvcException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EViewerError(NativeUInt Ident)/* overload */ : EOvcException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EViewerError(System::PResStringRec ResStringRec)/* overload */ : EOvcException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EViewerError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EViewerError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EViewerError(const System::UnicodeString Msg, int AHelpContext) : EOvcException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EViewerError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EOvcException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EViewerError(NativeUInt Ident, int AHelpContext)/* overload */ : EOvcException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EViewerError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOvcException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EViewerError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EViewerError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EViewerError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ERegionTooLarge;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ERegionTooLarge : public EViewerError
{
	typedef EViewerError inherited;
	
public:
	__fastcall ERegionTooLarge(void);
public:
	/* Exception.CreateFmt */ inline __fastcall ERegionTooLarge(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EViewerError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ERegionTooLarge(NativeUInt Ident)/* overload */ : EViewerError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ERegionTooLarge(System::PResStringRec ResStringRec)/* overload */ : EViewerError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ERegionTooLarge(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EViewerError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ERegionTooLarge(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EViewerError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ERegionTooLarge(const System::UnicodeString Msg, int AHelpContext) : EViewerError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ERegionTooLarge(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EViewerError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERegionTooLarge(NativeUInt Ident, int AHelpContext)/* overload */ : EViewerError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERegionTooLarge(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EViewerError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERegionTooLarge(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EViewerError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERegionTooLarge(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EViewerError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ERegionTooLarge(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ENotebookError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ENotebookError : public EOvcException
{
	typedef EOvcException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ENotebookError(const System::UnicodeString Msg) : EOvcException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ENotebookError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EOvcException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ENotebookError(NativeUInt Ident)/* overload */ : EOvcException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ENotebookError(System::PResStringRec ResStringRec)/* overload */ : EOvcException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ENotebookError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ENotebookError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ENotebookError(const System::UnicodeString Msg, int AHelpContext) : EOvcException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ENotebookError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EOvcException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENotebookError(NativeUInt Ident, int AHelpContext)/* overload */ : EOvcException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENotebookError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOvcException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENotebookError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENotebookError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ENotebookError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EInvalidPageIndex;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EInvalidPageIndex : public ENotebookError
{
	typedef ENotebookError inherited;
	
public:
	__fastcall EInvalidPageIndex(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EInvalidPageIndex(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ENotebookError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidPageIndex(NativeUInt Ident)/* overload */ : ENotebookError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidPageIndex(System::PResStringRec ResStringRec)/* overload */ : ENotebookError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidPageIndex(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ENotebookError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidPageIndex(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ENotebookError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidPageIndex(const System::UnicodeString Msg, int AHelpContext) : ENotebookError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidPageIndex(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ENotebookError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidPageIndex(NativeUInt Ident, int AHelpContext)/* overload */ : ENotebookError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidPageIndex(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ENotebookError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidPageIndex(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ENotebookError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidPageIndex(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ENotebookError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidPageIndex(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EInvalidTabFont;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EInvalidTabFont : public ENotebookError
{
	typedef ENotebookError inherited;
	
public:
	__fastcall EInvalidTabFont(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EInvalidTabFont(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ENotebookError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidTabFont(NativeUInt Ident)/* overload */ : ENotebookError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidTabFont(System::PResStringRec ResStringRec)/* overload */ : ENotebookError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidTabFont(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ENotebookError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidTabFont(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ENotebookError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidTabFont(const System::UnicodeString Msg, int AHelpContext) : ENotebookError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidTabFont(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ENotebookError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidTabFont(NativeUInt Ident, int AHelpContext)/* overload */ : ENotebookError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidTabFont(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ENotebookError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidTabFont(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ENotebookError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidTabFont(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ENotebookError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidTabFont(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ERotatedLabelError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ERotatedLabelError : public EOvcException
{
	typedef EOvcException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ERotatedLabelError(const System::UnicodeString Msg) : EOvcException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ERotatedLabelError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EOvcException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ERotatedLabelError(NativeUInt Ident)/* overload */ : EOvcException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ERotatedLabelError(System::PResStringRec ResStringRec)/* overload */ : EOvcException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ERotatedLabelError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ERotatedLabelError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ERotatedLabelError(const System::UnicodeString Msg, int AHelpContext) : EOvcException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ERotatedLabelError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EOvcException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERotatedLabelError(NativeUInt Ident, int AHelpContext)/* overload */ : EOvcException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERotatedLabelError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOvcException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERotatedLabelError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERotatedLabelError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ERotatedLabelError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EInvalidLabelFont;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EInvalidLabelFont : public ERotatedLabelError
{
	typedef ERotatedLabelError inherited;
	
public:
	__fastcall EInvalidLabelFont(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EInvalidLabelFont(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ERotatedLabelError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidLabelFont(NativeUInt Ident)/* overload */ : ERotatedLabelError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidLabelFont(System::PResStringRec ResStringRec)/* overload */ : ERotatedLabelError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidLabelFont(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ERotatedLabelError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidLabelFont(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ERotatedLabelError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidLabelFont(const System::UnicodeString Msg, int AHelpContext) : ERotatedLabelError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidLabelFont(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ERotatedLabelError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidLabelFont(NativeUInt Ident, int AHelpContext)/* overload */ : ERotatedLabelError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidLabelFont(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ERotatedLabelError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidLabelFont(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ERotatedLabelError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidLabelFont(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ERotatedLabelError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidLabelFont(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ETimerPoolError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ETimerPoolError : public EOvcException
{
	typedef EOvcException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ETimerPoolError(const System::UnicodeString Msg) : EOvcException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ETimerPoolError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EOvcException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETimerPoolError(NativeUInt Ident)/* overload */ : EOvcException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETimerPoolError(System::PResStringRec ResStringRec)/* overload */ : EOvcException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETimerPoolError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETimerPoolError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETimerPoolError(const System::UnicodeString Msg, int AHelpContext) : EOvcException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETimerPoolError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EOvcException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETimerPoolError(NativeUInt Ident, int AHelpContext)/* overload */ : EOvcException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETimerPoolError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOvcException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETimerPoolError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETimerPoolError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETimerPoolError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EInvalidTriggerHandle;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EInvalidTriggerHandle : public ETimerPoolError
{
	typedef ETimerPoolError inherited;
	
public:
	__fastcall EInvalidTriggerHandle(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EInvalidTriggerHandle(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ETimerPoolError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidTriggerHandle(NativeUInt Ident)/* overload */ : ETimerPoolError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidTriggerHandle(System::PResStringRec ResStringRec)/* overload */ : ETimerPoolError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidTriggerHandle(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ETimerPoolError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidTriggerHandle(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ETimerPoolError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidTriggerHandle(const System::UnicodeString Msg, int AHelpContext) : ETimerPoolError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidTriggerHandle(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ETimerPoolError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidTriggerHandle(NativeUInt Ident, int AHelpContext)/* overload */ : ETimerPoolError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidTriggerHandle(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ETimerPoolError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidTriggerHandle(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETimerPoolError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidTriggerHandle(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETimerPoolError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidTriggerHandle(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EVirtualListBoxError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EVirtualListBoxError : public EOvcException
{
	typedef EOvcException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVirtualListBoxError(const System::UnicodeString Msg) : EOvcException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVirtualListBoxError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EOvcException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVirtualListBoxError(NativeUInt Ident)/* overload */ : EOvcException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVirtualListBoxError(System::PResStringRec ResStringRec)/* overload */ : EOvcException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVirtualListBoxError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVirtualListBoxError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVirtualListBoxError(const System::UnicodeString Msg, int AHelpContext) : EOvcException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVirtualListBoxError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EOvcException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVirtualListBoxError(NativeUInt Ident, int AHelpContext)/* overload */ : EOvcException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVirtualListBoxError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOvcException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVirtualListBoxError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVirtualListBoxError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVirtualListBoxError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EOnSelectNotAssigned;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EOnSelectNotAssigned : public EVirtualListBoxError
{
	typedef EVirtualListBoxError inherited;
	
public:
	__fastcall EOnSelectNotAssigned(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EOnSelectNotAssigned(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EVirtualListBoxError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOnSelectNotAssigned(NativeUInt Ident)/* overload */ : EVirtualListBoxError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOnSelectNotAssigned(System::PResStringRec ResStringRec)/* overload */ : EVirtualListBoxError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOnSelectNotAssigned(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EVirtualListBoxError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOnSelectNotAssigned(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EVirtualListBoxError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOnSelectNotAssigned(const System::UnicodeString Msg, int AHelpContext) : EVirtualListBoxError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOnSelectNotAssigned(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EVirtualListBoxError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOnSelectNotAssigned(NativeUInt Ident, int AHelpContext)/* overload */ : EVirtualListBoxError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOnSelectNotAssigned(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EVirtualListBoxError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOnSelectNotAssigned(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EVirtualListBoxError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOnSelectNotAssigned(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EVirtualListBoxError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOnSelectNotAssigned(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EOnIsSelectedNotAssigned;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EOnIsSelectedNotAssigned : public EVirtualListBoxError
{
	typedef EVirtualListBoxError inherited;
	
public:
	__fastcall EOnIsSelectedNotAssigned(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EOnIsSelectedNotAssigned(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EVirtualListBoxError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOnIsSelectedNotAssigned(NativeUInt Ident)/* overload */ : EVirtualListBoxError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOnIsSelectedNotAssigned(System::PResStringRec ResStringRec)/* overload */ : EVirtualListBoxError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOnIsSelectedNotAssigned(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EVirtualListBoxError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOnIsSelectedNotAssigned(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EVirtualListBoxError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOnIsSelectedNotAssigned(const System::UnicodeString Msg, int AHelpContext) : EVirtualListBoxError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOnIsSelectedNotAssigned(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EVirtualListBoxError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOnIsSelectedNotAssigned(NativeUInt Ident, int AHelpContext)/* overload */ : EVirtualListBoxError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOnIsSelectedNotAssigned(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EVirtualListBoxError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOnIsSelectedNotAssigned(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EVirtualListBoxError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOnIsSelectedNotAssigned(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EVirtualListBoxError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOnIsSelectedNotAssigned(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EReportViewError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EReportViewError : public EOvcException
{
	typedef EOvcException inherited;
	
public:
	__fastcall EReportViewError(int ErrorCode, System::Byte Dummy);
	__fastcall EReportViewError(int ErrorCode, System::TVarRec const *Args, const int Args_High, System::Byte Dummy);
public:
	/* Exception.CreateRes */ inline __fastcall EReportViewError(NativeUInt Ident)/* overload */ : EOvcException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EReportViewError(System::PResStringRec ResStringRec)/* overload */ : EOvcException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EReportViewError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EReportViewError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EReportViewError(const System::UnicodeString Msg, int AHelpContext) : EOvcException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EReportViewError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EOvcException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EReportViewError(NativeUInt Ident, int AHelpContext)/* overload */ : EOvcException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EReportViewError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOvcException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EReportViewError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EReportViewError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EReportViewError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EUnknownView;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EUnknownView : public EReportViewError
{
	typedef EReportViewError inherited;
	
public:
	/* EReportViewError.Create */ inline __fastcall EUnknownView(int ErrorCode, System::Byte Dummy) : EReportViewError(ErrorCode, Dummy) { }
	/* EReportViewError.CreateFmt */ inline __fastcall EUnknownView(int ErrorCode, System::TVarRec const *Args, const int Args_High, System::Byte Dummy) : EReportViewError(ErrorCode, Args, Args_High, Dummy) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EUnknownView(NativeUInt Ident)/* overload */ : EReportViewError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EUnknownView(System::PResStringRec ResStringRec)/* overload */ : EReportViewError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EUnknownView(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EUnknownView(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EUnknownView(const System::UnicodeString Msg, int AHelpContext) : EReportViewError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EUnknownView(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EReportViewError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EUnknownView(NativeUInt Ident, int AHelpContext)/* overload */ : EReportViewError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EUnknownView(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EUnknownView(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EUnknownView(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EUnknownView(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EItemNotFound;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EItemNotFound : public EReportViewError
{
	typedef EReportViewError inherited;
	
public:
	/* EReportViewError.Create */ inline __fastcall EItemNotFound(int ErrorCode, System::Byte Dummy) : EReportViewError(ErrorCode, Dummy) { }
	/* EReportViewError.CreateFmt */ inline __fastcall EItemNotFound(int ErrorCode, System::TVarRec const *Args, const int Args_High, System::Byte Dummy) : EReportViewError(ErrorCode, Args, Args_High, Dummy) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EItemNotFound(NativeUInt Ident)/* overload */ : EReportViewError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EItemNotFound(System::PResStringRec ResStringRec)/* overload */ : EReportViewError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EItemNotFound(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EItemNotFound(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EItemNotFound(const System::UnicodeString Msg, int AHelpContext) : EReportViewError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EItemNotFound(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EReportViewError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EItemNotFound(NativeUInt Ident, int AHelpContext)/* overload */ : EReportViewError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EItemNotFound(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EItemNotFound(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EItemNotFound(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EItemNotFound(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EItemAlreadyAdded;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EItemAlreadyAdded : public EReportViewError
{
	typedef EReportViewError inherited;
	
public:
	/* EReportViewError.Create */ inline __fastcall EItemAlreadyAdded(int ErrorCode, System::Byte Dummy) : EReportViewError(ErrorCode, Dummy) { }
	/* EReportViewError.CreateFmt */ inline __fastcall EItemAlreadyAdded(int ErrorCode, System::TVarRec const *Args, const int Args_High, System::Byte Dummy) : EReportViewError(ErrorCode, Args, Args_High, Dummy) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EItemAlreadyAdded(NativeUInt Ident)/* overload */ : EReportViewError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EItemAlreadyAdded(System::PResStringRec ResStringRec)/* overload */ : EReportViewError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EItemAlreadyAdded(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EItemAlreadyAdded(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EItemAlreadyAdded(const System::UnicodeString Msg, int AHelpContext) : EReportViewError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EItemAlreadyAdded(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EReportViewError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EItemAlreadyAdded(NativeUInt Ident, int AHelpContext)/* overload */ : EReportViewError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EItemAlreadyAdded(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EItemAlreadyAdded(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EItemAlreadyAdded(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EItemAlreadyAdded(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EUpdatePending;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EUpdatePending : public EReportViewError
{
	typedef EReportViewError inherited;
	
public:
	/* EReportViewError.Create */ inline __fastcall EUpdatePending(int ErrorCode, System::Byte Dummy) : EReportViewError(ErrorCode, Dummy) { }
	/* EReportViewError.CreateFmt */ inline __fastcall EUpdatePending(int ErrorCode, System::TVarRec const *Args, const int Args_High, System::Byte Dummy) : EReportViewError(ErrorCode, Args, Args_High, Dummy) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EUpdatePending(NativeUInt Ident)/* overload */ : EReportViewError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EUpdatePending(System::PResStringRec ResStringRec)/* overload */ : EReportViewError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EUpdatePending(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EUpdatePending(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EUpdatePending(const System::UnicodeString Msg, int AHelpContext) : EReportViewError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EUpdatePending(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EReportViewError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EUpdatePending(NativeUInt Ident, int AHelpContext)/* overload */ : EReportViewError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EUpdatePending(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EUpdatePending(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EUpdatePending(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EUpdatePending(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EItemIsNotGroup;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EItemIsNotGroup : public EReportViewError
{
	typedef EReportViewError inherited;
	
public:
	/* EReportViewError.Create */ inline __fastcall EItemIsNotGroup(int ErrorCode, System::Byte Dummy) : EReportViewError(ErrorCode, Dummy) { }
	/* EReportViewError.CreateFmt */ inline __fastcall EItemIsNotGroup(int ErrorCode, System::TVarRec const *Args, const int Args_High, System::Byte Dummy) : EReportViewError(ErrorCode, Args, Args_High, Dummy) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EItemIsNotGroup(NativeUInt Ident)/* overload */ : EReportViewError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EItemIsNotGroup(System::PResStringRec ResStringRec)/* overload */ : EReportViewError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EItemIsNotGroup(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EItemIsNotGroup(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EItemIsNotGroup(const System::UnicodeString Msg, int AHelpContext) : EReportViewError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EItemIsNotGroup(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EReportViewError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EItemIsNotGroup(NativeUInt Ident, int AHelpContext)/* overload */ : EReportViewError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EItemIsNotGroup(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EItemIsNotGroup(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EItemIsNotGroup(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EItemIsNotGroup(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ELineNoOutOfRange;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ELineNoOutOfRange : public EReportViewError
{
	typedef EReportViewError inherited;
	
public:
	/* EReportViewError.Create */ inline __fastcall ELineNoOutOfRange(int ErrorCode, System::Byte Dummy) : EReportViewError(ErrorCode, Dummy) { }
	/* EReportViewError.CreateFmt */ inline __fastcall ELineNoOutOfRange(int ErrorCode, System::TVarRec const *Args, const int Args_High, System::Byte Dummy) : EReportViewError(ErrorCode, Args, Args_High, Dummy) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall ELineNoOutOfRange(NativeUInt Ident)/* overload */ : EReportViewError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ELineNoOutOfRange(System::PResStringRec ResStringRec)/* overload */ : EReportViewError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ELineNoOutOfRange(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ELineNoOutOfRange(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ELineNoOutOfRange(const System::UnicodeString Msg, int AHelpContext) : EReportViewError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ELineNoOutOfRange(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EReportViewError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ELineNoOutOfRange(NativeUInt Ident, int AHelpContext)/* overload */ : EReportViewError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ELineNoOutOfRange(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ELineNoOutOfRange(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ELineNoOutOfRange(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ELineNoOutOfRange(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ENotMultiSelect;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ENotMultiSelect : public EReportViewError
{
	typedef EReportViewError inherited;
	
public:
	/* EReportViewError.Create */ inline __fastcall ENotMultiSelect(int ErrorCode, System::Byte Dummy) : EReportViewError(ErrorCode, Dummy) { }
	/* EReportViewError.CreateFmt */ inline __fastcall ENotMultiSelect(int ErrorCode, System::TVarRec const *Args, const int Args_High, System::Byte Dummy) : EReportViewError(ErrorCode, Args, Args_High, Dummy) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall ENotMultiSelect(NativeUInt Ident)/* overload */ : EReportViewError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ENotMultiSelect(System::PResStringRec ResStringRec)/* overload */ : EReportViewError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ENotMultiSelect(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ENotMultiSelect(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ENotMultiSelect(const System::UnicodeString Msg, int AHelpContext) : EReportViewError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ENotMultiSelect(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EReportViewError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENotMultiSelect(NativeUInt Ident, int AHelpContext)/* overload */ : EReportViewError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENotMultiSelect(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENotMultiSelect(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENotMultiSelect(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ENotMultiSelect(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EItemNotInIndex;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EItemNotInIndex : public EReportViewError
{
	typedef EReportViewError inherited;
	
public:
	/* EReportViewError.Create */ inline __fastcall EItemNotInIndex(int ErrorCode, System::Byte Dummy) : EReportViewError(ErrorCode, Dummy) { }
	/* EReportViewError.CreateFmt */ inline __fastcall EItemNotInIndex(int ErrorCode, System::TVarRec const *Args, const int Args_High, System::Byte Dummy) : EReportViewError(ErrorCode, Args, Args_High, Dummy) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EItemNotInIndex(NativeUInt Ident)/* overload */ : EReportViewError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EItemNotInIndex(System::PResStringRec ResStringRec)/* overload */ : EReportViewError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EItemNotInIndex(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EItemNotInIndex(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EItemNotInIndex(const System::UnicodeString Msg, int AHelpContext) : EReportViewError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EItemNotInIndex(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EReportViewError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EItemNotInIndex(NativeUInt Ident, int AHelpContext)/* overload */ : EReportViewError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EItemNotInIndex(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EItemNotInIndex(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EItemNotInIndex(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EItemNotInIndex(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ENoActiveView;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ENoActiveView : public EReportViewError
{
	typedef EReportViewError inherited;
	
public:
	/* EReportViewError.Create */ inline __fastcall ENoActiveView(int ErrorCode, System::Byte Dummy) : EReportViewError(ErrorCode, Dummy) { }
	/* EReportViewError.CreateFmt */ inline __fastcall ENoActiveView(int ErrorCode, System::TVarRec const *Args, const int Args_High, System::Byte Dummy) : EReportViewError(ErrorCode, Args, Args_High, Dummy) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall ENoActiveView(NativeUInt Ident)/* overload */ : EReportViewError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ENoActiveView(System::PResStringRec ResStringRec)/* overload */ : EReportViewError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ENoActiveView(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ENoActiveView(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ENoActiveView(const System::UnicodeString Msg, int AHelpContext) : EReportViewError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ENoActiveView(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EReportViewError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENoActiveView(NativeUInt Ident, int AHelpContext)/* overload */ : EReportViewError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENoActiveView(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENoActiveView(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENoActiveView(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ENoActiveView(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EOnCompareNotAsgnd;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EOnCompareNotAsgnd : public EReportViewError
{
	typedef EReportViewError inherited;
	
public:
	/* EReportViewError.Create */ inline __fastcall EOnCompareNotAsgnd(int ErrorCode, System::Byte Dummy) : EReportViewError(ErrorCode, Dummy) { }
	/* EReportViewError.CreateFmt */ inline __fastcall EOnCompareNotAsgnd(int ErrorCode, System::TVarRec const *Args, const int Args_High, System::Byte Dummy) : EReportViewError(ErrorCode, Args, Args_High, Dummy) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EOnCompareNotAsgnd(NativeUInt Ident)/* overload */ : EReportViewError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOnCompareNotAsgnd(System::PResStringRec ResStringRec)/* overload */ : EReportViewError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOnCompareNotAsgnd(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOnCompareNotAsgnd(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOnCompareNotAsgnd(const System::UnicodeString Msg, int AHelpContext) : EReportViewError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOnCompareNotAsgnd(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EReportViewError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOnCompareNotAsgnd(NativeUInt Ident, int AHelpContext)/* overload */ : EReportViewError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOnCompareNotAsgnd(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOnCompareNotAsgnd(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOnCompareNotAsgnd(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOnCompareNotAsgnd(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EGetAsFloatNotAsg;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EGetAsFloatNotAsg : public EReportViewError
{
	typedef EReportViewError inherited;
	
public:
	/* EReportViewError.Create */ inline __fastcall EGetAsFloatNotAsg(int ErrorCode, System::Byte Dummy) : EReportViewError(ErrorCode, Dummy) { }
	/* EReportViewError.CreateFmt */ inline __fastcall EGetAsFloatNotAsg(int ErrorCode, System::TVarRec const *Args, const int Args_High, System::Byte Dummy) : EReportViewError(ErrorCode, Args, Args_High, Dummy) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EGetAsFloatNotAsg(NativeUInt Ident)/* overload */ : EReportViewError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EGetAsFloatNotAsg(System::PResStringRec ResStringRec)/* overload */ : EReportViewError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EGetAsFloatNotAsg(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EGetAsFloatNotAsg(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EGetAsFloatNotAsg(const System::UnicodeString Msg, int AHelpContext) : EReportViewError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EGetAsFloatNotAsg(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EReportViewError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EGetAsFloatNotAsg(NativeUInt Ident, int AHelpContext)/* overload */ : EReportViewError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EGetAsFloatNotAsg(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EGetAsFloatNotAsg(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EGetAsFloatNotAsg(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EGetAsFloatNotAsg(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EOnFilterNotAsgnd;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EOnFilterNotAsgnd : public EReportViewError
{
	typedef EReportViewError inherited;
	
public:
	/* EReportViewError.Create */ inline __fastcall EOnFilterNotAsgnd(int ErrorCode, System::Byte Dummy) : EReportViewError(ErrorCode, Dummy) { }
	/* EReportViewError.CreateFmt */ inline __fastcall EOnFilterNotAsgnd(int ErrorCode, System::TVarRec const *Args, const int Args_High, System::Byte Dummy) : EReportViewError(ErrorCode, Args, Args_High, Dummy) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EOnFilterNotAsgnd(NativeUInt Ident)/* overload */ : EReportViewError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOnFilterNotAsgnd(System::PResStringRec ResStringRec)/* overload */ : EReportViewError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOnFilterNotAsgnd(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOnFilterNotAsgnd(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EReportViewError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOnFilterNotAsgnd(const System::UnicodeString Msg, int AHelpContext) : EReportViewError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOnFilterNotAsgnd(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EReportViewError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOnFilterNotAsgnd(NativeUInt Ident, int AHelpContext)/* overload */ : EReportViewError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOnFilterNotAsgnd(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOnFilterNotAsgnd(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOnFilterNotAsgnd(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EReportViewError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOnFilterNotAsgnd(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ESparseArrayError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ESparseArrayError : public EOvcException
{
	typedef EOvcException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ESparseArrayError(const System::UnicodeString Msg) : EOvcException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ESparseArrayError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EOvcException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ESparseArrayError(NativeUInt Ident)/* overload */ : EOvcException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ESparseArrayError(System::PResStringRec ResStringRec)/* overload */ : EOvcException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ESparseArrayError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ESparseArrayError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ESparseArrayError(const System::UnicodeString Msg, int AHelpContext) : EOvcException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ESparseArrayError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EOvcException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESparseArrayError(NativeUInt Ident, int AHelpContext)/* overload */ : EOvcException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESparseArrayError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOvcException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESparseArrayError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESparseArrayError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ESparseArrayError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ESAEAtMaxSize;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ESAEAtMaxSize : public ESparseArrayError
{
	typedef ESparseArrayError inherited;
	
public:
	/* Exception.Create */ inline __fastcall ESAEAtMaxSize(const System::UnicodeString Msg) : ESparseArrayError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ESAEAtMaxSize(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ESparseArrayError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ESAEAtMaxSize(NativeUInt Ident)/* overload */ : ESparseArrayError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ESAEAtMaxSize(System::PResStringRec ResStringRec)/* overload */ : ESparseArrayError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ESAEAtMaxSize(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ESparseArrayError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ESAEAtMaxSize(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ESparseArrayError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ESAEAtMaxSize(const System::UnicodeString Msg, int AHelpContext) : ESparseArrayError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ESAEAtMaxSize(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ESparseArrayError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESAEAtMaxSize(NativeUInt Ident, int AHelpContext)/* overload */ : ESparseArrayError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESAEAtMaxSize(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ESparseArrayError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESAEAtMaxSize(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ESparseArrayError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESAEAtMaxSize(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ESparseArrayError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ESAEAtMaxSize(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ESAEOutOfBounds;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ESAEOutOfBounds : public ESparseArrayError
{
	typedef ESparseArrayError inherited;
	
public:
	/* Exception.Create */ inline __fastcall ESAEOutOfBounds(const System::UnicodeString Msg) : ESparseArrayError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ESAEOutOfBounds(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ESparseArrayError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ESAEOutOfBounds(NativeUInt Ident)/* overload */ : ESparseArrayError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ESAEOutOfBounds(System::PResStringRec ResStringRec)/* overload */ : ESparseArrayError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ESAEOutOfBounds(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ESparseArrayError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ESAEOutOfBounds(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ESparseArrayError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ESAEOutOfBounds(const System::UnicodeString Msg, int AHelpContext) : ESparseArrayError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ESAEOutOfBounds(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ESparseArrayError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESAEOutOfBounds(NativeUInt Ident, int AHelpContext)/* overload */ : ESparseArrayError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESAEOutOfBounds(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ESparseArrayError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESAEOutOfBounds(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ESparseArrayError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESAEOutOfBounds(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ESparseArrayError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ESAEOutOfBounds(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EFixedFontError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EFixedFontError : public EOvcException
{
	typedef EOvcException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EFixedFontError(const System::UnicodeString Msg) : EOvcException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EFixedFontError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EOvcException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EFixedFontError(NativeUInt Ident)/* overload */ : EOvcException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EFixedFontError(System::PResStringRec ResStringRec)/* overload */ : EOvcException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EFixedFontError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EFixedFontError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EFixedFontError(const System::UnicodeString Msg, int AHelpContext) : EOvcException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EFixedFontError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EOvcException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFixedFontError(NativeUInt Ident, int AHelpContext)/* overload */ : EOvcException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFixedFontError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOvcException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFixedFontError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFixedFontError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EFixedFontError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EInvalidFixedFont;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EInvalidFixedFont : public EFixedFontError
{
	typedef EFixedFontError inherited;
	
public:
	__fastcall EInvalidFixedFont(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EInvalidFixedFont(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EFixedFontError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidFixedFont(NativeUInt Ident)/* overload */ : EFixedFontError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidFixedFont(System::PResStringRec ResStringRec)/* overload */ : EFixedFontError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidFixedFont(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EFixedFontError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidFixedFont(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EFixedFontError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidFixedFont(const System::UnicodeString Msg, int AHelpContext) : EFixedFontError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidFixedFont(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EFixedFontError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidFixedFont(NativeUInt Ident, int AHelpContext)/* overload */ : EFixedFontError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidFixedFont(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EFixedFontError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidFixedFont(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EFixedFontError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidFixedFont(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EFixedFontError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidFixedFont(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EInvalidFontParam;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EInvalidFontParam : public EFixedFontError
{
	typedef EFixedFontError inherited;
	
public:
	__fastcall EInvalidFontParam(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EInvalidFontParam(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EFixedFontError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidFontParam(NativeUInt Ident)/* overload */ : EFixedFontError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidFontParam(System::PResStringRec ResStringRec)/* overload */ : EFixedFontError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidFontParam(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EFixedFontError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidFontParam(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EFixedFontError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidFontParam(const System::UnicodeString Msg, int AHelpContext) : EFixedFontError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidFontParam(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EFixedFontError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidFontParam(NativeUInt Ident, int AHelpContext)/* overload */ : EFixedFontError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidFontParam(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EFixedFontError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidFontParam(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EFixedFontError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidFontParam(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EFixedFontError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidFontParam(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EMenuMRUError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EMenuMRUError : public EOvcException
{
	typedef EOvcException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EMenuMRUError(const System::UnicodeString Msg) : EOvcException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EMenuMRUError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EOvcException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EMenuMRUError(NativeUInt Ident)/* overload */ : EOvcException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EMenuMRUError(System::PResStringRec ResStringRec)/* overload */ : EOvcException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EMenuMRUError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EMenuMRUError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EOvcException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EMenuMRUError(const System::UnicodeString Msg, int AHelpContext) : EOvcException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EMenuMRUError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EOvcException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMenuMRUError(NativeUInt Ident, int AHelpContext)/* overload */ : EOvcException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMenuMRUError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOvcException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMenuMRUError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMenuMRUError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EOvcException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EMenuMRUError(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Ovcexcpt */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_OVCEXCPT)
using namespace Ovcexcpt;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// OvcexcptHPP
