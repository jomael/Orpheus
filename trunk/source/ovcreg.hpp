﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ovcreg.pas' rev: 27.00 (Windows)

#ifndef OvcregHPP
#define OvcregHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Vcl.Dialogs.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <VCLEditors.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <System.TypInfo.hpp>	// Pascal unit
#include <ovcdata.hpp>	// Pascal unit
#include <ovcvalid.hpp>	// Pascal unit
#include <ovcconst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ovcreg
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TOvcHeaderProperty;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcHeaderProperty : public Vcleditors::TCaptionProperty
{
	typedef Vcleditors::TCaptionProperty inherited;
	
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TOvcHeaderProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Vcleditors::TCaptionProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TOvcHeaderProperty(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TOvcTimerPoolEditor;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcTimerPoolEditor : public Designeditors::TDefaultEditor
{
	typedef Designeditors::TDefaultEditor inherited;
	
protected:
	virtual void __fastcall EditProperty(const Designintf::_di_IProperty Prop, bool &Continue);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TOvcTimerPoolEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOvcTimerPoolEditor(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TExcludeComponentProperty;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TExcludeComponentProperty : public Designeditors::TComponentProperty
{
	typedef Designeditors::TComponentProperty inherited;
	
public:
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TExcludeComponentProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TComponentProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TExcludeComponentProperty(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TorGenericStringProperty;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TorGenericStringProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
protected:
	virtual void __fastcall GetValueList(System::Classes::TStrings* List) = 0 ;
	
public:
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TorGenericStringProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TorGenericStringProperty(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Ovcreg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_OVCREG)
using namespace Ovcreg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// OvcregHPP
