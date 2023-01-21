// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSProject/public/EnemyAnim.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAnim() {}
// Cross Module References
	TPSPROJECT_API UClass* Z_Construct_UClass_UEnemyAnim_NoRegister();
	TPSPROJECT_API UClass* Z_Construct_UClass_UEnemyAnim();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TPSProject();
	TPSPROJECT_API UEnum* Z_Construct_UEnum_TPSProject_EEnemyState();
// End Cross Module References
	DEFINE_FUNCTION(UEnemyAnim::execOnEndAttackAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndAttackAnimation();
		P_NATIVE_END;
	}
	void UEnemyAnim::StaticRegisterNativesUEnemyAnim()
	{
		UClass* Class = UEnemyAnim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEndAttackAnimation", &UEnemyAnim::execOnEndAttackAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "FSMEvent" },
		{ "ModuleRelativePath", "public/EnemyAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAnim, nullptr, "OnEndAttackAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnemyAnim_NoRegister()
	{
		return UEnemyAnim::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_animState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_animState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttackPlay_MetaData[];
#endif
		static void NewProp_bAttackPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttackPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TPSProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyAnim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation, "OnEndAttackAnimation" }, // 663549948
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnim_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "EnemyAnim.h" },
		{ "ModuleRelativePath", "public/EnemyAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemyAnim_Statics::NewProp_animState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnim_Statics::NewProp_animState_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "public/EnemyAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemyAnim_Statics::NewProp_animState = { "animState", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnim, animState), Z_Construct_UEnum_TPSProject_EEnemyState, METADATA_PARAMS(Z_Construct_UClass_UEnemyAnim_Statics::NewProp_animState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::NewProp_animState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bAttackPlay_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "public/EnemyAnim.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bAttackPlay_SetBit(void* Obj)
	{
		((UEnemyAnim*)Obj)->bAttackPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bAttackPlay = { "bAttackPlay", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemyAnim), &Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bAttackPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bAttackPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bAttackPlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnim_Statics::NewProp_animState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnim_Statics::NewProp_animState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bAttackPlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAnim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAnim_Statics::ClassParams = {
		&UEnemyAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemyAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyAnim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyAnim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyAnim, 415945281);
	template<> TPSPROJECT_API UClass* StaticClass<UEnemyAnim>()
	{
		return UEnemyAnim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyAnim(Z_Construct_UClass_UEnemyAnim, &UEnemyAnim::StaticClass, TEXT("/Script/TPSProject"), TEXT("UEnemyAnim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAnim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
