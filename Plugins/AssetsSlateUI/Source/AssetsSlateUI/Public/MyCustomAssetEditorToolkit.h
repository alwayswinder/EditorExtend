#pragma once
#include "Toolkits/AssetEditorToolkit.h"

class UMyCustomAsset;

class FMyCustomAssetEditorToolkit : public FAssetEditorToolkit
{
	typedef FAssetEditorToolkit Super;
public:
	virtual void RegisterTabSpawners(const TSharedRef<FTabManager>& InManager) override;
	virtual void UnregisterTabSpawners(const TSharedRef<FTabManager>& InManager) override;

	void Initialize(UMyCustomAsset* InTextAsset, const EToolkitMode::Type InMode, 
		const TSharedPtr<IToolkitHost>& InToolkitHost);

	virtual FName GetToolkitFName() const override;				
	virtual FText GetBaseToolkitName() const override;			
	virtual FString GetWorldCentricTabPrefix() const override;
	virtual FLinearColor GetWorldCentricTabColorScale() const override;
private:
	UMyCustomAsset* MyCustomTextAsset;
};