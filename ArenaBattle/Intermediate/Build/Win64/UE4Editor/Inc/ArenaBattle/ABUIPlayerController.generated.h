// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABUIPlayerController_generated_h
#error "ABUIPlayerController.generated.h already included, missing '#pragma once' in ABUIPlayerController.h"
#endif
#define ARENABATTLE_ABUIPlayerController_generated_h

#define ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_SPARSE_DATA
#define ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_RPC_WRAPPERS
#define ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABUIPlayerController(); \
	friend struct Z_Construct_UClass_AABUIPlayerController_Statics; \
public: \
	DECLARE_CLASS(AABUIPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABUIPlayerController)


#define ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAABUIPlayerController(); \
	friend struct Z_Construct_UClass_AABUIPlayerController_Statics; \
public: \
	DECLARE_CLASS(AABUIPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABUIPlayerController)


#define ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABUIPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABUIPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABUIPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABUIPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABUIPlayerController(AABUIPlayerController&&); \
	NO_API AABUIPlayerController(const AABUIPlayerController&); \
public:


#define ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABUIPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABUIPlayerController(AABUIPlayerController&&); \
	NO_API AABUIPlayerController(const AABUIPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABUIPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABUIPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABUIPlayerController)


#define ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UIWidgetClass() { return STRUCT_OFFSET(AABUIPlayerController, UIWidgetClass); } \
	FORCEINLINE static uint32 __PPO__UIWidgetInstance() { return STRUCT_OFFSET(AABUIPlayerController, UIWidgetInstance); }


#define ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_12_PROLOG
#define ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_SPARSE_DATA \
	ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_RPC_WRAPPERS \
	ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_INCLASS \
	ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_SPARSE_DATA \
	ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class AABUIPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
