// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/TempestCombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTempestAttackPropertiesObject;
class UTempestBaseBuffObject;
class UTempestBaseConditionObject;
class UTempestDefensePropertiesObject;
enum class EModifyingType : uint8;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef TEMPESTCOMBATFRAMEWORK_TempestCombatComponent_generated_h
#error "TempestCombatComponent.generated.h already included, missing '#pragma once' in TempestCombatComponent.h"
#endif
#define TEMPESTCOMBATFRAMEWORK_TempestCombatComponent_generated_h

#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_SPARSE_DATA
#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConstructDefensePropertyOfClass); \
	DECLARE_FUNCTION(execGetCombatConditionOfGameplayTag); \
	DECLARE_FUNCTION(execRemoveFromCombatConditions); \
	DECLARE_FUNCTION(execAddToCombatConditions); \
	DECLARE_FUNCTION(execSetDefenseProperty); \
	DECLARE_FUNCTION(execSetAttackProperty); \
	DECLARE_FUNCTION(execSetReceivedAttackProperty); \
	DECLARE_FUNCTION(execRemoveFromAppliedBuffs); \
	DECLARE_FUNCTION(execAddToAppliedBuffs); \
	DECLARE_FUNCTION(execGetCombatStatus); \
	DECLARE_FUNCTION(execModifyCombatStatus);


#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConstructDefensePropertyOfClass); \
	DECLARE_FUNCTION(execGetCombatConditionOfGameplayTag); \
	DECLARE_FUNCTION(execRemoveFromCombatConditions); \
	DECLARE_FUNCTION(execAddToCombatConditions); \
	DECLARE_FUNCTION(execSetDefenseProperty); \
	DECLARE_FUNCTION(execSetAttackProperty); \
	DECLARE_FUNCTION(execSetReceivedAttackProperty); \
	DECLARE_FUNCTION(execRemoveFromAppliedBuffs); \
	DECLARE_FUNCTION(execAddToAppliedBuffs); \
	DECLARE_FUNCTION(execGetCombatStatus); \
	DECLARE_FUNCTION(execModifyCombatStatus);


#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_ACCESSORS
#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTempestCombatComponent(); \
	friend struct Z_Construct_UClass_UTempestCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UTempestCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempestCombatFramework"), NO_API) \
	DECLARE_SERIALIZER(UTempestCombatComponent)


#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUTempestCombatComponent(); \
	friend struct Z_Construct_UClass_UTempestCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UTempestCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempestCombatFramework"), NO_API) \
	DECLARE_SERIALIZER(UTempestCombatComponent)


#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTempestCombatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTempestCombatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTempestCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTempestCombatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTempestCombatComponent(UTempestCombatComponent&&); \
	NO_API UTempestCombatComponent(const UTempestCombatComponent&); \
public: \
	NO_API virtual ~UTempestCombatComponent();


#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTempestCombatComponent(UTempestCombatComponent&&); \
	NO_API UTempestCombatComponent(const UTempestCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTempestCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTempestCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTempestCombatComponent) \
	NO_API virtual ~UTempestCombatComponent();


#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_20_PROLOG
#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_SPARSE_DATA \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_RPC_WRAPPERS \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_ACCESSORS \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_INCLASS \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_SPARSE_DATA \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_ACCESSORS \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<class UTempestCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_OL_OLVS_OpusLoriDemoVS_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h


#define FOREACH_ENUM_EMODIFYINGTYPE(op) \
	op(EModifyingType::Add) \
	op(EModifyingType::Remove) 

enum class EModifyingType : uint8;
template<> struct TIsUEnumClass<EModifyingType> { enum { Value = true }; };
template<> TEMPESTCOMBATFRAMEWORK_API UEnum* StaticEnum<EModifyingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
