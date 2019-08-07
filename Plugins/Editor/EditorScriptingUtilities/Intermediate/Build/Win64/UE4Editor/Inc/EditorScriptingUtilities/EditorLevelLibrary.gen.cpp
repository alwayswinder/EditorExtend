// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingUtilities/Public/EditorLevelLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorLevelLibrary() {}
// Cross Module References
	EDITORSCRIPTINGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingUtilities();
	EDITORSCRIPTINGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings();
	EDITORSCRIPTINGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorLevelLibrary_NoRegister();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorLevelLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_NewLevel();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FEditorScriptingCreateProxyMeshActorOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions, Z_Construct_UPackage__Script_EditorScriptingUtilities(), TEXT("EditorScriptingCreateProxyMeshActorOptions"), sizeof(FEditorScriptingCreateProxyMeshActorOptions), Get_Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<FEditorScriptingCreateProxyMeshActorOptions>()
{
	return FEditorScriptingCreateProxyMeshActorOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions(FEditorScriptingCreateProxyMeshActorOptions::StaticStruct, TEXT("/Script/EditorScriptingUtilities"), TEXT("EditorScriptingCreateProxyMeshActorOptions"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingUtilities_StaticRegisterNativesFEditorScriptingCreateProxyMeshActorOptions
{
	FScriptStruct_EditorScriptingUtilities_StaticRegisterNativesFEditorScriptingCreateProxyMeshActorOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorScriptingCreateProxyMeshActorOptions")),new UScriptStruct::TCppStructOps<FEditorScriptingCreateProxyMeshActorOptions>);
	}
} ScriptStruct_EditorScriptingUtilities_StaticRegisterNativesFEditorScriptingCreateProxyMeshActorOptions;
	struct Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshProxySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshProxySettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BasePackageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnMergedActor_MetaData[];
#endif
		static void NewProp_bSpawnMergedActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnMergedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorScriptingCreateProxyMeshActorOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_MeshProxySettings_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_MeshProxySettings = { "MeshProxySettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorScriptingCreateProxyMeshActorOptions, MeshProxySettings), Z_Construct_UScriptStruct_FMeshProxySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_MeshProxySettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_MeshProxySettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_BasePackageName_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "The package path you want to save to. ie: /Game/MyFolder" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_BasePackageName = { "BasePackageName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorScriptingCreateProxyMeshActorOptions, BasePackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_BasePackageName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_BasePackageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_bSpawnMergedActor_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Spawn the new merged actors" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_bSpawnMergedActor_SetBit(void* Obj)
	{
		((FEditorScriptingCreateProxyMeshActorOptions*)Obj)->bSpawnMergedActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_bSpawnMergedActor = { "bSpawnMergedActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEditorScriptingCreateProxyMeshActorOptions), &Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_bSpawnMergedActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_bSpawnMergedActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_bSpawnMergedActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_MeshProxySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_BasePackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::NewProp_bSpawnMergedActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
		Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions,
		&NewStructOps,
		"EditorScriptingCreateProxyMeshActorOptions",
		sizeof(FEditorScriptingCreateProxyMeshActorOptions),
		alignof(FEditorScriptingCreateProxyMeshActorOptions),
		Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorScriptingCreateProxyMeshActorOptions"), sizeof(FEditorScriptingCreateProxyMeshActorOptions), Get_Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Hash() { return 3501912696U; }
class UScriptStruct* FEditorScriptingMergeStaticMeshActorsOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions, Z_Construct_UPackage__Script_EditorScriptingUtilities(), TEXT("EditorScriptingMergeStaticMeshActorsOptions"), sizeof(FEditorScriptingMergeStaticMeshActorsOptions), Get_Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<FEditorScriptingMergeStaticMeshActorsOptions>()
{
	return FEditorScriptingMergeStaticMeshActorsOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions(FEditorScriptingMergeStaticMeshActorsOptions::StaticStruct, TEXT("/Script/EditorScriptingUtilities"), TEXT("EditorScriptingMergeStaticMeshActorsOptions"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingUtilities_StaticRegisterNativesFEditorScriptingMergeStaticMeshActorsOptions
{
	FScriptStruct_EditorScriptingUtilities_StaticRegisterNativesFEditorScriptingMergeStaticMeshActorsOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorScriptingMergeStaticMeshActorsOptions")),new UScriptStruct::TCppStructOps<FEditorScriptingMergeStaticMeshActorsOptions>);
	}
} ScriptStruct_EditorScriptingUtilities_StaticRegisterNativesFEditorScriptingMergeStaticMeshActorsOptions;
	struct Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshMergingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshMergingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BasePackageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnMergedActor_MetaData[];
#endif
		static void NewProp_bSpawnMergedActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnMergedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorScriptingMergeStaticMeshActorsOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_MeshMergingSettings_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_MeshMergingSettings = { "MeshMergingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorScriptingMergeStaticMeshActorsOptions, MeshMergingSettings), Z_Construct_UScriptStruct_FMeshMergingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_MeshMergingSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_MeshMergingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_BasePackageName_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "The package path you want to save to. ie: /Game/MyFolder" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_BasePackageName = { "BasePackageName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorScriptingMergeStaticMeshActorsOptions, BasePackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_BasePackageName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_BasePackageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_bSpawnMergedActor_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Spawn the new merged actors" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_bSpawnMergedActor_SetBit(void* Obj)
	{
		((FEditorScriptingMergeStaticMeshActorsOptions*)Obj)->bSpawnMergedActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_bSpawnMergedActor = { "bSpawnMergedActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEditorScriptingMergeStaticMeshActorsOptions), &Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_bSpawnMergedActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_bSpawnMergedActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_bSpawnMergedActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_MeshMergingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_BasePackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::NewProp_bSpawnMergedActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
		Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions,
		&NewStructOps,
		"EditorScriptingMergeStaticMeshActorsOptions",
		sizeof(FEditorScriptingMergeStaticMeshActorsOptions),
		alignof(FEditorScriptingMergeStaticMeshActorsOptions),
		Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorScriptingMergeStaticMeshActorsOptions"), sizeof(FEditorScriptingMergeStaticMeshActorsOptions), Get_Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Hash() { return 194336730U; }
class UScriptStruct* FEditorScriptingJoinStaticMeshActorsOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions, Z_Construct_UPackage__Script_EditorScriptingUtilities(), TEXT("EditorScriptingJoinStaticMeshActorsOptions"), sizeof(FEditorScriptingJoinStaticMeshActorsOptions), Get_Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Hash());
	}
	return Singleton;
}
template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<FEditorScriptingJoinStaticMeshActorsOptions>()
{
	return FEditorScriptingJoinStaticMeshActorsOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions(FEditorScriptingJoinStaticMeshActorsOptions::StaticStruct, TEXT("/Script/EditorScriptingUtilities"), TEXT("EditorScriptingJoinStaticMeshActorsOptions"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingUtilities_StaticRegisterNativesFEditorScriptingJoinStaticMeshActorsOptions
{
	FScriptStruct_EditorScriptingUtilities_StaticRegisterNativesFEditorScriptingJoinStaticMeshActorsOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorScriptingJoinStaticMeshActorsOptions")),new UScriptStruct::TCppStructOps<FEditorScriptingJoinStaticMeshActorsOptions>);
	}
} ScriptStruct_EditorScriptingUtilities_StaticRegisterNativesFEditorScriptingJoinStaticMeshActorsOptions;
	struct Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenameComponentsFromSource_MetaData[];
#endif
		static void NewProp_bRenameComponentsFromSource_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenameComponentsFromSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewActorLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewActorLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroySourceActors_MetaData[];
#endif
		static void NewProp_bDestroySourceActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroySourceActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorScriptingJoinStaticMeshActorsOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_bRenameComponentsFromSource_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Rename StaticMeshComponents based on source Actor's name." },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_bRenameComponentsFromSource_SetBit(void* Obj)
	{
		((FEditorScriptingJoinStaticMeshActorsOptions*)Obj)->bRenameComponentsFromSource = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_bRenameComponentsFromSource = { "bRenameComponentsFromSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEditorScriptingJoinStaticMeshActorsOptions), &Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_bRenameComponentsFromSource_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_bRenameComponentsFromSource_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_bRenameComponentsFromSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_NewActorLabel_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Name of the new spawned Actor to replace the provided Actors." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_NewActorLabel = { "NewActorLabel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorScriptingJoinStaticMeshActorsOptions, NewActorLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_NewActorLabel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_NewActorLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_bDestroySourceActors_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Destroy the provided Actors after the operation." },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_bDestroySourceActors_SetBit(void* Obj)
	{
		((FEditorScriptingJoinStaticMeshActorsOptions*)Obj)->bDestroySourceActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_bDestroySourceActors = { "bDestroySourceActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEditorScriptingJoinStaticMeshActorsOptions), &Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_bDestroySourceActors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_bDestroySourceActors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_bDestroySourceActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_bRenameComponentsFromSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_NewActorLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::NewProp_bDestroySourceActors,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
		nullptr,
		&NewStructOps,
		"EditorScriptingJoinStaticMeshActorsOptions",
		sizeof(FEditorScriptingJoinStaticMeshActorsOptions),
		alignof(FEditorScriptingJoinStaticMeshActorsOptions),
		Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorScriptingJoinStaticMeshActorsOptions"), sizeof(FEditorScriptingJoinStaticMeshActorsOptions), Get_Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Hash() { return 2866696120U; }
	void UEditorLevelLibrary::StaticRegisterNativesUEditorLevelLibrary()
	{
		UClass* Class = UEditorLevelLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertActors", &UEditorLevelLibrary::execConvertActors },
			{ "CreateProxyMeshActor", &UEditorLevelLibrary::execCreateProxyMeshActor },
			{ "DestroyActor", &UEditorLevelLibrary::execDestroyActor },
			{ "GetAllLevelActors", &UEditorLevelLibrary::execGetAllLevelActors },
			{ "GetAllLevelActorsComponents", &UEditorLevelLibrary::execGetAllLevelActorsComponents },
			{ "GetEditorWorld", &UEditorLevelLibrary::execGetEditorWorld },
			{ "GetSelectedLevelActors", &UEditorLevelLibrary::execGetSelectedLevelActors },
			{ "JoinStaticMeshActors", &UEditorLevelLibrary::execJoinStaticMeshActors },
			{ "LoadLevel", &UEditorLevelLibrary::execLoadLevel },
			{ "MergeStaticMeshActors", &UEditorLevelLibrary::execMergeStaticMeshActors },
			{ "NewLevel", &UEditorLevelLibrary::execNewLevel },
			{ "NewLevelFromTemplate", &UEditorLevelLibrary::execNewLevelFromTemplate },
			{ "ReplaceMeshComponentsMaterials", &UEditorLevelLibrary::execReplaceMeshComponentsMaterials },
			{ "ReplaceMeshComponentsMaterialsOnActors", &UEditorLevelLibrary::execReplaceMeshComponentsMaterialsOnActors },
			{ "ReplaceMeshComponentsMeshes", &UEditorLevelLibrary::execReplaceMeshComponentsMeshes },
			{ "ReplaceMeshComponentsMeshesOnActors", &UEditorLevelLibrary::execReplaceMeshComponentsMeshesOnActors },
			{ "SaveAllDirtyLevels", &UEditorLevelLibrary::execSaveAllDirtyLevels },
			{ "SaveCurrentLevel", &UEditorLevelLibrary::execSaveCurrentLevel },
			{ "SetCurrentLevelByName", &UEditorLevelLibrary::execSetCurrentLevelByName },
			{ "SetSelectedLevelActors", &UEditorLevelLibrary::execSetSelectedLevelActors },
			{ "SpawnActorFromClass", &UEditorLevelLibrary::execSpawnActorFromClass },
			{ "SpawnActorFromObject", &UEditorLevelLibrary::execSpawnActorFromObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics
	{
		struct EditorLevelLibrary_eventConvertActors_Parms
		{
			TArray<AActor*> Actors;
			TSubclassOf<AActor>  ActorClass;
			FString StaticMeshPackagePath;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshPackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StaticMeshPackagePath;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventConvertActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_StaticMeshPackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_StaticMeshPackagePath = { "StaticMeshPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventConvertActors_Parms, StaticMeshPackagePath), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_StaticMeshPackagePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_StaticMeshPackagePath_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventConvertActors_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventConvertActors_Parms, Actors), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_Actors_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_StaticMeshPackagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_Actors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataPrep" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Replace in the level all Actors provided with a new actor of type ActorClass. Destroy all Actors provided.\n@param       Actors                                  List of Actors to replace.\n@param       ActorClass                              Class/Blueprint of the new actor that will be spawn.\n@param       StaticMeshPackagePath   If the list contains Brushes and it is requested to change them to StaticMesh, StaticMeshPackagePath is the package path to where the StaticMesh will be created. ie. /Game/MyFolder/" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "ConvertActors", sizeof(EditorLevelLibrary_eventConvertActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics
	{
		struct EditorLevelLibrary_eventCreateProxyMeshActor_Parms
		{
			TArray<AStaticMeshActor*> ActorsToMerge;
			FEditorScriptingCreateProxyMeshActorOptions MergeOptions;
			AStaticMeshActor* OutMergedActor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutMergedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MergeOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToMerge_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToMerge;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToMerge_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventCreateProxyMeshActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLevelLibrary_eventCreateProxyMeshActor_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_OutMergedActor = { "OutMergedActor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventCreateProxyMeshActor_Parms, OutMergedActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_MergeOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_MergeOptions = { "MergeOptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventCreateProxyMeshActor_Parms, MergeOptions), Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_MergeOptions_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_MergeOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventCreateProxyMeshActor_Parms, ActorsToMerge), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge_Inner = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_OutMergedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_MergeOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataPrep" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Build a proxy mesh actor that can replace a set of mesh actors.\n@param   ActorsToMerge  List of actors to build a proxy for.\n@param   MergeOptions\n@param   OutMergedActor generated actor if requested\n@return  Success of the proxy creation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "CreateProxyMeshActor", sizeof(EditorLevelLibrary_eventCreateProxyMeshActor_Parms), Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics
	{
		struct EditorLevelLibrary_eventDestroyActor_Parms
		{
			AActor* ActorToDestroy;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToDestroy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventDestroyActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLevelLibrary_eventDestroyActor_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::NewProp_ActorToDestroy = { "ActorToDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventDestroyActor_Parms, ActorToDestroy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::NewProp_ActorToDestroy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Destroy the actor from the world editor. Notify the Editor that the actor got destroyed.\n@param       ToDestroyActor  Actor to destroy.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "DestroyActor", sizeof(EditorLevelLibrary_eventDestroyActor_Parms), Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics
	{
		struct EditorLevelLibrary_eventGetAllLevelActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventGetAllLevelActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Find all loaded Actors in the world editor. Exclude actor that are pending kill, in PIE, PreviewEditor, ...\n@return      List of found Actors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "GetAllLevelActors", sizeof(EditorLevelLibrary_eventGetAllLevelActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics
	{
		struct EditorLevelLibrary_eventGetAllLevelActorsComponents_Parms
		{
			TArray<UActorComponent*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventGetAllLevelActorsComponents_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Find all loaded ActorComponent own by an actor in the world editor. Exclude actor that are pending kill, in PIE, PreviewEditor, ...\n@return      List of found ActorComponent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "GetAllLevelActorsComponents", sizeof(EditorLevelLibrary_eventGetAllLevelActorsComponents_Parms), Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics
	{
		struct EditorLevelLibrary_eventGetEditorWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventGetEditorWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Find the World in the world editor. It can then be used as WorldContext by other libraries like GameplayStatics.\n@return      The World used by the world editor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "GetEditorWorld", sizeof(EditorLevelLibrary_eventGetEditorWorld_Parms), Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics
	{
		struct EditorLevelLibrary_eventGetSelectedLevelActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventGetSelectedLevelActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Find all loaded Actors that are selected in the world editor. Exclude actor that are pending kill, in PIE, PreviewEditor, ...\n@param       ActorClass      Actor Class to find.\n@return      List of found Actors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "GetSelectedLevelActors", sizeof(EditorLevelLibrary_eventGetSelectedLevelActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics
	{
		struct EditorLevelLibrary_eventJoinStaticMeshActors_Parms
		{
			TArray<AStaticMeshActor*> ActorsToJoin;
			FEditorScriptingJoinStaticMeshActorsOptions JoinOptions;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JoinOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToJoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToJoin;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToJoin_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventJoinStaticMeshActors_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_JoinOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_JoinOptions = { "JoinOptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventJoinStaticMeshActors_Parms, JoinOptions), Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_JoinOptions_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_JoinOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin = { "ActorsToJoin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventJoinStaticMeshActors_Parms, ActorsToJoin), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin_Inner = { "ActorsToJoin", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_JoinOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataPrep" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Create a new Actor in the level that contains a duplicate of all the Actors Static Meshes Component.\nThe ActorsToJoin need to be in the same Level.\nThis will have a low impact on performance but may help the edition by grouping the meshes under a single Actor.\n@param       ActorsToJoin                    List of Actors to join.\n@param       JoinOptions                             Options on how to join the actors.\n@return The new created actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "JoinStaticMeshActors", sizeof(EditorLevelLibrary_eventJoinStaticMeshActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics
	{
		struct EditorLevelLibrary_eventLoadLevel_Parms
		{
			FString AssetPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventLoadLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLevelLibrary_eventLoadLevel_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventLoadLevel_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_AssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_AssetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Close the current Persistent Level (without saving it). Loads the specified level.\n@param       AssetPath                               Asset Path of the level to be loaded.\n             ie. /Game/MyFolder/MyAsset\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "LoadLevel", sizeof(EditorLevelLibrary_eventLoadLevel_Parms), Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics
	{
		struct EditorLevelLibrary_eventMergeStaticMeshActors_Parms
		{
			TArray<AStaticMeshActor*> ActorsToMerge;
			FEditorScriptingMergeStaticMeshActorsOptions MergeOptions;
			AStaticMeshActor* OutMergedActor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutMergedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MergeOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToMerge_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToMerge;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToMerge_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventMergeStaticMeshActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLevelLibrary_eventMergeStaticMeshActors_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_OutMergedActor = { "OutMergedActor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventMergeStaticMeshActors_Parms, OutMergedActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_MergeOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_MergeOptions = { "MergeOptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventMergeStaticMeshActors_Parms, MergeOptions), Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_MergeOptions_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_MergeOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventMergeStaticMeshActors_Parms, ActorsToMerge), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge_Inner = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_OutMergedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_MergeOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataPrep" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Merge the meshes into a unique mesh with the provided StaticMeshActors. There are multiple options on how to merge the meshes and their materials.\nThe ActorsToMerge need to be in the same Level.\nThis may have a high impact on performance depending of the MeshMergingSettings options.\n@param       ActorsToMerge                   List of Actors to merge.\n@param       MergeOptions                    Options on how to merge the actors.\n@param       OutMergedActor                  The new created actor, if requested.\n@return      if the operation is successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "MergeStaticMeshActors", sizeof(EditorLevelLibrary_eventMergeStaticMeshActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics
	{
		struct EditorLevelLibrary_eventNewLevel_Parms
		{
			FString AssetPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventNewLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLevelLibrary_eventNewLevel_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventNewLevel_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_AssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_AssetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Close the current Persistent Level (without saving it). Create a new blank Level and save it. Load the new created level.\n@param       AssetPath               Asset Path of where the level will be saved.\n             ie. /Game/MyFolder/MyAsset\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "NewLevel", sizeof(EditorLevelLibrary_eventNewLevel_Parms), Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_NewLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics
	{
		struct EditorLevelLibrary_eventNewLevelFromTemplate_Parms
		{
			FString AssetPath;
			FString TemplateAssetPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TemplateAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventNewLevelFromTemplate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLevelLibrary_eventNewLevelFromTemplate_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_TemplateAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_TemplateAssetPath = { "TemplateAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventNewLevelFromTemplate_Parms, TemplateAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_TemplateAssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_TemplateAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventNewLevelFromTemplate_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_AssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_TemplateAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_AssetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Close the current Persistent Level (without saving it). Create a new Level base on another level and save it. Load the new created level.\n@param       AssetPath                               Asset Path of where the level will be saved.\n             ie. /Game/MyFolder/MyAsset\n@param       TemplateAssetPath               Level to be used as Template.\n             ie. /Game/MyFolder/MyAsset\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "NewLevelFromTemplate", sizeof(EditorLevelLibrary_eventNewLevelFromTemplate_Parms), Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics
	{
		struct EditorLevelLibrary_eventReplaceMeshComponentsMaterials_Parms
		{
			TArray<UMeshComponent*> MeshComponents;
			UMaterialInterface* MaterialToBeReplaced;
			UMaterialInterface* NewMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialToBeReplaced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMaterials_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MaterialToBeReplaced = { "MaterialToBeReplaced", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMaterials_Parms, MaterialToBeReplaced), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents = { "MeshComponents", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMaterials_Parms, MeshComponents), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents_Inner = { "MeshComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_NewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MaterialToBeReplaced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataPrep" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Find the references of the material MaterialToReplaced on all the MeshComponents provided and replace it by NewMaterial.\n@param       MeshComponents                  List of MeshComponent to search from.\n@param       MaterialToBeReplaced    Material we want to replace.\n@param       NewMaterial                             Material to replace MaterialToBeReplaced by." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "ReplaceMeshComponentsMaterials", sizeof(EditorLevelLibrary_eventReplaceMeshComponentsMaterials_Parms), Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics
	{
		struct EditorLevelLibrary_eventReplaceMeshComponentsMaterialsOnActors_Parms
		{
			TArray<AActor*> Actors;
			UMaterialInterface* MaterialToBeReplaced;
			UMaterialInterface* NewMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialToBeReplaced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMaterialsOnActors_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_MaterialToBeReplaced = { "MaterialToBeReplaced", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMaterialsOnActors_Parms, MaterialToBeReplaced), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMaterialsOnActors_Parms, Actors), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_NewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_MaterialToBeReplaced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataPrep" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Find the references of the material MaterialToReplaced on all the MeshComponents of all the Actors provided and replace it by NewMaterial.\n@param       Actors                                  List of Actors to search from.\n@param       MaterialToBeReplaced    Material we want to replace.\n@param       NewMaterial                             Material to replace MaterialToBeReplaced by." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "ReplaceMeshComponentsMaterialsOnActors", sizeof(EditorLevelLibrary_eventReplaceMeshComponentsMaterialsOnActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics
	{
		struct EditorLevelLibrary_eventReplaceMeshComponentsMeshes_Parms
		{
			TArray<UStaticMeshComponent*> MeshComponents;
			UStaticMesh* MeshToBeReplaced;
			UStaticMesh* NewMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshToBeReplaced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMeshes_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshToBeReplaced = { "MeshToBeReplaced", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMeshes_Parms, MeshToBeReplaced), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents = { "MeshComponents", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMeshes_Parms, MeshComponents), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents_Inner = { "MeshComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_NewMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshToBeReplaced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataPrep" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Find the references of the mesh MeshToBeReplaced on all the MeshComponents provided and replace it by NewMesh.\nThe editor should not be in play in editor mode.\n@param       MeshComponents                  List of MeshComponent to search from.\n@param       MeshToBeReplaced                Mesh we want to replace.\n@param       NewMesh                                 Mesh to replace MeshToBeReplaced by." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "ReplaceMeshComponentsMeshes", sizeof(EditorLevelLibrary_eventReplaceMeshComponentsMeshes_Parms), Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics
	{
		struct EditorLevelLibrary_eventReplaceMeshComponentsMeshesOnActors_Parms
		{
			TArray<AActor*> Actors;
			UStaticMesh* MeshToBeReplaced;
			UStaticMesh* NewMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshToBeReplaced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMeshesOnActors_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_MeshToBeReplaced = { "MeshToBeReplaced", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMeshesOnActors_Parms, MeshToBeReplaced), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMeshesOnActors_Parms, Actors), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_NewMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_MeshToBeReplaced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataPrep" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Find the references of the mesh MeshToBeReplaced on all the MeshComponents of all the Actors provided and replace it by NewMesh.\n@param       Actors                                  List of Actors to search from.\n@param       MeshToBeReplaced                Mesh we want to replace.\n@param       NewMesh                                 Mesh to replace MeshToBeReplaced by." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "ReplaceMeshComponentsMeshesOnActors", sizeof(EditorLevelLibrary_eventReplaceMeshComponentsMeshesOnActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics
	{
		struct EditorLevelLibrary_eventSaveAllDirtyLevels_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventSaveAllDirtyLevels_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLevelLibrary_eventSaveAllDirtyLevels_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Saves all Level currently loaded by the World Editor.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "SaveAllDirtyLevels", sizeof(EditorLevelLibrary_eventSaveAllDirtyLevels_Parms), Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics
	{
		struct EditorLevelLibrary_eventSaveCurrentLevel_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventSaveCurrentLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLevelLibrary_eventSaveCurrentLevel_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Saves the specified Level. Must already be saved at lease once to have a valid path.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "SaveCurrentLevel", sizeof(EditorLevelLibrary_eventSaveCurrentLevel_Parms), Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics
	{
		struct EditorLevelLibrary_eventSetCurrentLevelByName_Parms
		{
			FName LevelName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventSetCurrentLevelByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLevelLibrary_eventSetCurrentLevelByName_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventSetCurrentLevelByName_Parms, LevelName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::NewProp_LevelName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Set the current level used by the world editor.\nIf more than one level shares the same name, the first one encounter of that level name will be used.\n@param       LevelName       The name of the Level the actor belongs to (same name as in the ContentBrowser).\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "SetCurrentLevelByName", sizeof(EditorLevelLibrary_eventSetCurrentLevelByName_Parms), Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics
	{
		struct EditorLevelLibrary_eventSetSelectedLevelActors_Parms
		{
			TArray<AActor*> ActorsToSelect;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToSelect_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToSelect;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToSelect_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::NewProp_ActorsToSelect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::NewProp_ActorsToSelect = { "ActorsToSelect", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventSetSelectedLevelActors_Parms, ActorsToSelect), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::NewProp_ActorsToSelect_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::NewProp_ActorsToSelect_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::NewProp_ActorsToSelect_Inner = { "ActorsToSelect", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::NewProp_ActorsToSelect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::NewProp_ActorsToSelect_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Clear the current world editor selection and select the provided actors. Exclude actor that are pending kill, in PIE, PreviewEditor, ...\n@param       ActorsToSelect  Actor that should be selected in the world editor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "SetSelectedLevelActors", sizeof(EditorLevelLibrary_eventSetSelectedLevelActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics
	{
		struct EditorLevelLibrary_eventSpawnActorFromClass_Parms
		{
			TSubclassOf<AActor>  ActorClass;
			FVector Location;
			FRotator Rotation;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromClass_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromClass_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromClass_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_ActorClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "CPP_Default_Rotation", "" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Create an actor and place it in the world editor. Can be created from a Blueprint or a Class.\nThe actor will be created in the current level and will be selected.\n@param       ActorClass              Asset to attempt to use for an actor to place.\n@param       Location                Location of the new actor.\n@return      The created actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "SpawnActorFromClass", sizeof(EditorLevelLibrary_eventSpawnActorFromClass_Parms), Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics
	{
		struct EditorLevelLibrary_eventSpawnActorFromObject_Parms
		{
			UObject* ObjectToUse;
			FVector Location;
			FRotator Rotation;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToUse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromObject_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromObject_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromObject_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_ObjectToUse = { "ObjectToUse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromObject_Parms, ObjectToUse), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_ObjectToUse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "CPP_Default_Rotation", "" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Create an actor and place it in the world editor. The Actor can be created from a Factory, Archetype, Blueprint, Class or an Asset.\nThe actor will be created in the current level and will be selected.\n@param       ObjectToUse             Asset to attempt to use for an actor to place.\n@param       Location                Location of the new actor.\n@return      The created actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "SpawnActorFromObject", sizeof(EditorLevelLibrary_eventSpawnActorFromObject_Parms), Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorLevelLibrary_NoRegister()
	{
		return UEditorLevelLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorLevelLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorLevelLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorLevelLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors, "ConvertActors" }, // 1053335274
		{ &Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor, "CreateProxyMeshActor" }, // 3887688828
		{ &Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor, "DestroyActor" }, // 1440997941
		{ &Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors, "GetAllLevelActors" }, // 2141304188
		{ &Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents, "GetAllLevelActorsComponents" }, // 966893492
		{ &Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld, "GetEditorWorld" }, // 1609020962
		{ &Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors, "GetSelectedLevelActors" }, // 2028388210
		{ &Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors, "JoinStaticMeshActors" }, // 2211500454
		{ &Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel, "LoadLevel" }, // 2980377667
		{ &Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors, "MergeStaticMeshActors" }, // 684169684
		{ &Z_Construct_UFunction_UEditorLevelLibrary_NewLevel, "NewLevel" }, // 2837779874
		{ &Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate, "NewLevelFromTemplate" }, // 860457714
		{ &Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials, "ReplaceMeshComponentsMaterials" }, // 3548163634
		{ &Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors, "ReplaceMeshComponentsMaterialsOnActors" }, // 866960300
		{ &Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes, "ReplaceMeshComponentsMeshes" }, // 3479179109
		{ &Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors, "ReplaceMeshComponentsMeshesOnActors" }, // 80879933
		{ &Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels, "SaveAllDirtyLevels" }, // 1872663482
		{ &Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel, "SaveCurrentLevel" }, // 3203943924
		{ &Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName, "SetCurrentLevelByName" }, // 4031242027
		{ &Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors, "SetSelectedLevelActors" }, // 3941490290
		{ &Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass, "SpawnActorFromClass" }, // 1774431561
		{ &Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject, "SpawnActorFromObject" }, // 752767188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLevelLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorLevelLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Utility class to do most of the common functionalities in the World Editor.\nThe editor should not be in play in editor mode." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorLevelLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorLevelLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorLevelLibrary_Statics::ClassParams = {
		&UEditorLevelLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorLevelLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorLevelLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorLevelLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorLevelLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorLevelLibrary, 3681792407);
	template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<UEditorLevelLibrary>()
	{
		return UEditorLevelLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorLevelLibrary(Z_Construct_UClass_UEditorLevelLibrary, &UEditorLevelLibrary::StaticClass, TEXT("/Script/EditorScriptingUtilities"), TEXT("UEditorLevelLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorLevelLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
