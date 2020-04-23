#include "SCustomAssetViewport.h"
#include "CustomAssetViewportClient.h"
#include "AdvancedPreviewScene.h"
#include "Components\DirectionalLightComponent.h"
#include "Components\SkyLightComponent.h"
#include "Atmosphere\AtmosphericFogComponent.h"

void SCustomAssetViewport::Construct(const FArguments& InArgs)
{
	CustomAsset = InArgs._CustomAsset.Get();

	{
		FAdvancedPreviewScene::ConstructionValues ViewConstructionValues;
		ViewConstructionValues.bCreatePhysicsScene = false;
		ViewConstructionValues.LightBrightness = 3;
		ViewConstructionValues.SkyBrightness = 1;
		PreviewScene = MakeShareable(new FAdvancedPreviewScene(ViewConstructionValues));
		PreviewScene->SetFloorVisibility(false);
		PreviewScene->SetFloorOffset(-10000);
	}
	USkyLightComponent* Skylight = NewObject<USkyLightComponent>();
	PreviewScene->AddComponent(Skylight, FTransform::Identity);
	UAtmosphericFogComponent* AtmosphericFog = NewObject<UAtmosphericFogComponent>();
	PreviewScene->AddComponent(AtmosphericFog, FTransform::Identity);
	PreviewScene->DirectionalLight->SetMobility(EComponentMobility::Movable);
	PreviewScene->DirectionalLight->CastShadows = true;
	PreviewScene->DirectionalLight->CastStaticShadows = true;
	PreviewScene->DirectionalLight->CastDynamicShadows = true;
	PreviewScene->DirectionalLight->SetIntensity(3);

	SEditorViewport::Construct(SEditorViewport::FArguments());
}

SCustomAssetViewport::~SCustomAssetViewport()
{
	if (EditorVIewportClient.IsValid())
	{
		EditorVIewportClient->Viewport = NULL;
	}
}

TSharedRef<FEditorViewportClient> SCustomAssetViewport::MakeEditorViewportClient()
{
	EditorVIewportClient = MakeShareable(new FCustomAssetViewportClient(*PreviewScene,
		CustomAsset));
	
	return EditorVIewportClient.ToSharedRef();
}
   