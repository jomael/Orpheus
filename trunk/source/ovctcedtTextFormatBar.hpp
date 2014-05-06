﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ovctcedtTextFormatBar.pas' rev: 27.00 (Windows)

#ifndef OvctcedttextformatbarHPP
#define OvctcedttextformatbarHPP

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
#include <System.Variants.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.Dialogs.hpp>	// Pascal unit
#include <ovcbase.hpp>	// Pascal unit
#include <ovcspeed.hpp>	// Pascal unit
#include <Vcl.ComCtrls.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <Vcl.Buttons.hpp>	// Pascal unit
#include <Vcl.AppEvnts.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ovctcedttextformatbar
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TSubClassMessageEvent)(const Winapi::Messages::TMessage &Msg);

class DELPHICLASS TFormSubClasser;
class PASCALIMPLEMENTATION TFormSubClasser : public Vcl::Controls::TControl
{
	typedef Vcl::Controls::TControl inherited;
	
private:
	Vcl::Forms::TCustomForm* FForm;
	TSubClassMessageEvent FOnMessage;
	void __fastcall RevertParentWindowProc(void);
	static NativeInt __stdcall SubClassWindowProc(HWND hWnd, unsigned uMsg, NativeUInt wParam, NativeInt lParam, NativeUInt uIdSubclass, NativeUInt dwRefData);
	void __fastcall SetOnMessage(const TSubClassMessageEvent Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall DoMessage(Winapi::Messages::TMessage &Msg);
	
public:
	__fastcall virtual ~TFormSubClasser(void);
	void __fastcall SetForm(Vcl::Forms::TCustomForm* AForm);
	__property TSubClassMessageEvent OnMessage = {read=FOnMessage, write=SetOnMessage};
public:
	/* TControl.Create */ inline __fastcall virtual TFormSubClasser(System::Classes::TComponent* AOwner) : Vcl::Controls::TControl(AOwner) { }
	
};


class DELPHICLASS TOvcTextFormatBar;
class PASCALIMPLEMENTATION TOvcTextFormatBar : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Extctrls::TTimer* Timer1;
	Vcl::Buttons::TSpeedButton* btnBold;
	Vcl::Buttons::TSpeedButton* btnItalic;
	Vcl::Buttons::TSpeedButton* btnUnderline;
	void __fastcall Timer1Timer(System::TObject* Sender);
	void __fastcall btnBoldClick(System::TObject* Sender);
	void __fastcall btnItalicClick(System::TObject* Sender);
	void __fastcall btnUnderlineClick(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormPaint(System::TObject* Sender);
	
private:
	System::Uitypes::TFontStyles FAllowedFontStyles;
	TFormSubClasser* FFormSubClasser;
	Vcl::Controls::TWinControl* FAttachedControl;
	void __fastcall SetAllowedFontStyles(const System::Uitypes::TFontStyles Value);
	void __fastcall SetPopupParent(Vcl::Forms::TCustomForm* const Value);
	Vcl::Forms::TCustomForm* __fastcall GetPopupParent(void);
	void __fastcall FormMessage(const Winapi::Messages::TMessage &Msg);
	void __fastcall SetAttachedControl(Vcl::Controls::TWinControl* const Value);
	
protected:
	HIDESBASE MESSAGE void __fastcall WMMouseActivate(Winapi::Messages::TWMMouseActivate &Message);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual ~TOvcTextFormatBar(void);
	__property System::Uitypes::TFontStyles AllowedFontStyles = {read=FAllowedFontStyles, write=SetAllowedFontStyles, default=7};
	void __fastcall UpdatePosition(void);
	__property Vcl::Forms::TCustomForm* PopupParent = {read=GetPopupParent, write=SetPopupParent};
	__property Vcl::Controls::TWinControl* AttachedControl = {read=FAttachedControl, write=SetAttachedControl};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TOvcTextFormatBar(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TOvcTextFormatBar(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TOvcTextFormatBar(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Ovctcedttextformatbar */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_OVCTCEDTTEXTFORMATBAR)
using namespace Ovctcedttextformatbar;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// OvctcedttextformatbarHPP
