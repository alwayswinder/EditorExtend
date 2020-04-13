#include "SCustomAssetViewport.h"
#include "CustomAssetViewportClient.h"

void SCustomAssetViewport::Construct(const FArguments& InArgs)
{
	CustomAsset = InArgs._CustomAsset.Get();
	SEditorViewport::Construct(SEditorViewport::FArguments());
}

TSharedRef<FEditorViewportClient> SCustomAssetViewport::MakeEditorViewportClient()
{
	TSharedRef<FCustomAssetViewportClient> InstanceObj = MakeShareable(new FCustomAssetViewportClient());
	InstanceObj->SetCustomAsset(CustomAsset);
	return InstanceObj;
}
