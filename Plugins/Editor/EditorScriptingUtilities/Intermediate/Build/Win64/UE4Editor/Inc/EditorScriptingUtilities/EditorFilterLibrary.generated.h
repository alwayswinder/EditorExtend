// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EEditorScriptingFilterType : uint8;
enum class EEditorScriptingStringMatchType : uint8;
class UObject;
#ifdef EDITORSCRIPTINGUTILITIES_EditorFilterLibrary_generated_h
#error "EditorFilterLibrary.generated.h already included, missing '#pragma once' in EditorFilterLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorFilterLibrary_generated_h

#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBySelection) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetArray); \
		P_GET_ENUM(EEditorScriptingFilterType,Z_Param_FilterType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorFilterLibrary::BySelection(Z_Param_Out_TargetArray,EEditorScriptingFilterType(Z_Param_FilterType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execByLevelName) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetArray); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LevelName); \
		P_GET_ENUM(EEditorScriptingFilterType,Z_Param_FilterType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorFilterLibrary::ByLevelName(Z_Param_Out_TargetArray,Z_Param_LevelName,EEditorScriptingFilterType(Z_Param_FilterType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execByLayer) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetArray); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LayerName); \
		P_GET_ENUM(EEditorScriptingFilterType,Z_Param_FilterType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorFilterLibrary::ByLayer(Z_Param_Out_TargetArray,Z_Param_LayerName,EEditorScriptingFilterType(Z_Param_FilterType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execByActorTag) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetArray); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_GET_ENUM(EEditorScriptingFilterType,Z_Param_FilterType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorFilterLibrary::ByActorTag(Z_Param_Out_TargetArray,Z_Param_Tag,EEditorScriptingFilterType(Z_Param_FilterType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execByActorLabel) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetArray); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NameSubString); \
		P_GET_ENUM(EEditorScriptingStringMatchType,Z_Param_StringMatch); \
		P_GET_ENUM(EEditorScriptingFilterType,Z_Param_FilterType); \
		P_GET_UBOOL(Z_Param_bIgnoreCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorFilterLibrary::ByActorLabel(Z_Param_Out_TargetArray,Z_Param_NameSubString,EEditorScriptingStringMatchType(Z_Param_StringMatch),EEditorScriptingFilterType(Z_Param_FilterType),Z_Param_bIgnoreCase); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execByIDName) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_TargetArray); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NameSubString); \
		P_GET_ENUM(EEditorScriptingStringMatchType,Z_Param_StringMatch); \
		P_GET_ENUM(EEditorScriptingFilterType,Z_Param_FilterType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=UEditorFilterLibrary::ByIDName(Z_Param_Out_TargetArray,Z_Param_NameSubString,EEditorScriptingStringMatchType(Z_Param_StringMatch),EEditorScriptingFilterType(Z_Param_FilterType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execByClass) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_TargetArray); \
		P_GET_OBJECT(UClass,Z_Param_ObjectClass); \
		P_GET_ENUM(EEditorScriptingFilterType,Z_Param_FilterType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=UEditorFilterLibrary::ByClass(Z_Param_Out_TargetArray,Z_Param_ObjectClass,EEditorScriptingFilterType(Z_Param_FilterType)); \
		P_NATIVE_END; \
	}


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBySelection) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetArray); \
		P_GET_ENUM(EEditorScriptingFilterType,Z_Param_FilterType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorFilterLibrary::BySelection(Z_Param_Out_TargetArray,EEditorScriptingFilterType(Z_Param_FilterType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execByLevelName) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetArray); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LevelName); \
		P_GET_ENUM(EEditorScriptingFilterType,Z_Param_FilterType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorFilterLibrary::ByLevelName(Z_Param_Out_TargetArray,Z_Param_LevelName,EEditorScriptingFilterType(Z_Param_FilterType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execByLayer) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetArray); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LayerName); \
		P_GET_ENUM(EEditorScriptingFilterType,Z_Param_FilterType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorFilterLibrary::ByLayer(Z_Param_Out_TargetArray,Z_Param_LayerName,EEditorScriptingFilterType(Z_Param_FilterType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execByActorTag) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetArray); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_GET_ENUM(EEditorScriptingFilterType,Z_Param_FilterType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorFilterLibrary::ByActorTag(Z_Param_Out_TargetArray,Z_Param_Tag,EEditorScriptingFilterType(Z_Param_FilterType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execByActorLabel) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetArray); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NameSubString); \
		P_GET_ENUM(EEditorScriptingStringMatchType,Z_Param_StringMatch); \
		P_GET_ENUM(EEditorScriptingFilterType,Z_Param_FilterType); \
		P_GET_UBOOL(Z_Param_bIgnoreCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorFilterLibrary::ByActorLabel(Z_Param_Out_TargetArray,Z_Param_NameSubString,EEditorScriptingStringMatchType(Z_Param_StringMatch),EEditorScriptingFilterType(Z_Param_FilterType),Z_Param_bIgnoreCase); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execByIDName) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_TargetArray); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NameSubString); \
		P_GET_ENUM(EEditorScriptingStringMatchType,Z_Param_StringMatch); \
		P_GET_ENUM(EEditorScriptingFilterType,Z_Param_FilterType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=UEditorFilterLibrary::ByIDName(Z_Param_Out_TargetArray,Z_Param_NameSubString,EEditorScriptingStringMatchType(Z_Param_StringMatch),EEditorScriptingFilterType(Z_Param_FilterType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execByClass) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_TargetArray); \
		P_GET_OBJECT(UClass,Z_Param_ObjectClass); \
		P_GET_ENUM(EEditorScriptingFilterType,Z_Param_FilterType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=UEditorFilterLibrary::ByClass(Z_Param_Out_TargetArray,Z_Param_ObjectClass,EEditorScriptingFilterType(Z_Param_FilterType)); \
		P_NATIVE_END; \
	}


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorFilterLibrary(); \
	friend struct Z_Construct_UClass_UEditorFilterLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorFilterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorFilterLibrary)


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUEditorFilterLibrary(); \
	friend struct Z_Construct_UClass_UEditorFilterLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorFilterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorFilterLibrary)


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorFilterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorFilterLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorFilterLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorFilterLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorFilterLibrary(UEditorFilterLibrary&&); \
	NO_API UEditorFilterLibrary(const UEditorFilterLibrary&); \
