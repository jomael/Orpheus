﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ovcxfer.pas' rev: 27.00 (Windows)

#ifndef OvcxferHPP
#define OvcxferHPP

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
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <ovcbase.hpp>	// Pascal unit
#include <ovcconst.hpp>	// Pascal unit
#include <ovcdata.hpp>	// Pascal unit
#include <ovcef.hpp>	// Pascal unit
#include <ovcrlbl.hpp>	// Pascal unit
#include <ovcedit.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ovcxfer
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TxfrStringtype : unsigned char { xfrString, xfrPChar, xfrShortString };

struct TListBoxTransfer;
typedef TListBoxTransfer *PListBoxTransfer;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TListBoxTransfer
{
public:
	int ItemIndex;
	System::Classes::TStrings* Items;
};
#pragma pack(pop)


struct TComboBoxTransfer;
typedef TComboBoxTransfer *PComboBoxTransfer;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TComboBoxTransfer
{
public:
	int ItemIndex;
	System::UnicodeString Text;
	System::Classes::TStrings* Items;
};
#pragma pack(pop)


struct TComboBoxTransfer_xfrPChar;
typedef TComboBoxTransfer_xfrPChar *PComboBoxTransfer_xfrPChar;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TComboBoxTransfer_xfrPChar
{
public:
	int ItemIndex;
	System::StaticArray<System::WideChar, 256> Text;
	System::Classes::TStrings* Items;
};
#pragma pack(pop)


struct TComboBoxTransfer_xfrShortString;
typedef TComboBoxTransfer_xfrShortString *PComboBoxTransfer_xfrShortString;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TComboBoxTransfer_xfrShortString
{
public:
	int ItemIndex;
	System::SmallString<255> Text;
	System::Classes::TStrings* Items;
};
#pragma pack(pop)


class DELPHICLASS TOvcTransfer;
class PASCALIMPLEMENTATION TOvcTransfer : public Ovcbase::TOvcComponent
{
	typedef Ovcbase::TOvcComponent inherited;
	
protected:
	System::Classes::TList* xfrList;
	System::Word __fastcall xfrGetComponentDataSize(System::Classes::TComponent* C, TxfrStringtype xfrStringtype);
	
public:
	void __fastcall GetTransferList(System::Classes::TList* L);
	System::Word __fastcall GetTransferBufferSizePrim(System::Classes::TComponent* *CNA, const int CNA_High, TxfrStringtype xfrStringtype);
	System::Word __fastcall GetTransferBufferSize(System::Classes::TComponent* *CNA, const int CNA_High);
	System::Word __fastcall GetTransferBufferSizeZ(System::Classes::TComponent* *CNA, const int CNA_High);
	System::Word __fastcall GetTransferBufferSizeS(System::Classes::TComponent* *CNA, const int CNA_High);
	void __fastcall TransferFromFormPrim(System::Classes::TComponent* *CNA, const int CNA_High, void *Data, TxfrStringtype xfrStringtype);
	void __fastcall TransferFromForm(System::Classes::TComponent* *CNA, const int CNA_High, void *Data);
	void __fastcall TransferFromFormZ(System::Classes::TComponent* *CNA, const int CNA_High, void *Data);
	void __fastcall TransferFromFormS(System::Classes::TComponent* *CNA, const int CNA_High, void *Data);
	void __fastcall TransferToFormPrim(System::Classes::TComponent* *CNA, const int CNA_High, const void *Data, TxfrStringtype xfrStringtype);
	void __fastcall TransferToForm(System::Classes::TComponent* *CNA, const int CNA_High, const void *Data);
	void __fastcall TransferToFormZ(System::Classes::TComponent* *CNA, const int CNA_High, const void *Data);
	void __fastcall TransferToFormS(System::Classes::TComponent* *CNA, const int CNA_High, const void *Data);
public:
	/* TOvcComponent.Create */ inline __fastcall virtual TOvcTransfer(System::Classes::TComponent* AOwner) : Ovcbase::TOvcComponent(AOwner) { }
	/* TOvcComponent.Destroy */ inline __fastcall virtual ~TOvcTransfer(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Byte xfrMaxPChar = System::Byte(0xff);
}	/* namespace Ovcxfer */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_OVCXFER)
using namespace Ovcxfer;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// OvcxferHPP
