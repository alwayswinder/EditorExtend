#pragma once


#include "CoreMinimal.h"
#include <ObjectMacros.h>
#include "StructVariable.generated.h"


USTRUCT(BlueprintType)
struct  FStructVariable 
{
	GENERATED_USTRUCT_BODY();
public:
	UPROPERTY(EditAnywhere, Category = "Struct Value")
	int32 Testvalue;

	UPROPERTY(EditAnywhere, Category = "Struct Value")
	FText MyText;
};