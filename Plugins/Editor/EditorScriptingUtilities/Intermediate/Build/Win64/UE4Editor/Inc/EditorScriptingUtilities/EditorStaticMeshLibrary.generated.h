// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
struct FVector;
struct FRotator;
struct FVector2D;
class UStaticMeshComponent;
enum class EScriptingCollisionShapeType : uint8;
struct FEditorScriptingMeshReductionOptions;
#ifdef EDITORSCRIPTINGUTILITIES_EditorStaticMeshLibrary_generated_h
#error "EditorStaticMeshLibrary.generated.h already included, missing '#pragma once' in EditorStaticMeshLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorStaticMeshLibrary_generated_h

#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct();


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct();


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateBoxUVChannel) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UVChannelIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::GenerateBoxUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex,Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateCylindricalUVChannel) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UVChannelIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Tiling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::GenerateCylindricalUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex,Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_Tiling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGeneratePlanarUVChannel) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UVChannelIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Tiling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::GeneratePlanarUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex,Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_Tiling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveUVChannel) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UVChannelIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::RemoveUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInsertUVChannel) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UVChannelIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::InsertUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddUVChannel) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::AddUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumUVChannels) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::GetNumUVChannels(Z_Param_StaticMesh,Z_Param_LODIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowCPUAccess) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_UBOOL(Z_Param_bAllowCPUAccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorStaticMeshLibrary::SetAllowCPUAccess(Z_Param_StaticMesh,Z_Param_bAllowCPUAccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberVerts) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::GetNumberVerts(Z_Param_StaticMesh,Z_Param_LODIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGenerateLightmapUVs) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_UBOOL(Z_Param_bGenerateLightmapUVs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::SetGenerateLightmapUVs(Z_Param_StaticMesh,Z_Param_bGenerateLightmapUVs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasInstanceVertexColors) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::HasInstanceVertexColors(Z_Param_StaticMeshComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasVertexColors) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::HasVertexColors(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableSectionCastShadow) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_UBOOL(Z_Param_bCastShadow); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorStaticMeshLibrary::EnableSectionCastShadow(Z_Param_StaticMesh,Z_Param_bCastShadow,Z_Param_LODIndex,Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetSectionmaterialByIndex) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaterialIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::ResetSectionmaterialByIndex(Z_Param_StaticMesh,Z_Param_MaterialIndex,Z_Param_LODIndex,Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetSectionmaterialBySlotName) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::ResetSectionmaterialBySlotName(Z_Param_StaticMesh,Z_Param_SlotName,Z_Param_LODIndex,Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSectionCollisionEnabled) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::IsSectionCollisionEnabled(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableSectionCollision) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_UBOOL(Z_Param_bCollisionEnabled); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorStaticMeshLibrary::EnableSectionCollision(Z_Param_StaticMesh,Z_Param_bCollisionEnabled,Z_Param_LODIndex,Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetMaterialSlotNames) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UNameProperty,Z_Param_newSlotname); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::ResetMaterialSlotNames(Z_Param_StaticMesh,Z_Param_newSlotname); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCollisions) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::RemoveCollisions(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConvexDecompositionCollisions) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_HullCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxHullVerts); \
		P_GET_PROPERTY(UIntProperty,Z_Param_HullPrecision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::SetConvexDecompositionCollisions(Z_Param_StaticMesh,Z_Param_HullCount,Z_Param_MaxHullVerts,Z_Param_HullPrecision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConvexCollisionCount) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::GetConvexCollisionCount(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionComplexity) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECollisionTraceFlag>*)Z_Param__Result=UEditorStaticMeshLibrary::GetCollisionComplexity(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSimpleCollisionCount) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::GetSimpleCollisionCount(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSimpleCollisions) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_ENUM(EScriptingCollisionShapeType,Z_Param_ShapeType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::AddSimpleCollisions(Z_Param_StaticMesh,EScriptingCollisionShapeType(Z_Param_ShapeType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLodScreenSizes) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=UEditorStaticMeshLibrary::GetLodScreenSizes(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveLods) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::RemoveLods(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLodCount) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::GetLodCount(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLodFromStaticMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_DestinationStaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DestinationLodIndex); \
		P_GET_OBJECT(UStaticMesh,Z_Param_SourceStaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SourceLodIndex); \
		P_GET_UBOOL(Z_Param_bReuseExistingMaterialSlots); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::SetLodFromStaticMesh(Z_Param_DestinationStaticMesh,Z_Param_DestinationLodIndex,Z_Param_SourceStaticMesh,Z_Param_SourceLodIndex,Z_Param_bReuseExistingMaterialSlots); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLods) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_STRUCT_REF(FEditorScriptingMeshReductionOptions,Z_Param_Out_ReductionOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::SetLods(Z_Param_StaticMesh,Z_Param_Out_ReductionOptions); \
		P_NATIVE_END; \
	}


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateBoxUVChannel) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UVChannelIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::GenerateBoxUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex,Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateCylindricalUVChannel) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UVChannelIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Tiling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::GenerateCylindricalUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex,Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_Tiling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGeneratePlanarUVChannel) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UVChannelIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Tiling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::GeneratePlanarUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex,Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_Tiling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveUVChannel) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UVChannelIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::RemoveUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInsertUVChannel) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UVChannelIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::InsertUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddUVChannel) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::AddUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumUVChannels) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::GetNumUVChannels(Z_Param_StaticMesh,Z_Param_LODIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowCPUAccess) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_UBOOL(Z_Param_bAllowCPUAccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorStaticMeshLibrary::SetAllowCPUAccess(Z_Param_StaticMesh,Z_Param_bAllowCPUAccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberVerts) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::GetNumberVerts(Z_Param_StaticMesh,Z_Param_LODIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGenerateLightmapUVs) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_UBOOL(Z_Param_bGenerateLightmapUVs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::SetGenerateLightmapUVs(Z_Param_StaticMesh,Z_Param_bGenerateLightmapUVs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasInstanceVertexColors) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::HasInstanceVertexColors(Z_Param_StaticMeshComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasVertexColors) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::HasVertexColors(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableSectionCastShadow) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_UBOOL(Z_Param_bCastShadow); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorStaticMeshLibrary::EnableSectionCastShadow(Z_Param_StaticMesh,Z_Param_bCastShadow,Z_Param_LODIndex,Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetSectionmaterialByIndex) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaterialIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::ResetSectionmaterialByIndex(Z_Param_StaticMesh,Z_Param_MaterialIndex,Z_Param_LODIndex,Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetSectionmaterialBySlotName) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::ResetSectionmaterialBySlotName(Z_Param_StaticMesh,Z_Param_SlotName,Z_Param_LODIndex,Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSectionCollisionEnabled) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::IsSectionCollisionEnabled(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableSectionCollision) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_UBOOL(Z_Param_bCollisionEnabled); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorStaticMeshLibrary::EnableSectionCollision(Z_Param_StaticMesh,Z_Param_bCollisionEnabled,Z_Param_LODIndex,Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetMaterialSlotNames) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UNameProperty,Z_Param_newSlotname); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::ResetMaterialSlotNames(Z_Param_StaticMesh,Z_Param_newSlotname); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCollisions) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::RemoveCollisions(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConvexDecompositionCollisions) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_HullCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxHullVerts); \
		P_GET_PROPERTY(UIntProperty,Z_Param_HullPrecision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::SetConvexDecompositionCollisions(Z_Param_StaticMesh,Z_Param_HullCount,Z_Param_MaxHullVerts,Z_Param_HullPrecision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConvexCollisionCount) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::GetConvexCollisionCount(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionComplexity) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECollisionTraceFlag>*)Z_Param__Result=UEditorStaticMeshLibrary::GetCollisionComplexity(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSimpleCollisionCount) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::GetSimpleCollisionCount(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSimpleCollisions) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_ENUM(EScriptingCollisionShapeType,Z_Param_ShapeType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::AddSimpleCollisions(Z_Param_StaticMesh,EScriptingCollisionShapeType(Z_Param_ShapeType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLodScreenSizes) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=UEditorStaticMeshLibrary::GetLodScreenSizes(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveLods) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorStaticMeshLibrary::RemoveLods(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLodCount) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::GetLodCount(Z_Param_StaticMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLodFromStaticMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_DestinationStaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DestinationLodIndex); \
		P_GET_OBJECT(UStaticMesh,Z_Param_SourceStaticMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SourceLodIndex); \
		P_GET_UBOOL(Z_Param_bReuseExistingMaterialSlots); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::SetLodFromStaticMesh(Z_Param_DestinationStaticMesh,Z_Param_DestinationLodIndex,Z_Param_SourceStaticMesh,Z_Param_SourceLodIndex,Z_Param_bReuseExistingMaterialSlots); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLods) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_STRUCT_REF(FEditorScriptingMeshReductionOptions,Z_Param_Out_ReductionOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UEditorStaticMeshLibrary::SetLods(Z_Param_StaticMesh,Z_Param_Out_ReductionOptions); \
		P_NATIVE_END; \
	}


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorStaticMeshLibrary(); \
	friend struct Z_Construct_UClass_UEditorStaticMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorStaticMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorStaticMeshLibrary)


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUEditorStaticMeshLibrary(); \
	friend struct Z_Construct_UClass_UEditorStaticMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorStaticMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorStaticMeshLibrary)


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorStaticMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorStaticMeshLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorStaticMeshLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorStaticMeshLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorStaticMeshLibrary(UEditorStaticMeshLibrary&&); \
	NO_API UEditorStaticMeshLibrary(const UEditorStaticMeshLibrary&); \
public:


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorStaticMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorStaticMeshLibrary(UEditorStaticMeshLibrary&&); \
	NO_API UEditorStaticMeshLibrary(const UEditorStaticMeshLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorStaticMeshLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorStaticMeshLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorStaticMeshLibrary)


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_PRIVATE_PROPERTY_OFFSET
#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_74_PROLOG
#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_PRIVATE_PROPERTY_OFFSET \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_RPC_WRAPPERS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_INCLASS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_PRIVATE_PROPERTY_OFFSET \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_INCLASS_NO_PURE_DECLS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h


#define FOREACH_ENUM_ESCRIPTINGCOLLISIONSHAPETYPE(op) \
	op(EScriptingCollisionShapeType::Box) \
	op(EScriptingCollisionShapeType::Sphere) \
	op(EScriptingCollisionShapeType::Capsule) \
	op(EScriptingCollisionShapeType::NDOP10_X) \
	op(EScriptingCollisionShapeType::NDOP10_Y) \
	op(EScriptingCollisionShapeType::NDOP10_Z) \
	op(EScriptingCollisionShapeType::NDOP18) \
	op(EScriptingCollisionShapeType::NDOP26) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
