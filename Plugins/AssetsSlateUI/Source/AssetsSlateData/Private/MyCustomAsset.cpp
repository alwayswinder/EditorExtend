// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCustomAsset.h"

#define CHECK_MESH(VariableName)\
if(Section.VariableName.Num()!= CustomAssetCache.VariableName##Num)\
{\
	bIsModify = true;\
	CustomAssetCache.VariableName##Num = Section.VariableName.Num();\
}

UMyCustomAsset::UMyCustomAsset()
{

	CreateBox();
}

void UMyCustomAsset::CreateBox()
{
	/*
	Vertices.Add(FVector(0.f, 0.f, 0.f));
	Vertices.Add(FVector(0.f, 100.f, 0.f));
	Vertices.Add(FVector(100.f, 100.f, 0.f));
	Vertices.Add(FVector(100.f, 0.f, 0.f));
	Vertices.Add(FVector(0.f, 0.f, 100.f));
	Vertices.Add(FVector(0.f, 100.f, 100.f));
	Vertices.Add(FVector(100.f, 100.f, 100.f));
	Vertices.Add(FVector(100.f, 0.f, 100.f));

	Triangles.Add(0); Triangles.Add(1); Triangles.Add(5);
	Triangles.Add(0); Triangles.Add(5); Triangles.Add(4);

	Triangles.Add(1); Triangles.Add(2); Triangles.Add(6);
	Triangles.Add(1); Triangles.Add(6); Triangles.Add(5);

	Triangles.Add(2); Triangles.Add(3); Triangles.Add(7);
	Triangles.Add(2); Triangles.Add(7); Triangles.Add(6);

	Triangles.Add(3); Triangles.Add(0); Triangles.Add(4);
	Triangles.Add(3); Triangles.Add(4); Triangles.Add(7);

	Triangles.Add(5); Triangles.Add(6); Triangles.Add(7);
	Triangles.Add(5); Triangles.Add(7); Triangles.Add(4);

	Triangles.Add(1); Triangles.Add(3); Triangles.Add(2);
	Triangles.Add(1); Triangles.Add(0); Triangles.Add(3);
	*/

}

void UMyCustomAsset::ClearMeshData()
{
	/*
	Vertices.Empty();
	Triangles.Empty();
	*/
}

bool UMyCustomAsset::IsModify()
{
	bool bIsModify = false;

	for (int32 Lod = 0; Lod < MeshData.Num(); Lod++)
	{
		for (FCustomMeshSection &Section : MeshData[Lod].MeshLOD)
		{
			/*
			CHECK_MESH(Vertices)
			CHECK_MESH(Triangles)
			CHECK_MESH(Normals)
			CHECK_MESH(UV0)
			CHECK_MESH(Tangents)*/
			if (CustomAssetCache.VerticesNum.IsValidIndex(Lod))
			{
				if (Section.Vertices.Num() != CustomAssetCache.VerticesNum[Lod])
				{
					bIsModify = true;
					CustomAssetCache.VerticesNum[Lod] = Section.Vertices.Num();
					FString log = FString::FromInt(Section.Vertices.Num());
					UE_LOG(LogTemp, Warning, TEXT("Section num = %d"), Section.Vertices.Num());
				}
			}
			else
			{
				bIsModify = true;
				CustomAssetCache.VerticesNum.Add(Section.Vertices.Num());
			}
			
		}
	}
	return bIsModify;
}
