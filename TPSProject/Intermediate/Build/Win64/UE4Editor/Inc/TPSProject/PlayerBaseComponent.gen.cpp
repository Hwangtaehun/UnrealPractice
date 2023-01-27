// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSProject/public/PlayerBaseComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerBaseComponent() {}
// Cross Module References
	TPSPROJECT_API UClass* Z_Construct_UClass_UPlayerBaseComponent_NoRegister();
	TPSPROJECT_API UClass* Z_Construct_UClass_UPlayerBaseComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TPSProject();
	TPSPROJECT_API UClass* Z_Construct_UClass_ATPSPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
// End Cross Module References
	void UPlayerBaseComponent::StaticRegisterNativesUPlayerBaseComponent()
	{
	}
	UClass* Z_Construct_UClass_UPlayerBaseComponent_NoRegister()
	{
		return UPlayerBaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerBaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_me_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_me;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_moveComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerBaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TPSProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerBaseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerBaseComponent.h" },
		{ "ModuleRelativePath", "public/PlayerBaseComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_me_MetaData[] = {
		{ "ModuleRelativePath", "public/PlayerBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerBaseComponent, me), Z_Construct_UClass_ATPSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_me_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_me_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_moveComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "public/PlayerBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_moveComp = { "moveComp", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerBaseComponent, moveComp), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_moveComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_moveComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerBaseComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_me,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_moveComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerBaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerBaseComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerBaseComponent_Statics::ClassParams = {
		&UPlayerBaseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerBaseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerBaseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerBaseComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerBaseComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerBaseComponent, 4170709895);
	template<> TPSPROJECT_API UClass* StaticClass<UPlayerBaseComponent>()
	{
		return UPlayerBaseComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerBaseComponent(Z_Construct_UClass_UPlayerBaseComponent, &UPlayerBaseComponent::StaticClass, TEXT("/Script/TPSProject"), TEXT("UPlayerBaseComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerBaseComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
