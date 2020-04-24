// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "PropertyEditorDelegates.h"


class IAssetTypeActions;
class  FAssetsSlateUIModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	void RegisterPropertyTypeCustomizations();
	void RegisterCustomPropertyTypeLayout(FName PropertyTypeName,
		FOnGetPropertyTypeCustomizationInstance PropertyTypeLayoutDelegate);

private:
	TArray<TSharedRef<IAssetTypeActions>> RegisterAssetTypeActions;
	TSet<FName> RegisteredPropertyTypes;
};