public:


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorFilterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorFilterLibrary(UEditorFilterLibrary&&); \
	NO_API UEditorFilterLibrary(const UEditorFilterLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorFilterLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorFilterLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorFilterLibrary)


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_PRIVATE_PROPERTY_OFFSET
#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_29_PROLOG
#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_PRIVATE_PROPERTY_OFFSET \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_RPC_WRAPPERS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_INCLASS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_PRIVATE_PROPERTY_OFFSET \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_INCLASS_NO_PURE_DECLS \
	EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<class UEditorFilterLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EditExtend01_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h


#define FOREACH_ENUM_EEDITORSCRIPTINGSTRINGMATCHTYPE(op) \
	op(EEditorScriptingStringMatchType::Contains) \
	op(EEditorScriptingStringMatchType::MatchesWildcard) \
	op(EEditorScriptingStringMatchType::ExactMatch) 

enum class EEditorScriptingStringMatchType : uint8;
template<> EDITORSCRIPTINGUTILITIES_API UEnum* StaticEnum<EEditorScriptingStringMatchType>();

#define FOREACH_ENUM_EEDITORSCRIPTINGFILTERTYPE(op) \
	op(EEditorScriptingFilterType::Include) \
	op(EEditorScriptingFilterType::Exclude) 

enum class EEditorScriptingFilterType : uint8;
template<> EDITORSCRIPTINGUTILITIES_API UEnum* StaticEnum<EEditorScriptingFilterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
