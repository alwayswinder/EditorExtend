#include "MyTestCustomization.h"
#include <DetailLayoutBuilder.h>
#include <DetailCategoryBuilder.h>
#include <DetailWidgetRow.h>

#define LOCTEXT_NAMESPACE "MyTestCustomization"
void FMyTestDetailsCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	IDetailCategoryBuilder& DetailCategorybuilderinstance = DetailBuilder.EditCategory(TEXT("CustomizeDetails"));
	DetailCategorybuilderinstance.AddCustomRow(LOCTEXT("DETAILS", "Details test"))
		.WholeRowContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("DETAILS1", "Details test1"))
		];
}

TSharedRef<IDetailCustomization> FMyTestDetailsCustomization::MakeInstance()
{
	return MakeShareable(new FMyTestDetailsCustomization);
}
#undef LOCTEXT_NAMESPACE
