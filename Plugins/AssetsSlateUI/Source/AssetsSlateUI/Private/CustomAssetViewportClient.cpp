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
	DrawScene.GetWorld()->Tick(LEVELTICK_All, DeltaSeconds);
}

