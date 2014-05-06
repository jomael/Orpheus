﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ovctcnum.pas' rev: 27.00 (Windows)

#ifndef OvctcnumHPP
#define OvctcnumHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <ovcef.hpp>	// Pascal unit
#include <ovcnf.hpp>	// Pascal unit
#include <ovctcmmn.hpp>	// Pascal unit
#include <ovctcell.hpp>	// Pascal unit
#include <ovctcbef.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <ovctcstr.hpp>	// Pascal unit
#include <ovcpb.hpp>	// Pascal unit
#include <ovcbase.hpp>	// Pascal unit
#include <ovccaret.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <ovccmd.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ovctcnum
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TOvcTCNumericFieldEdit;
class PASCALIMPLEMENTATION TOvcTCNumericFieldEdit : public Ovcnf::TOvcNumericField
{
	typedef Ovcnf::TOvcNumericField inherited;
	
protected:
	Ovctcell::TOvcBaseTableCell* FCell;
	DYNAMIC void __fastcall efMoveFocusToNextField(void);
	DYNAMIC void __fastcall efMoveFocusToPrevField(void);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	
public:
	__property Ovctcell::TOvcBaseTableCell* CellOwner = {read=FCell, write=FCell};
public:
	/* TOvcCustomNumericField.Create */ inline __fastcall virtual TOvcTCNumericFieldEdit(System::Classes::TComponent* AOwner) : Ovcnf::TOvcNumericField(AOwner) { }
	
public:
	/* TOvcBaseEntryField.Destroy */ inline __fastcall virtual ~TOvcTCNumericFieldEdit(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TOvcTCNumericFieldEdit(HWND ParentWindow) : Ovcnf::TOvcNumericField(ParentWindow) { }
	
};


class DELPHICLASS TOvcTCCustomNumericField;
class PASCALIMPLEMENTATION TOvcTCCustomNumericField : public Ovctcbef::TOvcTCBaseEntryField
{
	typedef Ovctcbef::TOvcTCBaseEntryField inherited;
	
protected:
	virtual Vcl::Controls::TControl* __fastcall GetCellEditor(void);
	Ovcnf::TNumericDataType __fastcall GetDataType(void);
	System::UnicodeString __fastcall GetPictureMask(void);
	void __fastcall SetDataType(Ovcnf::TNumericDataType DT);
	void __fastcall SetPictureMask(const System::UnicodeString PM);
	__property Ovcnf::TNumericDataType DataType = {read=GetDataType, write=SetDataType, nodefault};
	__property System::UnicodeString PictureMask = {read=GetPictureMask, write=SetPictureMask};
	
public:
	virtual Ovcef::TOvcBaseEntryField* __fastcall CreateEntryField(System::Classes::TComponent* AOwner);
public:
	/* TOvcTCBaseEntryField.Create */ inline __fastcall virtual TOvcTCCustomNumericField(System::Classes::TComponent* AOwner) : Ovctcbef::TOvcTCBaseEntryField(AOwner) { }
	
public:
	/* TOvcBaseTableCell.Destroy */ inline __fastcall virtual ~TOvcTCCustomNumericField(void) { }
	
};


class DELPHICLASS TOvcTCNumericField;
class PASCALIMPLEMENTATION TOvcTCNumericField : public TOvcTCCustomNumericField
{
	typedef TOvcTCCustomNumericField inherited;
	
__published:
	__property Access = {default=0};
	__property Adjust = {default=0};
	__property CaretIns;
	__property Color;
	__property DataType = {default=0};
	__property EFColors;
	__property Font;
	__property Hint = {default=0};
	__property Margin = {default=4};
	__property Options = {default=0};
	__property PadChar = {default=32};
	__property PictureMask = {default=0};
	__property RangeHi = {stored=false, default=0};
	__property RangeLo = {stored=false, default=0};
	__property ShowHint = {default=0};
	__property Table;
	__property TableColor = {default=1};
	__property TableFont = {default=1};
	__property TextMargin = {default=2};
	__property TextHiColor = {default=-16777196};
	__property TextStyle = {default=0};
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnError;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnOwnerDraw;
	__property OnUserCommand;
	__property OnUserValidation;
public:
	/* TOvcTCBaseEntryField.Create */ inline __fastcall virtual TOvcTCNumericField(System::Classes::TComponent* AOwner) : TOvcTCCustomNumericField(AOwner) { }
	
public:
	/* TOvcBaseTableCell.Destroy */ inline __fastcall virtual ~TOvcTCNumericField(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Ovctcnum */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_OVCTCNUM)
using namespace Ovctcnum;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// OvctcnumHPP
