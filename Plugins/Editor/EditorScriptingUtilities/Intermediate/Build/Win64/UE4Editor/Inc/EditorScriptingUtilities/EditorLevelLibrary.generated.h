// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AStaticMeshActor;
struct FEditorScriptingCreateProxyMeshActorOptions;
struct FEditorScriptingMergeStaticMeshActorsOptions;
struct FEditorScriptingJoinStaticMeshActorsOptions;
class AActor;
class UStaticMesh;
class UStaticMeshComponent;
class UMaterialInterface;
class UMeshComponent;
class UWorld;
struct FVector;
struct FRotator;
class UObject;
class UActorComponent;
#ifdef EDITORSCRIPTINGUTILITIES_EditorLevelLibrary_generated_h
#error "EditorLevelLibrary.generated.h already included, missing '#pragma once' in EditorLevelLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorLevelLibrary_generated_h

#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorScriptingJoinStaticMeshActorsOptions Super;


template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<struct FEditorScriptingCreateProxyMeshActorOptions>();

#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorScriptingJoinStaticMeshActorsOptions Super;


template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<struct FEditorScriptingMergeStaticMeshActorsOptions>();

#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<struct FEditorScriptingJoinStaticMeshActorsOptions>();

#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyMeshActor) \
	{ \
		P_GET_TARRAY_REF(AStaticMeshActor*,Z_Param_Out_ActorsToMerge); \
		P_GET_STRUCT_REF(FEditorScriptingCreateProxyMeshActorOptions,Z_Param_Out_MergeOptions); \
		P_GET_OBJECT_REF(AStaticMeshActor,Z_Param_Out_OutMergedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::CreateProxyMeshActor(Z_Param_Out_ActorsToMerge,Z_Param_Out_MergeOptions,Z_Param_Out_OutMergedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeStaticMeshActors) \
	{ \
		P_GET_TARRAY_REF(AStaticMeshActor*,Z_Param_Out_ActorsToMerge); \
		P_GET_STRUCT_REF(FEditorScriptingMergeStaticMeshActorsOptions,Z_Param_Out_MergeOptions); \
		P_GET_OBJECT_REF(AStaticMeshActor,Z_Param_Out_OutMergedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::MergeStaticMeshActors(Z_Param_Out_ActorsToMerge,Z_Param_Out_MergeOptions,Z_Param_Out_OutMergedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinStaticMeshActors) \
	{ \
		P_GET_TARRAY_REF(AStaticMeshActor*,Z_Param_Out_ActorsToJoin); \
		P_GET_STRUCT_REF(FEditorScriptingJoinStaticMeshActorsOptions,Z_Param_Out_JoinOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UEditorLevelLibrary::JoinStaticMeshActors(Z_Param_Out_ActorsToJoin,Z_Param_Out_JoinOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StaticMeshPackagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorLevelLibrary::ConvertActors(Z_Param_Out_Actors,Z_Param_ActorClass,Z_Param_StaticMeshPackagePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceMeshComponentsMeshesOnActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors); \
		P_GET_OBJECT(UStaticMesh,Z_Param_MeshToBeReplaced); \
		P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLevelLibrary::ReplaceMeshComponentsMeshesOnActors(Z_Param_Out_Actors,Z_Param_MeshToBeReplaced,Z_Param_NewMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceMeshComponentsMeshes) \
	{ \
		P_GET_TARRAY_REF(UStaticMeshComponent*,Z_Param_Out_MeshComponents); \
		P_GET_OBJECT(UStaticMesh,Z_Param_MeshToBeReplaced); \
		P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLevelLibrary::ReplaceMeshComponentsMeshes(Z_Param_Out_MeshComponents,Z_Param_MeshToBeReplaced,Z_Param_NewMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceMeshComponentsMaterialsOnActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialToBeReplaced); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLevelLibrary::ReplaceMeshComponentsMaterialsOnActors(Z_Param_Out_Actors,Z_Param_MaterialToBeReplaced,Z_Param_NewMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceMeshComponentsMaterials) \
	{ \
		P_GET_TARRAY_REF(UMeshComponent*,Z_Param_Out_MeshComponents); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialToBeReplaced); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLevelLibrary::ReplaceMeshComponentsMaterials(Z_Param_Out_MeshComponents,Z_Param_MaterialToBeReplaced,Z_Param_NewMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentLevelByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_LevelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::SetCurrentLevelByName(Z_Param_LevelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveAllDirtyLevels) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::SaveAllDirtyLevels(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveCurrentLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::SaveCurrentLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadLevel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::LoadLevel(Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewLevelFromTemplate) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TemplateAssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::NewLevelFromTemplate(Z_Param_AssetPath,Z_Param_TemplateAssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewLevel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::NewLevel(Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEditorWorld) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UEditorLevelLibrary::GetEditorWorld(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::DestroyActor(Z_Param_ActorToDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnActorFromClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UEditorLevelLibrary::SpawnActorFromClass(Z_Param_ActorClass,Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnActorFromObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToUse); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UEditorLevelLibrary::SpawnActorFromObject(Z_Param_ObjectToUse,Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedLevelActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToSelect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLevelLibrary::SetSelectedLevelActors(Z_Param_Out_ActorsToSelect); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedLevelActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorLevelLibrary::GetSelectedLevelActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllLevelActorsComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UActorComponent*>*)Z_Param__Result=UEditorLevelLibrary::GetAllLevelActorsComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllLevelActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorLevelLibrary::GetAllLevelActors(); \
		P_NATIVE_END; \
	}


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyMeshActor) \
	{ \
		P_GET_TARRAY_REF(AStaticMeshActor*,Z_Param_Out_ActorsToMerge); \
		P_GET_STRUCT_REF(FEditorScriptingCreateProxyMeshActorOptions,Z_Param_Out_MergeOptions); \
		P_GET_OBJECT_REF(AStaticMeshActor,Z_Param_Out_OutMergedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::CreateProxyMeshActor(Z_Param_Out_ActorsToMerge,Z_Param_Out_MergeOptions,Z_Param_Out_OutMergedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeStaticMeshActors) \
	{ \
		P_GET_TARRAY_REF(AStaticMeshActor*,Z_Param_Out_ActorsToMerge); \
		P_GET_STRUCT_REF(FEditorScriptingMergeStaticMeshActorsOptions,Z_Param_Out_MergeOptions); \
		P_GET_OBJECT_REF(AStaticMeshActor,Z_Param_Out_OutMergedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::MergeStaticMeshActors(Z_Param_Out_ActorsToMerge,Z_Param_Out_MergeOptions,Z_Param_Out_OutMergedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinStaticMeshActors) \
	{ \
		P_GET_TARRAY_REF(AStaticMeshActor*,Z_Param_Out_ActorsToJoin); \
		P_GET_STRUCT_REF(FEditorScriptingJoinStaticMeshActorsOptions,Z_Param_Out_JoinOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UEditorLevelLibrary::JoinStaticMeshActors(Z_Param_Out_ActorsToJoin,Z_Param_Out_JoinOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StaticMeshPackagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorLevelLibrary::ConvertActors(Z_Param_Out_Actors,Z_Param_ActorClass,Z_Param_StaticMeshPackagePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceMeshComponentsMeshesOnActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors); \
		P_GET_OBJECT(UStaticMesh,Z_Param_MeshToBeReplaced); \
		P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLevelLibrary::ReplaceMeshComponentsMeshesOnActors(Z_Param_Out_Actors,Z_Param_MeshToBeReplaced,Z_Param_NewMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceMeshComponentsMeshes) \
	{ \
		P_GET_TARRAY_REF(UStaticMeshComponent*,Z_Param_Out_MeshComponents); \
		P_GET_OBJECT(UStaticMesh,Z_Param_MeshToBeReplaced); \
		P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLevelLibrary::ReplaceMeshComponentsMeshes(Z_Param_Out_MeshComponents,Z_Param_MeshToBeReplaced,Z_Param_NewMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceMeshComponentsMaterialsOnActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialToBeReplaced); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLevelLibrary::ReplaceMeshComponentsMaterialsOnActors(Z_Param_Out_Actors,Z_Param_MaterialToBeReplaced,Z_Param_NewMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceMeshComponentsMaterials) \
	{ \
		P_GET_TARRAY_REF(UMeshComponent*,Z_Param_Out_MeshComponents); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialToBeReplaced); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLevelLibrary::ReplaceMeshComponentsMaterials(Z_Param_Out_MeshComponents,Z_Param_MaterialToBeReplaced,Z_Param_NewMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentLevelByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_LevelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::SetCurrentLevelByName(Z_Param_LevelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveAllDirtyLevels) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::SaveAllDirtyLevels(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveCurrentLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::SaveCurrentLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadLevel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::LoadLevel(Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewLevelFromTemplate) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TemplateAssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::NewLevelFromTemplate(Z_Param_AssetPath,Z_Param_TemplateAssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewLevel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::NewLevel(Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEditorWorld) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UEditorLevelLibrary::GetEditorWorld(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorLevelLibrary::DestroyActor(Z_Param_ActorToDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnActorFromClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UEditorLevelLibrary::SpawnActorFromClass(Z_Param_ActorClass,Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnActorFromObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToUse); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UEditorLevelLibrary::SpawnActorFromObject(Z_Param_ObjectToUse,Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedLevelActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToSelect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorLevelLibrary::SetSelectedLevelActors(Z_Param_Out_ActorsToSelect); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedLevelActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorLevelLibrary::GetSelectedLevelActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllLevelActorsComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UActorComponent*>*)Z_Param__Result=UEditorLevelLibrary::GetAllLevelActorsComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllLevelActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorLevelLibrary::GetAllLevelActors(); \
		P_NATIVE_END; \
	}


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorLevelLibrary(); \
	friend struct Z_Construct_UClass_UEditorLevelLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorLevelLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorLevelLibrary)


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUEditorLevelLibrary(); \
	friend struct Z_Construct_UClass_UEditorLevelLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorLevelLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorLevelLibrary)


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLevelLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLevelLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLevelLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLevelLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorLevelLibrary(UEditorLevelLibrary&&); \
	NO_API UEditorLevelLibrary(const UEditorLevelLibrary&); \
public:


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLevelLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorLevelLibrary(UEditorLevelLibrary&&); \
	NO_API UEditorLevelLibrary(const UEditorLevelLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLevelLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLevelLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLevelLibrary)


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_PRIVATE_PROPERTY_OFFSET
#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_81_PROLOG
#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_PRIVATE_PROPERTY_OFFSET \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_RPC_WRAPPERS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_INCLASS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_PRIVATE_PROPERTY_OFFSET \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_INCLASS_NO_PURE_DECLS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<class UEditorLevelLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
