// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CapstonePROJ/CapstonePROJGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapstonePROJGameModeBase() {}
// Cross Module References
	CAPSTONEPROJ_API UClass* Z_Construct_UClass_ACapstonePROJGameModeBase_NoRegister();
	CAPSTONEPROJ_API UClass* Z_Construct_UClass_ACapstonePROJGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CapstonePROJ();
// End Cross Module References
	void ACapstonePROJGameModeBase::StaticRegisterNativesACapstonePROJGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACapstonePROJGameModeBase_NoRegister()
	{
		return ACapstonePROJGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACapstonePROJGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapstonePROJGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CapstonePROJ,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapstonePROJGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CapstonePROJGameModeBase.h" },
		{ "ModuleRelativePath", "CapstonePROJGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapstonePROJGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapstonePROJGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapstonePROJGameModeBase_Statics::ClassParams = {
		&ACapstonePROJGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACapstonePROJGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapstonePROJGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapstonePROJGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapstonePROJGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapstonePROJGameModeBase, 122308302);
	template<> CAPSTONEPROJ_API UClass* StaticClass<ACapstonePROJGameModeBase>()
	{
		return ACapstonePROJGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapstonePROJGameModeBase(Z_Construct_UClass_ACapstonePROJGameModeBase, &ACapstonePROJGameModeBase::StaticClass, TEXT("/Script/CapstonePROJ"), TEXT("ACapstonePROJGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapstonePROJGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
