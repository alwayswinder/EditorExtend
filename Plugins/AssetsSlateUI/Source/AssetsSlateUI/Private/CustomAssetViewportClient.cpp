#include "CustomAssetViewportClient.h"
#include "AssetEditorModeManager.h"
#include "ProceduralMeshComponent.h"

FCustomAssetViewportClient::FCustomAssetViewportClient(FPreviewScene& InPreviewScene, UMyCustomAsset* InCustomAsset,
	const TWeakPtr<class SEditorViewport> &InEditorViewportWidget)
	:FEditorViewportClient(NULL, &InPreviewScene, InEditorViewportWidget)
	,CustomAsset(InCustomAsset)
{
	((FAssetEditorModeManager*)ModeTools)->SetPreviewScene(PreviewScene);
	DrawHelper.bDrawGrid = true;
	DrawHelper.bDrawPivot = true;
	SetRealtime(true);
	SetViewMode(VMI_Lit);
	SetViewLocation(FVector(500, 300, 500));

	CreateMeshLOD();
	OnPropertyChanged();
}

void FCustomAssetViewportClient::Tick(float DeltaSeconds)
{
	FEditorViewportClient::Tick(DeltaSeconds);

	if (CustomAsset)
	{
		if (CustomAsset->IsModify())
		{
			OnPropertyChanged();
		}
		else 
		{
			for (int32 LOD = 0; LOD < CustomAsset->MeshData.Num(); LOD++)
			{
				for (int32 Section = 0; Section < CustomAsset->MeshData[LOD].MeshLOD.Num(); Section++)
				{
					if (ProceduralMesh.IsValidIndex(LOD))
					{
						TArray<FColor> VertexColors;
						ProceduralMesh[LOD]->UpdateMeshSection(
							Section,
							CustomAsset->MeshData[LOD].MeshLOD[Section].Vertices,
							CustomAsset->MeshData[LOD].MeshLOD[Section].Normals,
							CustomAsset->MeshData[LOD].MeshLOD[Section].UV0,
							VertexColors,
							CustomAsset->MeshData[LOD].MeshLOD[Section].Tangents);
					}
					else
					{
						OnPropertyChanged();
					}
				}
			}
		}
	}
	PreviewScene->GetWorld()->Tick(LEVELTICK_All, DeltaSeconds);
}

void FCustomAssetViewportClient::OnPropertyChanged()
{
	if (CustomAsset)
	{
		for (int32 LOD = 0; LOD < CustomAsset->MeshData.Num(); LOD++)
		{
			for (int32 Section = 0; Section < CustomAsset->MeshData[LOD].MeshLOD.Num(); Section++)
			{
				if (ProceduralMesh.IsValidIndex(LOD))
				{
					TArray<FColor> VertexColors;
					ProceduralMesh[LOD]->CreateMeshSection(
						Section,
						CustomAsset->MeshData[LOD].MeshLOD[Section].Vertices,
						CustomAsset->MeshData[LOD].MeshLOD[Section].Triangles,
						CustomAsset->MeshData[LOD].MeshLOD[Section].Normals,
						CustomAsset->MeshData[LOD].MeshLOD[Section].UV0,
						VertexColors,
						CustomAsset->MeshData[LOD].MeshLOD[Section].Tangents,
						false);
				}
				else
				{
					if (CreateMeshLOD((LOD + 1) - ProceduralMesh.Num()))
					{
						TArray<FColor> VertexColors;
						ProceduralMesh[LOD]->CreateMeshSection(
							Section,
							CustomAsset->MeshData[LOD].MeshLOD[Section].Vertices,
							CustomAsset->MeshData[LOD].MeshLOD[Section].Triangles,
							CustomAsset->MeshData[LOD].MeshLOD[Section].Normals,
							CustomAsset->MeshData[LOD].MeshLOD[Section].UV0,
							VertexColors,
							CustomAsset->MeshData[LOD].MeshLOD[Section].Tangents,
							false);
					}
				}
			}
		}
	}
}

bool FCustomAssetViewportClient::CreateMeshLOD(int32 LODNum)
{
	bool CreateSucess = false;
	for (int32 i = 0; i < LODNum; i++)
	{
		UProceduralMeshComponent *ProceduralMeshComponent = NewObject<UProceduralMeshComponent>(PreviewScene->GetWorld(),
			TEXT("PreviewMesh"));
		PreviewScene->AddComponent(ProceduralMeshComponent, FTransform::Identity);
		ProceduralMesh.Add(ProceduralMeshComponent);
		CreateSucess = true;
	}
	return CreateSucess;
}

