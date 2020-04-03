// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Factories/Factory.h"
#include "MyCustomFactory.generated.h"

/**
 * 
 */
UCLASS()
class ASSETSSLATEUI_API UMyCustomFactory : public UFactory
{
	GENERATED_BODY()
public:
	UMyCustomFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
		UObject* Context, FFeedbackContext* Warn, FName CallingContext)override;

};
 