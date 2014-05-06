﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'o32vlreg.pas' rev: 27.00 (Windows)

#ifndef O32vlregHPP
#define O32vlregHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <o32vldtr.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace O32vlreg
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Classes::TStrings* ValidatorList;
extern DELPHI_PACKAGE void __fastcall RegisterValidator(O32vldtr::TValidatorClass ValidatorClass);
extern DELPHI_PACKAGE void __fastcall UnRegisterValidator(O32vldtr::TValidatorClass ValidatorClass);
extern DELPHI_PACKAGE void __fastcall GetRegisteredValidators(System::Classes::TStrings* aList);
}	/* namespace O32vlreg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_O32VLREG)
using namespace O32vlreg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// O32vlregHPP
