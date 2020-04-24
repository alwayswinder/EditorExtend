// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AssetsSlateUI.h"
#include "MyCustomAssetActions.h"
#include "AssetToolsModule.h"
#include "PropertyEditorModule.h"
#include "MeshImportPanel.h"

#define LOCTEXT_NAMESPACE "FAssetsSlateUIModule"

void FAssetsSlateUIModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	RegisterAssetTypeActions.Add(MakeShareable(new FMyCustomAssetAction()));
	AssetTools.RegisterAssetTypeActions(RegisterAssetTypeActions[RegisterAssetTypeActions.Num()-1]);

	FPropertyEditorModule &PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	RegisterPropertyTypeCustomizations();
	PropertyModule.NotifyCustomizationModuleChanged();

}


void FAssetsSlateUIModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FAssetToolsModule* AssetToolsModule = FModuleManager::GetModulePtr <FAssetToolsModule>("AssetTools");
	if (AssetToolsModule != nullptr)
	{
		IAssetTools& AssetTools = AssetToolsModule->Get();
		for (auto Action : RegisterAssetTypeActions)
		{
			AssetTools.UnregisterAssetTypeActions(Action);
		}
	}
}


void FAssetsSlateUIModule::RegisterPropertyTypeCustomizations()
{
	RegisterCustomPropertyTypeLayout("MeshImport",
		FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FMeshImportDetail::MakeInstance));
}


void FAssetsSlateUIModule::RegisterCustomPropertyTypeLayout(FName PropertyTypeName, 
	FOnGetPropertyTypeCustomizationInstance PropertyTypeLayoutDelegate)
{
	check(PropertyTypeName != NAME_None);
	RegisteredPropertyTypes.Add(PropertyTypeName);

	FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.RegisterCustomPropertyTypeLayout(PropertyTypeName, PropertyTypeLayoutDelegate);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAssetsSlateUIModule, AssetsSlateUI)