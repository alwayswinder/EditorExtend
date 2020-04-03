#include "MyCustomAssetActions.h"
#include "MyCustomAsset.h"
#include "Widgets\Images\SImage.h"
#include "MyCustomAssetEditorToolkit.h"

#define LOCTEXT_NAMESPACE "CustomAssetActions"


TSharedPtr<class SWidget> FMyCustomAssetAction::GetThumbnailOverlay(const FAssetData& AssetData) const
{
	return SNew(SImage);
}

UClass* FMyCustomAssetAction::GetSupportedClass() const
{
	return UMyCustomAsset::StaticClass();
}

FColor FMyCustomAssetAction::GetTypeColor() const
{
	return FColor::Red;
}

void FMyCustomAssetAction::OpenAssetEditor(const TArray<UObject*>& InObjects,
	TSharedPtr<class IToolkitHost> EditWithinLevelEditor /*= TSharedPtr<IToolkitHost>()*/)
{
	EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;
	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		auto CustomAsset = Cast<UMyCustomAsset>(*ObjIt);
		if (CustomAsset != nullptr)
		{
			TSharedRef<FMyCustomAssetEditorToolkit> EditorToolkit = MakeShareable(new FMyCustomAssetEditorToolkit());
			EditorToolkit->Initialize(CustomAsset, Mode, EditWithinLevelEditor);
		}
	}
}

FText FMyCustomAssetAction::GetName() const
{
	return LOCTEXT("AssetTypeActions_CustomAsset", "Custom Asset");
}

uint32 FMyCustomAssetAction::GetCategories()
{
	return EAssetTypeCategories::UI;
}

#undef LOCTEXT_NAMESPACE