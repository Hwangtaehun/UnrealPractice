// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSProject/public/Bullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullet() {}
// Cross Module References
	TPSPROJECT_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	TPSPROJECT_API UClass* Z_Construct_UClass_ABullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TPSProject();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABullet::StaticRegisterNativesABullet()
	{
	}
	UClass* Z_Construct_UClass_ABullet_NoRegister()
	{
		return ABullet::StaticClass();
	}
	struct Z_Construct_UClass_ABullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_movementComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collisionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collisionComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bodyMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bodyMeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TPSProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bullet.h" },
		{ "ModuleRelativePath", "public/Bullet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::NewProp_movementComp_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "public/Bullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_movementComp = { "movementComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullet, movementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABullet_Statics::NewProp_movementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::NewProp_movementComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::NewProp_collisionComp_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "public/Bullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_collisionComp = { "collisionComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullet, collisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABullet_Statics::NewProp_collisionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::NewProp_collisionComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::NewProp_bodyMeshComp_MetaData[] = {
		{ "Category", "Bullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "public/Bullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_bodyMeshComp = { "bodyMeshComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullet, bodyMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABullet_Statics::NewProp_bodyMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::NewProp_bodyMeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_movementComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_collisionComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_bodyMeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABullet_Statics::ClassParams = {
		&ABullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABullet, 559446);
	template<> TPSPROJECT_API UClass* StaticClass<ABullet>()
	{
		return ABullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABullet(Z_Construct_UClass_ABullet, &ABullet::StaticClass, TEXT("/Script/TPSProject"), TEXT("ABullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
