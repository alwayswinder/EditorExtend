// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MeshImport.h"
#include "ProceduralMeshComponent.h"
#include "MyCustomAsset.generated.h"


struct FCustomAssetCache
{
	int32 VerticesNum;
	int32 TrianglesNum;
	int32 NormalsNum ;
	int32 UV0Num;
	int32 TangentsNum;
	UMaterialInterface *MaterialInterface;

	FCustomAssetCache()
		:VerticesNum(0)
		,TrianglesNum(0)
		,NormalsNum(0)
		,UV0Num(0)
		,TangentsNum(0)
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

	bool IsModify();
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)override;
#endif

public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CustomAsset")
	TArray<FCustomMeshLOD> MeshData;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CustomAsset")
	FMeshImport MeshImport;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CustomAsset")
	UMaterialInterface *MaterialInterface;

private: 
	FCustomAssetCache CustomAssetCache;
};
