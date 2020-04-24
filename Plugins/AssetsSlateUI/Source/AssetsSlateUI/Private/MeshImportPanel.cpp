#include "MeshImportPanel.h"
#include "DetailWidgetRow.h"
#include "EditorDirectories.h"
#include "KismetProceduralMeshLibrary.h"

#define LOCTEXT_NAMESPACE "FMeshImportDetail"

ASSETSSLATEUI_API TWeakObjectPtr<UMyCustomAsset> CustomAssetInstance = nullptr;


void FMeshImportDetail::CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, FDetailWidgetRow& HeaderRow, 
	IPropertyTypeCustomizationUtils& CustomizationUtils)
{
	HeaderRow
		.NameContent()
		[
			PropertyHandle->CreatePropertyNameWidget()
		]
	.ValueContent()
		.MinDesiredWidth(125.0f)
		.MaxDesiredWidth(325.0f)
		[
			SNew(SButton)
			.OnClicked(this, &FMeshImportDetail::HandleImportClicked)
			.Text(LOCTEXT("Import", "Import Mesh"))
		];
}

void FMeshImportDetail::CustomizeChildren(TSharedRef<IPropertyHandle> PropertyHandle, 
	IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& CustomizationUtils)
{
	
}

FReply FMeshImportDetail::HandleImportClicked()
{
	FString PathRoot = "/Game/LinTest/AssetsManager/";
	FAssetToolsModule& AssetToolsModule = FModuleManager::Get().LoadModuleChecked<FAssetToolsModule>("AssetTools");
	AssetToolsModule.Get().ImportAssetsWithDialog(PathRoot);
	if (CustomAssetInstance.IsValid())
	{
		FString LastPath = FEditorDirectories::Get().GetLastDirectory(ELastDirectory::GENERIC_IMPORT);
		FString FileType, PathLeft, FileName, tmp;
		LastPath.Split(".", &PathLeft, &FileType);
		PathLeft.Split("/", &tmp, &FileName, ESearchCase::IgnoreCase, ESearchDir::FromEnd);

		FString FilePath = PathRoot + FileName;

		UStaticMesh *ObjectMesh = Cast<UStaticMesh>(StaticLoadObject(UObject::StaticClass(), NULL, *FilePath));
		if (ObjectMesh)
		{
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UVs;
			TArray<FProcMeshTangent> Tangents;
			UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(ObjectMesh, 0, 0, Vertices, Triangles, Normals,
				UVs, Tangents);
			CustomAssetInstance->ClearMeshData();
			CustomAssetInstance->Vertices = Vertices;
			CustomAssetInstance->Triangles = Triangles;
		}
	}
	return FReply::Handled();
}

TSharedRef<IPropertyTypeCustomization> FMeshImportDetail::MakeInstance()
{
	return MakeShareable(new FMeshImportDetail);
}

#undef LOCTEXT_NAMESPACE