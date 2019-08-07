// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
 
struct FAssetData;
#ifdef EDITORSCRIPTINGUTILITIES_EditorAssetLibrary_generated_h
#error "EditorAssetLibrary.generated.h already included, missing '#pragma once' in EditorAssetLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorAssetLibrary_generated_h

#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSyncBrowserToObjects) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetPaths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorAssetLibrary::SyncBrowserToObjects(Z_Param_Out_AssetPaths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMetadataTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorAssetLibrary::RemoveMetadataTag(Z_Param_Object,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMetadataTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorAssetLibrary::SetMetadataTag(Z_Param_Object,Z_Param_Tag,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetadataTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UEditorAssetLibrary::GetMetadataTag(Z_Param_Object,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetadataTagValues) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,FString>*)Z_Param__Result=UEditorAssetLibrary::GetMetadataTagValues(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTagValues) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,FString>*)Z_Param__Result=UEditorAssetLibrary::GetTagValues(Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListAssetByTagValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TagName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TagValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UEditorAssetLibrary::ListAssetByTagValue(Z_Param_TagName,Z_Param_TagValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListAssets) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_GET_UBOOL(Z_Param_bRecursive); \
		P_GET_UBOOL(Z_Param_bIncludeFolder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UEditorAssetLibrary::ListAssets(Z_Param_DirectoryPath,Z_Param_bRecursive,Z_Param_bIncludeFolder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::MakeDirectory(Z_Param_DirectoryPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesDirectoryHaveAssets) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_GET_UBOOL(Z_Param_bRecursive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DoesDirectoryHaveAssets(Z_Param_DirectoryPath,Z_Param_bRecursive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesDirectoryExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DoesDirectoryExist(Z_Param_DirectoryPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty); \
		P_GET_UBOOL(Z_Param_bRecursive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::SaveDirectory(Z_Param_DirectoryPath,Z_Param_bOnlyIfIsDirty,Z_Param_bRecursive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetToSave); \
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::SaveAsset(Z_Param_AssetToSave,Z_Param_bOnlyIfIsDirty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveLoadedAssets) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToSave); \
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::SaveLoadedAssets(Z_Param_Out_AssetsToSave,Z_Param_bOnlyIfIsDirty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveLoadedAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_AssetToSave); \
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::SaveLoadedAsset(Z_Param_AssetToSave,Z_Param_bOnlyIfIsDirty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckoutDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_GET_UBOOL(Z_Param_bRecursive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::CheckoutDirectory(Z_Param_DirectoryPath,Z_Param_bRecursive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckoutAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetToCheckout); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::CheckoutAsset(Z_Param_AssetToCheckout); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckoutLoadedAssets) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToCheckout); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::CheckoutLoadedAssets(Z_Param_Out_AssetsToCheckout); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckoutLoadedAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_AssetToCheckout); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::CheckoutLoadedAsset(Z_Param_AssetToCheckout); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceDirectoryPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestinationDirectoryPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::RenameDirectory(Z_Param_SourceDirectoryPath,Z_Param_DestinationDirectoryPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceAssetPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestinationAssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::RenameAsset(Z_Param_SourceAssetPath,Z_Param_DestinationAssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameLoadedAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_SourceAsset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestinationAssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::RenameLoadedAsset(Z_Param_SourceAsset,Z_Param_DestinationAssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDuplicateDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceDirectoryPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestinationDirectoryPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DuplicateDirectory(Z_Param_SourceDirectoryPath,Z_Param_DestinationDirectoryPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDuplicateAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceAssetPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestinationAssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UEditorAssetLibrary::DuplicateAsset(Z_Param_SourceAssetPath,Z_Param_DestinationAssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDuplicateLoadedAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_SourceAsset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestinationAssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UEditorAssetLibrary::DuplicateLoadedAsset(Z_Param_SourceAsset,Z_Param_DestinationAssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DeleteDirectory(Z_Param_DirectoryPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPathToDelete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DeleteAsset(Z_Param_AssetPathToDelete); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteLoadedAssets) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToDelete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DeleteLoadedAssets(Z_Param_Out_AssetsToDelete); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteLoadedAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_AssetToDelete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DeleteLoadedAsset(Z_Param_AssetToDelete); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsolidateAssets) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_AssetToConsolidateTo); \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToConsolidate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::ConsolidateAssets(Z_Param_AssetToConsolidateTo,Z_Param_Out_AssetsToConsolidate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPackageReferencersForAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_GET_UBOOL(Z_Param_bLoadAssetsToConfirm); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UEditorAssetLibrary::FindPackageReferencersForAsset(Z_Param_AssetPath,Z_Param_bLoadAssetsToConfirm); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoAssetsExist) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetPaths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DoAssetsExist(Z_Param_Out_AssetPaths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesAssetExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DoesAssetExist(Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindAssetData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAssetData*)Z_Param__Result=UEditorAssetLibrary::FindAssetData(Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathNameForLoadedAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_LoadedAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UEditorAssetLibrary::GetPathNameForLoadedAsset(Z_Param_LoadedAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadBlueprintClass) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UEditorAssetLibrary::LoadBlueprintClass(Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UEditorAssetLibrary::LoadAsset(Z_Param_AssetPath); \
		P_NATIVE_END; \
	}


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSyncBrowserToObjects) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetPaths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorAssetLibrary::SyncBrowserToObjects(Z_Param_Out_AssetPaths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMetadataTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorAssetLibrary::RemoveMetadataTag(Z_Param_Object,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMetadataTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorAssetLibrary::SetMetadataTag(Z_Param_Object,Z_Param_Tag,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetadataTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UEditorAssetLibrary::GetMetadataTag(Z_Param_Object,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetadataTagValues) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,FString>*)Z_Param__Result=UEditorAssetLibrary::GetMetadataTagValues(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTagValues) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,FString>*)Z_Param__Result=UEditorAssetLibrary::GetTagValues(Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListAssetByTagValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TagName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TagValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UEditorAssetLibrary::ListAssetByTagValue(Z_Param_TagName,Z_Param_TagValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListAssets) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_GET_UBOOL(Z_Param_bRecursive); \
		P_GET_UBOOL(Z_Param_bIncludeFolder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UEditorAssetLibrary::ListAssets(Z_Param_DirectoryPath,Z_Param_bRecursive,Z_Param_bIncludeFolder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::MakeDirectory(Z_Param_DirectoryPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesDirectoryHaveAssets) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_GET_UBOOL(Z_Param_bRecursive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DoesDirectoryHaveAssets(Z_Param_DirectoryPath,Z_Param_bRecursive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesDirectoryExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DoesDirectoryExist(Z_Param_DirectoryPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty); \
		P_GET_UBOOL(Z_Param_bRecursive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::SaveDirectory(Z_Param_DirectoryPath,Z_Param_bOnlyIfIsDirty,Z_Param_bRecursive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetToSave); \
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::SaveAsset(Z_Param_AssetToSave,Z_Param_bOnlyIfIsDirty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveLoadedAssets) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToSave); \
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::SaveLoadedAssets(Z_Param_Out_AssetsToSave,Z_Param_bOnlyIfIsDirty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveLoadedAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_AssetToSave); \
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::SaveLoadedAsset(Z_Param_AssetToSave,Z_Param_bOnlyIfIsDirty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckoutDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_GET_UBOOL(Z_Param_bRecursive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::CheckoutDirectory(Z_Param_DirectoryPath,Z_Param_bRecursive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckoutAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetToCheckout); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::CheckoutAsset(Z_Param_AssetToCheckout); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckoutLoadedAssets) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToCheckout); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::CheckoutLoadedAssets(Z_Param_Out_AssetsToCheckout); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckoutLoadedAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_AssetToCheckout); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::CheckoutLoadedAsset(Z_Param_AssetToCheckout); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceDirectoryPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestinationDirectoryPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::RenameDirectory(Z_Param_SourceDirectoryPath,Z_Param_DestinationDirectoryPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceAssetPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestinationAssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::RenameAsset(Z_Param_SourceAssetPath,Z_Param_DestinationAssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameLoadedAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_SourceAsset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestinationAssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::RenameLoadedAsset(Z_Param_SourceAsset,Z_Param_DestinationAssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDuplicateDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceDirectoryPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestinationDirectoryPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DuplicateDirectory(Z_Param_SourceDirectoryPath,Z_Param_DestinationDirectoryPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDuplicateAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceAssetPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestinationAssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UEditorAssetLibrary::DuplicateAsset(Z_Param_SourceAssetPath,Z_Param_DestinationAssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDuplicateLoadedAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_SourceAsset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestinationAssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UEditorAssetLibrary::DuplicateLoadedAsset(Z_Param_SourceAsset,Z_Param_DestinationAssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DeleteDirectory(Z_Param_DirectoryPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPathToDelete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DeleteAsset(Z_Param_AssetPathToDelete); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteLoadedAssets) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToDelete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DeleteLoadedAssets(Z_Param_Out_AssetsToDelete); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteLoadedAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_AssetToDelete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DeleteLoadedAsset(Z_Param_AssetToDelete); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsolidateAssets) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_AssetToConsolidateTo); \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToConsolidate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::ConsolidateAssets(Z_Param_AssetToConsolidateTo,Z_Param_Out_AssetsToConsolidate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPackageReferencersForAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_GET_UBOOL(Z_Param_bLoadAssetsToConfirm); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UEditorAssetLibrary::FindPackageReferencersForAsset(Z_Param_AssetPath,Z_Param_bLoadAssetsToConfirm); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoAssetsExist) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetPaths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DoAssetsExist(Z_Param_Out_AssetPaths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesAssetExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DoesAssetExist(Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindAssetData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAssetData*)Z_Param__Result=UEditorAssetLibrary::FindAssetData(Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathNameForLoadedAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_LoadedAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UEditorAssetLibrary::GetPathNameForLoadedAsset(Z_Param_LoadedAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadBlueprintClass) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UEditorAssetLibrary::LoadBlueprintClass(Z_Param_AssetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UEditorAssetLibrary::LoadAsset(Z_Param_AssetPath); \
		P_NATIVE_END; \
	}


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorAssetLibrary(); \
	friend struct Z_Construct_UClass_UEditorAssetLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorAssetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorAssetLibrary)


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUEditorAssetLibrary(); \
	friend struct Z_Construct_UClass_UEditorAssetLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorAssetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorAssetLibrary)


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorAssetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorAssetLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorAssetLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAssetLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorAssetLibrary(UEditorAssetLibrary&&); \
	NO_API UEditorAssetLibrary(const UEditorAssetLibrary&); \
public:


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorAssetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorAssetLibrary(UEditorAssetLibrary&&); \
	NO_API UEditorAssetLibrary(const UEditorAssetLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorAssetLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAssetLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorAssetLibrary)


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_PRIVATE_PROPERTY_OFFSET
#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_23_PROLOG
#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_RPC_WRAPPERS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_INCLASS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_INCLASS_NO_PURE_DECLS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<class UEditorAssetLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
