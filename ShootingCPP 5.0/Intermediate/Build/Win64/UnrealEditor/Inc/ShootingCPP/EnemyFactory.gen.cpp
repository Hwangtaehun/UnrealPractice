// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCPP/Public/EnemyFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyFactory() {}
// Cross Module References
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AEnemyFactory_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AEnemyFactory();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AEnemyActor_NoRegister();
// End Cross Module References
	void AEnemyFactory::StaticRegisterNativesAEnemyFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyFactory);
	UClass* Z_Construct_UClass_AEnemyFactory_NoRegister()
	{
		return AEnemyFactory::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_delayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_delayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemy_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_enemy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyFactory.h" },
		{ "ModuleRelativePath", "Public/EnemyFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyFactory_Statics::NewProp_delayTime_MetaData[] = {
		{ "Category", "EnemyFactory" },
		{ "ModuleRelativePath", "Public/EnemyFactory.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyFactory_Statics::NewProp_delayTime = { "delayTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyFactory, delayTime), METADATA_PARAMS(Z_Construct_UClass_AEnemyFactory_Statics::NewProp_delayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyFactory_Statics::NewProp_delayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyFactory_Statics::NewProp_enemy_MetaData[] = {
		{ "Category", "EnemyFactory" },
		{ "ModuleRelativePath", "Public/EnemyFactory.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyFactory_Statics::NewProp_enemy = { "enemy", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyFactory, enemy), Z_Construct_UClass_AEnemyActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemyFactory_Statics::NewProp_enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyFactory_Statics::NewProp_enemy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyFactory_Statics::NewProp_delayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyFactory_Statics::NewProp_enemy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyFactory_Statics::ClassParams = {
		&AEnemyFactory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyFactory_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyFactory()
	{
		if (!Z_Registration_Info_UClass_AEnemyFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyFactory.OuterSingleton, Z_Construct_UClass_AEnemyFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyFactory.OuterSingleton;
	}
	template<> SHOOTINGCPP_API UClass* StaticClass<AEnemyFactory>()
	{
		return AEnemyFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyFactory);
	struct Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_EnemyFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_EnemyFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyFactory, AEnemyFactory::StaticClass, TEXT("AEnemyFactory"), &Z_Registration_Info_UClass_AEnemyFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyFactory), 3319644335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_EnemyFactory_h_727707155(TEXT("/Script/ShootingCPP"),
		Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_EnemyFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_EnemyFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
