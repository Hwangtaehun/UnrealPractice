// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSProject/public/EnemyManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyManager() {}
// Cross Module References
	TPSPROJECT_API UClass* Z_Construct_UClass_AEnemyManager_NoRegister();
	TPSPROJECT_API UClass* Z_Construct_UClass_AEnemyManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TPSProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TPSPROJECT_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
// End Cross Module References
	void AEnemyManager::StaticRegisterNativesAEnemyManager()
	{
	}
	UClass* Z_Construct_UClass_AEnemyManager_NoRegister()
	{
		return AEnemyManager::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawnPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_spawnPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_enemyFactory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TPSProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyManager.h" },
		{ "ModuleRelativePath", "public/EnemyManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_minTime_MetaData[] = {
		{ "Category", "SpawnSettings" },
		{ "ModuleRelativePath", "public/EnemyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_minTime = { "minTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, minTime), METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_minTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_minTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_maxTime_MetaData[] = {
		{ "Category", "SpawnSettings" },
		{ "ModuleRelativePath", "public/EnemyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_maxTime = { "maxTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, maxTime), METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_maxTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_maxTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_spawnPoints_Inner = { "spawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_spawnPoints_MetaData[] = {
		{ "Category", "SpawnSettings" },
		{ "ModuleRelativePath", "public/EnemyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_spawnPoints = { "spawnPoints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, spawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_spawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_spawnPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_enemyFactory_MetaData[] = {
		{ "Category", "SpawnSettings" },
		{ "ModuleRelativePath", "public/EnemyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_enemyFactory = { "enemyFactory", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, enemyFactory), Z_Construct_UClass_AEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_enemyFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_enemyFactory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_minTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_maxTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_spawnPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_spawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_enemyFactory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyManager_Statics::ClassParams = {
		&AEnemyManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyManager, 1897873864);
	template<> TPSPROJECT_API UClass* StaticClass<AEnemyManager>()
	{
		return AEnemyManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyManager(Z_Construct_UClass_AEnemyManager, &AEnemyManager::StaticClass, TEXT("/Script/TPSProject"), TEXT("AEnemyManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
