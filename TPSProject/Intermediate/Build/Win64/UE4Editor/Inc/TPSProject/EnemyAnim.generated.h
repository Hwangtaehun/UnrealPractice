// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPSPROJECT_EnemyAnim_generated_h
#error "EnemyAnim.generated.h already included, missing '#pragma once' in EnemyAnim.h"
#endif
#define TPSPROJECT_EnemyAnim_generated_h

#define TPSProject_Source_TPSProject_public_EnemyAnim_h_16_SPARSE_DATA
#define TPSProject_Source_TPSProject_public_EnemyAnim_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndAttackAnimation);


#define TPSProject_Source_TPSProject_public_EnemyAnim_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndAttackAnimation);


#define TPSProject_Source_TPSProject_public_EnemyAnim_h_16_EVENT_PARMS \
	struct EnemyAnim_eventPlayDamageAnim_Parms \
	{ \
		FName sectionName; \
	};


#define TPSProject_Source_TPSProject_public_EnemyAnim_h_16_CALLBACK_WRAPPERS
#define TPSProject_Source_TPSProject_public_EnemyAnim_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyAnim(); \
	friend struct Z_Construct_UClass_UEnemyAnim_Statics; \
public: \
	DECLARE_CLASS(UEnemyAnim, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TPSProject"), NO_API) \
	DECLARE_SERIALIZER(UEnemyAnim)


#define TPSProject_Source_TPSProject_public_EnemyAnim_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUEnemyAnim(); \
	friend struct Z_Construct_UClass_UEnemyAnim_Statics; \
public: \
	DECLARE_CLASS(UEnemyAnim, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TPSProject"), NO_API) \
	DECLARE_SERIALIZER(UEnemyAnim)


#define TPSProject_Source_TPSProject_public_EnemyAnim_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyAnim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyAnim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyAnim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyAnim); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyAnim(UEnemyAnim&&); \
	NO_API UEnemyAnim(const UEnemyAnim&); \
public:


#define TPSProject_Source_TPSProject_public_EnemyAnim_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyAnim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyAnim(UEnemyAnim&&); \
	NO_API UEnemyAnim(const UEnemyAnim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyAnim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyAnim); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyAnim)


#define TPSProject_Source_TPSProject_public_EnemyAnim_h_16_PRIVATE_PROPERTY_OFFSET
#define TPSProject_Source_TPSProject_public_EnemyAnim_h_13_PROLOG \
	TPSProject_Source_TPSProject_public_EnemyAnim_h_16_EVENT_PARMS


#define TPSProject_Source_TPSProject_public_EnemyAnim_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSProject_Source_TPSProject_public_EnemyAnim_h_16_PRIVATE_PROPERTY_OFFSET \
	TPSProject_Source_TPSProject_public_EnemyAnim_h_16_SPARSE_DATA \
	TPSProject_Source_TPSProject_public_EnemyAnim_h_16_RPC_WRAPPERS \
	TPSProject_Source_TPSProject_public_EnemyAnim_h_16_CALLBACK_WRAPPERS \
	TPSProject_Source_TPSProject_public_EnemyAnim_h_16_INCLASS \
	TPSProject_Source_TPSProject_public_EnemyAnim_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPSProject_Source_TPSProject_public_EnemyAnim_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSProject_Source_TPSProject_public_EnemyAnim_h_16_PRIVATE_PROPERTY_OFFSET \
	TPSProject_Source_TPSProject_public_EnemyAnim_h_16_SPARSE_DATA \
	TPSProject_Source_TPSProject_public_EnemyAnim_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TPSProject_Source_TPSProject_public_EnemyAnim_h_16_CALLBACK_WRAPPERS \
	TPSProject_Source_TPSProject_public_EnemyAnim_h_16_INCLASS_NO_PURE_DECLS \
	TPSProject_Source_TPSProject_public_EnemyAnim_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPSPROJECT_API UClass* StaticClass<class UEnemyAnim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPSProject_Source_TPSProject_public_EnemyAnim_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
