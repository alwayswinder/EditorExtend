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
