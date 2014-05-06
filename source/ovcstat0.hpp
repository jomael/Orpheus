﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ovcstat0.pas' rev: 27.00 (Windows)

#ifndef Ovcstat0HPP
#define Ovcstat0HPP

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
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.TypInfo.hpp>	// Pascal unit
#include <ovcfiler.hpp>	// Pascal unit
#include <ovcstate.hpp>	// Pascal unit
#include <ovcspeed.hpp>	// Pascal unit
#include <ovcbase.hpp>	// Pascal unit
#include <ovclb.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ovcstat0
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TOvcfrmPropsDlg;
class PASCALIMPLEMENTATION TOvcfrmPropsDlg : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Ovclb::TOvcListBox* StoredList;
	Ovclb::TOvcListBox* PropertiesList;
	Ovclb::TOvcListBox* ComponentsList;
	Vcl::Stdctrls::TButton* AddButton;
	Vcl::Stdctrls::TButton* DeleteButton;
	Vcl::Stdctrls::TButton* ClearButton;
	Vcl::Stdctrls::TButton* OkBtn;
	Vcl::Stdctrls::TButton* CancelBtn;
	Ovcspeed::TOvcSpeedButton* UpBtn;
	Ovcspeed::TOvcSpeedButton* DownBtn;
	Vcl::Stdctrls::TLabel* lblClassName;
	Vcl::Stdctrls::TLabel* lblPropType;
	Ovcbase::TOvcAttachedLabel* ComponentsListLabel1;
	Ovcbase::TOvcAttachedLabel* PropertiesListLabel1;
	Ovcbase::TOvcAttachedLabel* StoredListLabel1;
	void __fastcall AddButtonClick(System::TObject* Sender);
	void __fastcall ClearButtonClick(System::TObject* Sender);
	void __fastcall DeleteButtonClick(System::TObject* Sender);
	void __fastcall DownBtnClick(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall ListClick(System::TObject* Sender);
	void __fastcall PropertiesListDblClick(System::TObject* Sender);
	void __fastcall StoredListClick(System::TObject* Sender);
	void __fastcall StoredListDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall StoredListDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall StoredListKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall UpBtnClick(System::TObject* Sender);
	
private:
	Vcl::Controls::TWinControl* TheOwner;
	Designintf::_di_IDesigner FDesigner;
	void __fastcall AddItem(int IdxComp, int IdxProp, bool AUpdate);
	void __fastcall BuildLists(System::Classes::TStrings* StoredProps);
	void __fastcall CheckAddItem(const System::UnicodeString CompName, const System::UnicodeString PropName);
	void __fastcall CheckButtons(void);
	void __fastcall ClearLists(void);
	void __fastcall DeleteProp(int I);
	bool __fastcall FindProp(const System::UnicodeString CompName, const System::UnicodeString PropName, int &IdxComp, int &IdxProp);
	void __fastcall ListToIndex(Vcl::Stdctrls::TCustomListBox* List, int Idx);
	void __fastcall SetStoredList(System::Classes::TStrings* AList);
	void __fastcall UpdateCurrentClass(void);
	void __fastcall UpdateCurrentProp(void);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TOvcfrmPropsDlg(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TOvcfrmPropsDlg(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TOvcfrmPropsDlg(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TOvcfrmPropsDlg(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


class DELPHICLASS TOvcComponentStateEditor;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcComponentStateEditor : public Designeditors::TComponentEditor
{
	typedef Designeditors::TComponentEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TOvcComponentStateEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOvcComponentStateEditor(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TStoredPropsProperty;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TStoredPropsProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TStoredPropsProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TStoredPropsProperty(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall ShowStorageDesigner(Vcl::Controls::TWinControl* AForm, Designintf::_di_IDesigner ADesigner, System::Classes::TStrings* AStoredList);
}	/* namespace Ovcstat0 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_OVCSTAT0)
using namespace Ovcstat0;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Ovcstat0HPP
