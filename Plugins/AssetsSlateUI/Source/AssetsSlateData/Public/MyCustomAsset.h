// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyCustomAsset.generated.h"

/**
 * 
 */
UCLASS()
class ASSETSSLATEDATA_API UMyCustomAsset : public UObject
{
	GENERATED_BODY()
public:
	UMyCustomAsset();

	void CreateBox();
public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CustomAsset")
	TArray<FVector> Vertices;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CustomAsset")
	TArray<int32> Triangles;
};
