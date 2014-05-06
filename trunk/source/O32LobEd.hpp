﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'O32LobEd.pas' rev: 27.00 (Windows)

#ifndef O32lobedHPP
#define O32lobedHPP

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
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <ovcspeed.hpp>	// Pascal unit
#include <ovcbase.hpp>	// Pascal unit
#include <ovcstate.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <o32lkout.hpp>	// Pascal unit
#include <o32coled.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace O32lobed
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TO32LookoutBarEditor;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TO32LookoutBarEditor : public Designeditors::TComponentEditor
{
	typedef Designeditors::TComponentEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TO32LookoutBarEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TO32LookoutBarEditor(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TO32frmLkOutEd;
class PASCALIMPLEMENTATION TO32frmLkOutEd : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Extctrls::TPanel* pnlItems;
	Vcl::Extctrls::TPanel* pnlFolders;
	Vcl::Stdctrls::TListBox* lbItems;
	Vcl::Stdctrls::TListBox* lbFolders;
	Vcl::Extctrls::TPanel* Panel1;
	Ovcspeed::TOvcSpeedButton* btnItemAdd;
	Ovcspeed::TOvcSpeedButton* btnItemDelete;
	Ovcspeed::TOvcSpeedButton* btnItemUp;
	Ovcspeed::TOvcSpeedButton* btnItemDown;
	Vcl::Extctrls::TPanel* Panel4;
	Vcl::Stdctrls::TLabel* Label2;
	Vcl::Extctrls::TPanel* Panel5;
	Ovcspeed::TOvcSpeedButton* btnFolderAdd;
	Ovcspeed::TOvcSpeedButton* btnFolderDelete;
	Ovcspeed::TOvcSpeedButton* btnFolderUp;
	Ovcspeed::TOvcSpeedButton* btnFolderDown;
	Vcl::Extctrls::TPanel* Panel6;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Extctrls::TPanel* pnlImages;
	Vcl::Extctrls::TPanel* Panel8;
	Vcl::Stdctrls::TLabel* Label3;
	Vcl::Stdctrls::TListBox* lbImages;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall lbFoldersClick(System::TObject* Sender);
	void __fastcall lbItemsMeasureItem(Vcl::Controls::TWinControl* Control, int Index, int &Height);
	void __fastcall lbItemsDrawItem(Vcl::Controls::TWinControl* Control, int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	void __fastcall lbImagesDrawItem(Vcl::Controls::TWinControl* Control, int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	void __fastcall lbItemsClick(System::TObject* Sender);
	void __fastcall lbImagesClick(System::TObject* Sender);
	void __fastcall btnItemUpClick(System::TObject* Sender);
	void __fastcall btnItemDownClick(System::TObject* Sender);
	void __fastcall btnFolderUpClick(System::TObject* Sender);
	void __fastcall btnFolderDownClick(System::TObject* Sender);
	void __fastcall btnItemDeleteClick(System::TObject* Sender);
	void __fastcall btnFolderDeleteClick(System::TObject* Sender);
	void __fastcall btnFolderAddClick(System::TObject* Sender);
	void __fastcall btnItemAddClick(System::TObject* Sender);
	
public:
	O32lkout::TO32LookoutBar* Bar;
	Designintf::_di_IDesigner Designer;
	void __fastcall PopulateFolderList(void);
	void __fastcall PopulateItemList(void);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TO32frmLkOutEd(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TO32frmLkOutEd(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TO32frmLkOutEd(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TO32frmLkOutEd(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall EditLookOut(Designintf::_di_IDesigner Designer, O32lkout::TO32LookoutBar* Bar);
}	/* namespace O32lobed */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_O32LOBED)
using namespace O32lobed;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// O32lobedHPP
