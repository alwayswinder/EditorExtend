// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Components\BoxComponent.h"
#include "UnrealEdGlobals.h"
#include "Editor.h"
#include "Editor/EditorEngine.h"
#include "Editor\UnrealEdEngine.h"
#include "LevelEditor.h"
#include "EngineAnalytics.h"
#include "Interfaces\IAnalyticsProvider.h"
#include "Kismet2\DebuggerCommands.h"
#include "Kismet\GameplayStatics.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::SaveActorInfoWhenPlay(AActor* actorPIE, AActor* actorEditor)
{
	const auto CopyOptions = (EditorUtilities::ECopyOptions::Type)(
		EditorUtilities::ECopyOptions::CallPostEditChangeProperty |
		EditorUtilities::ECopyOptions::CallPostEditMove |
		EditorUtilities::ECopyOptions::OnlyCopyEditOrInterpProperties |
		EditorUtilities::ECopyOptions::FilterBlueprintReadOnly);
	const int32 CopiedPropertyCount = EditorUtilities::CopyActorProperties(actorPIE, actorEditor,
		CopyOptions);
}

void AMyActor::SpawnOne()
{
	if (!SpawnTargetClass)
	{
		return;
	}

	UWorld* editorWorld = GEditor->GetEditorWorldContext().World();
	UBoxComponent* BoxComponent = CastChecked<UBoxComponent>(GetRootComponent());
	FVector Origin = GetActorLocation();
	FVector BoxExtent = BoxComponent->GetScaledBoxExtent();
	FBox box = FBox::BuildAABB(Origin, BoxExtent);
	FVector pos = FMath::RandPointInBox(box);
	pos.Z = box.Max.Z;

	AActor* newActor = editorWorld->SpawnActor(SpawnTargetClass, &pos);
	SpawnActors.Add(newActor);
}

void AMyActor::ClearActor()
{
	for (AActor* actor:SpawnActors)
	{
		actor->Destroy();
	}
	SpawnActors.Empty();
}


void AMyActor::SimulatePlay()
{
	if (GEditor->PlayWorld != NULL && GUnrealEd->bIsSimulatingInEditor)
	{
		return;
	}
	FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));

	TSharedPtr<ILevelViewport> ActiveLevelViewport = LevelEditorModule.GetFirstActiveViewport();
	if (ActiveLevelViewport.IsValid())
	{
		// Start a new simulation session!
		if (GEditor->PlayWorld == NULL)
		{
			
			if (FEngineAnalytics::IsAvailable())
			{
				FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.SimulateInEditor"));
			}
		
			ULevelEditorPlaySettings* PlaySettings = GetMutableDefault<ULevelEditorPlaySettings>();
			PlaySettings->LastExecutedPlayModeType = PlayMode_Simulate;

			FPropertyChangedEvent PropChangeEvent(
				ULevelEditorPlaySettings::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(ULevelEditorPlaySettings, 
					LastExecutedPlayModeType)));

			PlaySettings->PostEditChangeProperty(PropChangeEvent);

			PlaySettings->SaveConfig();
			GUnrealEd->RequestPlaySession(false, ActiveLevelViewport, true/*bSimulateInEditor*/, NULL, NULL, -1, false);
		}
		/*else if (activelevelviewport->hasplayineditorviewport())
		{
			gunrealed->requesttogglebetweenpieandsie();
		}*/
	}
}

void AMyActor::SaveCurentState()
{
	UWorld* editorWorld = GEditor->GetEditorWorldContext().World();

	TArray<AActor*> AllMyActorsInLevel;
	UGameplayStatics::GetAllActorsOfClass(editorWorld, AMyActor::StaticClass(), AllMyActorsInLevel);

	for (AActor* actor : AllMyActorsInLevel)
	{
		AMyActor* myActor = Cast<AMyActor>(actor);
		for (AActor* EditorActor : myActor->SpawnActors)
		{
			AActor* simWorldActor = EditorUtilities::GetSimWorldCounterpartActor(EditorActor);
			if (simWorldActor != NULL)
			{
				SaveActorInfoWhenPlay(simWorldActor, EditorActor);
			}
		}
	}
}

