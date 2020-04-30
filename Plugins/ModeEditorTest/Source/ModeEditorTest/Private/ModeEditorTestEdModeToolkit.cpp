// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ModeEditorTestEdModeToolkit.h"
#include "ModeEditorTestEdMode.h"
#include "Engine/Selection.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"
#include "EditorModeManager.h"

#define LOCTEXT_NAMESPACE "FModeEditorTestEdModeToolkit"

namespace LocalNode
{
	static FText LeftFaceBehindTopID = LOCTEXT("LeftFaceBehindTopID", "left face behind top point");
	static FText RightFaceBehindTopID = LOCTEXT("RightFaceBehindTopID", "right face behind top point");
}

FModeEditorTestEdModeToolkit::FModeEditorTestEdModeToolkit()
{
}

void FModeEditorTestEdModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost)
{
	struct Locals
	{
		static bool IsWidgetEnabled()
		{
			return GEditor->GetSelectedActors()->Num() != 0;
		}

		static FReply OnButtonClick(FVector InOffset)
		{
			USelection* SelectedActors = GEditor->GetSelectedActors();

			// Let editor know that we're about to do something that we want to undo/redo
			GEditor->BeginTransaction(LOCTEXT("MoveActorsTransactionName", "MoveActors"));

			// For each selected actor
			for (FSelectionIterator Iter(*SelectedActors); Iter; ++Iter)
			{
				if (AActor* LevelActor = Cast<AActor>(*Iter))
				{
					// Register actor in opened transaction (undo/redo)
					LevelActor->Modify();
					// Move actor to given location
					LevelActor->TeleportTo(LevelActor->GetActorLocation() + InOffset, FRotator(0, 0, 0));
				}
			}

			// We're done moving actors so close transaction
			GEditor->EndTransaction();

			return FReply::Handled();
		}

		static FReply OnCenterPointButtonClick(FText InID)
		{

			GEngine->AddOnScreenDebugMessage(0, 2.0f, FColor::Green, InID.ToString());
			if (GEditor->GetSelectedActorCount() <= 0)
			{
				return FReply::Unhandled();
			}
			const FScopedTransaction Transaction(LOCTEXT("ActorsPivotChange", "Actors Pivot Change"));

			return FReply::Handled();
		}
		static FVector GetSelectActorPivot(AActor* Actor, const FText *ID)
		{
			if (FMath::IsNearlyZero(Actor->GetComponentsBoundingBox().GetVolume(), KINDA_SMALL_NUMBER))
			{
				return Actor->GetActorLocation();
			}
			FVector Point(0);
			const FTransform ActorTransform = Actor->GetActorTransform();

			TArray<UPrimitiveComponent*> ValidComponent;
			GetValidComponent(Actor, ValidComponent);


		}
		static bool GetComponentBox(UPrimitiveComponent* InComponent, FBox& OutBox)
		{
			bool bBox = false;
			if (InComponent)
			{
				if (!bBox)
				{
					const UStaticMeshComponent* StaticMeshComponent = Cast<const UStaticMeshComponent>(InComponent);
					if (StaticMeshComponent && StaticMeshComponent->GetStaticMesh())
					{
						OutBox = StaticMeshComponent->GetStaticMesh()->GetBoundingBox();
						bBox = true;
					}
				}
				if (!bBox)
				{
					const UBrushComponent* BrushComponent = Cast<const UBrushComponent>(InComponent);
					if (BrushComponent && BrushComponent->Brush)
					{
						OutBox = BrushComponent->Brush->Bounds.GetBox();
						bBox = true;
					}
				}
				if (!bBox)
				{
					const USkinnedMeshComponent* SkinMeshComponent = Cast<const USkinnedMeshComponent>(InComponent);
					if (SkinMeshComponent && SkinMeshComponent->SkeletalMesh)
					{
						OutBox = SkinMeshComponent->SkeletalMesh->GetImportedBounds().GetBox();
						bBox = true;
					}
				}
			}
			return bBox;
		}

		static void GetValidComponent(AActor *InActor, TArray<UPrimitiveComponent*>& InComponents)
		{
			if (InActor)
			{
				TArray<UPrimitiveComponent*> PrimitiveComponents;
				InActor->GetComponents<UPrimitiveComponent>(PrimitiveComponents);
				for (UPrimitiveComponent* Component : PrimitiveComponents)
				{
					bool bValidMesh = false;
					if (!bValidMesh)
					{
						UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(Component);
						bValidMesh = (
							StaticMeshComponent &&
							StaticMeshComponent->GetStaticMesh() &&
							StaticMeshComponent->GetStaticMesh()->RenderData->LODResources[0]
							.VertexBuffers.PositionVertexBuffer.GetNumVertices() > 0
							);
					}
					if (!bValidMesh)
					{
						UBrushComponent* BrushComponent = Cast<UBrushComponent>(Component);
						bValidMesh = (
							BrushComponent &&
							BrushComponent->Brush &&
							BrushComponent->Brush->Polys->Element.Num() > 0
							);
					}
					if (!bValidMesh)
					{
						USkinnedMeshComponent* SkinMeshComponent = Cast<USkinnedMeshComponent>(Component);
						bValidMesh = (
							SkinMeshComponent &&
							SkinMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[0]
							.RenderSections[0].NumVertices > 0
							);
					}
					if (bValidMesh)
					{
						InComponents.Add(Component);
					}

				}
			}
		}

		static TSharedRef<SWidget> MakeButton(FText InLabel, const FVector InOffset)
		{
			return SNew(SButton)
				.Text(InLabel)
				.OnClicked_Static(&Locals::OnButtonClick, InOffset);
		}

		static TSharedRef<SWidget> MakeCenterPointButton(FText InID)
		{
			return SNew(SButton)
				.Text(InID)
				.OnClicked_Static(&Locals::OnCenterPointButtonClick, InID);
		}
	};

	const float Factor = 256.0f;

	SAssignNew(ToolkitWidget, SBorder)
		.HAlign(HAlign_Center)
		.Padding(25)
		.IsEnabled_Static(&Locals::IsWidgetEnabled)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			.HAlign(HAlign_Center)
			.Padding(50)
			[
				SNew(STextBlock)
				.AutoWrapText(true)
				.Text(LOCTEXT("HelperLabel", "Select some actors and move them around using buttons below"))
			]
			+ SVerticalBox::Slot()
				.HAlign(HAlign_Center)
				.AutoHeight()
				[
					Locals::MakeButton(LOCTEXT("UpButtonLabel", "Up"), FVector(0, 0, Factor))
				]
			+ SVerticalBox::Slot()
				.HAlign(HAlign_Center)
				.AutoHeight()
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.AutoWidth()
					[
						Locals::MakeButton(LOCTEXT("LeftButtonLabel", "Left"), FVector(0, -Factor, 0))
					]
					+ SHorizontalBox::Slot()
						.AutoWidth()
						[
							Locals::MakeButton(LOCTEXT("RightButtonLabel", "Right"), FVector(0, Factor, 0))
						]
				]
			+ SVerticalBox::Slot()
				.HAlign(HAlign_Center)
				.AutoHeight()
				[
					Locals::MakeButton(LOCTEXT("DownButtonLabel", "Down"), FVector(0, 0, -Factor))
				]
			+ SVerticalBox::Slot()
				.HAlign(HAlign_Center)
				.AutoHeight()
				[
					Locals::MakeCenterPointButton(LocalNode::LeftFaceBehindTopID)
				]
			+ SVerticalBox::Slot()
				.HAlign(HAlign_Center)
				.AutoHeight()
				[
					Locals::MakeCenterPointButton(LocalNode::RightFaceBehindTopID)
				]

		];
		
	FModeToolkit::Init(InitToolkitHost);
}

FName FModeEditorTestEdModeToolkit::GetToolkitFName() const
{
	return FName("ModeEditorTestEdMode");
}

FText FModeEditorTestEdModeToolkit::GetBaseToolkitName() const
{
	return NSLOCTEXT("ModeEditorTestEdModeToolkit", "DisplayName", "ModeEditorTestEdMode Tool");
}

class FEdMode* FModeEditorTestEdModeToolkit::GetEditorMode() const
{
	return GLevelEditorModeTools().GetActiveMode(FModeEditorTestEdMode::EM_ModeEditorTestEdModeId);
}

#undef LOCTEXT_NAMESPACE
