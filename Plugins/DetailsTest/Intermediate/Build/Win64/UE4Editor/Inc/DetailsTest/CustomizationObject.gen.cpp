// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DetailsTest/Public/CustomizationObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizationObject() {}
// Cross Module References
	DETAILSTEST_API UClass* Z_Construct_UClass_UCustomizationObject_NoRegister();
	DETAILSTEST_API UClass* Z_Construct_UClass_UCustomizationObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DetailsTest();
	DETAILSTEST_API UScriptStruct* Z_Construct_UScriptStruct_FStructVariable();
// End Cross Module References
	void UCustomizationObject::StaticRegisterNativesUCustomizationObject()
	{
	}
	UClass* Z_Construct_UClass_UCustomizationObject_NoRegister()
	{
		return UCustomizationObject::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizationObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizationObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DetailsTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CustomizationObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CustomizationObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationObject_Statics::NewProp_Hle_MetaData[] = {
		{ "Category", "Hell" },
		{ "ModuleRelativePath", "Public/CustomizationObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizationObject_Statics::NewProp_Hle = { UE4CodeGen_Private::EPropertyClass::Struct, "Hle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCustomizationObject, Hle), Z_Construct_UScriptStruct_FStructVariable, METADATA_PARAMS(Z_Construct_UClass_UCustomizationObject_Statics::NewProp_Hle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCustomizationObject_Statics::NewProp_Hle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizationObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationObject_Statics::NewProp_Hle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizationObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizationObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomizationObject_Statics::ClassParams = {
		&UCustomizationObject::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UCustomizationObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCustomizationObject_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizationObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCustomizationObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizationObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomizationObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomizationObject, 1423715748);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomizationObject(Z_Construct_UClass_UCustomizationObject, &UCustomizationObject::StaticClass, TEXT("/Script/DetailsTest"), TEXT("UCustomizationObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizationObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
