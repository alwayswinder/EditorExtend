#pragma once
#include "SCompoundWidget.h"

class SCustomDataAttribute : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SCustomDataAttribute){}
	SLATE_ATTRIBUTE(class UMyCustomAsset*, CustomAsset)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
private:
	class UMyCustomAsset* CustomAsset;
	TSharedPtr<IDetailsView> ConfigPanel;
};