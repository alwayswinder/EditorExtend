// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class DELAY_EXEC : uint8
{
	HalfExec,
	CompleteExec
};

class FTwiceDelayAction : public FPendingLatentAction
{
public:
	float TotalTime;
	float TimeRemaining;
	FName ExecutionFunction;
	int32 OutputLink;
	FWeakObjectPtr CallbackTarget;
	DELAY_EXEC& execRef;
	bool bHalfTriggered = false;
public:
	FTwiceDelayAction(float Duration, const FLatentActionInfo& LatentInfo, DELAY_EXEC& exec)
		:TotalTime(Duration),
		TimeRemaining(Duration),
		ExecutionFunction(LatentInfo.ExecutionFunction),
		OutputLink(LatentInfo.Linkage),
		CallbackTarget(LatentInfo.CallbackTarget),
		execRef(exec)
	{}

	virtual void UpdateOperation(FLatentResponse& Response)override
	{
		TimeRemaining -= Response.ElapsedTime();
		if (TimeRemaining < TotalTime / 2.0f && !bHalfTriggered)
		{
			execRef = DELAY_EXEC::HalfExec;
			Response.TriggerLink(ExecutionFunction, OutputLink, CallbackTarget);
			bHalfTriggered = true;
		}
		else if(TimeRemaining < 0.0f)
		{
			execRef = DELAY_EXEC::CompleteExec;
			Response.TriggerLink(ExecutionFunction, OutputLink, CallbackTarget);
			Response.DoneIf(TimeRemaining < 0.0f);
		}
	}
};


UCLASS()
class EDITEXTEND01_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "MyFunctionLibrary")
	static bool ResetMaterialSlotNames(UStaticMesh* StaticMesh, FName newSlotname);

	UFUNCTION(BlueprintCallable, meta=(HidePin="WorldContextObject", DefaultToSelf="WorldContextObject", 
		Latent, LatentInfo="LatentInfo",ExpandEnumAsExecs="exec"))
	static void TwiceDelay(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Duration, DELAY_EXEC& exec);
};
