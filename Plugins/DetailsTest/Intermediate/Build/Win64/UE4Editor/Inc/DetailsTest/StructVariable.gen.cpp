// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DetailsTest/Public/StructVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructVariable() {}
// Cross Module References
	DETAILSTEST_API UScriptStruct* Z_Construct_UScriptStruct_FStructVariable();
	UPackage* Z_Construct_UPackage__Script_DetailsTest();
// End Cross Module References
class UScriptStruct* FStructVariable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DETAILSTEST_API uint32 Get_Z_Construct_UScriptStruct_FStructVariable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructVariable, Z_Construct_UPackage__Script_DetailsTest(), TEXT("StructVariable"), sizeof(FStructVariable), Get_Z_Construct_UScriptStruct_FStructVariable_Hash());
	}
	return Singleton;
}
template<> DETAILSTEST_API UScriptStruct* StaticStruct<FStructVariable>()
{
	return FStructVariable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructVariable(FStructVariable::StaticStruct, TEXT("/Script/DetailsTest"), TEXT("StructVariable"), false, nullptr, nullptr);
static struct FScriptStruct_DetailsTest_StaticRegisterNativesFStructVariable
{
	FScriptStruct_DetailsTest_StaticRegisterNativesFStructVariable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructVariable")),new UScriptStruct::TCppStructOps<FStructVariable>);
	}
} ScriptStruct_DetailsTest_StaticRegisterNativesFStructVariable;
	struct Z_Construct_UScriptStruct_FStructVariable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Testvalue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Testvalue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructVariable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructVariable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariable_Statics::NewProp_Testvalue_MetaData[] = {
		{ "Category", "Struct Value" },
		{ "ModuleRelativePath", "Public/StructVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructVariable_Statics::NewProp_Testvalue = { "Testvalue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructVariable, Testvalue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariable_Statics::NewProp_Testvalue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariable_Statics::NewProp_Testvalue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariable_Statics::NewProp_Testvalue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DetailsTest,
		nullptr,
		&NewStructOps,
		"StructVariable",
		sizeof(FStructVariable),
		alignof(FStructVariable),
		Z_Construct_UScriptStruct_FStructVariable_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariable_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructVariable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructVariable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DetailsTest();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructVariable"), sizeof(FStructVariable), Get_Z_Construct_UScriptStruct_FStructVariable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructVariable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructVariable_Hash() { return 2163158830U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
