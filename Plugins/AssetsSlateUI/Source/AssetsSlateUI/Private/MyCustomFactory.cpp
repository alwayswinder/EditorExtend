// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCustomFactory.h"
#include "MyCustomAsset.h"

UMyCustomFactory::UMyCustomFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UMyCustomAsset::StaticClass();
}

UObject* UMyCustomFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName,
	EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	return NewObject<UMyCustomAsset>(InParent, InClass, InName, Flags | RF_Transactional);
}
