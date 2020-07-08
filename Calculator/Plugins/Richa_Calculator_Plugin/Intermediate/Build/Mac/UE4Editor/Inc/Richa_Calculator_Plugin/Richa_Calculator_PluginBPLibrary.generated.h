// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RICHA_CALCULATOR_PLUGIN_Richa_Calculator_PluginBPLibrary_generated_h
#error "Richa_Calculator_PluginBPLibrary.generated.h already included, missing '#pragma once' in Richa_Calculator_PluginBPLibrary.h"
#endif
#define RICHA_CALCULATOR_PLUGIN_Richa_Calculator_PluginBPLibrary_generated_h

#define Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRicha_Calculator_PluginSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=URicha_Calculator_PluginBPLibrary::Richa_Calculator_PluginSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRicha_Calculator_PluginSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=URicha_Calculator_PluginBPLibrary::Richa_Calculator_PluginSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURicha_Calculator_PluginBPLibrary(); \
	friend struct Z_Construct_UClass_URicha_Calculator_PluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URicha_Calculator_PluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Richa_Calculator_Plugin"), NO_API) \
	DECLARE_SERIALIZER(URicha_Calculator_PluginBPLibrary)


#define Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesURicha_Calculator_PluginBPLibrary(); \
	friend struct Z_Construct_UClass_URicha_Calculator_PluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URicha_Calculator_PluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Richa_Calculator_Plugin"), NO_API) \
	DECLARE_SERIALIZER(URicha_Calculator_PluginBPLibrary)


#define Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URicha_Calculator_PluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URicha_Calculator_PluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URicha_Calculator_PluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URicha_Calculator_PluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URicha_Calculator_PluginBPLibrary(URicha_Calculator_PluginBPLibrary&&); \
	NO_API URicha_Calculator_PluginBPLibrary(const URicha_Calculator_PluginBPLibrary&); \
public:


#define Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URicha_Calculator_PluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URicha_Calculator_PluginBPLibrary(URicha_Calculator_PluginBPLibrary&&); \
	NO_API URicha_Calculator_PluginBPLibrary(const URicha_Calculator_PluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URicha_Calculator_PluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URicha_Calculator_PluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URicha_Calculator_PluginBPLibrary)


#define Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_25_PROLOG
#define Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_RPC_WRAPPERS \
	Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_INCLASS \
	Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Richa_Calculator_PluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RICHA_CALCULATOR_PLUGIN_API UClass* StaticClass<class URicha_Calculator_PluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Calculator_Plugins_Richa_Calculator_Plugin_Source_Richa_Calculator_Plugin_Public_Richa_Calculator_PluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
