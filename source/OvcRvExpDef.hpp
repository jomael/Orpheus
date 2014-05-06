﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ovcrvexpdef.pas' rev: 27.00 (Windows)

#ifndef OvcrvexpdefHPP
#define OvcrvexpdefHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Variants.hpp>	// Pascal unit
#include <ovcrvidx.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ovcrvexpdef
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TOvcRvExpNode;
typedef void __fastcall (__closure *TOvcRvExpEnumMethod)(TOvcRvExpNode* Node);

enum DECLSPEC_DENUM TOvcRvExpRelOp : unsigned char { roNone, roEQ, roLE, roL, roG, roGE, roNE };

class DELPHICLASS TOvcRvExpression;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpNode : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TOvcRvExpNode* FParent;
	TOvcRvExpression* FOwner;
	virtual void __fastcall AddAggregate(System::Classes::TList* Target);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	TOvcRvExpression* __fastcall GetOwner(void);
	void __fastcall SQLError(const System::UnicodeString ErrorMsg);
	void __fastcall AssignError(TOvcRvExpNode* Source);
	void __fastcall TypeMismatch(void);
	virtual Ovcrvidx::TOvcAbstractRvField* __fastcall BindField(const System::UnicodeString FieldName);
	virtual bool __fastcall IsAggregate(void);
	
