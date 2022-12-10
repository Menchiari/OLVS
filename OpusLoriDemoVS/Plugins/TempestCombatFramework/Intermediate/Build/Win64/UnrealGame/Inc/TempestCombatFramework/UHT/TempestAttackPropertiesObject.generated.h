// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Objects/TempestAttackPropertiesObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayTag;
struct FHitResult;
#ifdef TEMPESTCOMBATFRAMEWORK_TempestAttackPropertiesObject_generated_h
#error "TempestAttackPropertiesObject.generated.h already included, missing '#pragma once' in TempestAttackPropertiesObject.h"
#endif
#define TEMPESTCOMBATFRAMEWORK_TempestAttackPropertiesObject_generated_h

#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_SPARSE_DATA
#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetImpactResult); \
	DECLARE_FUNCTION(execGetImpactResult); \
	DECLARE_FUNCTION(execSetHitResult); \
	DECLARE_FUNCTION(execGetHitResult); \
	DECLARE_FUNCTION(execSetAttackPropertyOwner); \
	DECLARE_FUNCTION(execGetAttackPropertyOwner);


#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetImpactResult); \
	DECLARE_FUNCTION(execGetImpactResult); \
	DECLARE_FUNCTION(execSetHitResult); \
	DECLARE_FUNCTION(execGetHitResult); \
	DECLARE_FUNCTION(execSetAttackPropertyOwner); \
	DECLARE_FUNCTION(execGetAttackPropertyOwner);


#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_ACCESSORS
#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_CALLBACK_WRAPPERS
#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTempestAttackPropertiesObject(); \
	friend struct Z_Construct_UClass_UTempestAttackPropertiesObject_Statics; \
public: \
	DECLARE_CLASS(UTempestAttackPropertiesObject, UTempestBaseObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TempestCombatFramework"), NO_API) \
	DECLARE_SERIALIZER(UTempestAttackPropertiesObject)


#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTempestAttackPropertiesObject(); \
	friend struct Z_Construct_UClass_UTempestAttackPropertiesObject_Statics; \
public: \
	DECLARE_CLASS(UTempestAttackPropertiesObject, UTempestBaseObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TempestCombatFramework"), NO_API) \
	DECLARE_SERIALIZER(UTempestAttackPropertiesObject)


#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTempestAttackPropertiesObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTempestAttackPropertiesObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTempestAttackPropertiesObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTempestAttackPropertiesObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTempestAttackPropertiesObject(UTempestAttackPropertiesObject&&); \
	NO_API UTempestAttackPropertiesObject(const UTempestAttackPropertiesObject&); \
public: \
	NO_API virtual ~UTempestAttackPropertiesObject();


#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTempestAttackPropertiesObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTempestAttackPropertiesObject(UTempestAttackPropertiesObject&&); \
	NO_API UTempestAttackPropertiesObject(const UTempestAttackPropertiesObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTempestAttackPropertiesObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTempestAttackPropertiesObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTempestAttackPropertiesObject) \
	NO_API virtual ~UTempestAttackPropertiesObject();


#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_13_PROLOG
#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_SPARSE_DATA \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_RPC_WRAPPERS \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_ACCESSORS \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_CALLBACK_WRAPPERS \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_INCLASS \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_SPARSE_DATA \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_ACCESSORS \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_CALLBACK_WRAPPERS \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_INCLASS_NO_PURE_DECLS \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<class UTempestAttackPropertiesObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
