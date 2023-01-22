// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSProject/public/EnemyFSM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyFSM() {}
// Cross Module References
	TPSPROJECT_API UEnum* Z_Construct_UEnum_TPSProject_EEnemyState();
	UPackage* Z_Construct_UPackage__Script_TPSProject();
	TPSPROJECT_API UClass* Z_Construct_UClass_UEnemyFSM_NoRegister();
	TPSPROJECT_API UClass* Z_Construct_UClass_UEnemyFSM();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TPSPROJECT_API UClass* Z_Construct_UClass_ATPSPlayer_NoRegister();
	TPSPROJECT_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	TPSPROJECT_API UClass* Z_Construct_UClass_UEnemyAnim_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
// End Cross Module References
	static UEnum* EEnemyState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TPSProject_EEnemyState, Z_Construct_UPackage__Script_TPSProject(), TEXT("EEnemyState"));
		}
		return Singleton;
	}
	template<> TPSPROJECT_API UEnum* StaticEnum<EEnemyState>()
	{
		return EEnemyState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnemyState(EEnemyState_StaticEnum, TEXT("/Script/TPSProject"), TEXT("EEnemyState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TPSProject_EEnemyState_Hash() { return 1732331307U; }
	UEnum* Z_Construct_UEnum_TPSProject_EEnemyState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TPSProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnemyState"), 0, Get_Z_Construct_UEnum_TPSProject_EEnemyState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnemyState::Idle", (int64)EEnemyState::Idle },
				{ "EEnemyState::Move", (int64)EEnemyState::Move },
				{ "EEnemyState::Attack", (int64)EEnemyState::Attack },
				{ "EEnemyState::Damage", (int64)EEnemyState::Damage },
				{ "EEnemyState::Die", (int64)EEnemyState::Die },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.Name", "EEnemyState::Attack" },
				{ "BlueprintType", "true" },
				{ "Damage.Name", "EEnemyState::Damage" },
				{ "Die.Name", "EEnemyState::Die" },
				{ "Idle.Name", "EEnemyState::Idle" },
				{ "ModuleRelativePath", "public/EnemyFSM.h" },
				{ "Move.Name", "EEnemyState::Move" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TPSProject,
				nullptr,
				"EEnemyState",
				"EEnemyState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEnemyFSM::StaticRegisterNativesUEnemyFSM()
	{
	}
	UClass* Z_Construct_UClass_UEnemyFSM_NoRegister()
	{
		return UEnemyFSM::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyFSM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idleDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_idleDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_me_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_me;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attackDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_hp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dieSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dieSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ai_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ai;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyFSM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TPSProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EnemyFSM.h" },
		{ "ModuleRelativePath", "public/EnemyFSM.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_mState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_mState_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "public/EnemyFSM.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_mState = { "mState", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFSM, mState), Z_Construct_UEnum_TPSProject_EEnemyState, METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_mState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_mState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_idleDelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "public/EnemyFSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_idleDelayTime = { "idleDelayTime", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFSM, idleDelayTime), METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_idleDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_idleDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_target_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "public/EnemyFSM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFSM, target), Z_Construct_UClass_ATPSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_me_MetaData[] = {
		{ "ModuleRelativePath", "public/EnemyFSM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFSM, me), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_me_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_me_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackRange_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "public/EnemyFSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackRange = { "attackRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFSM, attackRange), METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackDelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "public/EnemyFSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackDelayTime = { "attackDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFSM, attackDelayTime), METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_hp_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "public/EnemyFSM.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_hp = { "hp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFSM, hp), METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_hp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_hp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_damageDelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "public/EnemyFSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_damageDelayTime = { "damageDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFSM, damageDelayTime), METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_damageDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_damageDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_dieSpeed_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "public/EnemyFSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_dieSpeed = { "dieSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFSM, dieSpeed), METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_dieSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_dieSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_anim_MetaData[] = {
		{ "ModuleRelativePath", "public/EnemyFSM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_anim = { "anim", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFSM, anim), Z_Construct_UClass_UEnemyAnim_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_ai_MetaData[] = {
		{ "ModuleRelativePath", "public/EnemyFSM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_ai = { "ai", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFSM, ai), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_ai_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_ai_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyFSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_mState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_mState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_idleDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_me,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_hp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_damageDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_dieSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_ai,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyFSM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyFSM>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyFSM_Statics::ClassParams = {
		&UEnemyFSM::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyFSM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyFSM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyFSM_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyFSM, 130720931);
	template<> TPSPROJECT_API UClass* StaticClass<UEnemyFSM>()
	{
		return UEnemyFSM::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyFSM(Z_Construct_UClass_UEnemyFSM, &UEnemyFSM::StaticClass, TEXT("/Script/TPSProject"), TEXT("UEnemyFSM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyFSM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
