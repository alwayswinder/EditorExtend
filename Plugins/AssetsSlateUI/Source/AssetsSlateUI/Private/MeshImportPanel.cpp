#include "MeshImportPanel.h"
#include "DetailWidgetRow.h"
#include "EditorDirectories.h"
#include "KismetProceduralMeshLibrary.h"
#include "Widgets\Input\SEditableTextBox.h"
#include "StaticMeshResources.h"


#define LOCTEXT_NAMESPACE "FMeshImportDetail"

ASSETSSLATEUI_API TWeakObjectPtr<UMyCustomAsset> CustomAssetInstance = nullptr;


void FMeshImportDetail::CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, FDetailWidgetRow& HeaderRow, 
	IPropertyTypeCustomizationUtils& CustomizationUtils)
{
	HeaderRow
	.NameContent()
	[
		SAssignNew(EditableTextBox, SEditableTextBox)
		.OnTextCommitted(this, &FMeshImportDetail::OnLabelsRootTextCommited)
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
	HandleMeshSavePaths = PropertyHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FMeshImport, MeshSavePaths));
}

void FMeshImportDetail::OnLabelsRootTextCommited(const FText& InText, ETextCommit::Type InCommitType) const
{
	if (HandleMeshSavePaths.IsValid())
	{
		HandleMeshSavePaths->SetValue(InText);
	}
}

FReply FMeshImportDetail::HandleImportClicked()
{
	if (CustomAssetInstance.IsValid())
	{
		FString PathRoot = "/Game/LinTest/AssetsManager/";
		FString FileName;

		FText EventValueStr;
		HandleMeshSavePaths->GetValue(EventValueStr);

		if (EventValueStr.IsEmpty())
		{	
			FAssetToolsModule& AssetToolsModule = FModuleManager::Get().LoadModuleChecked<FAssetToolsModule>("AssetTools");
			AssetToolsModule.Get().ImportAssetsWithDialog(PathRoot);
			FString LastPath = FEditorDirectories::Get().GetLastDirectory(ELastDirectory::GENERIC_IMPORT);
			FString FileType, PathLeft, tmp;
			LastPath.Split(".", &PathLeft, &FileType);
			PathLeft.Split("/", &tmp, &FileName, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
		}
		else
		{
			FileName = EventValueStr.ToString();
		}

		FString FilePath = PathRoot + FileName;
		UStaticMesh *ObjectMesh = Cast<UStaticMesh>(StaticLoadObject(UObject::StaticClass(), NULL, *FilePath));
		if (ObjectMesh)
		{
			for (int32 LOD = 0;  LOD < ObjectMesh->RenderData->LODResources.Num(); LOD++)
			{
				FCustomMeshLOD CustomMeshLOD;
				
				for (int32 Section = 0; Section < ObjectMesh->RenderData->LODResources[LOD].Sections.Num(); Section++)
				{
					FCustomMeshSection CustomMeshSection;
					UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(
						ObjectMesh,
						LOD,
						Section,
						CustomMeshSection.Vertices,
						CustomMeshSection.Triangles,
						CustomMeshSection.Normals,
						CustomMeshSection.UV0,
						CustomMeshSection.Tangents
					);
					CustomMeshLOD.MeshLOD.Add(CustomMeshSection);
				}
				CustomAssetInstance->MeshData.Add(CustomMeshLOD);
			}
		}
	}
	
	return FReply::Handled();
}

TSharedRef<IPropertyTypeCustomization> FMeshImportDetail::MakeInstance()
{
	return MakeShareable(new FMeshImportDetail);
}

#undef LOCTEXT_NAMESPACE