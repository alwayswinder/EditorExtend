#pragma once
#include "EditorViewportClient.h"
#include "MyCustomAsset.h"


class FCustomAssetViewportClient : public FEditorViewportClient, public TSharedFromThis<FCustomAssetViewportClient>
{
	struct FCustomAssetCache
	{
		int32 VerticesNum;
		int32 TrianglesNum;

		FCustomAssetCache()
			:VerticesNum(0)
			, TrianglesNum(0)
		{

		}
	};

public:
	FCustomAssetViewportClient(FPreviewScene& InPreviewScene, UMyCustomAsset* InCustomAsset,
		const TWeakPtr<class SEditorViewport> &InEditorViewportWidget = nullptr);
	virtual void Tick(float DeltaSeconds)override;
	void OnPropertyChanged();
private:
	UMyCustomAsset* CustomAsset;
	class UProceduralMeshComponent* ProceduralMeshComponent;
	FCustomAssetCache CustomAssetCache;
};