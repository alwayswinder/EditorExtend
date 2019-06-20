// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StructVariable.h"
#include "CustomizationObject.generated.h"
/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class DETAILSTEST_API UCustomizationObject : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "Hell")
	FStructVariable TestStruct;

	UPROPERTY(EditAnywhere, Category = "Hell")
	float TestFloat;

	UPROPERTY(EditAnywhere, Category = "Hell")
	FText TestText;

	UPROPERTY(EditAnywhere, Category = "Hell")
	TArray<int32> TestArrayInt32;
};
