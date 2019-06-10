// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "DetailsTest.h"
#include "PropertyEditorModule.h"
#include "MyTestCustomization.h"

#define LOCTEXT_NAMESPACE "FDetailsTestModule"

void FDetailsTestModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	RegisterPropertyTypeCustomization();
	RegisterObjectCustomization();
	PropertyModule.NotifyCustomizationModuleChanged();
}

void FDetailsTestModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
	{
		FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");

		for (auto It = RegisteredPropertyTypes.CreateConstIterator(); It; ++It)
		{
			if (It->IsValid())
			{
				PropertyModule.UnregisterCustomPropertyTypeLayout(*It);
			}
		}
		for (auto It = RegisteredClassNames.CreateConstIterator(); It; ++It)
		{
			if (It->IsValid())
			{
				PropertyModule.UnregisterCustomClassLayout(*It);
			}
		}
		PropertyModule.NotifyCustomizationModuleChanged();
	}


}

void FDetailsTestModule::RegisterPropertyTypeCustomization()
{

}

void FDetailsTestModule::RegisterObjectCustomization()
{
	RegisterCustomClasslayout("CustomizationObject", FOnGetDetailCustomizationInstance::CreateStatic(&FMyTestDetailsCustomization::MakeInstance));
}

void FDetailsTestModule::RegisterCustomClasslayout(FName ClassName, FOnGetDetailCustomizationInstance DetailLayoutDelegate)
{
	check(ClassName != NAME_None);

	RegisteredClassNames.Add(ClassName);

	FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.RegisterCustomClassLayout(ClassName, DetailLayoutDelegate);
}

void FDetailsTestModule::RegisterCustomPropertyTypeLayout(FName PropertyTypeName, FOnGetPropertyTypeCustomizationInstance PropertyTypeLayoutDelegate)
{
	check(PropertyTypeName != NAME_None);

	RegisteredPropertyTypes.Add(PropertyTypeName);

	FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.RegisterCustomPropertyTypeLayout(PropertyTypeName, PropertyTypeLayoutDelegate);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDetailsTestModule, DetailsTest)