// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystemComponent;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ARENABATTLE_ABItemBox_generated_h
#error "ABItemBox.generated.h already included, missing '#pragma once' in ABItemBox.h"
#endif
#define ARENABATTLE_ABItemBox_generated_h

#define ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_SPARSE_DATA
#define ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEffectFinished); \
	DECLARE_FUNCTION(execOnCharacterOverlap);


#define ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEffectFinished); \
	DECLARE_FUNCTION(execOnCharacterOverlap);


#define ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABItemBox(); \
	friend struct Z_Construct_UClass_AABItemBox_Statics; \
public: \
	DECLARE_CLASS(AABItemBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABItemBox)


#define ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAABItemBox(); \
	friend struct Z_Construct_UClass_AABItemBox_Statics; \
public: \
	DECLARE_CLASS(AABItemBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABItemBox)


#define ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABItemBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABItemBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABItemBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABItemBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABItemBox(AABItemBox&&); \
	NO_API AABItemBox(const AABItemBox&); \
public:


#define ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABItemBox(AABItemBox&&); \
	NO_API AABItemBox(const AABItemBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABItemBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABItemBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABItemBox)


#define ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_PRIVATE_PROPERTY_OFFSET
#define ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_9_PROLOG
#define ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_SPARSE_DATA \
	ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_RPC_WRAPPERS \
	ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_INCLASS \
	ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_SPARSE_DATA \
	ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_INCLASS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class AABItemBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArenaBattle_Source_ArenaBattle_Public_ABItemBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
