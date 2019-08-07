// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestArrayInt32_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TestArrayInt32;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TestArrayInt32_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TestText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestStruct;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestArrayInt32_MetaData[] = {
		{ "Category", "Hell" },
		{ "ModuleRelativePath", "Public/CustomizationObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestArrayInt32 = { "TestArrayInt32", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationObject, TestArrayInt32), METADATA_PARAMS(Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestArrayInt32_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestArrayInt32_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestArrayInt32_Inner = { "TestArrayInt32", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestText_MetaData[] = {
		{ "Category", "Hell" },
		{ "ModuleRelativePath", "Public/CustomizationObject.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestText = { "TestText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationObject, TestText), METADATA_PARAMS(Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestFloat_MetaData[] = {
		{ "Category", "Hell" },
		{ "ModuleRelativePath", "Public/CustomizationObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestFloat = { "TestFloat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationObject, TestFloat), METADATA_PARAMS(Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestFloat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestStruct_MetaData[] = {
		{ "Category", "Hell" },
		{ "ModuleRelativePath", "Public/CustomizationObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestStruct = { "TestStruct", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationObject, TestStruct), Z_Construct_UScriptStruct_FStructVariable, METADATA_PARAMS(Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestStruct_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizationObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestArrayInt32,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestArrayInt32_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationObject_Statics::NewProp_TestStruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizationObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizationObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomizationObject_Statics::ClassParams = {
		&UCustomizationObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizationObject_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCustomizationObject_Statics::PropPointers),
		0,
		0x001000A0u,
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
	IMPLEMENT_CLASS(UCustomizationObject, 2721609855);
	template<> DETAILSTEST_API UClass* StaticClass<UCustomizationObject>()
	{
		return UCustomizationObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomizationObject(Z_Construct_UClass_UCustomizationObject, &UCustomizationObject::StaticClass, TEXT("/Script/DetailsTest"), TEXT("UCustomizationObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizationObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
