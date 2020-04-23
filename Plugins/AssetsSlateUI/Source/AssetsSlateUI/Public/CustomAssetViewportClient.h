#pragma once
#include "EditorViewportClient.h"
#include "MyCustomAsset.h"


class FCustomAssetViewportClient : public FEditorViewportClient, public TSharedFromThis<FCustomAssetViewportClient>
{
public:
	FCustomAssetViewportClient(FPreviewScene& InPreviewScene, UMyCustomAsset* InCustomAsset,
		const TWeakPtr<class SEditorViewport> &InEditorViewportWidget = nullptr);
	virtual void Tick(float DeltaSeconds)override;
	
private:
	UMyCustomAsset* CustomAsset;
	class UProceduralMeshComponent* ProceduralMeshComponent;
};