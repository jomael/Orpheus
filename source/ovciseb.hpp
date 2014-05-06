﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ovciseb.pas' rev: 27.00 (Windows)

#ifndef OvcisebHPP
#define OvcisebHPP

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
#include <ovcbase.hpp>	// Pascal unit
#include <ovceditf.hpp>	// Pascal unit
#include <ovcbordr.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ovciseb
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TOvcBaseISE;
class PASCALIMPLEMENTATION TOvcBaseISE : public Ovceditf::TOvcCustomEdit
{
	typedef Ovceditf::TOvcCustomEdit inherited;
	
protected:
	bool FAutoSearch;
	Ovcbordr::TOvcBorders* FBorders;
	bool FCaseSensitive;
	int FKeyDelay;
	System::UnicodeString FPreviousText;
	bool FShowResults;
	int isTimer;
	void __fastcall SetAutoSearch(bool Value);
	void __fastcall SetKeyDelay(int Value);
	void __fastcall isTimerEvent(System::TObject* Sender, int Handle, unsigned Interval, int ElapsedTime);
	DYNAMIC void __fastcall DoExit(void);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	__property bool AutoSearch = {read=FAutoSearch, write=SetAutoSearch, nodefault};
	__property bool CaseSensitive = {read=FCaseSensitive, write=FCaseSensitive, nodefault};
	__property int KeyDelay = {read=FKeyDelay, write=SetKeyDelay, nodefault};
	__property bool ShowResults = {read=FShowResults, write=FShowResults, nodefault};
	
public:
	__fastcall virtual TOvcBaseISE(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TOvcBaseISE(void);
	__property Ovcbordr::TOvcBorders* Borders = {read=FBorders, write=FBorders};
	__property System::UnicodeString PreviousText = {read=FPreviousText, write=FPreviousText};
	System::UnicodeString __fastcall ISUpperCase(const System::UnicodeString S);
	virtual void __fastcall PerformSearch(void) = 0 ;
public:
	/* TWinControl.CreateParented */ inline __fastcall TOvcBaseISE(HWND ParentWindow) : Ovceditf::TOvcCustomEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Ovciseb */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_OVCISEB)
using namespace Ovciseb;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// OvcisebHPP
