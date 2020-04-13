#pragma once
#include "EditorViewportClient.h"
#include "MyCustomAsset.h"


class FCustomAssetViewportClient : public FEditorViewportClient
{
public:
	FCustomAssetViewportClient();
	virtual void Tick(float DeltaSeconds)override;
	void SetCustomAsset(UMyCustomAsset* NewCustomAsset) { CustomAsset = NewCustomAsset; }

private:
	FPreviewScene DrawScene;
	UMyCustomAsset* CustomAsset;

	class UProceduralMeshComponent* ProceduralMeshComponent;
};