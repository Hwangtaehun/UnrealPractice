// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPSPROJECT_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define TPSPROJECT_Enemy_generated_h

#define TPSProject_Source_TPSProject_public_Enemy_h_12_SPARSE_DATA
#define TPSProject_Source_TPSProject_public_Enemy_h_12_RPC_WRAPPERS
#define TPSProject_Source_TPSProject_public_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TPSProject_Source_TPSProject_public_Enemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPSProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define TPSProject_Source_TPSProject_public_Enemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPSProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define TPSProject_Source_TPSProject_public_Enemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define TPSProject_Source_TPSProject_public_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define TPSProject_Source_TPSProject_public_Enemy_h_12_PRIVATE_PROPERTY_OFFSET
#define TPSProject_Source_TPSProject_public_Enemy_h_9_PROLOG
#define TPSProject_Source_TPSProject_public_Enemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSProject_Source_TPSProject_public_Enemy_h_12_PRIVATE_PROPERTY_OFFSET \
	TPSProject_Source_TPSProject_public_Enemy_h_12_SPARSE_DATA \
	TPSProject_Source_TPSProject_public_Enemy_h_12_RPC_WRAPPERS \
	TPSProject_Source_TPSProject_public_Enemy_h_12_INCLASS \
	TPSProject_Source_TPSProject_public_Enemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPSProject_Source_TPSProject_public_Enemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSProject_Source_TPSProject_public_Enemy_h_12_PRIVATE_PROPERTY_OFFSET \
	TPSProject_Source_TPSProject_public_Enemy_h_12_SPARSE_DATA \
	TPSProject_Source_TPSProject_public_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TPSProject_Source_TPSProject_public_Enemy_h_12_INCLASS_NO_PURE_DECLS \
	TPSProject_Source_TPSProject_public_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPSPROJECT_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPSProject_Source_TPSProject_public_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
