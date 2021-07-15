// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCEAN_OceanGameMode_generated_h
#error "OceanGameMode.generated.h already included, missing '#pragma once' in OceanGameMode.h"
#endif
#define OCEAN_OceanGameMode_generated_h

#define Ocean_Source_Ocean_OceanGameMode_h_12_SPARSE_DATA
#define Ocean_Source_Ocean_OceanGameMode_h_12_RPC_WRAPPERS
#define Ocean_Source_Ocean_OceanGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Ocean_Source_Ocean_OceanGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOceanGameMode(); \
	friend struct Z_Construct_UClass_AOceanGameMode_Statics; \
public: \
	DECLARE_CLASS(AOceanGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ocean"), OCEAN_API) \
	DECLARE_SERIALIZER(AOceanGameMode)


#define Ocean_Source_Ocean_OceanGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOceanGameMode(); \
	friend struct Z_Construct_UClass_AOceanGameMode_Statics; \
public: \
	DECLARE_CLASS(AOceanGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ocean"), OCEAN_API) \
	DECLARE_SERIALIZER(AOceanGameMode)


#define Ocean_Source_Ocean_OceanGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OCEAN_API AOceanGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOceanGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OCEAN_API, AOceanGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOceanGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OCEAN_API AOceanGameMode(AOceanGameMode&&); \
	OCEAN_API AOceanGameMode(const AOceanGameMode&); \
public:


#define Ocean_Source_Ocean_OceanGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OCEAN_API AOceanGameMode(AOceanGameMode&&); \
	OCEAN_API AOceanGameMode(const AOceanGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OCEAN_API, AOceanGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOceanGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOceanGameMode)


#define Ocean_Source_Ocean_OceanGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Ocean_Source_Ocean_OceanGameMode_h_9_PROLOG
#define Ocean_Source_Ocean_OceanGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ocean_Source_Ocean_OceanGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Ocean_Source_Ocean_OceanGameMode_h_12_SPARSE_DATA \
	Ocean_Source_Ocean_OceanGameMode_h_12_RPC_WRAPPERS \
	Ocean_Source_Ocean_OceanGameMode_h_12_INCLASS \
	Ocean_Source_Ocean_OceanGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ocean_Source_Ocean_OceanGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ocean_Source_Ocean_OceanGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Ocean_Source_Ocean_OceanGameMode_h_12_SPARSE_DATA \
	Ocean_Source_Ocean_OceanGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Ocean_Source_Ocean_OceanGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Ocean_Source_Ocean_OceanGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEAN_API UClass* StaticClass<class AOceanGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ocean_Source_Ocean_OceanGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
