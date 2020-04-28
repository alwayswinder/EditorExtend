// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MeshImport.h"
#include "ProceduralMeshComponent.h"
#include "MyCustomAsset.generated.h"


struct FCustomAssetCache
{
	TArray<int32> VerticesNum;
	TArray<int32> TrianglesNum;
	TArray<int32> NormalsNum ;
	TArray<int32> UV0Num;
	TArray<int32> TangentsNum;

	FCustomAssetCache()
	{}
};
USTRUCT(BlueprintType)
struct FCustomMeshSection
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Section")
	TArray<FVector> Vertices;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Section")
	TArray<int32> Triangles;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Section")
	TArray<FVector> Normals;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Section")
	TArray<FVector2D> UV0;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Section")
	TArray<FVector2D> UV1;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Section")
	TArray<FVector2D> UV2;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Section")
	TArray<FProcMeshTangent> Tangents;

};

USTRUCT(BlueprintType)
struct FCustomMeshLOD
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Section")
	TArray<FCustomMeshSection> MeshLOD;
};


UCLASS()
class ASSETSSLATEDATA_API UMyCustomAsset : public UObject
{
	GENERATED_BODY()

public:
	UMyCustomAsset();
	void CreateBox();
	void ClearMeshData();

	bool IsModify();

public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CustomAsset")
	TArray<FCustomMeshLOD> MeshData;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CustomAsset")
	FMeshImport MeshImport;
private: 
	FCustomAssetCache CustomAssetCache;
};
