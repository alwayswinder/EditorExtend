#pragma once
#include "CoreMinimal.h"
#include "MeshImport.generated.h"

USTRUCT(BlueprintType)
struct FMeshImport 
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	FText MeshSavePaths;
};