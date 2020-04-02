// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;
class FMenuBarBuilder;
class SWidget;
class FExtender;
class FUICommandList;
class AActor;

class FExtendEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command. */
	void PluginButtonClicked();
	
private:

	void AddToolbarExtension(FToolBarBuilder& Builder);
	void AddMenuExtension(FMenuBuilder& Builder);
	void AddMenuBarExtension(FMenuBarBuilder& Builder);

	void PullDownBar(FMenuBuilder& Builder);
	void PullDownSuBar(FMenuBuilder& Builder);

	TSharedRef<FExtender> SelectedCurrentActors(const TSharedRef<FUICommandList> MyCommandList, const TArray<AActor*> AlActor);

	void AddSelectActorButton(FMenuBuilder& Builder);
	
	TSharedRef<FExtender> GetPathsFromEditor(const TArray<FString>& NewPaths);

private:
	TSharedPtr<class FUICommandList> PluginCommands;
	FDelegateHandle LevelViewportMenuExtender_SelectedActors;
};


class FTaskABC
{
public:
	static TSharedRef<SWidget> MakeWidget(TSharedPtr<class FUICommandList> PluginCommands);
};