public:
	__fastcall TOvcRvExpNode(TOvcRvExpNode* AParent);
	__property TOvcRvExpNode* Parent = {read=FParent};
	__property TOvcRvExpression* Owner = {read=GetOwner};
	virtual void __fastcall Assign(TOvcRvExpNode* const Source) = 0 ;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOvcRvExpNode(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TOvcRvExpFieldRef;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpFieldRef : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	System::UnicodeString FFieldName;
	bool TypeKnown;
	Ovcrvidx::TOvcDRDataType FType;
	Ovcrvidx::TOvcAbstractRvField* FField;
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	void __fastcall CheckType(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	Ovcrvidx::TOvcAbstractRvField* __fastcall GetField(void);
	bool __fastcall RefersTo(Ovcrvidx::TOvcAbstractRvField* AField);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__property System::UnicodeString FieldName = {read=FFieldName, write=FFieldName};
	System::Variant __fastcall GetValue(void * Data);
	__property Ovcrvidx::TOvcAbstractRvField* Field = {read=GetField};
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpFieldRef(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOvcRvExpFieldRef(void) { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TOvcRvExpAggFunction : unsigned char { agCount, agMin, agMax, agSum, agAvg };

class DELPHICLASS TOvcRvExpAggregate;
class DELPHICLASS TOvcRvExpSimpleExpression;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpAggregate : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	TOvcRvExpAggFunction FAgFunction;
	TOvcRvExpSimpleExpression* FSimpleExpression;
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	virtual void __fastcall AddAggregate(System::Classes::TList* Target);
	bool __fastcall Reduce(void);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall virtual ~TOvcRvExpAggregate(void);
	__property TOvcRvExpAggFunction AgFunction = {read=FAgFunction, write=FAgFunction, nodefault};
	__property TOvcRvExpSimpleExpression* SimpleExpression = {read=FSimpleExpression, write=FSimpleExpression};
	System::Variant __fastcall GetValue(void * Data);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpAggregate(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
};

#pragma pack(pop)

class DELPHICLASS TOvcRvExpColumn;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpColumn : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	System::UnicodeString FColumnName;
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__property System::UnicodeString ColumnName = {read=FColumnName, write=FColumnName};
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpColumn(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOvcRvExpColumn(void) { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TOvcRvExpIsOp : unsigned char { ioNull, ioTrue, ioFalse, ioUnknown };

class DELPHICLASS TOvcRvExpIsTest;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpIsTest : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	bool FUnaryNot;
	TOvcRvExpIsOp FIsOp;
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__property bool UnaryNot = {read=FUnaryNot, write=FUnaryNot, nodefault};
	__property TOvcRvExpIsOp IsOp = {read=FIsOp, write=FIsOp, nodefault};
	bool __fastcall AsBoolean(const System::Variant &TestValue);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpIsTest(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOvcRvExpIsTest(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TOvcRvExpBetweenClause;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpBetweenClause : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	TOvcRvExpSimpleExpression* FSimpleHigh;
	TOvcRvExpSimpleExpression* FSimpleLow;
	bool FNegated;
	bool FIsConstant;
	bool FIsConstantChecked;
	void __fastcall CheckIsConstant(void);
	bool __fastcall IsConstant(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	bool __fastcall Reduce(void);
	bool __fastcall RefersTo(Ovcrvidx::TOvcAbstractRvField* AField);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall virtual ~TOvcRvExpBetweenClause(void);
	__property bool Negated = {read=FNegated, write=FNegated, nodefault};
	__property TOvcRvExpSimpleExpression* SimpleLow = {read=FSimpleLow, write=FSimpleLow};
	__property TOvcRvExpSimpleExpression* SimpleHigh = {read=FSimpleHigh, write=FSimpleHigh};
	bool __fastcall AsBoolean(void * Data, const System::Variant &TestValue);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpBetweenClause(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
};

#pragma pack(pop)

class DELPHICLASS TOvcRvExpLikePattern;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpLikePattern : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString LeadPattern;
	System::UnicodeString TrailPattern;
	System::UnicodeString LeadMask;
	System::UnicodeString TrailMask;
	System::Classes::TStringList* FloatPatterns;
	System::Classes::TStringList* FloatMasks;
	
public:
	__fastcall TOvcRvExpLikePattern(System::UnicodeString SearchPattern, const System::UnicodeString Escape);
	__fastcall virtual ~TOvcRvExpLikePattern(void);
	bool __fastcall Find(const System::UnicodeString TextToSearch);
};

#pragma pack(pop)

class DELPHICLASS TOvcRvExpLikeClause;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpLikeClause : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	TOvcRvExpSimpleExpression* FSimpleExp;
	TOvcRvExpSimpleExpression* FEscapeExp;
	bool FNegated;
	bool FIsConstant;
	bool FIsConstantChecked;
	bool Limited;
	TOvcRvExpLikePattern* LikePattern;
	bool __fastcall CanLimit(void);
	bool __fastcall CanReplaceWithCompare(void);
	void __fastcall CheckIsConstant(void);
	System::UnicodeString __fastcall GetLowLimit(void * Data);
	System::UnicodeString __fastcall GetHighLimit(void * Data);
	bool __fastcall IsConstant(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	bool __fastcall Reduce(void);
	bool __fastcall RefersTo(Ovcrvidx::TOvcAbstractRvField* AField);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall virtual ~TOvcRvExpLikeClause(void);
	__property TOvcRvExpSimpleExpression* SimpleExp = {read=FSimpleExp, write=FSimpleExp};
	__property TOvcRvExpSimpleExpression* EscapeExp = {read=FEscapeExp, write=FEscapeExp};
	__property bool Negated = {read=FNegated, write=FNegated, nodefault};
	bool __fastcall AsBoolean(void * Data, const System::Variant &TestValue);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpLikeClause(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
};

#pragma pack(pop)

class DELPHICLASS TOvcRvExpInClause;
class DELPHICLASS TOvcRvExpSimpleExpressionList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpInClause : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	TOvcRvExpSimpleExpressionList* FSimpleExp;
	bool FNegated;
	bool FIsConstant;
	bool FIsConstantChecked;
	void __fastcall CheckIsConstant(void);
	bool __fastcall IsConstant(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	bool __fastcall Reduce(void);
	bool __fastcall RefersTo(Ovcrvidx::TOvcAbstractRvField* AField);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall virtual ~TOvcRvExpInClause(void);
	__property TOvcRvExpSimpleExpressionList* SimpleExpList = {read=FSimpleExp, write=FSimpleExp};
	__property bool Negated = {read=FNegated, write=FNegated, nodefault};
	bool __fastcall AsBoolean(void * Data, const System::Variant &TestValue);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpInClause(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
};

#pragma pack(pop)

class DELPHICLASS TOvcRvExpCondPrimary;
class PASCALIMPLEMENTATION TOvcRvExpCondPrimary : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	TOvcRvExpSimpleExpression* FSimpleExp1;
	TOvcRvExpRelOp FRelOp;
	TOvcRvExpSimpleExpression* FSimpleExp2;
	TOvcRvExpBetweenClause* FBetweenClause;
	TOvcRvExpLikeClause* FLikeClause;
	TOvcRvExpInClause* FInClause;
	TOvcRvExpIsTest* FIsTest;
	bool TypeChecked;
	bool FIsConstant;
	bool FIsConstantChecked;
	System::Variant ConstantValue;
	void __fastcall Clear(void);
	void __fastcall CheckIsConstant(void);
	bool __fastcall IsConstant(void);
	void __fastcall CheckType(void);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	bool __fastcall JustSimpleExpression(void);
	bool __fastcall Reduce(void);
	bool __fastcall RefersTo(Ovcrvidx::TOvcAbstractRvField* AField);
	
public:
	__fastcall virtual ~TOvcRvExpCondPrimary(void);
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__property TOvcRvExpSimpleExpression* SimpleExp1 = {read=FSimpleExp1, write=FSimpleExp1};
	__property TOvcRvExpRelOp RelOp = {read=FRelOp, write=FRelOp, nodefault};
	__property TOvcRvExpSimpleExpression* SimpleExp2 = {read=FSimpleExp2, write=FSimpleExp2};
	__property TOvcRvExpBetweenClause* BetweenClause = {read=FBetweenClause, write=FBetweenClause};
	__property TOvcRvExpLikeClause* LikeClause = {read=FLikeClause, write=FLikeClause};
	__property TOvcRvExpInClause* InClause = {read=FInClause, write=FInClause};
	__property TOvcRvExpIsTest* IsTest = {read=FIsTest, write=FIsTest};
	bool __fastcall AsBoolean(void * Data);
	System::Variant __fastcall GetValue(void * Data);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpCondPrimary(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
};


class DELPHICLASS TOvcRvExpCondFactor;
class PASCALIMPLEMENTATION TOvcRvExpCondFactor : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	bool FUnaryNot;
	TOvcRvExpCondPrimary* FCondPrimary;
	bool FIsConstant;
	bool FIsConstantChecked;
	System::Variant ConstantValue;
	bool TmpKnown;
	bool TmpValue;
	void __fastcall CheckIsConstant(void);
	void __fastcall Clear(void);
	bool __fastcall IsConstant(void);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	bool __fastcall Reduce(void);
	bool __fastcall RefersTo(Ovcrvidx::TOvcAbstractRvField* AField);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall virtual ~TOvcRvExpCondFactor(void);
	__property bool UnaryNot = {read=FUnaryNot, write=FUnaryNot, nodefault};
	__property TOvcRvExpCondPrimary* CondPrimary = {read=FCondPrimary, write=FCondPrimary};
	bool __fastcall AsBoolean(void * Data);
	System::Variant __fastcall GetValue(void * Data);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpCondFactor(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
};


typedef void __fastcall (__closure *TFFObjectProc)(void);

class DELPHICLASS TOvcRvExpCondTerm;
class PASCALIMPLEMENTATION TOvcRvExpCondTerm : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	System::Classes::TList* CondFactorList;
	bool FIsConstant;
	bool FIsConstantChecked;
	System::Variant ConstantValue;
	void __fastcall Clear(void);
	void __fastcall CheckIsConstant(void);
	bool __fastcall IsConstant(void);
	TOvcRvExpCondFactor* __fastcall GetCondFactor(int Index);
	void __fastcall SetCondFactor(int Index, TOvcRvExpCondFactor* const Value);
	int __fastcall GetCondFactorCount(void);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	bool __fastcall Reduce(void);
	bool __fastcall RefersTo(Ovcrvidx::TOvcAbstractRvField* AField);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall TOvcRvExpCondTerm(TOvcRvExpNode* AParent);
	__fastcall virtual ~TOvcRvExpCondTerm(void);
	TOvcRvExpCondFactor* __fastcall AddCondFactor(TOvcRvExpCondFactor* Factor);
	TOvcRvExpCondFactor* __fastcall InsertCondFactor(int Index, TOvcRvExpCondFactor* Factor);
	__property int CondFactorCount = {read=GetCondFactorCount, nodefault};
	__property TOvcRvExpCondFactor* CondFactor[int Index] = {read=GetCondFactor, write=SetCondFactor};
	bool __fastcall AsBoolean(void * Data);
	System::Variant __fastcall GetValue(void * Data);
};


class PASCALIMPLEMENTATION TOvcRvExpression : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	System::Classes::TList* CondTermList;
	bool FIsConstant;
	bool FIsConstantChecked;
	System::Variant ConstantValue;
	Ovcrvidx::TOvcAbstractReportView* FOwnerReport;
	void __fastcall Clear(void);
	void __fastcall CheckIsConstant(void);
	bool __fastcall IsConstant(void);
	TOvcRvExpCondTerm* __fastcall GetCondTerm(int Index);
	void __fastcall SetCondTerm(int Index, TOvcRvExpCondTerm* const Value);
	int __fastcall GetCondTermCount(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	virtual Ovcrvidx::TOvcAbstractRvField* __fastcall BindField(const System::UnicodeString FieldName);
	Ovcrvidx::TOvcAbstractReportView* __fastcall GetOwnerReport(void);
	
public:
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	bool __fastcall Reduce(void);
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall TOvcRvExpression(TOvcRvExpNode* AParent);
	__fastcall virtual ~TOvcRvExpression(void);
	TOvcRvExpCondTerm* __fastcall AddCondTerm(TOvcRvExpCondTerm* Term);
	__property int CondTermCount = {read=GetCondTermCount, nodefault};
	__property TOvcRvExpCondTerm* CondTerm[int Index] = {read=GetCondTerm, write=SetCondTerm};
	bool __fastcall AsBoolean(void * Data);
	System::Variant __fastcall GetValue(void * Data);
	__property Ovcrvidx::TOvcAbstractReportView* OwnerReport = {read=GetOwnerReport, write=FOwnerReport};
	bool __fastcall RefersTo(Ovcrvidx::TOvcAbstractRvField* AField);
};


class DELPHICLASS TOvcRvExpressionList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpressionList : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	System::Classes::TList* FExpressionList;
	bool FIsConstant;
	bool FIsConstantChecked;
	void __fastcall CheckIsConstant(void);
	void __fastcall Clear(void);
	bool __fastcall IsConstant(void);
	TOvcRvExpression* __fastcall GetExpression(int Index);
	int __fastcall GetExpressionCount(void);
	void __fastcall SetExpression(int Index, TOvcRvExpression* const Value);
	bool __fastcall Reduce(void);
	bool __fastcall RefersTo(Ovcrvidx::TOvcAbstractRvField* AField);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	
public:
	System::Variant __fastcall GetValue(void * Data);
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall TOvcRvExpressionList(TOvcRvExpNode* AParent);
	__fastcall virtual ~TOvcRvExpressionList(void);
	TOvcRvExpression* __fastcall AddExpression(TOvcRvExpression* Expression);
	__property int ExpressionCount = {read=GetExpressionCount, nodefault};
	__property TOvcRvExpression* Expression[int Index] = {read=GetExpression, write=SetExpression};
};

#pragma pack(pop)

class DELPHICLASS TOvcRvExpFloatLiteral;
class PASCALIMPLEMENTATION TOvcRvExpFloatLiteral : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	System::UnicodeString FValue;
	double DoubleValue;
	bool Converted;
	void __fastcall ConvertToNative(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__property System::UnicodeString Value = {read=FValue, write=FValue};
	System::Variant __fastcall GetValue(void);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpFloatLiteral(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOvcRvExpFloatLiteral(void) { }
	
};


class DELPHICLASS TOvcRvExpIntegerLiteral;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpIntegerLiteral : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	System::UnicodeString FValue;
	int Int32Value;
	bool Converted;
	void __fastcall ConvertToNative(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__property System::UnicodeString Value = {read=FValue, write=FValue};
	System::Variant __fastcall GetValue(void);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpIntegerLiteral(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOvcRvExpIntegerLiteral(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TOvcRvExpStringLiteral;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpStringLiteral : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	System::UnicodeString FValue;
	Ovcrvidx::TOvcDRDataType FType;
	bool Converted;
	System::UnicodeString ShortStringValue;
	void __fastcall ConvertToNative(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall TOvcRvExpStringLiteral(TOvcRvExpNode* AParent);
	__property System::UnicodeString Value = {read=FValue, write=FValue};
	System::Variant __fastcall GetValue(void);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOvcRvExpStringLiteral(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TOvcRvExpTimestampLiteral;
class PASCALIMPLEMENTATION TOvcRvExpTimestampLiteral : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	System::UnicodeString FValue;
	System::TDateTime DateTimeValue;
	bool Converted;
	void __fastcall ConvertToNative(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__property System::UnicodeString Value = {read=FValue, write=FValue};
	System::Variant __fastcall GetValue(void);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpTimestampLiteral(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOvcRvExpTimestampLiteral(void) { }
	
};


class DELPHICLASS TOvcRvExpTimeLiteral;
class PASCALIMPLEMENTATION TOvcRvExpTimeLiteral : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	System::UnicodeString FValue;
	System::TDateTime TimeValue;
	bool Converted;
	void __fastcall ConvertToNative(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__property System::UnicodeString Value = {read=FValue, write=FValue};
	System::Variant __fastcall GetValue(void);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpTimeLiteral(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOvcRvExpTimeLiteral(void) { }
	
};


class DELPHICLASS TOvcRvExpDateLiteral;
class PASCALIMPLEMENTATION TOvcRvExpDateLiteral : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	System::UnicodeString FValue;
	System::TDateTime DateValue;
	bool Converted;
	void __fastcall ConvertToNative(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__property System::UnicodeString Value = {read=FValue, write=FValue};
	System::Variant __fastcall GetValue(void);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpDateLiteral(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOvcRvExpDateLiteral(void) { }
	
};


class DELPHICLASS TOvcRvExpBooleanLiteral;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpBooleanLiteral : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	bool FValue;
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__property bool Value = {read=FValue, write=FValue, nodefault};
	bool __fastcall GetValue(void);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpBooleanLiteral(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOvcRvExpBooleanLiteral(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TOvcRvExpLiteral;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpLiteral : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	TOvcRvExpFloatLiteral* FFloatLiteral;
	TOvcRvExpIntegerLiteral* FIntegerLiteral;
	TOvcRvExpStringLiteral* FStringLiteral;
	TOvcRvExpDateLiteral* FDateLiteral;
	TOvcRvExpTimeLiteral* FTimeLiteral;
	TOvcRvExpTimestampLiteral* FTimeStampLiteral;
	TOvcRvExpBooleanLiteral* FBooleanLiteral;
	void __fastcall Clear(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall virtual ~TOvcRvExpLiteral(void);
	__property TOvcRvExpBooleanLiteral* BooleanLiteral = {read=FBooleanLiteral, write=FBooleanLiteral};
	__property TOvcRvExpFloatLiteral* FloatLiteral = {read=FFloatLiteral, write=FFloatLiteral};
	__property TOvcRvExpIntegerLiteral* IntegerLiteral = {read=FIntegerLiteral, write=FIntegerLiteral};
	__property TOvcRvExpStringLiteral* StringLiteral = {read=FStringLiteral, write=FStringLiteral};
	__property TOvcRvExpDateLiteral* DateLiteral = {read=FDateLiteral, write=FDateLiteral};
	__property TOvcRvExpTimeLiteral* TimeLiteral = {read=FTimeLiteral, write=FTimeLiteral};
	__property TOvcRvExpTimestampLiteral* TimeStampLiteral = {read=FTimeStampLiteral, write=FTimeStampLiteral};
	System::Variant __fastcall GetValue(void);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpLiteral(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
};

#pragma pack(pop)

class DELPHICLASS TOvcRvExpWhenClause;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpWhenClause : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	TOvcRvExpression* FWhenExp;
	TOvcRvExpSimpleExpression* FThenExp;
	bool FIsConstant;
	bool FIsConstantChecked;
	void __fastcall CheckIsConstant(void);
	bool __fastcall IsConstant(void);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall virtual ~TOvcRvExpWhenClause(void);
	__property TOvcRvExpression* WhenExp = {read=FWhenExp, write=FWhenExp};
	__property TOvcRvExpSimpleExpression* ThenExp = {read=FThenExp, write=FThenExp};
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpWhenClause(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
};

#pragma pack(pop)

class DELPHICLASS TOvcRvExpWhenClauseList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpWhenClauseList : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	System::Classes::TList* WhenClauseList;
	bool FIsConstant;
	bool FIsConstantChecked;
	void __fastcall Clear(void);
	void __fastcall CheckIsConstant(void);
	bool __fastcall IsConstant(void);
	TOvcRvExpWhenClause* __fastcall GetWhenClause(int Index);
	int __fastcall GetWhenClauseCount(void);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall TOvcRvExpWhenClauseList(TOvcRvExpNode* AParent);
	__fastcall virtual ~TOvcRvExpWhenClauseList(void);
	__property int WhenClauseCount = {read=GetWhenClauseCount, nodefault};
	__property TOvcRvExpWhenClause* WhenClause[int Index] = {read=GetWhenClause};
	TOvcRvExpWhenClause* __fastcall AddWhenClause(TOvcRvExpWhenClause* Value);
};

#pragma pack(pop)

class DELPHICLASS TOvcRvExpCaseExpression;
class PASCALIMPLEMENTATION TOvcRvExpCaseExpression : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	TOvcRvExpWhenClauseList* FWhenClauseList;
	TOvcRvExpSimpleExpression* FElseExp;
	bool FIsConstant;
	bool FIsConstantChecked;
	System::Variant ConstantValue;
	void __fastcall CheckIsConstant(void);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	bool __fastcall IsConstant(void);
	bool __fastcall Reduce(void);
	bool __fastcall RefersTo(Ovcrvidx::TOvcAbstractRvField* AField);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall virtual ~TOvcRvExpCaseExpression(void);
	__property TOvcRvExpWhenClauseList* WhenClauseList = {read=FWhenClauseList, write=FWhenClauseList};
	__property TOvcRvExpSimpleExpression* ElseExp = {read=FElseExp, write=FElseExp};
	System::Variant __fastcall GetValue(void * Data);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpCaseExpression(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
};


enum DECLSPEC_DENUM TOvcRvExpScalarFunction : unsigned char { sfCase, sfCharlen, sfLower, sfUpper, sfPosition, sfSubstring, sfTrim, sfFormatFloat, sfFormatDateTime, sfIntToHex, sfExtern };

enum DECLSPEC_DENUM TOvcRvExpLTB : unsigned char { ltbBoth, ltbLeading, ltbTrailing };

class DELPHICLASS TOvcRvExpScalarFunc;
class PASCALIMPLEMENTATION TOvcRvExpScalarFunc : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	TOvcRvExpScalarFunction FSQLFunction;
	TOvcRvExpSimpleExpression* FArg1;
	TOvcRvExpSimpleExpression* FArg2;
	TOvcRvExpSimpleExpression* FArg3;
	TOvcRvExpressionList* FExpList;
	TOvcRvExpression* FCondArg1;
	TOvcRvExpLTB FLTB;
	TOvcRvExpCaseExpression* FCaseExp;
	bool FIsConstant;
	bool FIsConstantChecked;
	Ovcrvidx::TOvcDRDataType FType;
	bool TypeKnown;
	System::Variant ConstantValue;
	void __fastcall Clear(void);
	void __fastcall CheckIsConstant(void);
	bool __fastcall IsConstant(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	void __fastcall CheckType(void);
	bool __fastcall Reduce(void);
	bool __fastcall RefersTo(Ovcrvidx::TOvcAbstractRvField* AField);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall virtual ~TOvcRvExpScalarFunc(void);
	__property TOvcRvExpScalarFunction SQLFunction = {read=FSQLFunction, write=FSQLFunction, nodefault};
	__property TOvcRvExpSimpleExpression* Arg1 = {read=FArg1, write=FArg1};
	__property TOvcRvExpSimpleExpression* Arg2 = {read=FArg2, write=FArg2};
	__property TOvcRvExpSimpleExpression* Arg3 = {read=FArg3, write=FArg3};
	__property TOvcRvExpression* CondArg1 = {read=FCondArg1, write=FCondArg1};
	__property TOvcRvExpressionList* ExpList = {read=FExpList, write=FExpList};
	__property TOvcRvExpLTB LTB = {read=FLTB, write=FLTB, nodefault};
	__property TOvcRvExpCaseExpression* CaseExp = {read=FCaseExp, write=FCaseExp};
	System::Variant __fastcall GetValue(void * Data);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpScalarFunc(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
};


enum DECLSPEC_DENUM TOvcRvExpMulOp : unsigned char { moMul, moDiv };

class DELPHICLASS TOvcRvExpFactor;
class PASCALIMPLEMENTATION TOvcRvExpFactor : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	bool TypeKnown;
	Ovcrvidx::TOvcDRDataType FType;
	TOvcRvExpMulOp FMulOp;
	bool FUnaryMinus;
	TOvcRvExpression* FCondExp;
	TOvcRvExpFieldRef* FFieldRef;
	TOvcRvExpLiteral* FLiteral;
	TOvcRvExpAggregate* FAggregate;
	TOvcRvExpScalarFunc* FScalarFunc;
	bool FIsConstant;
	bool FIsConstantChecked;
	System::Variant ConstantValue;
	void __fastcall Clear(void);
	void __fastcall CheckIsConstant(void);
	bool __fastcall IsConstant(void);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	void __fastcall CheckType(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	virtual bool __fastcall IsAggregate(void);
	bool __fastcall Reduce(void);
	bool __fastcall RefersTo(Ovcrvidx::TOvcAbstractRvField* AField);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall virtual ~TOvcRvExpFactor(void);
	__property TOvcRvExpMulOp MulOp = {read=FMulOp, write=FMulOp, nodefault};
	__property bool UnaryMinus = {read=FUnaryMinus, write=FUnaryMinus, nodefault};
	__property TOvcRvExpression* CondExp = {read=FCondExp, write=FCondExp};
	__property TOvcRvExpFieldRef* FieldRef = {read=FFieldRef, write=FFieldRef};
	__property TOvcRvExpLiteral* Literal = {read=FLiteral, write=FLiteral};
	__property TOvcRvExpAggregate* Aggregate = {read=FAggregate, write=FAggregate};
	__property TOvcRvExpScalarFunc* ScalarFunc = {read=FScalarFunc, write=FScalarFunc};
	System::Variant __fastcall GetValue(void * Data);
public:
	/* TOvcRvExpNode.Create */ inline __fastcall TOvcRvExpFactor(TOvcRvExpNode* AParent) : TOvcRvExpNode(AParent) { }
	
};


enum DECLSPEC_DENUM TOvcRvExpAddOp : unsigned char { aoPlus, aoMinus, aoConcat };

class DELPHICLASS TOvcRvExpTerm;
class PASCALIMPLEMENTATION TOvcRvExpTerm : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	bool TypeKnown;
	Ovcrvidx::TOvcDRDataType FType;
	TOvcRvExpAddOp FAddOp;
	System::Classes::TList* FactorList;
	bool FIsConstantChecked;
	bool FIsConstant;
	System::Variant ConstantValue;
	void __fastcall Clear(void);
	void __fastcall CheckIsConstant(void);
	bool __fastcall IsConstant(void);
	TOvcRvExpFactor* __fastcall GetFactor(int Index);
	void __fastcall SetFactor(int Index, TOvcRvExpFactor* const Value);
	int __fastcall GetFactorCount(void);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	void __fastcall CheckType(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	virtual bool __fastcall IsAggregate(void);
	bool __fastcall Reduce(void);
	bool __fastcall RefersTo(Ovcrvidx::TOvcAbstractRvField* AField);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall TOvcRvExpTerm(TOvcRvExpNode* AParent);
	__fastcall virtual ~TOvcRvExpTerm(void);
	TOvcRvExpFactor* __fastcall AddFactor(TOvcRvExpFactor* Factor);
	__property int FactorCount = {read=GetFactorCount, nodefault};
	__property TOvcRvExpFactor* Factor[int Index] = {read=GetFactor, write=SetFactor};
	__property TOvcRvExpAddOp AddOp = {read=FAddOp, write=FAddOp, nodefault};
	System::Variant __fastcall GetValue(void * Data);
	bool __fastcall IsAggregateExpression(void);
};


class PASCALIMPLEMENTATION TOvcRvExpSimpleExpression : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	bool TypeKnown;
	Ovcrvidx::TOvcDRDataType FType;
	bool FIsConstant;
	bool FIsConstantChecked;
	System::Variant ConstantValue;
	void __fastcall Clear(void);
	TOvcRvExpTerm* __fastcall GetTerm(int Index);
	void __fastcall SetTerm(int Index, TOvcRvExpTerm* const Value);
	int __fastcall GetTermCount(void);
	virtual Ovcrvidx::TOvcDRDataType __fastcall GetType(void);
	void __fastcall CheckType(void);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	virtual bool __fastcall IsAggregate(void);
	bool __fastcall IsConstant(void);
	void __fastcall CheckIsConstant(void);
	bool __fastcall Reduce(void);
	bool __fastcall RefersTo(Ovcrvidx::TOvcAbstractRvField* AField);
	System::Classes::TList* TermList;
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall TOvcRvExpSimpleExpression(TOvcRvExpNode* AParent);
	__fastcall virtual ~TOvcRvExpSimpleExpression(void);
	TOvcRvExpTerm* __fastcall AddTerm(TOvcRvExpTerm* Term);
	__property int TermCount = {read=GetTermCount, nodefault};
	__property TOvcRvExpTerm* Term[int Index] = {read=GetTerm, write=SetTerm};
	System::Variant __fastcall GetValue(void * Data);
	bool __fastcall IsAggregateExpression(void);
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TOvcRvExpSimpleExpressionList : public TOvcRvExpNode
{
	typedef TOvcRvExpNode inherited;
	
private:
	System::Classes::TList* FExpressionList;
	bool FIsConstant;
	bool FIsConstantChecked;
	void __fastcall CheckIsConstant(void);
	void __fastcall Clear(void);
	bool __fastcall IsConstant(void);
	TOvcRvExpSimpleExpression* __fastcall GetExpression(int Index);
	int __fastcall GetExpressionCount(void);
	void __fastcall SetExpression(int Index, TOvcRvExpSimpleExpression* const Value);
	void __fastcall MatchType(Ovcrvidx::TOvcDRDataType ExpectedType);
	bool __fastcall Contains(void * Data, const System::Variant &TestValue);
	bool __fastcall Reduce(void);
	bool __fastcall RefersTo(Ovcrvidx::TOvcAbstractRvField* AField);
	
public:
	virtual void __fastcall Assign(TOvcRvExpNode* const Source);
	__fastcall TOvcRvExpSimpleExpressionList(TOvcRvExpNode* AParent);
	__fastcall virtual ~TOvcRvExpSimpleExpressionList(void);
	TOvcRvExpSimpleExpression* __fastcall AddExpression(TOvcRvExpSimpleExpression* Expression);
	__property int ExpressionCount = {read=GetExpressionCount, nodefault};
	__property TOvcRvExpSimpleExpression* Expression[int Index] = {read=GetExpression, write=SetExpression};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Ovcrvexpdef */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_OVCRVEXPDEF)
using namespace Ovcrvexpdef;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// OvcrvexpdefHPP
