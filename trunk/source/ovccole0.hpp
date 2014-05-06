﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ovccole0.pas' rev: 27.00 (Windows)

#ifndef Ovccole0HPP
#define Ovccole0HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <Vcl.Dialogs.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <ovcbase.hpp>	// Pascal unit
#include <ovcdata.hpp>	// Pascal unit
#include <ovcspeed.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ovccole0
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TProtectedSelList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TProtectedSelList : public Designintf::TDesignerSelections
{
	typedef Designintf::TDesignerSelections inherited;
	
public:
	/* TDesignerSelections.Create */ inline __fastcall virtual TProtectedSelList(void) : Designintf::TDesignerSelections() { }
	/* TDesignerSelections.Copy */ inline __fastcall TProtectedSelList(const Designintf::_di_IDesignerSelections Selections) : Designintf::TDesignerSelections(Selections) { }
	/* TDesignerSelections.Destroy */ inline __fastcall virtual ~TProtectedSelList(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TOvcfrmCollEditor;
class PASCALIMPLEMENTATION TOvcfrmCollEditor : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TListBox* ListBox1;
	Vcl::Extctrls::TPanel* Panel1;
	Ovcspeed::TOvcSpeedButton* btnAdd;
	Ovcspeed::TOvcSpeedButton* btnDelete;
	Ovcspeed::TOvcSpeedButton* btnMoveUp;
	Ovcspeed::TOvcSpeedButton* btnMoveDown;
	void __fastcall btnAddClick(System::TObject* Sender);
	void __fastcall btnDeleteClick(System::TObject* Sender);
	void __fastcall btnMoveUpClick(System::TObject* Sender);
	void __fastcall btnMoveDownClick(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall ListBox1Click(System::TObject* Sender);
	void __fastcall FormClose(System::TObject* Sender, System::Uitypes::TCloseAction &Action);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall ListBox1KeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	
private:
	void __fastcall FillGrid(void);
	void __fastcall SelectComponentList(Designintf::TDesignerSelections* SelList);
	void __fastcall SelectComponent(System::Classes::TComponent* Component);
	MESSAGE void __fastcall OmPropChange(Winapi::Messages::TMessage &Msg);
	
public:
	Ovcbase::TOvcCollection* Collection;
	Designintf::_di_IDesigner Designer;
	bool InInLined;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TOvcfrmCollEditor(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TOvcfrmCollEditor(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TOvcfrmCollEditor(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TOvcfrmCollEditor(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


class DELPHICLASS TOvcCollectionEditor;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcCollectionEditor : public Designeditors::TPropertyEditor
{
	typedef Designeditors::TPropertyEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TOvcCollectionEditor(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TOvcCollectionEditor(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall ShowCollectionEditor(Designintf::_di_IDesigner Designer, Ovcbase::TOvcCollection* Collection, bool InInLined);
}	/* namespace Ovccole0 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_OVCCOLE0)
using namespace Ovccole0;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Ovccole0HPP
