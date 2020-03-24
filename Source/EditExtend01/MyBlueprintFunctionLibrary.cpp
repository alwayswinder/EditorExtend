// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBlueprintFunctionLibrary.h"

bool UMyBlueprintFunctionLibrary::ResetMaterialSlotNames(UStaticMesh* StaticMesh, FName newSlotname)
{
	if (StaticMesh != NULL)
	{
		if (StaticMesh->StaticMaterials.Num() > 0)
		{
			StaticMesh->StaticMaterials[0].MaterialSlotName = newSlotname;
			return true;
		}
	}
	return false;
}

void UMyBlueprintFunctionLibrary::TwiceDelay(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Duration, 
	DELAY_EXEC& exec)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<FTwiceDelayAction>(LatentInfo.CallbackTarget, LatentInfo.UUID)
			== NULL)
		{
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new FTwiceDelayAction(Duration,
				LatentInfo, exec));
		}
	}
}
