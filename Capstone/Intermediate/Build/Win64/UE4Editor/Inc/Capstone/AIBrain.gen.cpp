// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Capstone/AIBrain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBrain() {}
// Cross Module References
	CAPSTONE_API UClass* Z_Construct_UClass_AAIBrain_NoRegister();
	CAPSTONE_API UClass* Z_Construct_UClass_AAIBrain();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Capstone();
// End Cross Module References
	void AAIBrain::StaticRegisterNativesAAIBrain()
	{
	}
	UClass* Z_Construct_UClass_AAIBrain_NoRegister()
	{
		return AAIBrain::StaticClass();
	}
	struct Z_Construct_UClass_AAIBrain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIBrain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Capstone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIBrain_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AIBrain.h" },
		{ "ModuleRelativePath", "AIBrain.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIBrain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIBrain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIBrain_Statics::ClassParams = {
		&AAIBrain::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIBrain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIBrain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIBrain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIBrain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIBrain, 3912936219);
	template<> CAPSTONE_API UClass* StaticClass<AAIBrain>()
	{
		return AAIBrain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIBrain(Z_Construct_UClass_AAIBrain, &AAIBrain::StaticClass, TEXT("/Script/Capstone"), TEXT("AAIBrain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIBrain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
