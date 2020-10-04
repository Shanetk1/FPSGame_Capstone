// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAPSTONE_Obj_Base_generated_h
#error "Obj_Base.generated.h already included, missing '#pragma once' in Obj_Base.h"
#endif
#define CAPSTONE_Obj_Base_generated_h

#define Capstone_Source_Capstone_Obj_Base_h_15_SPARSE_DATA
#define Capstone_Source_Capstone_Obj_Base_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execisActive);


#define Capstone_Source_Capstone_Obj_Base_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execisActive);


#define Capstone_Source_Capstone_Obj_Base_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObj_Base(); \
	friend struct Z_Construct_UClass_AObj_Base_Statics; \
public: \
	DECLARE_CLASS(AObj_Base, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Capstone"), NO_API) \
	DECLARE_SERIALIZER(AObj_Base) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Capstone_Source_Capstone_Obj_Base_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAObj_Base(); \
	friend struct Z_Construct_UClass_AObj_Base_Statics; \
public: \
	DECLARE_CLASS(AObj_Base, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Capstone"), NO_API) \
	DECLARE_SERIALIZER(AObj_Base) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Capstone_Source_Capstone_Obj_Base_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObj_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObj_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObj_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObj_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObj_Base(AObj_Base&&); \
	NO_API AObj_Base(const AObj_Base&); \
public:


#define Capstone_Source_Capstone_Obj_Base_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObj_Base(AObj_Base&&); \
	NO_API AObj_Base(const AObj_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObj_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObj_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObj_Base)


#define Capstone_Source_Capstone_Obj_Base_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bActive() { return STRUCT_OFFSET(AObj_Base, bActive); }


#define Capstone_Source_Capstone_Obj_Base_h_12_PROLOG
#define Capstone_Source_Capstone_Obj_Base_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_Capstone_Obj_Base_h_15_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_Capstone_Obj_Base_h_15_SPARSE_DATA \
	Capstone_Source_Capstone_Obj_Base_h_15_RPC_WRAPPERS \
	Capstone_Source_Capstone_Obj_Base_h_15_INCLASS \
	Capstone_Source_Capstone_Obj_Base_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Capstone_Source_Capstone_Obj_Base_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_Capstone_Obj_Base_h_15_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_Capstone_Obj_Base_h_15_SPARSE_DATA \
	Capstone_Source_Capstone_Obj_Base_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Capstone_Source_Capstone_Obj_Base_h_15_INCLASS_NO_PURE_DECLS \
	Capstone_Source_Capstone_Obj_Base_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPSTONE_API UClass* StaticClass<class AObj_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Capstone_Source_Capstone_Obj_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
