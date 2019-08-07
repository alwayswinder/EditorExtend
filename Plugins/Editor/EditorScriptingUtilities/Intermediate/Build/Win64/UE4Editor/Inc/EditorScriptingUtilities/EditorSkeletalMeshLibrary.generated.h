// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
#ifdef EDITORSCRIPTINGUTILITIES_EditorSkeletalMeshLibrary_generated_h
#error "EditorSkeletalMeshLibrary.generated.h already included, missing '#pragma once' in EditorSkeletalMeshLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorSkeletalMeshLibrary_generated_h

#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRegenerateLOD) \
	{ \
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewLODCount); \
		P_GET_UBOOL(Z_Param_bRegenerateEvenIfImported); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorSkeletalMeshLibrary::RegenerateLOD(Z_Param_SkeletalMesh,Z_Param_NewLODCount,Z_Param_bRegenerateEvenIfImported); \
		P_NATIVE_END; \
	}


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRegenerateLOD) \
	{ \
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewLODCount); \
		P_GET_UBOOL(Z_Param_bRegenerateEvenIfImported); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorSkeletalMeshLibrary::RegenerateLOD(Z_Param_SkeletalMesh,Z_Param_NewLODCount,Z_Param_bRegenerateEvenIfImported); \
		P_NATIVE_END; \
	}


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorSkeletalMeshLibrary(); \
	friend struct Z_Construct_UClass_UEditorSkeletalMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorSkeletalMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorSkeletalMeshLibrary)


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUEditorSkeletalMeshLibrary(); \
	friend struct Z_Construct_UClass_UEditorSkeletalMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorSkeletalMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorSkeletalMeshLibrary)


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorSkeletalMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorSkeletalMeshLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorSkeletalMeshLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorSkeletalMeshLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorSkeletalMeshLibrary(UEditorSkeletalMeshLibrary&&); \
	NO_API UEditorSkeletalMeshLibrary(const UEditorSkeletalMeshLibrary&); \
public:


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorSkeletalMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorSkeletalMeshLibrary(UEditorSkeletalMeshLibrary&&); \
	NO_API UEditorSkeletalMeshLibrary(const UEditorSkeletalMeshLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorSkeletalMeshLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorSkeletalMeshLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorSkeletalMeshLibrary)


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_16_PROLOG
#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_RPC_WRAPPERS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_INCLASS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_INCLASS_NO_PURE_DECLS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<class UEditorSkeletalMeshLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
