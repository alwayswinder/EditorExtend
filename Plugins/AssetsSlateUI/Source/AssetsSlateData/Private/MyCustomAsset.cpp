// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCustomAsset.h"

#define CHECK_MESH(VariableName)\
if (MeshData.Num() > 0 && MeshData[0].MeshLOD.Num() > 0)\
{\
	if (MeshData[0].MeshLOD[0].VariableName.Num() != CustomAssetCache.VariableName##Num)\
	{\
		bIsModify = true;\
		CustomAssetCache.VariableName##Num = MeshData[0].MeshLOD[0].VariableName.Num();\
	}\
}\
else if (CustomAssetCache.VariableName##Num != 0)\
{\
	bIsModify = true;\
	CustomAssetCache.VariableName##Num = 0;\
}


UMyCustomAsset::UMyCustomAsset()
{}

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



bool UMyCustomAsset::IsModify()
{
	bool bIsModify = false;
	CHECK_MESH(Vertices)
	CHECK_MESH(Triangles)
	CHECK_MESH(Normals)
	CHECK_MESH(UV0)
	CHECK_MESH(Tangents)
	if (MaterialInterface)
	{
		if (CustomAssetCache.MaterialInterface != MaterialInterface)
		{
			bIsModify = true;
			CustomAssetCache, MaterialInterface = MaterialInterface;
		}
	}
	return bIsModify;
}
#if WITH_EDITOR
void UMyCustomAsset::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif