// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingUtilities/Public/EditorSkeletalMeshLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorSkeletalMeshLibrary() {}
// Cross Module References
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorSkeletalMeshLibrary_NoRegister();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorSkeletalMeshLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingUtilities();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	void UEditorSkeletalMeshLibrary::StaticRegisterNativesUEditorSkeletalMeshLibrary()
	{
		UClass* Class = UEditorSkeletalMeshLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegenerateLOD", &UEditorSkeletalMeshLibrary::execRegenerateLOD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics
	{
		struct EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms
		{
			USkeletalMesh* SkeletalMesh;
			int32 NewLODCount;
			bool bRegenerateEvenIfImported;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bRegenerateEvenIfImported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRegenerateEvenIfImported;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewLODCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms), &Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_bRegenerateEvenIfImported_SetBit(void* Obj)
	{
		((EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms*)Obj)->bRegenerateEvenIfImported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_bRegenerateEvenIfImported = { UE4CodeGen_Private::EPropertyClass::Bool, "bRegenerateEvenIfImported", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms), &Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_bRegenerateEvenIfImported_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_NewLODCount = { UE4CodeGen_Private::EPropertyClass::Int, "NewLODCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms, NewLODCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_SkeletalMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_bRegenerateEvenIfImported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_NewLODCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::NewProp_SkeletalMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | SkeletalMesh" },
		{ "CPP_Default_bRegenerateEvenIfImported", "false" },
		{ "CPP_Default_NewLODCount", "0" },
		{ "ModuleRelativePath", "Public/EditorSkeletalMeshLibrary.h" },
		{ "ToolTip", "Regenerate LODs of the mesh\n\n@param SkeletalMesh  The mesh that will regenerate LOD\n@param NewLODCount   Set valid value (>0) if you want to change LOD count.\n                                            Otherwise, it will use the current LOD and regenerate\n@param bRegenerateEvenIfImported     If this is true, it only regenerate even if this LOD was imported before\n                                                                    If false, it will regenerate for only previously auto generated ones\n@return      true if succeed. If mesh reduction is not available this will return false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorSkeletalMeshLibrary, "RegenerateLOD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorSkeletalMeshLibrary_eventRegenerateLOD_Parms), Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorSkeletalMeshLibrary_NoRegister()
	{
		return UEditorSkeletalMeshLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorSkeletalMeshLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorSkeletalMeshLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorSkeletalMeshLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorSkeletalMeshLibrary_RegenerateLOD, "RegenerateLOD" }, // 2684561863
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSkeletalMeshLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorSkeletalMeshLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorSkeletalMeshLibrary.h" },
		{ "ToolTip", "Utility class to altering and analyzing a SkeletalMesh and use the common functionalities of the SkeletalMesh Editor.\nThe editor should not be in play in editor mode." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorSkeletalMeshLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorSkeletalMeshLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorSkeletalMeshLibrary_Statics::ClassParams = {
		&UEditorSkeletalMeshLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEditorSkeletalMeshLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorSkeletalMeshLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorSkeletalMeshLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorSkeletalMeshLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorSkeletalMeshLibrary, 2132626926);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorSkeletalMeshLibrary(Z_Construct_UClass_UEditorSkeletalMeshLibrary, &UEditorSkeletalMeshLibrary::StaticClass, TEXT("/Script/EditorScriptingUtilities"), TEXT("UEditorSkeletalMeshLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorSkeletalMeshLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
