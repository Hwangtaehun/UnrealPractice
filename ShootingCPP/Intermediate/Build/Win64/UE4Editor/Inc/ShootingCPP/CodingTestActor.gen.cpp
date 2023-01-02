// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCPP/Public/CodingTestActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodingTestActor() {}
// Cross Module References
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ACodingTestActor_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ACodingTestActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
// End Cross Module References
	void ACodingTestActor::StaticRegisterNativesACodingTestActor()
	{
	}
	UClass* Z_Construct_UClass_ACodingTestActor_NoRegister()
	{
		return ACodingTestActor::StaticClass();
	}
	struct Z_Construct_UClass_ACodingTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACodingTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CodingTestActor.h" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodingTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodingTestActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACodingTestActor_Statics::ClassParams = {
		&ACodingTestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACodingTestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACodingTestActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACodingTestActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACodingTestActor, 4089219713);
	template<> SHOOTINGCPP_API UClass* StaticClass<ACodingTestActor>()
	{
		return ACodingTestActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACodingTestActor(Z_Construct_UClass_ACodingTestActor, &ACodingTestActor::StaticClass, TEXT("/Script/ShootingCPP"), TEXT("ACodingTestActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACodingTestActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
