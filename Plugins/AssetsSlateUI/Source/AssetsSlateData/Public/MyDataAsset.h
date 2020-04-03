// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MyDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class ASSETSSLATEDATA_API UMyDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "MyDataAsset")
	FText MyText;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "MyDataAsset")
	float MyFloat;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "MyDataAsset")
	int32 MyInt;
};
