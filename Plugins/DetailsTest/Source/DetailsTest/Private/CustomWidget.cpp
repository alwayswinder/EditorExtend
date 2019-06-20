#include "CustomWidget.h"
#include "PropertyEditing.h"
#include "PropertyEditorModule.h"
#include "ModuleManager.h"
#include "CustomizationObject.h"
#include "SBorder.h"
#include "SBox.h"


void SCustomWidget::Construct(const FArguments& InArgs)
{
	CustomizeObject = InArgs._CustomizeObject;
	
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FDetailsViewArgs DetailsViewArgs;
	ConfigPanel = PropertyModule.CreateDetailView(DetailsViewArgs);
//  ConfigPanel->SetObject(UCustomizationObject::StaticClass()->GetDefaultObject(true), true);

	ChildSlot
		[
			SNew(SVerticalBox)

			+SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SBox)
				.WidthOverride(300)
				.MinDesiredWidth(300)
				.MaxDesiredWidth(300)
				[
					SNew(SBorder)
					[
						ConfigPanel.ToSharedRef()
					]
				]
			]
		];
}

