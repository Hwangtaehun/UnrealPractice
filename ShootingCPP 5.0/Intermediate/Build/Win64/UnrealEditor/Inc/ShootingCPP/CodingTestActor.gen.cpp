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
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ACodingTestActor_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ACodingTestActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
// End Cross Module References
	DEFINE_FUNCTION(ACodingTestActor::execAdd)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_num1);
		P_GET_PROPERTY(FIntProperty,Z_Param_num2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Add(Z_Param_num1,Z_Param_num2);
		P_NATIVE_END;
	}
	void ACodingTestActor::StaticRegisterNativesACodingTestActor()
	{
		UClass* Class = ACodingTestActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", &ACodingTestActor::execAdd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACodingTestActor_Add_Statics
	{
		struct CodingTestActor_eventAdd_Parms
		{
			int32 num1;
			int32 num2;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_num1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_num2;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_num1 = { "num1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CodingTestActor_eventAdd_Parms, num1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_num2 = { "num2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CodingTestActor_eventAdd_Parms, num2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CodingTestActor_eventAdd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACodingTestActor_Add_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_num1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_num2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACodingTestActor_Add_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UFUNCTION(BlueprintCallable)\n" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACodingTestActor_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACodingTestActor, nullptr, "Add", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACodingTestActor_Add_Statics::CodingTestActor_eventAdd_Parms), Z_Construct_UFunction_ACodingTestActor_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACodingTestActor_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACodingTestActor_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACodingTestActor_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACodingTestActor_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACodingTestActor_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACodingTestActor);
	UClass* Z_Construct_UClass_ACodingTestActor_NoRegister()
	{
		return ACodingTestActor::StaticClass();
	}
	struct Z_Construct_UClass_ACodingTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_number1_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_number1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_number2_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_number2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isReady_MetaData[];
#endif
		static void NewProp_isReady_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isReady;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACodingTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACodingTestActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACodingTestActor_Add, "Add" }, // 19865868
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CodingTestActor.h" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number1_MetaData[] = {
		{ "Category", "CodingTestActor" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number1 = { "number1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestActor, number1), METADATA_PARAMS(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number2_MetaData[] = {
		{ "Category", "CodingTestActor" },
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)\n" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number2 = { "number2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestActor, number2), METADATA_PARAMS(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestActor_Statics::NewProp_name_MetaData[] = {
		{ "Category", "CodingTestActor" },
		{ "Comment", "//FString name = \"Park Won Seok\";\n" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
		{ "ToolTip", "FString name = \"Park Won Seok\";" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACodingTestActor_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestActor, name), METADATA_PARAMS(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestActor_Statics::NewProp_isReady_MetaData[] = {
		{ "Category", "CodingTestActor" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
	};
#endif
	void Z_Construct_UClass_ACodingTestActor_Statics::NewProp_isReady_SetBit(void* Obj)
	{
		((ACodingTestActor*)Obj)->isReady = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACodingTestActor_Statics::NewProp_isReady = { "isReady", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACodingTestActor), &Z_Construct_UClass_ACodingTestActor_Statics::NewProp_isReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_isReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_isReady_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACodingTestActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestActor_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestActor_Statics::NewProp_isReady,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodingTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodingTestActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACodingTestActor_Statics::ClassParams = {
		&ACodingTestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACodingTestActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::PropPointers),
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
	struct Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_CodingTestActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_CodingTestActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACodingTestActor, ACodingTestActor::StaticClass, TEXT("ACodingTestActor"), &Z_Registration_Info_UClass_ACodingTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACodingTestActor), 3161980557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_CodingTestActor_h_3557294779(TEXT("/Script/ShootingCPP"),
		Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_CodingTestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_CodingTestActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
