﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ovccmdp0.pas' rev: 27.00 (Windows)

#ifndef Ovccmdp0HPP
#define Ovccmdp0HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.Buttons.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Dialogs.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <Vcl.Tabs.hpp>	// Pascal unit
#include <ovcdata.hpp>	// Pascal unit
#include <ovccmd.hpp>	// Pascal unit
#include <ovcmisc.hpp>	// Pascal unit
#include <ovccmdp1.hpp>	// Pascal unit
#include <ovcexcpt.hpp>	// Pascal unit
#include <ovcconst.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ovccmdp0
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TOvcHotEdit;
class PASCALIMPLEMENTATION TOvcHotEdit : public Vcl::Stdctrls::TEdit
{
	typedef Vcl::Stdctrls::TEdit inherited;
	
protected:
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Msg);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Msg);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSysKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
public:
	/* TCustomEdit.Create */ inline __fastcall virtual TOvcHotEdit(System::Classes::TComponent* AOwner) : Vcl::Stdctrls::TEdit(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TOvcHotEdit(HWND ParentWindow) : Vcl::Stdctrls::TEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TOvcHotEdit(void) { }
	
};


class DELPHICLASS TOvcfrmCmdTable;
class PASCALIMPLEMENTATION TOvcfrmCmdTable : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Tabs::TTabSet* tabTable;
	Vcl::Stdctrls::TListBox* lbKeys;
	Vcl::Stdctrls::TListBox* lbCommands;
	Vcl::Dialogs::TSaveDialog* dlgSaveDialog;
	Vcl::Dialogs::TOpenDialog* dlgOpenDialog;
	Vcl::Buttons::TBitBtn* btnAssign;
	Vcl::Buttons::TBitBtn* btnClear;
	Vcl::Buttons::TBitBtn* btnClose;
	Vcl::Buttons::TBitBtn* btnNewCmd;
	Vcl::Menus::TMainMenu* mnuCmdMenu;
	Vcl::Menus::TMenuItem* miNew;
	Vcl::Menus::TMenuItem* miDelete;
	Vcl::Menus::TMenuItem* miDuplicate;
	Vcl::Menus::TMenuItem* miLoad;
	Vcl::Menus::TMenuItem* miSave;
	Vcl::Menus::TMenuItem* miOrder;
	Vcl::Menus::TMenuItem* miRename;
	Vcl::Stdctrls::TEdit* edFirst;
	Vcl::Stdctrls::TEdit* edSecond;
	Vcl::Stdctrls::TCheckBox* ckActive;
	Vcl::Stdctrls::TCheckBox* ckWordstar;
	Vcl::Stdctrls::TLabel* lblWordStar;
	void __fastcall FillTabList(void);
	void __fastcall CreateEditFields(void);
	void __fastcall FormActivate(System::TObject* Sender);
	void __fastcall SetCommandHighlght(int Cmd);
	void __fastcall FillListBoxes(int TableIndex);
	void __fastcall lbKeysClick(System::TObject* Sender);
	void __fastcall TableTabChange(System::TObject* Sender, int NewTab, bool &AllowChange);
	void __fastcall btnCloseClick(System::TObject* Sender);
	void __fastcall miLoadClick(System::TObject* Sender);
	void __fastcall miSaveClick(System::TObject* Sender);
	void __fastcall miDeleteClick(System::TObject* Sender);
	void __fastcall miRenameClick(System::TObject* Sender);
	void __fastcall ckActiveClick(System::TObject* Sender);
	void __fastcall ckWordstarClick(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	Ovcdata::TOvcCmdRec __fastcall GetKeys(void);
	void __fastcall AssignKeysToCommand(const Ovcdata::TOvcCmdRec &CR);
	void __fastcall btnUserCmdClick(System::TObject* Sender);
	void __fastcall btnAssignClick(System::TObject* Sender);
	void __fastcall miNewClick(System::TObject* Sender);
	void __fastcall miDuplicateClick(System::TObject* Sender);
	void __fastcall miOrderClick(System::TObject* Sender);
	void __fastcall btnClearClick(System::TObject* Sender);
	void __fastcall EditEnter(System::TObject* Sender);
	void __fastcall EditChange(System::TObject* Sender);
	
protected:
	int CurrentTable;
	bool EditsCreated;
	TOvcHotEdit* HotEdit1;
	TOvcHotEdit* HotEdit2;
	int UserNext;
	
public:
	Ovccmd::TOvcCommandProcessor* CP;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TOvcfrmCmdTable(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TOvcfrmCmdTable(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TOvcfrmCmdTable(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TOvcfrmCmdTable(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


class DELPHICLASS TOvcCommandProcessorProperty;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcCommandProcessorProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TOvcCommandProcessorProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TOvcCommandProcessorProperty(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TOvcControllerEditor;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcControllerEditor : public Designeditors::TComponentEditor
{
	typedef Designeditors::TComponentEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TOvcControllerEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOvcControllerEditor(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Ovccmdp0 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_OVCCMDP0)
using namespace Ovccmdp0;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Ovccmdp0HPP
