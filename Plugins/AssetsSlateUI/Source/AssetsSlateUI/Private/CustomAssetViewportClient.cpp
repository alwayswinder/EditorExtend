#include "CustomAssetViewportClient.h"
#include "AssetEditorModeManager.h"
#include "ProceduralMeshComponent.h"

FCustomAssetViewportClient::FCustomAssetViewportClient()
	:FEditorViewportClient(NULL, nullptr, nullptr),
	CustomAsset(nullptr)
{
	PreviewScene = &DrawScene;
	((FAssetEditorModeManager*)ModeTools)->SetPreviewScene(PreviewScene);
	DrawHelper.bDrawGrid = true;
	DrawHelper.bDrawPivot = true;
	SetRealtime(true);

	ProceduralMeshComponent = NewObject<UProceduralMeshComponent>(PreviewScene->GetWorld(), TEXT("PreviewMesh"));
	PreviewScene->AddComponent(ProceduralMeshComponent, FTransform::Identity);
}
void FCustomAssetViewportClient::Tick(float DeltaSeconds)
{
	FEditorViewportClient::Tick(DeltaSeconds);

	if (CustomAsset)
	{
		TArray<FVector> Normals;
		TArray<FVector2D> UV0;
		TArray<FColor> VertexColors;
		TArray<FProcMeshTangent> Tangents;
		
		ProceduralMeshComponent->CreateMeshSection(0, CustomAsset->Vertices, CustomAsset->Triangles, Normals, UV0,
			VertexColors, Tangents, false);
	}

	DrawScene.GetWorld()->Tick(LEVELTICK_All, DeltaSeconds);
}

