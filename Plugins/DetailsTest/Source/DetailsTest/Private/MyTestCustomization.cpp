#include "MyTestCustomization.h"
#include <DetailLayoutBuilder.h>
#include <DetailCategoryBuilder.h>
#include <DetailWidgetRow.h>
#include "PropertyCustomizationHelpers.h"
#include "Widgets\Images\SImage.h"

#define LOCTEXT_NAMESPACE "MyTestCustomization"
void FMyTestDetailsCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	IDetailCategoryBuilder& DetailCategorybuilderinstance = DetailBuilder.EditCategory(TEXT("CustomizeDetails"));
	TSharedPtr<IPropertyHandle> TestFloat = DetailBuilder.GetProperty("TestFloat");
	DetailBuilder.AddPropertyToCategory(TestFloat);
	DetailCategorybuilderinstance
		.AddCustomRow(LOCTEXT("DETAILS", "Details test"))
		.WholeRowContent()
		[
			//SNew(STextBlock)
			//.Text(LOCTEXT("DETAILS1", "Details test1"))
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			[
				SNew(SProperty, TestFloat)
				/*.CustomWidget()
				[
					SNew(SImage)
				]*/
			]
			+SHorizontalBox::Slot()
			[
				SNew(SProperty, DetailBuilder.GetProperty("TestText"))
			]
		];
}

TSharedRef<IDetailCustomization> FMyTestDetailsCustomization::MakeInstance()
{
	return MakeShareable(new FMyTestDetailsCustomization);
}
#undef LOCTEXT_NAMESPACE
