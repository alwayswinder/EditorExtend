#pragma once
#include "EditorViewportClient.h"
#include "MyCustomAsset.h"


class FCustomAssetViewportClient : public FEditorViewportClient, public TSharedFromThis<FCustomAssetViewportClient>
{
	

public:
	FCustomAssetViewportClient(FPreviewScene& InPreviewScene, UMyCustomAsset* InCustomAsset,
		const TWeakPtr<class SEditorViewport> &InEditorViewportWidget = nullptr);
	virtual void Tick(float DeltaSeconds)override;
	void OnPropertyChanged();
	bool CreateMeshLOD(int32 LODNum = 1);

private:
	UMyCustomAsset* CustomAsset;
	TArray<UProceduralMeshComponent*> ProceduralMesh;
	FCustomAssetCache CustomAssetCache;
};