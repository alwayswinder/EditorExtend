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
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "MyDataAsset")
	FText MyText;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "MyDataAsset")
	float MyFloat;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "MyDataAsset")
	int32 MyInt;
};
