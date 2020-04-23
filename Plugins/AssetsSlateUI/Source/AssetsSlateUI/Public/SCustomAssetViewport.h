#pragma once
#include "SEditorViewport.h"
#include "MyCustomAsset.h"

class SCustomAssetViewport : public SEditorViewport
{
public:
	SLATE_BEGIN_ARGS(SCustomAssetViewport) {}
	SLATE_ATTRIBUTE(class UMyCustomAsset*, CustomAsset)
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs);
	~SCustomAssetViewport();
	virtual TSharedRef<FEditorViewportClient> MakeEditorViewportClient()override;
	
private:
	class UMyCustomAsset* CustomAsset;
	TSharedPtr<class FAdvancedPreviewScene> PreviewScene;
	TSharedPtr<class FCustomAssetViewportClient> EditorVIewportClient;
};