// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingUtilities/Public/EditorAssetLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorAssetLibrary() {}
// Cross Module References
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorAssetLibrary_NoRegister();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorAssetLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingUtilities();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_ListAssets();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag();
	EDITORSCRIPTINGUTILITIES_API UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects();
// End Cross Module References
	void UEditorAssetLibrary::StaticRegisterNativesUEditorAssetLibrary()
	{
		UClass* Class = UEditorAssetLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckoutAsset", &UEditorAssetLibrary::execCheckoutAsset },
			{ "CheckoutDirectory", &UEditorAssetLibrary::execCheckoutDirectory },
			{ "CheckoutLoadedAsset", &UEditorAssetLibrary::execCheckoutLoadedAsset },
			{ "CheckoutLoadedAssets", &UEditorAssetLibrary::execCheckoutLoadedAssets },
			{ "ConsolidateAssets", &UEditorAssetLibrary::execConsolidateAssets },
			{ "DeleteAsset", &UEditorAssetLibrary::execDeleteAsset },
			{ "DeleteDirectory", &UEditorAssetLibrary::execDeleteDirectory },
			{ "DeleteLoadedAsset", &UEditorAssetLibrary::execDeleteLoadedAsset },
			{ "DeleteLoadedAssets", &UEditorAssetLibrary::execDeleteLoadedAssets },
			{ "DoAssetsExist", &UEditorAssetLibrary::execDoAssetsExist },
			{ "DoesAssetExist", &UEditorAssetLibrary::execDoesAssetExist },
			{ "DoesDirectoryExist", &UEditorAssetLibrary::execDoesDirectoryExist },
			{ "DoesDirectoryHaveAssets", &UEditorAssetLibrary::execDoesDirectoryHaveAssets },
			{ "DuplicateAsset", &UEditorAssetLibrary::execDuplicateAsset },
			{ "DuplicateDirectory", &UEditorAssetLibrary::execDuplicateDirectory },
			{ "DuplicateLoadedAsset", &UEditorAssetLibrary::execDuplicateLoadedAsset },
			{ "FindAssetData", &UEditorAssetLibrary::execFindAssetData },
			{ "FindPackageReferencersForAsset", &UEditorAssetLibrary::execFindPackageReferencersForAsset },
			{ "GetMetadataTag", &UEditorAssetLibrary::execGetMetadataTag },
			{ "GetMetadataTagValues", &UEditorAssetLibrary::execGetMetadataTagValues },
			{ "GetPathNameForLoadedAsset", &UEditorAssetLibrary::execGetPathNameForLoadedAsset },
			{ "GetTagValues", &UEditorAssetLibrary::execGetTagValues },
			{ "ListAssetByTagValue", &UEditorAssetLibrary::execListAssetByTagValue },
			{ "ListAssets", &UEditorAssetLibrary::execListAssets },
			{ "LoadAsset", &UEditorAssetLibrary::execLoadAsset },
			{ "LoadBlueprintClass", &UEditorAssetLibrary::execLoadBlueprintClass },
			{ "MakeDirectory", &UEditorAssetLibrary::execMakeDirectory },
			{ "RemoveMetadataTag", &UEditorAssetLibrary::execRemoveMetadataTag },
			{ "RenameAsset", &UEditorAssetLibrary::execRenameAsset },
			{ "RenameDirectory", &UEditorAssetLibrary::execRenameDirectory },
			{ "RenameLoadedAsset", &UEditorAssetLibrary::execRenameLoadedAsset },
			{ "SaveAsset", &UEditorAssetLibrary::execSaveAsset },
			{ "SaveDirectory", &UEditorAssetLibrary::execSaveDirectory },
			{ "SaveLoadedAsset", &UEditorAssetLibrary::execSaveLoadedAsset },
			{ "SaveLoadedAssets", &UEditorAssetLibrary::execSaveLoadedAssets },
			{ "SetMetadataTag", &UEditorAssetLibrary::execSetMetadataTag },
			{ "SyncBrowserToObjects", &UEditorAssetLibrary::execSyncBrowserToObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics
	{
		struct EditorAssetLibrary_eventCheckoutAsset_Parms
		{
			FString AssetToCheckout;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetToCheckout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetToCheckout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventCheckoutAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventCheckoutAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_AssetToCheckout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_AssetToCheckout = { "AssetToCheckout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventCheckoutAsset_Parms, AssetToCheckout), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_AssetToCheckout_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_AssetToCheckout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_AssetToCheckout,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Checkout the asset from the Content Browser.\n@param       AssetToCheckout         Asset Path of the asset that we want to checkout.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "CheckoutAsset", sizeof(EditorAssetLibrary_eventCheckoutAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics
	{
		struct EditorAssetLibrary_eventCheckoutDirectory_Parms
		{
			FString DirectoryPath;
			bool bRecursive;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventCheckoutDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventCheckoutDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventCheckoutDirectory_Parms*)Obj)->bRecursive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventCheckoutDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventCheckoutDirectory_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_DirectoryPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_DirectoryPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_bRecursive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_DirectoryPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "CPP_Default_bRecursive", "true" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Checkout assets from the Content Browser. It will load the assets if needed.\nAll objects that are in the directory will be checkout. Assets will be loaded before being checkout.\n@param       DirectoryPath           Directory of the assets that to checkout.\n@param       bRecursive                      If the AssetPath is a folder, the search will be recursive and will checkout the asset in the sub folders.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "CheckoutDirectory", sizeof(EditorAssetLibrary_eventCheckoutDirectory_Parms), Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics
	{
		struct EditorAssetLibrary_eventCheckoutLoadedAsset_Parms
		{
			UObject* AssetToCheckout;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetToCheckout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventCheckoutLoadedAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventCheckoutLoadedAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::NewProp_AssetToCheckout = { "AssetToCheckout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventCheckoutLoadedAsset_Parms, AssetToCheckout), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::NewProp_AssetToCheckout,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Checkout the asset from the Content Browser.\n@param       AssetToCheckout         Asset to checkout.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "CheckoutLoadedAsset", sizeof(EditorAssetLibrary_eventCheckoutLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics
	{
		struct EditorAssetLibrary_eventCheckoutLoadedAssets_Parms
		{
			TArray<UObject*> AssetsToCheckout;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetsToCheckout_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetsToCheckout;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetsToCheckout_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventCheckoutLoadedAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventCheckoutLoadedAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout = { "AssetsToCheckout", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventCheckoutLoadedAssets_Parms, AssetsToCheckout), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout_Inner = { "AssetsToCheckout", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Checkout the assets from the Content Browser.\n@param       AssetToCheckout         Assets to checkout.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "CheckoutLoadedAssets", sizeof(EditorAssetLibrary_eventCheckoutLoadedAssets_Parms), Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics
	{
		struct EditorAssetLibrary_eventConsolidateAssets_Parms
		{
			UObject* AssetToConsolidateTo;
			TArray<UObject*> AssetsToConsolidate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetsToConsolidate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetsToConsolidate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetsToConsolidate_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetToConsolidateTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventConsolidateAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventConsolidateAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate = { "AssetsToConsolidate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventConsolidateAssets_Parms, AssetsToConsolidate), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate_Inner = { "AssetsToConsolidate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetToConsolidateTo = { "AssetToConsolidateTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventConsolidateAssets_Parms, AssetToConsolidateTo), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetToConsolidateTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Consolidates an asset by replacing all references/uses of the provided AssetsToConsolidate with references to AssetToConsolidateTo.\nThis is useful when you want all references of assets to be replaced by a single asset.\nThe function first attempts to directly replace all relevant references located within objects that are already loaded and in memory.\nNext, it deletes the AssetsToConsolidate, leaving behind object redirectors to AssetToConsolidateTo.\n@param       AssetToConsolidateTo    Asset to which all references of the AssetsToConsolidate will instead refer to after this operation completes.\n@param       AssetsToConsolidate             All references to these assets will be modified to reference AssetToConsolidateTo instead.\n@note        The AssetsToConsolidate are DELETED by this function.\n@note        Modified objects will be saved if the operation succeeds.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "ConsolidateAssets", sizeof(EditorAssetLibrary_eventConsolidateAssets_Parms), Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics
	{
		struct EditorAssetLibrary_eventDeleteAsset_Parms
		{
			FString AssetPathToDelete;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPathToDelete_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPathToDelete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDeleteAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventDeleteAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_AssetPathToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_AssetPathToDelete = { "AssetPathToDelete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDeleteAsset_Parms, AssetPathToDelete), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_AssetPathToDelete_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_AssetPathToDelete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_AssetPathToDelete,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Delete the package the assets live in. All objects that live in the package will be deleted.\nThis is a Force Delete. It doesn't check if the asset has references in other Levels or by Actors.\nIt will close all the asset editors and may clear the Transaction buffer (Undo History).\nWill try to mark the file as deleted. The Asset will be loaded before being deleted.\n@param       AssetPathToDelete               Asset Path of the asset that we want to delete.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DeleteAsset", sizeof(EditorAssetLibrary_eventDeleteAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics
	{
		struct EditorAssetLibrary_eventDeleteDirectory_Parms
		{
			FString DirectoryPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDeleteDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventDeleteDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDeleteDirectory_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_DirectoryPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_DirectoryPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_DirectoryPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Delete the packages inside a directory. If the directory is then empty, delete the directory.\nThis is a Force Delete. It doesn't check if the assets have references in other Levels or by Actors.\nIt will close all the asset editors and may clear the Transaction buffer (Undo History).\nWill try to mark the file as deleted. Assets will be loaded before being deleted.\nThe search is always recursive. It will try to delete the sub folders.\n@param       DirectoryPath           Directory that will be mark for delete and deleted.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DeleteDirectory", sizeof(EditorAssetLibrary_eventDeleteDirectory_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics
	{
		struct EditorAssetLibrary_eventDeleteLoadedAsset_Parms
		{
			UObject* AssetToDelete;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetToDelete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDeleteLoadedAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventDeleteLoadedAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::NewProp_AssetToDelete = { "AssetToDelete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDeleteLoadedAsset_Parms, AssetToDelete), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::NewProp_AssetToDelete,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Delete an asset from the Content Browser that is already loaded.\nThis is a Force Delete. It doesn't check if the asset has references in other Levels or by Actors.\nIt will close all the asset editors and may clear the Transaction buffer (Undo History).\nWill try to mark the file as deleted.\n@param       AssetToDelete                   Asset that we want to delete.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DeleteLoadedAsset", sizeof(EditorAssetLibrary_eventDeleteLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics
	{
		struct EditorAssetLibrary_eventDeleteLoadedAssets_Parms
		{
			TArray<UObject*> AssetsToDelete;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetsToDelete_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetsToDelete;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetsToDelete_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDeleteLoadedAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventDeleteLoadedAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete = { "AssetsToDelete", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDeleteLoadedAssets_Parms, AssetsToDelete), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete_Inner = { "AssetsToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Delete assets from the Content Browser that are already loaded.\nThis is a Force Delete. It doesn't check if the assets have references in other Levels or by Actors.\nIt will close all the asset editors and may clear the Transaction buffer (Undo History).\nWill try to mark the files as deleted.\n@param       AssetsToDelete                  Assets that we want to delete.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DeleteLoadedAssets", sizeof(EditorAssetLibrary_eventDeleteLoadedAssets_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics
	{
		struct EditorAssetLibrary_eventDoAssetsExist_Parms
		{
			TArray<FString> AssetPaths;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDoAssetsExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventDoAssetsExist_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_AssetPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_AssetPaths = { "AssetPaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDoAssetsExist_Parms, AssetPaths), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_AssetPaths_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_AssetPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_AssetPaths_Inner = { "AssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_AssetPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_AssetPaths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Check if the assets exist in the Content Browser.\n@param       AssetPaths              Asset Path of the assets (that are not a level).\n@return      True if they exist and it is valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DoAssetsExist", sizeof(EditorAssetLibrary_eventDoAssetsExist_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics
	{
		struct EditorAssetLibrary_eventDoesAssetExist_Parms
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
	void Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDoesAssetExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventDoesAssetExist_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDoesAssetExist_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_AssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_AssetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Check if the asset exists in the Content Browser.\n@param       AssetPath               Asset Path of the asset (that is not a level).\n@return      True if it does exist and it is valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DoesAssetExist", sizeof(EditorAssetLibrary_eventDoesAssetExist_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics
	{
		struct EditorAssetLibrary_eventDoesDirectoryExist_Parms
		{
			FString DirectoryPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDoesDirectoryExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventDoesDirectoryExist_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDoesDirectoryExist_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_DirectoryPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_DirectoryPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_DirectoryPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Check is the directory exist in the Content Browser.\n@param        DirectoryPath           Long Path Name of the directory.\n@return       True if it does exist and it is valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DoesDirectoryExist", sizeof(EditorAssetLibrary_eventDoesDirectoryExist_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics
	{
		struct EditorAssetLibrary_eventDoesDirectoryHaveAssets_Parms
		{
			FString DirectoryPath;
			bool bRecursive;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDoesDirectoryHaveAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventDoesDirectoryHaveAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDoesDirectoryHaveAssets_Parms*)Obj)->bRecursive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventDoesDirectoryHaveAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDoesDirectoryHaveAssets_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_DirectoryPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_DirectoryPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_bRecursive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_DirectoryPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "CPP_Default_bRecursive", "true" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Check if there any asset that exist in the directory.\n@param       DirectoryPath           Long Path Name of the directory.\n@return      True if there is any assets." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DoesDirectoryHaveAssets", sizeof(EditorAssetLibrary_eventDoesDirectoryHaveAssets_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics
	{
		struct EditorAssetLibrary_eventDuplicateAsset_Parms
		{
			FString SourceAssetPath;
			FString DestinationAssetPath;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceAssetPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_DestinationAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_DestinationAssetPath = { "DestinationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateAsset_Parms, DestinationAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_DestinationAssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_DestinationAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_SourceAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_SourceAssetPath = { "SourceAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateAsset_Parms, SourceAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_SourceAssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_SourceAssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_DestinationAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_SourceAssetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Duplicate an asset from the Content Browser. Will try to checkout the file. The Asset will be loaded before being duplicated.\n@param       SourceAssetPath                 Asset Path of the asset that we want to copy from.\n@param       DestinationAssetPath    Asset Path of the duplicated asset.\n@return      The duplicated object if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DuplicateAsset", sizeof(EditorAssetLibrary_eventDuplicateAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics
	{
		struct EditorAssetLibrary_eventDuplicateDirectory_Parms
		{
			FString SourceDirectoryPath;
			FString DestinationDirectoryPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationDirectoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationDirectoryPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceDirectoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceDirectoryPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDuplicateDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventDuplicateDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_DestinationDirectoryPath = { "DestinationDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateDirectory_Parms, DestinationDirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_SourceDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_SourceDirectoryPath = { "SourceDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateDirectory_Parms, SourceDirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_SourceDirectoryPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_SourceDirectoryPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_DestinationDirectoryPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_SourceDirectoryPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Duplicate asset from the Content Browser that are in the folder.\nWill try to checkout the files. The Assets will be loaded before being duplicated.\n@param       SourceDirectoryPath                     Directory of the assets that we want to duplicate from.\n@param       DestinationDirectoryPath        Directory of the duplicated asset.\n@return      The duplicated object if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DuplicateDirectory", sizeof(EditorAssetLibrary_eventDuplicateDirectory_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics
	{
		struct EditorAssetLibrary_eventDuplicateLoadedAsset_Parms
		{
			UObject* SourceAsset;
			FString DestinationAssetPath;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationAssetPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateLoadedAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_DestinationAssetPath = { "DestinationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateLoadedAsset_Parms, DestinationAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateLoadedAsset_Parms, SourceAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_DestinationAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_SourceAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Duplicate an asset from the Content Browser that is already loaded. Will try to checkout the file.\n@param       SourceAsset                             Asset that we want to copy from.\n@param       DestinationAssetPath    Asset Path of the duplicated asset.\n@return      The duplicated object if the operation succeeds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DuplicateLoadedAsset", sizeof(EditorAssetLibrary_eventDuplicateLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics
	{
		struct EditorAssetLibrary_eventFindAssetData_Parms
		{
			FString AssetPath;
			FAssetData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventFindAssetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventFindAssetData_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::NewProp_AssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::NewProp_AssetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Return the AssetData for the Asset that can then be used with the more complex lib AssetRegistryHelpers.\n@param       AssetPath       Asset Path we are trying to find.\n@return      The AssetData found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "FindAssetData", sizeof(EditorAssetLibrary_eventFindAssetData_Parms), Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics
	{
		struct EditorAssetLibrary_eventFindPackageReferencersForAsset_Parms
		{
			FString AssetPath;
			bool bLoadAssetsToConfirm;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_bLoadAssetsToConfirm_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadAssetsToConfirm;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventFindPackageReferencersForAsset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_bLoadAssetsToConfirm_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventFindPackageReferencersForAsset_Parms*)Obj)->bLoadAssetsToConfirm = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_bLoadAssetsToConfirm = { "bLoadAssetsToConfirm", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventFindPackageReferencersForAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_bLoadAssetsToConfirm_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventFindPackageReferencersForAsset_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_AssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_bLoadAssetsToConfirm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_AssetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "CPP_Default_bLoadAssetsToConfirm", "false" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Find Package Referencers for an asset. Only Soft and Hard dependencies would be looked for.\nSoft are dependencies which don't need to be loaded for the object to be used.\nHad are dependencies which are required for correct usage of the source asset and must be loaded at the same time.\nOther references may exist. The asset may be currently used in memory by another asset, by the editor or by code.\nPackage dependencies are cached with the asset. False positive can happen until all the assets are loaded and re-saved.\n@param       AssetPath                               Asset Path of the asset that we are looking for (that is not a level).\n@param       bLoadAssetsToConfirm    The asset and the referencers will be loaded (if not a level) to confirm the dependencies.\n@return      The package path of the referencers." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "FindPackageReferencersForAsset", sizeof(EditorAssetLibrary_eventFindPackageReferencersForAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics
	{
		struct EditorAssetLibrary_eventGetMetadataTag_Parms
		{
			UObject* Object;
			FName Tag;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventGetMetadataTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventGetMetadataTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventGetMetadataTag_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Metadata" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Get the value associated with the given tag of a loaded asset's metadata.\n@param       Object          The object from which to retrieve the metadata.\n@param       Tag                     The tag to find in the metadata.\n@return      The string value associated with the tag." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "GetMetadataTag", sizeof(EditorAssetLibrary_eventGetMetadataTag_Parms), Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics
	{
		struct EditorAssetLibrary_eventGetMetadataTagValues_Parms
		{
			UObject* Object;
			TMap<FName,FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventGetMetadataTagValues_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventGetMetadataTagValues_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Metadata" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Get all tags/values of a loaded asset's metadata.\n@param       Object          The object from which to retrieve the metadata.\n@return      The list of all Tags and Values." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "GetMetadataTagValues", sizeof(EditorAssetLibrary_eventGetMetadataTagValues_Parms), Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics
	{
		struct EditorAssetLibrary_eventGetPathNameForLoadedAsset_Parms
		{
			UObject* LoadedAsset;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadedAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventGetPathNameForLoadedAsset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::NewProp_LoadedAsset = { "LoadedAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventGetPathNameForLoadedAsset_Parms, LoadedAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::NewProp_LoadedAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Return a valid AssetPath for a loaded asset. The asset need to be a valid asset in the Content Browser.\nSimilar to GetPathName(). The format will be: /Game/MyFolder/MyAsset.MyAsset\n@param       LoadedAsset             Loaded Asset that exist in the Content Browser.\n@return      If valid, the asset Path of the loaded asset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "GetPathNameForLoadedAsset", sizeof(EditorAssetLibrary_eventGetPathNameForLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics
	{
		struct EditorAssetLibrary_eventGetTagValues_Parms
		{
			FString AssetPath;
			TMap<FName,FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
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
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventGetTagValues_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventGetTagValues_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_AssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_AssetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Gets all TagValues (from Asset Registry) associated with an (unloaded) asset as strings value.\n@param       AssetPath               Asset Path we are trying to find.\n@return      The list of all TagName & TagValue." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "GetTagValues", sizeof(EditorAssetLibrary_eventGetTagValues_Parms), Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics
	{
		struct EditorAssetLibrary_eventListAssetByTagValue_Parms
		{
			FName TagName;
			FString TagValue;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TagValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TagName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventListAssetByTagValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_TagValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_TagValue = { "TagValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventListAssetByTagValue_Parms, TagValue), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_TagValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_TagValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventListAssetByTagValue_Parms, TagName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_TagValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_TagName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Return the list of all the assets that have the pair of Tag/Value.\n@param TagName       The tag associated with the assets requested.\n@param TagValue      The value associated with the assets requested.\n@return      The list of asset found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "ListAssetByTagValue", sizeof(EditorAssetLibrary_eventListAssetByTagValue_Parms), Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics
	{
		struct EditorAssetLibrary_eventListAssets_Parms
		{
			FString DirectoryPath;
			bool bRecursive;
			bool bIncludeFolder;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_bIncludeFolder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeFolder;
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventListAssets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bIncludeFolder_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventListAssets_Parms*)Obj)->bIncludeFolder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bIncludeFolder = { "bIncludeFolder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventListAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bIncludeFolder_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventListAssets_Parms*)Obj)->bRecursive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventListAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventListAssets_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_DirectoryPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_DirectoryPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bIncludeFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bRecursive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_DirectoryPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "CPP_Default_bIncludeFolder", "false" },
		{ "CPP_Default_bRecursive", "true" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Return the list of all the assets found in the DirectoryPath.\n@param       DirectoryPath           Directory path of the asset we want the list from.\n@param       bRecursive                      The search will be recursive and will look in sub folders.\n@param       bIncludeFolder          The result will include folders name.\n@return      The list of asset found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "ListAssets", sizeof(EditorAssetLibrary_eventListAssets_Parms), Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_ListAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics
	{
		struct EditorAssetLibrary_eventLoadAsset_Parms
		{
			FString AssetPath;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventLoadAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventLoadAsset_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::NewProp_AssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::NewProp_AssetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Load an asset from the Content Browser. It will verify if the object is already loaded and only load it if it's necessary.\n@param       AssetPath               Asset Path of the asset (that is not a level).\n@return      Found or loaded asset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "LoadAsset", sizeof(EditorAssetLibrary_eventLoadAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics
	{
		struct EditorAssetLibrary_eventLoadBlueprintClass_Parms
		{
			FString AssetPath;
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventLoadBlueprintClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventLoadBlueprintClass_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::NewProp_AssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::NewProp_AssetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Load a Blueprint asset from the Content Browser and return its generated class. It will verify if the object is already loaded and only load it if it's necessary.\n@param       AssetPath               Asset Path of the Blueprint asset.\n@return      Found or loaded class." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "LoadBlueprintClass", sizeof(EditorAssetLibrary_eventLoadBlueprintClass_Parms), Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics
	{
		struct EditorAssetLibrary_eventMakeDirectory_Parms
		{
			FString DirectoryPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventMakeDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventMakeDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventMakeDirectory_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_DirectoryPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_DirectoryPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_DirectoryPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Create the directory on disk and in the Content Browser.\n@param       DirectoryPath           Long Path Name of the directory.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "MakeDirectory", sizeof(EditorAssetLibrary_eventMakeDirectory_Parms), Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics
	{
		struct EditorAssetLibrary_eventRemoveMetadataTag_Parms
		{
			UObject* Object;
			FName Tag;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventRemoveMetadataTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventRemoveMetadataTag_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Metadata" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Remove the given tag from a loaded asset's metadata.\n@param       Object          The object from which to retrieve the metadata.\n@param       Tag                     The tag to remove from the metadata." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "RemoveMetadataTag", sizeof(EditorAssetLibrary_eventRemoveMetadataTag_Parms), Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics
	{
		struct EditorAssetLibrary_eventRenameAsset_Parms
		{
			FString SourceAssetPath;
			FString DestinationAssetPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceAssetPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventRenameAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventRenameAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_DestinationAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_DestinationAssetPath = { "DestinationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventRenameAsset_Parms, DestinationAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_DestinationAssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_DestinationAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_SourceAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_SourceAssetPath = { "SourceAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventRenameAsset_Parms, SourceAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_SourceAssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_SourceAssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_DestinationAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_SourceAssetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Rename an asset from the Content Browser. Equivalent to a Move operation.\nWill try to checkout the file. The Asset will be loaded before being renamed.\n@param       SourceAssetPath                 Asset Path of the asset that we want to copy from.\n@param       DestinationAssetPath    Asset Path of the renamed asset.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "RenameAsset", sizeof(EditorAssetLibrary_eventRenameAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics
	{
		struct EditorAssetLibrary_eventRenameDirectory_Parms
		{
			FString SourceDirectoryPath;
			FString DestinationDirectoryPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationDirectoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationDirectoryPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceDirectoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceDirectoryPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventRenameDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventRenameDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_DestinationDirectoryPath = { "DestinationDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventRenameDirectory_Parms, DestinationDirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_SourceDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_SourceDirectoryPath = { "SourceDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventRenameDirectory_Parms, SourceDirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_SourceDirectoryPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_SourceDirectoryPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_DestinationDirectoryPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_SourceDirectoryPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Rename assets from the Content Browser that are in the folder.\nEquivalent to a Move operation. Will try to checkout the files. The Assets will be loaded before being renamed.\n@param       SourceDirectoryPath                     Directory of the assets that we want to rename from.\n@param       DestinationDirectoryPath        Directory of the renamed asset.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "RenameDirectory", sizeof(EditorAssetLibrary_eventRenameDirectory_Parms), Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics
	{
		struct EditorAssetLibrary_eventRenameLoadedAsset_Parms
		{
			UObject* SourceAsset;
			FString DestinationAssetPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationAssetPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventRenameLoadedAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventRenameLoadedAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_DestinationAssetPath = { "DestinationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventRenameLoadedAsset_Parms, DestinationAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventRenameLoadedAsset_Parms, SourceAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_DestinationAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_SourceAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Rename an asset from the Content Browser that is already loaded.\nEquivalent to a Move operation. Will try to checkout the files.\n@param       SourceAsset                             Asset that we want to copy from.\n@param       DestinationAssetPath    Asset Path of the duplicated asset.\n@return      The if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "RenameLoadedAsset", sizeof(EditorAssetLibrary_eventRenameLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics
	{
		struct EditorAssetLibrary_eventSaveAsset_Parms
		{
			FString AssetToSave;
			bool bOnlyIfIsDirty;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bOnlyIfIsDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyIfIsDirty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetToSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetToSave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_bOnlyIfIsDirty_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveAsset_Parms*)Obj)->bOnlyIfIsDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_bOnlyIfIsDirty = { "bOnlyIfIsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_bOnlyIfIsDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_AssetToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_AssetToSave = { "AssetToSave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventSaveAsset_Parms, AssetToSave), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_AssetToSave_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_AssetToSave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_bOnlyIfIsDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_AssetToSave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "CPP_Default_bOnlyIfIsDirty", "true" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Save the packages the assets live in. All objects that live in the package will be saved.\nWill try to checkout the file first. The Asset will be loaded before being saved.\n@param       AssetsToSave            Asset Path of the asset that we want to save.\n@param       bOnlyIfIsDirty          Only checkout/save the asset if it's dirty.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "SaveAsset", sizeof(EditorAssetLibrary_eventSaveAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics
	{
		struct EditorAssetLibrary_eventSaveDirectory_Parms
		{
			FString DirectoryPath;
			bool bOnlyIfIsDirty;
			bool bRecursive;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static void NewProp_bOnlyIfIsDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyIfIsDirty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveDirectory_Parms*)Obj)->bRecursive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bOnlyIfIsDirty_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveDirectory_Parms*)Obj)->bOnlyIfIsDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bOnlyIfIsDirty = { "bOnlyIfIsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bOnlyIfIsDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventSaveDirectory_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_DirectoryPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_DirectoryPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bRecursive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bOnlyIfIsDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_DirectoryPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "CPP_Default_bOnlyIfIsDirty", "true" },
		{ "CPP_Default_bRecursive", "true" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Save the packages the assets live in inside the directory. All objects that are in the directory will be saved.\nWill try to checkout the file first. Assets will be loaded before being saved.\n@param       DirectoryPath           Directory that will be checked out and saved.\n@param       bOnlyIfIsDirty          Only checkout asset that are dirty.\n@param       bRecursive                      The search will be recursive and it will save the asset in the sub folders.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "SaveDirectory", sizeof(EditorAssetLibrary_eventSaveDirectory_Parms), Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics
	{
		struct EditorAssetLibrary_eventSaveLoadedAsset_Parms
		{
			UObject* AssetToSave;
			bool bOnlyIfIsDirty;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bOnlyIfIsDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyIfIsDirty;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetToSave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveLoadedAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveLoadedAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_bOnlyIfIsDirty_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveLoadedAsset_Parms*)Obj)->bOnlyIfIsDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_bOnlyIfIsDirty = { "bOnlyIfIsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveLoadedAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_bOnlyIfIsDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_AssetToSave = { "AssetToSave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventSaveLoadedAsset_Parms, AssetToSave), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_bOnlyIfIsDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_AssetToSave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "CPP_Default_bOnlyIfIsDirty", "true" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Save the packages the assets live in. All objects that live in the package will be saved. Will try to checkout the file.\n@param       AssetToSave                     Asset that we want to save.\n@param       bOnlyIfIsDirty          Only checkout asset that are dirty.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "SaveLoadedAsset", sizeof(EditorAssetLibrary_eventSaveLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics
	{
		struct EditorAssetLibrary_eventSaveLoadedAssets_Parms
		{
			TArray<UObject*> AssetsToSave;
			bool bOnlyIfIsDirty;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bOnlyIfIsDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyIfIsDirty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetsToSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetsToSave;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetsToSave_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveLoadedAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveLoadedAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_bOnlyIfIsDirty_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveLoadedAssets_Parms*)Obj)->bOnlyIfIsDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_bOnlyIfIsDirty = { "bOnlyIfIsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveLoadedAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_bOnlyIfIsDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_AssetsToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_AssetsToSave = { "AssetsToSave", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventSaveLoadedAssets_Parms, AssetsToSave), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_AssetsToSave_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_AssetsToSave_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_AssetsToSave_Inner = { "AssetsToSave", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_bOnlyIfIsDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_AssetsToSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_AssetsToSave_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "CPP_Default_bOnlyIfIsDirty", "true" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Save the packages the assets live in. All objects that live in the package will be saved. Will try to checkout the files.\n@param       AssetToSaves            Assets that we want to save.\n@param       bOnlyIfIsDirty          Only checkout asset that are dirty.\n@return      True if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "SaveLoadedAssets", sizeof(EditorAssetLibrary_eventSaveLoadedAssets_Parms), Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics
	{
		struct EditorAssetLibrary_eventSetMetadataTag_Parms
		{
			UObject* Object;
			FName Tag;
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventSetMetadataTag_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventSetMetadataTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventSetMetadataTag_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Metadata" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Set the value associated with a given tag of a loaded asset's metadata.\n@param       Object          The object from which to retrieve the metadata.\n@param       Tag                     The tag to set in the metadata.\n@param       Value           The string value to associate with the tag." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "SetMetadataTag", sizeof(EditorAssetLibrary_eventSetMetadataTag_Parms), Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics
	{
		struct EditorAssetLibrary_eventSyncBrowserToObjects_Parms
		{
			TArray<FString> AssetPaths;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::NewProp_AssetPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::NewProp_AssetPaths = { "AssetPaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorAssetLibrary_eventSyncBrowserToObjects_Parms, AssetPaths), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::NewProp_AssetPaths_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::NewProp_AssetPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::NewProp_AssetPaths_Inner = { "AssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::NewProp_AssetPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::NewProp_AssetPaths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Content Browser" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Sync the Content Browser to the given asset(s)\n@param       AssetPaths      The list of asset paths to sync to in the Content Browser" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "SyncBrowserToObjects", sizeof(EditorAssetLibrary_eventSyncBrowserToObjects_Parms), Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorAssetLibrary_NoRegister()
	{
		return UEditorAssetLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorAssetLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorAssetLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorAssetLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset, "CheckoutAsset" }, // 559708816
		{ &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory, "CheckoutDirectory" }, // 964836673
		{ &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset, "CheckoutLoadedAsset" }, // 3000268520
		{ &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets, "CheckoutLoadedAssets" }, // 2819102556
		{ &Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets, "ConsolidateAssets" }, // 3321834949
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset, "DeleteAsset" }, // 1903785888
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory, "DeleteDirectory" }, // 1052644351
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset, "DeleteLoadedAsset" }, // 3029610168
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets, "DeleteLoadedAssets" }, // 500129907
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist, "DoAssetsExist" }, // 458965757
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist, "DoesAssetExist" }, // 3005973504
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist, "DoesDirectoryExist" }, // 1256409255
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets, "DoesDirectoryHaveAssets" }, // 4016349609
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset, "DuplicateAsset" }, // 632162268
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory, "DuplicateDirectory" }, // 2915244350
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset, "DuplicateLoadedAsset" }, // 3445950550
		{ &Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData, "FindAssetData" }, // 2653078787
		{ &Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset, "FindPackageReferencersForAsset" }, // 3573653952
		{ &Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag, "GetMetadataTag" }, // 3816566572
		{ &Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues, "GetMetadataTagValues" }, // 1662995709
		{ &Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset, "GetPathNameForLoadedAsset" }, // 3168082853
		{ &Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues, "GetTagValues" }, // 2983647475
		{ &Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue, "ListAssetByTagValue" }, // 3101953469
		{ &Z_Construct_UFunction_UEditorAssetLibrary_ListAssets, "ListAssets" }, // 2304175284
		{ &Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset, "LoadAsset" }, // 1829065226
		{ &Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass, "LoadBlueprintClass" }, // 3926843145
		{ &Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory, "MakeDirectory" }, // 556103021
		{ &Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag, "RemoveMetadataTag" }, // 1703834019
		{ &Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset, "RenameAsset" }, // 3855128980
		{ &Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory, "RenameDirectory" }, // 2673309646
		{ &Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset, "RenameLoadedAsset" }, // 429881927
		{ &Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset, "SaveAsset" }, // 3776643038
		{ &Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory, "SaveDirectory" }, // 1958574229
		{ &Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset, "SaveLoadedAsset" }, // 3854738518
		{ &Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets, "SaveLoadedAssets" }, // 2085314146
		{ &Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag, "SetMetadataTag" }, // 3179321089
		{ &Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects, "SyncBrowserToObjects" }, // 743224369
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAssetLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorAssetLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Utility class to do most of the common functionalities with the ContentBrowser.\nThe AssetRegistryHelpers class has more complex utilities. Use FindAssetData to get a FAssetData from an Asset Path.\nThe Asset Path can be represented by\n            ie. (Reference/Text Path)       StaticMesh'/Game/MyFolder/MyAsset.MyAsset'\n            ie. (Full Name)                         StaticMesh /Game/MyFolder/MyAsset.MyAsset\n            ie. (Path Name)                         /Game/MyFolder/MyAsset.MyAsset\n            ie. (Package Name)                      /Game/MyFolder/MyAsset\nThe Directory Path can be represented by\n            ie. /Game/MyNewFolder/\n            ie. /Game/MyNewFolder\nAll operations can be slow. The editor should not be in play in editor mode. It will not work on assets of the type level." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorAssetLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorAssetLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorAssetLibrary_Statics::ClassParams = {
		&UEditorAssetLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorAssetLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorAssetLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorAssetLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorAssetLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorAssetLibrary, 875852052);
	template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<UEditorAssetLibrary>()
	{
		return UEditorAssetLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorAssetLibrary(Z_Construct_UClass_UEditorAssetLibrary, &UEditorAssetLibrary::StaticClass, TEXT("/Script/EditorScriptingUtilities"), TEXT("UEditorAssetLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorAssetLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
