// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ExtendEditor.h"
#include "ExtendEditorStyle.h"
#include "ExtendEditorCommands.h"
#include "Misc/MessageDialog.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

#include "LevelEditor.h"
#include "SImage.h"

static const FName ExtendEditorTabName("ExtendEditor");

#define LOCTEXT_NAMESPACE "FExtendEditorModule"

void FExtendEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FExtendEditorStyle::Initialize();
	FExtendEditorStyle::ReloadTextures();

	FExtendEditorCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FExtendEditorCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FExtendEditorModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	{
		TSharedPtr<FExtender> MenubarExtender = MakeShareable(new FExtender());
		MenubarExtender->AddMenuBarExtension("Help", EExtensionHook::After, PluginCommands, FMenuBarExtensionDelegate::CreateRaw(this, &FExtendEditorModule::AddMenuBarExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenubarExtender);
	}

	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FExtendEditorModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	
	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FExtendEditorModule::AddToolbarExtension));
		
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
}

void FExtendEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FExtendEditorStyle::Shutdown();

	FExtendEditorCommands::Unregister();
}

void FExtendEditorModule::PluginButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	FText DialogText = FText::Format(
							LOCTEXT("PluginButtonDialogText", "Add code to {0} in {1} to override this button's actions"),
							FText::FromString(TEXT("FExtendEditorModule::PluginButtonClicked()")),
							FText::FromString(TEXT("ExtendEditor.cpp"))
					   );
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}

void FExtendEditorModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.BeginSection(TEXT("Extend"));
	{
		Builder.AddMenuEntry(FExtendEditorCommands::Get().PluginAction);
	}
	Builder.EndSection();
}

void FExtendEditorModule::AddMenuBarExtension(FMenuBarBuilder& Builder)
{
	Builder.AddPullDownMenu(
		LOCTEXT("EXTEND", "Extend"),
		LOCTEXT("I_AM_BUTTON", "I am button"),
		FNewMenuDelegate::CreateRaw(this, &FExtendEditorModule::PullDownBar),
		"Extend"
	);
}

void FExtendEditorModule::PullDownBar(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FExtendEditorCommands::Get().PluginAction);

	Builder.AddMenuEntry(FExtendEditorCommands::Get().PluginAction);
	Builder.AddMenuSeparator();

	Builder.AddSubMenu(
		LOCTEXT("EXTENDSUBAR", "ExtendSubar"),
		LOCTEXT("I_AM_BUTTON_S", "I am button sub"),
		FNewMenuDelegate::CreateRaw(this, &FExtendEditorModule::PullDownSuBar)
	);
}

void FExtendEditorModule::PullDownSuBar(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FExtendEditorCommands::Get().PluginAction);

	Builder.AddWidget(
		SNew(SImage),
		LOCTEXT("IMAGETASK", "Just a test")
	);

	Builder.AddEditableText(
		LOCTEXT("OK_A", "input test A"),
		LOCTEXT("OK_B", "input test B"),
		FSlateIcon(),
		LOCTEXT("OK_DEFAULT", "please input")
	);
	Builder.AddSearchWidget();
	Builder.AddWrapperSubMenu(
		LOCTEXT("WRAP", "WrapTest"),
		LOCTEXT("WRAP", "WrapTest"),
		FOnGetContent::CreateStatic<TSharedPtr<FUICommandList>>(&FTaskABC::MakeWidget, PluginCommands),
		FSlateIcon()
	);
}

void FExtendEditorModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FExtendEditorCommands::Get().PluginAction);
}


TSharedRef<SWidget> FTaskABC::MakeWidget(TSharedPtr<class FUICommandList> PluginCommands)
{
	return SNew(SImage);
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FExtendEditorModule, ExtendEditor)
