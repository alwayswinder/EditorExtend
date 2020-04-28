#pragma once

#include "CoreMinimal.h"
#include "IPropertyTypeCustomization.h"
#include "MyCustomAsset.h"

class ASSETSSLATEUI_API FMeshImportDetail : public IPropertyTypeCustomization
{
public:
	virtual void CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, FDetailWidgetRow& HeaderRow,
		IPropertyTypeCustomizationUtils& CustomizationUtils)override;
	virtual void CustomizeChildren(TSharedRef<IPropertyHandle> PropertyHandle,
		IDetailChildrenBuilder& ChildBuilder,
		IPropertyTypeCustomizationUtils& CustomizationUtils)override;
	static TSharedRef<IPropertyTypeCustomization> MakeInstance();
private:
	void OnLabelsRootTextCommited(const FText& InText, ETextCommit::Type InCommitType)const;
private:
	FReply HandleImportClicked();

	TSharedPtr<IPropertyHandle> HandleMeshSavePaths;
	TSharedPtr<class SEditableTextBox> EditableTextBox;
};