#pragma once

#include "AssetTypeActions_Base.h"


class FMyCustomAssetAction: public FAssetTypeActions_Base
{
public:
	virtual TSharedPtr<class SWidget> GetThumbnailOverlay(const FAssetData& AssetData) const override;
	
	virtual UClass* GetSupportedClass() const override;

	virtual FColor GetTypeColor() const override;

	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects,
		TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;

	virtual FText GetName() const override;
	virtual uint32 GetCategories()override;
};