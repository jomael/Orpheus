﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Ovcabot0.pas' rev: 27.00 (Windows)

#ifndef Ovcabot0HPP
#define Ovcabot0HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.Dialogs.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <ovcver.hpp>	// Pascal unit
#include <ovcurl.hpp>	// Pascal unit
#include <Winapi.ShellAPI.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ovcabot0
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TOvcfrmAboutForm;
class PASCALIMPLEMENTATION TOvcfrmAboutForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Extctrls::TPanel* Panel1;
	Vcl::Extctrls::TImage* Image1;
	Vcl::Stdctrls::TButton* btnOK;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TLabel* VisitUsLabel;
	Vcl::Stdctrls::TLabel* lblTurboLink;
	Vcl::Extctrls::TBevel* Bevel3;
	Vcl::Stdctrls::TLabel* GeneralNewsgroupsLabel;
	Vcl::Stdctrls::TLabel* lblHelp;
	Vcl::Stdctrls::TLabel* lblGeneralDiscussion;
	Vcl::Stdctrls::TLabel* Label3;
	Vcl::Stdctrls::TLabel* Label2;
	void __fastcall btnOKClick(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall lblTurboLinkClick(System::TObject* Sender);
	void __fastcall lblHelpClick(System::TObject* Sender);
	void __fastcall lblGeneralDiscussionClick(System::TObject* Sender);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TOvcfrmAboutForm(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TOvcfrmAboutForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TOvcfrmAboutForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TOvcfrmAboutForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


class DELPHICLASS TOvcAboutProperty;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcAboutProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall Edit(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TOvcAboutProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TOvcAboutProperty(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Ovcabot0 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_OVCABOT0)
using namespace Ovcabot0;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Ovcabot0HPP
