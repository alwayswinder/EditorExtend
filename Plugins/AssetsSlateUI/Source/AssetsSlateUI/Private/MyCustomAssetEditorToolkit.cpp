#include "MyCustomAssetEditorToolkit.h"
#include "Widgets\Images\SImage.h"
#include "Toolkits\AssetEditorToolkit.h"


#define LOCTEXT_NAMESPACE "CustomAssetEditor"

namespace CustomAssetEditor
{
	static const FName AssetEditorID("CustomAssetID");

};

void FMyCustomAssetEditorToolkit::RegisterTabSpawners(const TSharedRef<FTabManager>& InManager)
{
	Super::RegisterTabSpawners(InManager);
	InManager->RegisterTabSpawner(CustomAssetEditor::AssetEditorID, FOnSpawnTab::CreateLambda
	([&](const FSpawnTabArgs &Args)
	{
		return SNew(SDockTab)
			[
				SNew(SImage)
			];
	}));
}

void FMyCustomAssetEditorToolkit::UnregisterTabSpawners(const TSharedRef<FTabManager>& InManager)
{
	Super::UnregisterTabSpawners(InManager);
	InManager->UnregisterTabSpawner(CustomAssetEditor::AssetEditorID);

}

void FMyCustomAssetEditorToolkit::Initialize(UMyCustomAsset* InTextAsset, const EToolkitMode::Type InMode,
	const TSharedPtr<IToolkitHost>& InToolkitHost)
{
	MyCustomTextAsset = InTextAsset;

	const TSharedRef<FTabManager::FLayout> StandloneCustomLayout = FTabManager::NewLayout("StandloneCustomLayout_Layout")
		->AddArea(
			FTabManager::NewPrimaryArea()
			->Split(
				FTabManager::NewStack()
				->AddTab(CustomAssetEditor::AssetEditorID, ETabState::OpenedTab)
			)
		);
	InitAssetEditor(
		InMode,
		InToolkitHost,
		FName("CustomAssetEditorApp"),
		StandloneCustomLayout,
		true,
		true,
		InTextAsset
	);
	RegenerateMenusAndToolbars();
}

FName FMyCustomAssetEditorToolkit::GetToolkitFName() const
{
	return FName("CustomAssetEditor");
}

FText FMyCustomAssetEditorToolkit::GetBaseToolkitName() const
{
	return LOCTEXT("AppLabel", "Custom Asset Editor");
}

FString FMyCustomAssetEditorToolkit::GetWorldCentricTabPrefix() const
{
	return LOCTEXT("WorldCentericTabPrefix", "CustomAsset").ToString();
}

FLinearColor FMyCustomAssetEditorToolkit::GetWorldCentricTabColorScale() const
{
	return FLinearColor::Red;
}

#undef LOCTEXT_NAMESPACE