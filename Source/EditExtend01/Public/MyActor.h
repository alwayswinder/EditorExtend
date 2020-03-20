// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine//TriggerBox.h"
#include "MyActor.generated.h"


UCLASS()
class EDITEXTEND01_API AMyActor : public ATriggerBox
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

#if WITH_EDITOR
	UFUNCTION(CallInEditor, Category = "Test")
		void SpawnOne();
	UFUNCTION(CallInEditor, Category = "Test")
		void ClearActor();

	UFUNCTION(BlueprintCallable, Category = "Test")
		static void SimulatePlay();
	UFUNCTION(BlueprintCallable, Category = "Test")
		static void SaveCurentState();
	UFUNCTION(BlueprintCallable, Category = "Test")
		static void SpawnOneActor();
	UFUNCTION(BlueprintCallable, Category = "Test")
		static void StopPlay();
	UFUNCTION(BlueprintCallable, Category = "Test")
		static void ClearAllActors();
	

#endif 

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY()
		TArray<AActor*> SpawnActors;
	UPROPERTY(EditAnywhere, Category = "Test")
		TSubclassOf<AActor> SpawnTargetClass;

#endif 

};
