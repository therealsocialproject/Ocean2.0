// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCEAN_OceanCharacter_generated_h
#error "OceanCharacter.generated.h already included, missing '#pragma once' in OceanCharacter.h"
#endif
#define OCEAN_OceanCharacter_generated_h

#define Ocean_Source_Ocean_OceanCharacter_h_12_SPARSE_DATA
#define Ocean_Source_Ocean_OceanCharacter_h_12_RPC_WRAPPERS
#define Ocean_Source_Ocean_OceanCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Ocean_Source_Ocean_OceanCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOceanCharacter(); \
	friend struct Z_Construct_UClass_AOceanCharacter_Statics; \
public: \
	DECLARE_CLASS(AOceanCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ocean"), NO_API) \
	DECLARE_SERIALIZER(AOceanCharacter)


#define Ocean_Source_Ocean_OceanCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOceanCharacter(); \
	friend struct Z_Construct_UClass_AOceanCharacter_Statics; \
public: \
	DECLARE_CLASS(AOceanCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ocean"), NO_API) \
	DECLARE_SERIALIZER(AOceanCharacter)


#define Ocean_Source_Ocean_OceanCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOceanCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOceanCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOceanCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOceanCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOceanCharacter(AOceanCharacter&&); \
	NO_API AOceanCharacter(const AOceanCharacter&); \
public:


#define Ocean_Source_Ocean_OceanCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOceanCharacter(AOceanCharacter&&); \
	NO_API AOceanCharacter(const AOceanCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOceanCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOceanCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOceanCharacter)


#define Ocean_Source_Ocean_OceanCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AOceanCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AOceanCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AOceanCharacter, CursorToWorld); }


#define Ocean_Source_Ocean_OceanCharacter_h_9_PROLOG
#define Ocean_Source_Ocean_OceanCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ocean_Source_Ocean_OceanCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Ocean_Source_Ocean_OceanCharacter_h_12_SPARSE_DATA \
	Ocean_Source_Ocean_OceanCharacter_h_12_RPC_WRAPPERS \
	Ocean_Source_Ocean_OceanCharacter_h_12_INCLASS \
	Ocean_Source_Ocean_OceanCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ocean_Source_Ocean_OceanCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ocean_Source_Ocean_OceanCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Ocean_Source_Ocean_OceanCharacter_h_12_SPARSE_DATA \
	Ocean_Source_Ocean_OceanCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Ocean_Source_Ocean_OceanCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Ocean_Source_Ocean_OceanCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEAN_API UClass* StaticClass<class AOceanCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ocean_Source_Ocean_OceanCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
