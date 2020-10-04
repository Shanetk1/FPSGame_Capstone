// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAPSTONE_AIBrain_generated_h
#error "AIBrain.generated.h already included, missing '#pragma once' in AIBrain.h"
#endif
#define CAPSTONE_AIBrain_generated_h

#define Capstone_Source_Capstone_AIBrain_h_15_SPARSE_DATA
#define Capstone_Source_Capstone_AIBrain_h_15_RPC_WRAPPERS
#define Capstone_Source_Capstone_AIBrain_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Capstone_Source_Capstone_AIBrain_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIBrain(); \
	friend struct Z_Construct_UClass_AAIBrain_Statics; \
public: \
	DECLARE_CLASS(AAIBrain, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Capstone"), NO_API) \
	DECLARE_SERIALIZER(AAIBrain)


#define Capstone_Source_Capstone_AIBrain_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAIBrain(); \
	friend struct Z_Construct_UClass_AAIBrain_Statics; \
public: \
	DECLARE_CLASS(AAIBrain, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Capstone"), NO_API) \
	DECLARE_SERIALIZER(AAIBrain)


#define Capstone_Source_Capstone_AIBrain_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIBrain(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIBrain) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIBrain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIBrain); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIBrain(AAIBrain&&); \
	NO_API AAIBrain(const AAIBrain&); \
public:


#define Capstone_Source_Capstone_AIBrain_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIBrain(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIBrain(AAIBrain&&); \
	NO_API AAIBrain(const AAIBrain&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIBrain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIBrain); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIBrain)


#define Capstone_Source_Capstone_AIBrain_h_15_PRIVATE_PROPERTY_OFFSET
#define Capstone_Source_Capstone_AIBrain_h_12_PROLOG
#define Capstone_Source_Capstone_AIBrain_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_Capstone_AIBrain_h_15_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_Capstone_AIBrain_h_15_SPARSE_DATA \
	Capstone_Source_Capstone_AIBrain_h_15_RPC_WRAPPERS \
	Capstone_Source_Capstone_AIBrain_h_15_INCLASS \
	Capstone_Source_Capstone_AIBrain_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Capstone_Source_Capstone_AIBrain_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_Capstone_AIBrain_h_15_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_Capstone_AIBrain_h_15_SPARSE_DATA \
	Capstone_Source_Capstone_AIBrain_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Capstone_Source_Capstone_AIBrain_h_15_INCLASS_NO_PURE_DECLS \
	Capstone_Source_Capstone_AIBrain_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPSTONE_API UClass* StaticClass<class AAIBrain>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Capstone_Source_Capstone_AIBrain_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
