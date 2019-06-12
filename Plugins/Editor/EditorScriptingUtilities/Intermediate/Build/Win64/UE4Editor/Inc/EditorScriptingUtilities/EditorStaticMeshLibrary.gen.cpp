// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingUtilities/Public/EditorStaticMeshLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorStaticMeshLibrary() {}
// Cross Module References
	EDITORSCRIPTINGUTILITIES_API UEnum* Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingUtilities();
	EDITORSCRIPTINGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions();
	EDITORSCRIPTINGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorStaticMeshLibrary_NoRegister();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorStaticMeshLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionTraceFlag();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods();
// End Cross Module References
	static UEnum* EScriptingCollisionShapeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType, Z_Construct_UPackage__Script_EditorScriptingUtilities(), TEXT("EScriptingCollisionShapeType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScriptingCollisionShapeType(EScriptingCollisionShapeType_StaticEnum, TEXT("/Script/EditorScriptingUtilities"), TEXT("EScriptingCollisionShapeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType_CRC() { return 2562988185U; }
	UEnum* Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScriptingCollisionShapeType"), 0, Get_Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScriptingCollisionShapeType::Box", (int64)EScriptingCollisionShapeType::Box },
				{ "EScriptingCollisionShapeType::Sphere", (int64)EScriptingCollisionShapeType::Sphere },
				{ "EScriptingCollisionShapeType::Capsule", (int64)EScriptingCollisionShapeType::Capsule },
				{ "EScriptingCollisionShapeType::NDOP10_X", (int64)EScriptingCollisionShapeType::NDOP10_X },
				{ "EScriptingCollisionShapeType::NDOP10_Y", (int64)EScriptingCollisionShapeType::NDOP10_Y },
				{ "EScriptingCollisionShapeType::NDOP10_Z", (int64)EScriptingCollisionShapeType::NDOP10_Z },
				{ "EScriptingCollisionShapeType::NDOP18", (int64)EScriptingCollisionShapeType::NDOP18 },
				{ "EScriptingCollisionShapeType::NDOP26", (int64)EScriptingCollisionShapeType::NDOP26 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
				{ "ToolTip", "Types of Collision Construct that are generated *" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EScriptingCollisionShapeType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EScriptingCollisionShapeType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEditorScriptingMeshReductionOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions, Z_Construct_UPackage__Script_EditorScriptingUtilities(), TEXT("EditorScriptingMeshReductionOptions"), sizeof(FEditorScriptingMeshReductionOptions), Get_Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorScriptingMeshReductionOptions(FEditorScriptingMeshReductionOptions::StaticStruct, TEXT("/Script/EditorScriptingUtilities"), TEXT("EditorScriptingMeshReductionOptions"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingUtilities_StaticRegisterNativesFEditorScriptingMeshReductionOptions
{
	FScriptStruct_EditorScriptingUtilities_StaticRegisterNativesFEditorScriptingMeshReductionOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorScriptingMeshReductionOptions")),new UScriptStruct::TCppStructOps<FEditorScriptingMeshReductionOptions>);
	}
} ScriptStruct_EditorScriptingUtilities_StaticRegisterNativesFEditorScriptingMeshReductionOptions;
	struct Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReductionSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReductionSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoComputeLODScreenSize_MetaData[];
#endif
		static void NewProp_bAutoComputeLODScreenSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoComputeLODScreenSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorScriptingMeshReductionOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::NewProp_ReductionSettings_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Array of reduction settings to apply to each new LOD mesh." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::NewProp_ReductionSettings = { UE4CodeGen_Private::EPropertyClass::Array, "ReductionSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditorScriptingMeshReductionOptions, ReductionSettings), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::NewProp_ReductionSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::NewProp_ReductionSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::NewProp_ReductionSettings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReductionSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::NewProp_bAutoComputeLODScreenSize_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "If true, the screen sizes at which LODs swap are computed automatically\n@note that this is displayed as 'Auto Compute LOD Distances' in the UI" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::NewProp_bAutoComputeLODScreenSize_SetBit(void* Obj)
	{
		((FEditorScriptingMeshReductionOptions*)Obj)->bAutoComputeLODScreenSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::NewProp_bAutoComputeLODScreenSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoComputeLODScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FEditorScriptingMeshReductionOptions), &Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::NewProp_bAutoComputeLODScreenSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::NewProp_bAutoComputeLODScreenSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::NewProp_bAutoComputeLODScreenSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::NewProp_ReductionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::NewProp_ReductionSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::NewProp_bAutoComputeLODScreenSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
		nullptr,
		&NewStructOps,
		"EditorScriptingMeshReductionOptions",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FEditorScriptingMeshReductionOptions),
		alignof(FEditorScriptingMeshReductionOptions),
		Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorScriptingMeshReductionOptions"), sizeof(FEditorScriptingMeshReductionOptions), Get_Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_CRC() { return 3486032368U; }
class UScriptStruct* FEditorScriptingMeshReductionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSCRIPTINGUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings, Z_Construct_UPackage__Script_EditorScriptingUtilities(), TEXT("EditorScriptingMeshReductionSettings"), sizeof(FEditorScriptingMeshReductionSettings), Get_Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorScriptingMeshReductionSettings(FEditorScriptingMeshReductionSettings::StaticStruct, TEXT("/Script/EditorScriptingUtilities"), TEXT("EditorScriptingMeshReductionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_EditorScriptingUtilities_StaticRegisterNativesFEditorScriptingMeshReductionSettings
{
	FScriptStruct_EditorScriptingUtilities_StaticRegisterNativesFEditorScriptingMeshReductionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorScriptingMeshReductionSettings")),new UScriptStruct::TCppStructOps<FEditorScriptingMeshReductionSettings>);
	}
} ScriptStruct_EditorScriptingUtilities_StaticRegisterNativesFEditorScriptingMeshReductionSettings;
	struct Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentTriangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentTriangles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorScriptingMeshReductionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "ScreenSize to display this LOD. Ranges from 0.0 to 1.0." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::NewProp_ScreenSize = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditorScriptingMeshReductionSettings, ScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::NewProp_ScreenSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::NewProp_PercentTriangles_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Percentage of triangles to keep. Ranges from 0.0 to 1.0: 1.0 = no reduction, 0.0 = no triangles." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::NewProp_PercentTriangles = { UE4CodeGen_Private::EPropertyClass::Float, "PercentTriangles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditorScriptingMeshReductionSettings, PercentTriangles), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::NewProp_PercentTriangles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::NewProp_PercentTriangles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::NewProp_ScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::NewProp_PercentTriangles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
		nullptr,
		&NewStructOps,
		"EditorScriptingMeshReductionSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FEditorScriptingMeshReductionSettings),
		alignof(FEditorScriptingMeshReductionSettings),
		Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorScriptingUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorScriptingMeshReductionSettings"), sizeof(FEditorScriptingMeshReductionSettings), Get_Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_CRC() { return 1883124455U; }
	void UEditorStaticMeshLibrary::StaticRegisterNativesUEditorStaticMeshLibrary()
	{
		UClass* Class = UEditorStaticMeshLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSimpleCollisions", &UEditorStaticMeshLibrary::execAddSimpleCollisions },
			{ "AddUVChannel", &UEditorStaticMeshLibrary::execAddUVChannel },
			{ "EnableSectionCastShadow", &UEditorStaticMeshLibrary::execEnableSectionCastShadow },
			{ "EnableSectionCollision", &UEditorStaticMeshLibrary::execEnableSectionCollision },
			{ "GenerateBoxUVChannel", &UEditorStaticMeshLibrary::execGenerateBoxUVChannel },
			{ "GenerateCylindricalUVChannel", &UEditorStaticMeshLibrary::execGenerateCylindricalUVChannel },
			{ "GeneratePlanarUVChannel", &UEditorStaticMeshLibrary::execGeneratePlanarUVChannel },
			{ "GetCollisionComplexity", &UEditorStaticMeshLibrary::execGetCollisionComplexity },
			{ "GetConvexCollisionCount", &UEditorStaticMeshLibrary::execGetConvexCollisionCount },
			{ "GetLodCount", &UEditorStaticMeshLibrary::execGetLodCount },
			{ "GetLodScreenSizes", &UEditorStaticMeshLibrary::execGetLodScreenSizes },
			{ "GetNumberVerts", &UEditorStaticMeshLibrary::execGetNumberVerts },
			{ "GetNumUVChannels", &UEditorStaticMeshLibrary::execGetNumUVChannels },
			{ "GetSimpleCollisionCount", &UEditorStaticMeshLibrary::execGetSimpleCollisionCount },
			{ "HasInstanceVertexColors", &UEditorStaticMeshLibrary::execHasInstanceVertexColors },
			{ "HasVertexColors", &UEditorStaticMeshLibrary::execHasVertexColors },
			{ "InsertUVChannel", &UEditorStaticMeshLibrary::execInsertUVChannel },
			{ "IsSectionCollisionEnabled", &UEditorStaticMeshLibrary::execIsSectionCollisionEnabled },
			{ "RemoveCollisions", &UEditorStaticMeshLibrary::execRemoveCollisions },
			{ "RemoveLods", &UEditorStaticMeshLibrary::execRemoveLods },
			{ "RemoveUVChannel", &UEditorStaticMeshLibrary::execRemoveUVChannel },
			{ "ResetMaterialSlotNames", &UEditorStaticMeshLibrary::execResetMaterialSlotNames },
			{ "ResetSectionmaterialByIndex", &UEditorStaticMeshLibrary::execResetSectionmaterialByIndex },
			{ "ResetSectionmaterialBySlotName", &UEditorStaticMeshLibrary::execResetSectionmaterialBySlotName },
			{ "SetAllowCPUAccess", &UEditorStaticMeshLibrary::execSetAllowCPUAccess },
			{ "SetConvexDecompositionCollisions", &UEditorStaticMeshLibrary::execSetConvexDecompositionCollisions },
			{ "SetGenerateLightmapUVs", &UEditorStaticMeshLibrary::execSetGenerateLightmapUVs },
			{ "SetLodFromStaticMesh", &UEditorStaticMeshLibrary::execSetLodFromStaticMesh },
			{ "SetLods", &UEditorStaticMeshLibrary::execSetLods },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics
	{
		struct EditorStaticMeshLibrary_eventAddSimpleCollisions_Parms
		{
			UStaticMesh* StaticMesh;
			EScriptingCollisionShapeType ShapeType;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ShapeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShapeType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventAddSimpleCollisions_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ShapeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ShapeType = { UE4CodeGen_Private::EPropertyClass::Enum, "ShapeType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventAddSimpleCollisions_Parms, ShapeType), Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ShapeType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ShapeType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ShapeType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventAddSimpleCollisions_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ShapeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ShapeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Add simple collisions to a static mesh.\nThis method replicates what is done when invoking menu entries \"Collision > Add [...] Simplified Collision\" in the Mesh Editor.\n@param       StaticMesh                              Mesh to generate simple collision for.\n@param       ShapeType                               Options on which simple collision to add to the mesh.\n@return An integer indicating the index of the collision newly created.\nA negative value indicates the addition failed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "AddSimpleCollisions", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventAddSimpleCollisions_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics
	{
		struct EditorStaticMeshLibrary_eventAddUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventAddUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventAddUVChannel_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventAddUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventAddUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Adds an empty UV channel at the end of the existing channels on the given LOD of a StaticMesh.\n@param       StaticMesh                      Static mesh on which to add a UV channel.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@return true if a UV channel was added." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "AddUVChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventAddUVChannel_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics
	{
		struct EditorStaticMeshLibrary_eventEnableSectionCastShadow_Parms
		{
			UStaticMesh* StaticMesh;
			bool bCastShadow;
			int32 LODIndex;
			int32 SectionIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventEnableSectionCastShadow_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventEnableSectionCastShadow_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventEnableSectionCastShadow_Parms*)Obj)->bCastShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_bCastShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastShadow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventEnableSectionCastShadow_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventEnableSectionCastShadow_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_bCastShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Enables/disables mesh section shadow casting for a specific LOD.\n@param       StaticMesh                      Static mesh to Enables/disables shadow casting from.\n@param       bCastShadow                     If the section should cast shadow.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       SectionIndex            Index of the StaticMesh Section." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "EnableSectionCastShadow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventEnableSectionCastShadow_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics
	{
		struct EditorStaticMeshLibrary_eventEnableSectionCollision_Parms
		{
			UStaticMesh* StaticMesh;
			bool bCollisionEnabled;
			int32 LODIndex;
			int32 SectionIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static void NewProp_bCollisionEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCollisionEnabled;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventEnableSectionCollision_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventEnableSectionCollision_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_bCollisionEnabled_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventEnableSectionCollision_Parms*)Obj)->bCollisionEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_bCollisionEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bCollisionEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventEnableSectionCollision_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_bCollisionEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventEnableSectionCollision_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_bCollisionEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Enables/disables mesh section collision for a specific LOD.\n@param       StaticMesh                      Static mesh to Enables/disables collisions from.\n@param       bCollisionEnabled       If the collision is enabled or not.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       SectionIndex            Index of the StaticMesh Section." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "EnableSectionCollision", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventEnableSectionCollision_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics
	{
		struct EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 UVChannelIndex;
			FVector Position;
			FRotator Orientation;
			FVector Size;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Struct, "Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_UVChannelIndex = { UE4CodeGen_Private::EPropertyClass::Int, "UVChannelIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms, UVChannelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_UVChannelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Generates box UV mapping in the specified UV channel on the given LOD of a StaticMesh.\n@param       StaticMesh                      Static mesh on which to generate the UV mapping.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       UVChannelIndex          Channel where to save the UV mapping.\n@param       Position                        Position of the center of the projection gizmo.\n@param       Orientation                     Rotation to apply to the projection gizmo.\n@param       Size                            The size of the box projection gizmo.\n@return true if the UV mapping was generated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "GenerateBoxUVChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics
	{
		struct EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 UVChannelIndex;
			FVector Position;
			FRotator Orientation;
			FVector2D Tiling;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Tiling_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Tiling = { UE4CodeGen_Private::EPropertyClass::Struct, "Tiling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms, Tiling), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Tiling_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Tiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_UVChannelIndex = { UE4CodeGen_Private::EPropertyClass::Int, "UVChannelIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms, UVChannelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Tiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_UVChannelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Generates cylindrical UV mapping in the specified UV channel on the given LOD of a StaticMesh.\n@param       StaticMesh                      Static mesh on which to generate the UV mapping.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       UVChannelIndex          Channel where to save the UV mapping.\n@param       Position                        Position of the center of the projection gizmo.\n@param       Orientation                     Rotation to apply to the projection gizmo.\n@param       Tiling                          The UV tiling to use to generate the UV mapping.\n@return true if the UV mapping was generated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "GenerateCylindricalUVChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics
	{
		struct EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 UVChannelIndex;
			FVector Position;
			FRotator Orientation;
			FVector2D Tiling;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Tiling_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Tiling = { UE4CodeGen_Private::EPropertyClass::Struct, "Tiling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms, Tiling), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Tiling_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Tiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_UVChannelIndex = { UE4CodeGen_Private::EPropertyClass::Int, "UVChannelIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms, UVChannelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Tiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_UVChannelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Generates planar UV mapping in the specified UV channel on the given LOD of a StaticMesh.\n@param       StaticMesh                      Static mesh on which to generate the UV mapping.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       UVChannelIndex          Channel where to save the UV mapping.\n@param       Position                        Position of the center of the projection gizmo.\n@param       Orientation                     Rotation to apply to the projection gizmo.\n@param       Tiling                          The UV tiling to use to generate the UV mapping.\n@return true if the UV mapping was generated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "GeneratePlanarUVChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity_Statics
	{
		struct EditorStaticMeshLibrary_eventGetCollisionComplexity_Parms
		{
			UStaticMesh* StaticMesh;
			TEnumAsByte<ECollisionTraceFlag> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetCollisionComplexity_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionTraceFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetCollisionComplexity_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Get the Collision Trace behavior of a static mesh\n@param       StaticMesh                              Mesh to query on.\n@return the Collision Trace behavior." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "GetCollisionComplexity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(EditorStaticMeshLibrary_eventGetCollisionComplexity_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount_Statics
	{
		struct EditorStaticMeshLibrary_eventGetConvexCollisionCount_Parms
		{
			UStaticMesh* StaticMesh;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetConvexCollisionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetConvexCollisionCount_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Get number of convex collisions present on a static mesh.\n@param       StaticMesh                              Mesh to query on.\n@return An integer representing the number of convex collisions on the input static mesh.\nAn negative value indicates that the command could not be executed. See log for explanation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "GetConvexCollisionCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventGetConvexCollisionCount_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount_Statics
	{
		struct EditorStaticMeshLibrary_eventGetLodCount_Parms
		{
			UStaticMesh* StaticMesh;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetLodCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetLodCount_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Get number of LODs present on a static mesh.\n@param       StaticMesh                              Mesh to process.\n@return the number of LODs present on the input mesh.\nAn negative value indicates that the command could not be executed. See log for explanation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "GetLodCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventGetLodCount_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes_Statics
	{
		struct EditorStaticMeshLibrary_eventGetLodScreenSizes_Parms
		{
			UStaticMesh* StaticMesh;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetLodScreenSizes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetLodScreenSizes_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Get an array of LOD screen sizes for evaluation.\n@param       StaticMesh                      Mesh to process.\n@return array of LOD screen sizes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "GetLodScreenSizes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(EditorStaticMeshLibrary_eventGetLodScreenSizes_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts_Statics
	{
		struct EditorStaticMeshLibrary_eventGetNumberVerts_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetNumberVerts_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts_Statics::NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetNumberVerts_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetNumberVerts_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Get number of StaticMesh verts for an LOD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "GetNumberVerts", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(EditorStaticMeshLibrary_eventGetNumberVerts_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels_Statics
	{
		struct EditorStaticMeshLibrary_eventGetNumUVChannels_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetNumUVChannels_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels_Statics::NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetNumUVChannels_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetNumUVChannels_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Returns the number of UV channels for the given LOD of a StaticMesh.\n@param       StaticMesh                      Static mesh to query.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@return the number of UV channels." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "GetNumUVChannels", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventGetNumUVChannels_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount_Statics
	{
		struct EditorStaticMeshLibrary_eventGetSimpleCollisionCount_Parms
		{
			UStaticMesh* StaticMesh;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetSimpleCollisionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetSimpleCollisionCount_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Get number of simple collisions present on a static mesh.\n@param       StaticMesh                              Mesh to query on.\n@return An integer representing the number of simple collisions on the input static mesh.\nAn negative value indicates that the command could not be executed. See log for explanation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "GetSimpleCollisionCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventGetSimpleCollisionCount_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics
	{
		struct EditorStaticMeshLibrary_eventHasInstanceVertexColors_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventHasInstanceVertexColors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventHasInstanceVertexColors_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_StaticMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventHasInstanceVertexColors_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_StaticMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Check whether a static mesh component has vertex colors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "HasInstanceVertexColors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(EditorStaticMeshLibrary_eventHasInstanceVertexColors_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors_Statics
	{
		struct EditorStaticMeshLibrary_eventHasVertexColors_Parms
		{
			UStaticMesh* StaticMesh;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventHasVertexColors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventHasVertexColors_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventHasVertexColors_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Check whether a static mesh has vertex colors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "HasVertexColors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(EditorStaticMeshLibrary_eventHasVertexColors_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics
	{
		struct EditorStaticMeshLibrary_eventInsertUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 UVChannelIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventInsertUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventInsertUVChannel_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_UVChannelIndex = { UE4CodeGen_Private::EPropertyClass::Int, "UVChannelIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventInsertUVChannel_Parms, UVChannelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventInsertUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventInsertUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_UVChannelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Inserts an empty UV channel at the specified channel index on the given LOD of a StaticMesh.\n@param       StaticMesh                      Static mesh on which to insert a UV channel.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       UVChannelIndex          Index where to insert the UV channel.\n@return true if a UV channel was added." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "InsertUVChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventInsertUVChannel_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics
	{
		struct EditorStaticMeshLibrary_eventIsSectionCollisionEnabled_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 SectionIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventIsSectionCollisionEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventIsSectionCollisionEnabled_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventIsSectionCollisionEnabled_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventIsSectionCollisionEnabled_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventIsSectionCollisionEnabled_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Checks if a specific LOD mesh section has collision.\n@param       StaticMesh                      Static mesh to remove collisions from.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       SectionIndex            Index of the StaticMesh Section.\n@return True is the collision is enabled for the specified LOD of the StaticMesh section." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "IsSectionCollisionEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(EditorStaticMeshLibrary_eventIsSectionCollisionEnabled_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions_Statics
	{
		struct EditorStaticMeshLibrary_eventRemoveCollisions_Parms
		{
			UStaticMesh* StaticMesh;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventRemoveCollisions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventRemoveCollisions_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventRemoveCollisions_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Remove collisions from a static mesh.\nThis method replicates what is done when invoking menu entries \"Collision > Remove Collision\" in the Mesh Editor.\n@param       StaticMesh                      Static mesh to remove collisions from.\n@return A boolean indicating if the removal was successful or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "RemoveCollisions", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventRemoveCollisions_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods_Statics
	{
		struct EditorStaticMeshLibrary_eventRemoveLods_Parms
		{
			UStaticMesh* StaticMesh;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventRemoveLods_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventRemoveLods_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventRemoveLods_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Remove LODs on a static mesh except LOD 0.\n@param       StaticMesh                      Mesh to remove LOD from.\n@return A boolean indicating if the removal was successful, true, or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "RemoveLods", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventRemoveLods_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics
	{
		struct EditorStaticMeshLibrary_eventRemoveUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 UVChannelIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventRemoveUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventRemoveUVChannel_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_UVChannelIndex = { UE4CodeGen_Private::EPropertyClass::Int, "UVChannelIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventRemoveUVChannel_Parms, UVChannelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventRemoveUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventRemoveUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_UVChannelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Removes the UV channel at the specified channel index on the given LOD of a StaticMesh.\n@param       StaticMesh                      Static mesh on which to remove the UV channel.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       UVChannelIndex          Index where to remove the UV channel.\n@return true if the UV channel was removed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "RemoveUVChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventRemoveUVChannel_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics
	{
		struct EditorStaticMeshLibrary_eventResetMaterialSlotNames_Parms
		{
			UStaticMesh* StaticMesh;
			FName newSlotname;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_newSlotname;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventResetMaterialSlotNames_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventResetMaterialSlotNames_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::NewProp_newSlotname = { UE4CodeGen_Private::EPropertyClass::Name, "newSlotname", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventResetMaterialSlotNames_Parms, newSlotname), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventResetMaterialSlotNames_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::NewProp_newSlotname,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "ResetMaterialSlotNames", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventResetMaterialSlotNames_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics
	{
		struct EditorStaticMeshLibrary_eventResetSectionmaterialByIndex_Parms
		{
			UStaticMesh* StaticMesh;
			int32 MaterialIndex;
			int32 LODIndex;
			int32 SectionIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventResetSectionmaterialByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventResetSectionmaterialByIndex_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventResetSectionmaterialByIndex_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventResetSectionmaterialByIndex_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::NewProp_MaterialIndex = { UE4CodeGen_Private::EPropertyClass::Int, "MaterialIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventResetSectionmaterialByIndex_Parms, MaterialIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventResetSectionmaterialByIndex_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::NewProp_MaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "ResetSectionmaterialByIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventResetSectionmaterialByIndex_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics
	{
		struct EditorStaticMeshLibrary_eventResetSectionmaterialBySlotName_Parms
		{
			UStaticMesh* StaticMesh;
			FName SlotName;
			int32 LODIndex;
			int32 SectionIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventResetSectionmaterialBySlotName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventResetSectionmaterialBySlotName_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventResetSectionmaterialBySlotName_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventResetSectionmaterialBySlotName_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::NewProp_SlotName = { UE4CodeGen_Private::EPropertyClass::Name, "SlotName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventResetSectionmaterialBySlotName_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventResetSectionmaterialBySlotName_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "ResetSectionmaterialBySlotName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventResetSectionmaterialBySlotName_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess_Statics
	{
		struct EditorStaticMeshLibrary_eventSetAllowCPUAccess_Parms
		{
			UStaticMesh* StaticMesh;
			bool bAllowCPUAccess;
		};
		static void NewProp_bAllowCPUAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowCPUAccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess_Statics::NewProp_bAllowCPUAccess_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventSetAllowCPUAccess_Parms*)Obj)->bAllowCPUAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess_Statics::NewProp_bAllowCPUAccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowCPUAccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventSetAllowCPUAccess_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess_Statics::NewProp_bAllowCPUAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetAllowCPUAccess_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess_Statics::NewProp_bAllowCPUAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Sets StaticMeshFlag bAllowCPUAccess" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "SetAllowCPUAccess", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventSetAllowCPUAccess_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics
	{
		struct EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms
		{
			UStaticMesh* StaticMesh;
			int32 HullCount;
			int32 MaxHullVerts;
			int32 HullPrecision;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HullPrecision;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHullVerts;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HullCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_HullPrecision = { UE4CodeGen_Private::EPropertyClass::Int, "HullPrecision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms, HullPrecision), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_MaxHullVerts = { UE4CodeGen_Private::EPropertyClass::Int, "MaxHullVerts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms, MaxHullVerts), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_HullCount = { UE4CodeGen_Private::EPropertyClass::Int, "HullCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms, HullCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_HullPrecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_MaxHullVerts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_HullCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Add a convex collision to a static mesh.\nAny existing collisions will be removed from the static mesh.\nThis method replicates what is done when invoking menu entry \"Collision > Auto Convex Collision\" in the Mesh Editor.\n@param       StaticMesh                              Static mesh to add convex collision on.\n@param       HullCount                               Maximum number of convex pieces that will be created. Must be positive.\n@param       MaxHullVerts                    Maximum number of vertices allowed for any generated convex hull.\n@param       HullPrecision                   Number of voxels to use when generating collision. Must be positive.\n@return A boolean indicating if the addition was successful or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "SetConvexDecompositionCollisions", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics
	{
		struct EditorStaticMeshLibrary_eventSetGenerateLightmapUVs_Parms
		{
			UStaticMesh* StaticMesh;
			bool bGenerateLightmapUVs;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventSetGenerateLightmapUVs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventSetGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventSetGenerateLightmapUVs_Parms*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_bGenerateLightmapUVs = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateLightmapUVs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventSetGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetGenerateLightmapUVs_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_bGenerateLightmapUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ScriptName", "SetGenerateLightmapUv" },
		{ "ToolTip", "Set Generate Lightmap UVs for StaticMesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "SetGenerateLightmapUVs", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventSetGenerateLightmapUVs_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics
	{
		struct EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms
		{
			UStaticMesh* DestinationStaticMesh;
			int32 DestinationLodIndex;
			UStaticMesh* SourceStaticMesh;
			int32 SourceLodIndex;
			bool bReuseExistingMaterialSlots;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bReuseExistingMaterialSlots_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReuseExistingMaterialSlots;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceLodIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceStaticMesh;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DestinationLodIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationStaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_bReuseExistingMaterialSlots_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms*)Obj)->bReuseExistingMaterialSlots = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_bReuseExistingMaterialSlots = { UE4CodeGen_Private::EPropertyClass::Bool, "bReuseExistingMaterialSlots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms), &Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_bReuseExistingMaterialSlots_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_SourceLodIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SourceLodIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms, SourceLodIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_SourceStaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SourceStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms, SourceStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_DestinationLodIndex = { UE4CodeGen_Private::EPropertyClass::Int, "DestinationLodIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms, DestinationLodIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_DestinationStaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "DestinationStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms, DestinationStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_bReuseExistingMaterialSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_SourceLodIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_SourceStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_DestinationLodIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_DestinationStaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Adds or create a LOD at DestinationLodIndex using the geometry from SourceStaticMesh SourceLodIndex\n@param       DestinationStaticMesh           The static mesh to set the LOD in.\n@param       DestinationLodIndex                     The index of the LOD to set.\n@param       SourceStaticMesh                        The static mesh to get the LOD from.\n@param       SourceLodIndex                          The index of the LOD to get.\n@param       bReuseExistingMaterialSlots     If true, sections from SourceStaticMesh will be remapped to match the material slots of DestinationStaticMesh\n                                                                                       when they have the same material assigned. If false, all material slots of SourceStaticMesh will be appended in DestinationStaticMesh.\n@return      The index of the LOD that was set. It can be different than DestinationLodIndex if it wasn't a valid index.\n                     A negative value indicates that the LOD was not set. See log for explanation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "SetLodFromStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics
	{
		struct EditorStaticMeshLibrary_eventSetLods_Parms
		{
			UStaticMesh* StaticMesh;
			FEditorScriptingMeshReductionOptions ReductionOptions;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReductionOptions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLods_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::NewProp_ReductionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::NewProp_ReductionOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "ReductionOptions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLods_Parms, ReductionOptions), Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::NewProp_ReductionOptions_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::NewProp_ReductionOptions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLods_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::NewProp_ReductionOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Remove then add LODs on a static mesh.\nThe static mesh must have at least LOD 0.\nThe LOD 0 of the static mesh is kept after removal.\nThe build settings of LOD 0 will be applied to all subsequent LODs.\n@param       StaticMesh                              Mesh to process.\n@param       ReductionOptions                Options on how to generate LODs on the mesh.\n@return the number of LODs generated on the input mesh.\nAn negative value indicates that the reduction could not be performed. See log for explanation.\nNo action will be performed if ReductionOptions.ReductionSettings is empty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorStaticMeshLibrary, "SetLods", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(EditorStaticMeshLibrary_eventSetLods_Parms), Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorStaticMeshLibrary_NoRegister()
	{
		return UEditorStaticMeshLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorStaticMeshLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorStaticMeshLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorStaticMeshLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_AddSimpleCollisions, "AddSimpleCollisions" }, // 918844331
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_AddUVChannel, "AddUVChannel" }, // 4085044718
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCastShadow, "EnableSectionCastShadow" }, // 3744238332
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_EnableSectionCollision, "EnableSectionCollision" }, // 1919138891
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateBoxUVChannel, "GenerateBoxUVChannel" }, // 1955135247
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_GenerateCylindricalUVChannel, "GenerateCylindricalUVChannel" }, // 1799413938
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_GeneratePlanarUVChannel, "GeneratePlanarUVChannel" }, // 304360546
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_GetCollisionComplexity, "GetCollisionComplexity" }, // 1842469312
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_GetConvexCollisionCount, "GetConvexCollisionCount" }, // 466745187
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodCount, "GetLodCount" }, // 3920373903
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_GetLodScreenSizes, "GetLodScreenSizes" }, // 1078075275
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumberVerts, "GetNumberVerts" }, // 3179310732
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_GetNumUVChannels, "GetNumUVChannels" }, // 1218080274
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_GetSimpleCollisionCount, "GetSimpleCollisionCount" }, // 1164043923
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_HasInstanceVertexColors, "HasInstanceVertexColors" }, // 1550680650
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_HasVertexColors, "HasVertexColors" }, // 3638220041
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_InsertUVChannel, "InsertUVChannel" }, // 3946057551
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_IsSectionCollisionEnabled, "IsSectionCollisionEnabled" }, // 1055995429
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveCollisions, "RemoveCollisions" }, // 3924676355
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveLods, "RemoveLods" }, // 3365529187
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_RemoveUVChannel, "RemoveUVChannel" }, // 951269076
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetMaterialSlotNames, "ResetMaterialSlotNames" }, // 1998760578
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialByIndex, "ResetSectionmaterialByIndex" }, // 416676734
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_ResetSectionmaterialBySlotName, "ResetSectionmaterialBySlotName" }, // 2955385361
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_SetAllowCPUAccess, "SetAllowCPUAccess" }, // 4293742628
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_SetConvexDecompositionCollisions, "SetConvexDecompositionCollisions" }, // 2858469655
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_SetGenerateLightmapUVs, "SetGenerateLightmapUVs" }, // 3783782227
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLodFromStaticMesh, "SetLodFromStaticMesh" }, // 2522551461
		{ &Z_Construct_UFunction_UEditorStaticMeshLibrary_SetLods, "SetLods" }, // 3929763153
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStaticMeshLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorStaticMeshLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Utility class to altering and analyzing a StaticMesh and use the common functionalities of the Mesh Editor.\nThe editor should not be in play in editor mode." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorStaticMeshLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorStaticMeshLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorStaticMeshLibrary_Statics::ClassParams = {
		&UEditorStaticMeshLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEditorStaticMeshLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorStaticMeshLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorStaticMeshLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorStaticMeshLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorStaticMeshLibrary, 4250924367);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorStaticMeshLibrary(Z_Construct_UClass_UEditorStaticMeshLibrary, &UEditorStaticMeshLibrary::StaticClass, TEXT("/Script/EditorScriptingUtilities"), TEXT("UEditorStaticMeshLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorStaticMeshLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