void AMyActor::SpawnOneActor()
{
	UWorld* editorWorld = GEditor->GetEditorWorldContext().World();

	TArray<AActor*> AllMyActorsInLevel;
	UGameplayStatics::GetAllActorsOfClass(editorWorld, AMyActor::StaticClass(), AllMyActorsInLevel);
	for (AActor* actor : AllMyActorsInLevel)
	{
		AMyActor* myActor = Cast<AMyActor>(actor);
		if (!myActor->SpawnTargetClass)
		{
			return;
		}
		UBoxComponent* BoxComponent = CastChecked<UBoxComponent>(myActor->GetRootComponent());
		FVector Origin = myActor->GetActorLocation();
		FVector BoxExtent = BoxComponent->GetScaledBoxExtent();
		FBox box = FBox::BuildAABB(Origin, BoxExtent);
		FVector pos = FMath::RandPointInBox(box);
		pos.Z = box.Max.Z;

		AActor* newActor = editorWorld->SpawnActor(myActor->SpawnTargetClass, &pos);
		myActor->SpawnActors.Add(newActor);

		UWorld* PIEWorld = GEditor->GetPIEWorldContext() ? GEditor->GetPIEWorldContext()->World() : nullptr;
		if (PIEWorld)
		{
			AActor* NewLevelActor = PIEWorld->SpawnActor(myActor->SpawnTargetClass, &pos);
			NewLevelActor->SetOwner(newActor);
		}
	}
} 

void AMyActor::StopPlay()
{
	UWorld* PIEWorld = GEditor->GetPIEWorldContext() ? GEditor->GetPIEWorldContext()->World() : nullptr;

	TArray<AActor*> AllMyActorsInLevel;
	UGameplayStatics::GetAllActorsOfClass(PIEWorld, AMyActor::StaticClass(), AllMyActorsInLevel);
	if (AllMyActorsInLevel.Num() > 0)
	{
		AMyActor* myActor = Cast<AMyActor>(AllMyActorsInLevel[0]);
		TArray<AActor*> AllSpawnActors;
		UGameplayStatics::GetAllActorsOfClass(PIEWorld, myActor->SpawnTargetClass, AllSpawnActors);
		for (AActor* SpawnActor : AllSpawnActors)
		{
			if (SpawnActor->GetOwner())
			{
				SaveActorInfoWhenPlay(SpawnActor, SpawnActor->GetOwner());
			}
		}
	}
	SaveCurentState();
	GEditor->RequestEndPlayMap();
}

void AMyActor::ClearAllActors()
{
	UWorld* editorWorld = GEditor->GetEditorWorldContext().World();
	TArray<AActor*> AllMyActorsInEditor;
	UGameplayStatics::GetAllActorsOfClass(editorWorld, AMyActor::StaticClass(), AllMyActorsInEditor);
	for (AActor* actor : AllMyActorsInEditor)
	{
		AMyActor* myActor = Cast<AMyActor>(actor);
		myActor->ClearActor();
	}

	UWorld* PIEWorld = GEditor->GetPIEWorldContext() ? GEditor->GetPIEWorldContext()->World() : nullptr;
	TArray<AActor*> AllMyActorsInLevel;
	UGameplayStatics::GetAllActorsOfClass(PIEWorld, AMyActor::StaticClass(), AllMyActorsInLevel);
	if (AllMyActorsInLevel.Num() > 0)
	{
		AMyActor* myActor = Cast<AMyActor>(AllMyActorsInLevel[0]);
		TArray<AActor*> AllSpawnActors;
		UGameplayStatics::GetAllActorsOfClass(PIEWorld, myActor->SpawnTargetClass, AllSpawnActors);
		for (AActor* SpawnActor : AllSpawnActors)
		{
			SpawnActor->Destroy();
		}
	}
}

void AMyActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);



}

