#include "CustomAssetViewportClient.h"
#include "AssetEditorModeManager.h"
#include "ProceduralMeshComponent.h"

FCustomAssetViewportClient::FCustomAssetViewportClient(FPreviewScene& InPreviewScene, UMyCustomAsset* InCustomAsset,
	const TWeakPtr<class SEditorViewport> &InEditorViewportWidget)
	:FEditorViewportClient(NULL, &InPreviewScene, InEditorViewportWidget)
	,CustomAsset(InCustomAsset)
	,ProceduralMeshComponent(nullptr)
{
	((FAssetEditorModeManager*)ModeTools)->SetPreviewScene(PreviewScene);
	DrawHelper.bDrawGrid = true;
	DrawHelper.bDrawPivot = true;
	SetRealtime(true);
	SetViewMode(VMI_Lit);
	SetViewLocation(FVector(500, 300, 500));

	ProceduralMeshComponent = NewObject<UProceduralMeshComponent>(PreviewScene->GetWorld(), TEXT("PreviewMesh"));
	PreviewScene->AddComponent(ProceduralMeshComponent, FTransform::Identity);
	OnPropertyChanged();
}

void FCustomAssetViewportClient::Tick(float DeltaSeconds)
{
	FEditorViewportClient::Tick(DeltaSeconds);

	if (CustomAsset)
	{
		if (CustomAsset->Vertices.Num() != CustomAssetCache.VerticesNum ||
			CustomAsset->Triangles.Num() != CustomAssetCache.TrianglesNum)
		{
			CustomAssetCache.VerticesNum = CustomAsset->Vertices.Num();
			CustomAssetCache.TrianglesNum = CustomAsset->Triangles.Num();
			OnPropertyChanged();
		}
		else
		{
			if (ProceduralMeshComponent)
			{
				TArray<FVector> Normals;
				TArray<FVector2D> UV0;
				TArray<FColor> VertexColors;
				TArray<FProcMeshTangent> Tangents;

				ProceduralMeshComponent->UpdateMeshSection(0, CustomAsset->Vertices, Normals, UV0, VertexColors, Tangents);
			}
		}
	}
	PreviewScene->GetWorld()->Tick(LEVELTICK_All, DeltaSeconds);
}

void FCustomAssetViewportClient::OnPropertyChanged()
{
	if (CustomAsset)
	{
		TArray<FVector> Normals;
		TArray<FVector2D> UV0;
		TArray<FColor> VertexColors;
		TArray<FProcMeshTangent> Tangents;

		ProceduralMeshComponent->CreateMeshSection(0, CustomAsset->Vertices, CustomAsset->Triangles, Normals, UV0,
			VertexColors, Tangents, false);
	}
}

