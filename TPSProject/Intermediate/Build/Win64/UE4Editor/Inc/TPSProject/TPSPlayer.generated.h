// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPSPROJECT_TPSPlayer_generated_h
#error "TPSPlayer.generated.h already included, missing '#pragma once' in TPSPlayer.h"
#endif
#define TPSPROJECT_TPSPlayer_generated_h

#define TPSProject_Source_TPSProject_public_TPSPlayer_h_18_SPARSE_DATA
#define TPSProject_Source_TPSProject_public_TPSPlayer_h_18_RPC_WRAPPERS \
	virtual void OnGameOver_Implementation(); \
 \
	DECLARE_FUNCTION(execOnGameOver); \
	DECLARE_FUNCTION(execOnHitEvent);


#define TPSProject_Source_TPSProject_public_TPSPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnGameOver_Implementation(); \
 \
	DECLARE_FUNCTION(execOnGameOver); \
	DECLARE_FUNCTION(execOnHitEvent);


#define TPSProject_Source_TPSProject_public_TPSPlayer_h_18_EVENT_PARMS
#define TPSProject_Source_TPSProject_public_TPSPlayer_h_18_CALLBACK_WRAPPERS
#define TPSProject_Source_TPSProject_public_TPSPlayer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSPlayer(); \
	friend struct Z_Construct_UClass_ATPSPlayer_Statics; \
public: \
	DECLARE_CLASS(ATPSPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPSProject"), NO_API) \
	DECLARE_SERIALIZER(ATPSPlayer)


#define TPSProject_Source_TPSProject_public_TPSPlayer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesATPSPlayer(); \
	friend struct Z_Construct_UClass_ATPSPlayer_Statics; \
public: \
	DECLARE_CLASS(ATPSPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPSProject"), NO_API) \
	DECLARE_SERIALIZER(ATPSPlayer)


#define TPSProject_Source_TPSProject_public_TPSPlayer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSPlayer(ATPSPlayer&&); \
	NO_API ATPSPlayer(const ATPSPlayer&); \
public:


#define TPSProject_Source_TPSProject_public_TPSPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSPlayer(ATPSPlayer&&); \
	NO_API ATPSPlayer(const ATPSPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSPlayer)


#define TPSProject_Source_TPSProject_public_TPSPlayer_h_18_PRIVATE_PROPERTY_OFFSET
#define TPSProject_Source_TPSProject_public_TPSPlayer_h_15_PROLOG \
	TPSProject_Source_TPSProject_public_TPSPlayer_h_18_EVENT_PARMS


#define TPSProject_Source_TPSProject_public_TPSPlayer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSProject_Source_TPSProject_public_TPSPlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	TPSProject_Source_TPSProject_public_TPSPlayer_h_18_SPARSE_DATA \
	TPSProject_Source_TPSProject_public_TPSPlayer_h_18_RPC_WRAPPERS \
	TPSProject_Source_TPSProject_public_TPSPlayer_h_18_CALLBACK_WRAPPERS \
	TPSProject_Source_TPSProject_public_TPSPlayer_h_18_INCLASS \
	TPSProject_Source_TPSProject_public_TPSPlayer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPSProject_Source_TPSProject_public_TPSPlayer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSProject_Source_TPSProject_public_TPSPlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	TPSProject_Source_TPSProject_public_TPSPlayer_h_18_SPARSE_DATA \
	TPSProject_Source_TPSProject_public_TPSPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	TPSProject_Source_TPSProject_public_TPSPlayer_h_18_CALLBACK_WRAPPERS \
	TPSProject_Source_TPSProject_public_TPSPlayer_h_18_INCLASS_NO_PURE_DECLS \
	TPSProject_Source_TPSProject_public_TPSPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPSPROJECT_API UClass* StaticClass<class ATPSPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPSProject_Source_TPSProject_public_TPSPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
