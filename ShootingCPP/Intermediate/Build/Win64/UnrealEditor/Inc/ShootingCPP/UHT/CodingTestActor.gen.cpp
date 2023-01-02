// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCPP/Public/CodingTestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodingTestActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ACodingTestActor();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ACodingTestActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
// End Cross Module References
	void ACodingTestActor::StaticRegisterNativesACodingTestActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACodingTestActor);
	UClass* Z_Construct_UClass_ACodingTestActor_NoRegister()
	{
		return ACodingTestActor::StaticClass();
	}
	struct Z_Construct_UClass_ACodingTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACodingTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CodingTestActor.h" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodingTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodingTestActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACodingTestActor_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_ACodingTestActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACodingTestActor.OuterSingleton, Z_Construct_UClass_ACodingTestActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACodingTestActor.OuterSingleton;
	}
	template<> SHOOTINGCPP_API UClass* StaticClass<ACodingTestActor>()
	{
		return ACodingTestActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACodingTestActor);
	ACodingTestActor::~ACodingTestActor() {}
	struct Z_CompiledInDeferFile_FID_Users_r283_Desktop_Github_UnrealPractice_ShootingCPP_Source_ShootingCPP_Public_CodingTestActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_r283_Desktop_Github_UnrealPractice_ShootingCPP_Source_ShootingCPP_Public_CodingTestActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACodingTestActor, ACodingTestActor::StaticClass, TEXT("ACodingTestActor"), &Z_Registration_Info_UClass_ACodingTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACodingTestActor), 4183333656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_r283_Desktop_Github_UnrealPractice_ShootingCPP_Source_ShootingCPP_Public_CodingTestActor_h_874606320(TEXT("/Script/ShootingCPP"),
		Z_CompiledInDeferFile_FID_Users_r283_Desktop_Github_UnrealPractice_ShootingCPP_Source_ShootingCPP_Public_CodingTestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_r283_Desktop_Github_UnrealPractice_ShootingCPP_Source_ShootingCPP_Public_CodingTestActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
