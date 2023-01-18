// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSProject/public/TPSPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSPlayer() {}
// Cross Module References
	TPSPROJECT_API UClass* Z_Construct_UClass_ATPSPlayer_NoRegister();
	TPSPROJECT_API UClass* Z_Construct_UClass_ATPSPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TPSProject();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TPSPROJECT_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void ATPSPlayer::StaticRegisterNativesATPSPlayer()
	{
	}
	UClass* Z_Construct_UClass_ATPSPlayer_NoRegister()
	{
		return ATPSPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ATPSPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_springArmComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_springArmComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tpsCamComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tpsCamComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_walkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_walkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gunMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gunMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bulletFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sniperGunComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sniperGunComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sniperUIFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_sniperUIFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletEffectFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bulletEffectFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_crosshairUIFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_crosshairUIFactory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TPSProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TPSPlayer.h" },
		{ "ModuleRelativePath", "public/TPSPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_springArmComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "public/TPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_springArmComp = { "springArmComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSPlayer, springArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_springArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_springArmComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_tpsCamComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "public/TPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_tpsCamComp = { "tpsCamComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSPlayer, tpsCamComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_tpsCamComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_tpsCamComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_walkSpeed_MetaData[] = {
		{ "Category", "PlayerSetting" },
		{ "ModuleRelativePath", "public/TPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_walkSpeed = { "walkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSPlayer, walkSpeed), METADATA_PARAMS(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_walkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_walkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_gunMeshComp_MetaData[] = {
		{ "Category", "GunMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "public/TPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_gunMeshComp = { "gunMeshComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSPlayer, gunMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_gunMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_gunMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_bulletFactory_MetaData[] = {
		{ "Category", "BulletFactory" },
		{ "ModuleRelativePath", "public/TPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_bulletFactory = { "bulletFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSPlayer, bulletFactory), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_bulletFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_bulletFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_sniperGunComp_MetaData[] = {
		{ "Category", "GunMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "public/TPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_sniperGunComp = { "sniperGunComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSPlayer, sniperGunComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_sniperGunComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_sniperGunComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_sniperUIFactory_MetaData[] = {
		{ "Category", "SniperUI" },
		{ "ModuleRelativePath", "public/TPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_sniperUIFactory = { "sniperUIFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSPlayer, sniperUIFactory), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_sniperUIFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_sniperUIFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_bulletEffectFactory_MetaData[] = {
		{ "Category", "BulletEffect" },
		{ "ModuleRelativePath", "public/TPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_bulletEffectFactory = { "bulletEffectFactory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSPlayer, bulletEffectFactory), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_bulletEffectFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_bulletEffectFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_crosshairUIFactory_MetaData[] = {
		{ "Category", "SniperUI" },
		{ "ModuleRelativePath", "public/TPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_crosshairUIFactory = { "crosshairUIFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSPlayer, crosshairUIFactory), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_crosshairUIFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_crosshairUIFactory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_springArmComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_tpsCamComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_walkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_gunMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_bulletFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_sniperGunComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_sniperUIFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_bulletEffectFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_crosshairUIFactory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATPSPlayer_Statics::ClassParams = {
		&ATPSPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATPSPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATPSPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATPSPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATPSPlayer, 2391868996);
	template<> TPSPROJECT_API UClass* StaticClass<ATPSPlayer>()
	{
		return ATPSPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATPSPlayer(Z_Construct_UClass_ATPSPlayer, &ATPSPlayer::StaticClass, TEXT("/Script/TPSProject"), TEXT("ATPSPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
