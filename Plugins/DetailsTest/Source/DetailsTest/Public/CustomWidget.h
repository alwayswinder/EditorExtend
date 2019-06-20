#pragma once

#include "CoreMinimal.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SCompoundWidget.h"
#include "IDetailsView.h"


class SCustomWidget : public SCompoundWidget 
{
public:

	SLATE_BEGIN_ARGS(SCustomWidget)  {}

	SLATE_ATTRIBUTE(class UCustomizationObject*, CustomizeObject)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	TSharedPtr<IDetailsView> ConfigPanel;

	class UCustomizationObject *CustomizeObject;
};