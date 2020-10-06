// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef CAPSTONE_Bullet_Base_generated_h
#error "Bullet_Base.generated.h already included, missing '#pragma once' in Bullet_Base.h"
#endif
#define CAPSTONE_Bullet_Base_generated_h

#define Capstone_Source_Capstone_Bullet_Base_h_12_SPARSE_DATA
#define Capstone_Source_Capstone_Bullet_Base_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBullet_BaseHit);


#define Capstone_Source_Capstone_Bullet_Base_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBullet_BaseHit);


#define Capstone_Source_Capstone_Bullet_Base_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet_Base(); \
	friend struct Z_Construct_UClass_ABullet_Base_Statics; \
public: \
	DECLARE_CLASS(ABullet_Base, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Capstone"), NO_API) \
	DECLARE_SERIALIZER(ABullet_Base)


#define Capstone_Source_Capstone_Bullet_Base_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABullet_Base(); \
	friend struct Z_Construct_UClass_ABullet_Base_Statics; \
public: \
	DECLARE_CLASS(ABullet_Base, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Capstone"), NO_API) \
	DECLARE_SERIALIZER(ABullet_Base)


#define Capstone_Source_Capstone_Bullet_Base_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet_Base(ABullet_Base&&); \
	NO_API ABullet_Base(const ABullet_Base&); \
public:


#define Capstone_Source_Capstone_Bullet_Base_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet_Base(ABullet_Base&&); \
	NO_API ABullet_Base(const ABullet_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet_Base)


#define Capstone_Source_Capstone_Bullet_Base_h_12_PRIVATE_PROPERTY_OFFSET
#define Capstone_Source_Capstone_Bullet_Base_h_9_PROLOG
#define Capstone_Source_Capstone_Bullet_Base_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_Capstone_Bullet_Base_h_12_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_Capstone_Bullet_Base_h_12_SPARSE_DATA \
	Capstone_Source_Capstone_Bullet_Base_h_12_RPC_WRAPPERS \
	Capstone_Source_Capstone_Bullet_Base_h_12_INCLASS \
	Capstone_Source_Capstone_Bullet_Base_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Capstone_Source_Capstone_Bullet_Base_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_Capstone_Bullet_Base_h_12_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_Capstone_Bullet_Base_h_12_SPARSE_DATA \
	Capstone_Source_Capstone_Bullet_Base_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Capstone_Source_Capstone_Bullet_Base_h_12_INCLASS_NO_PURE_DECLS \
	Capstone_Source_Capstone_Bullet_Base_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPSTONE_API UClass* StaticClass<class ABullet_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Capstone_Source_Capstone_Bullet_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
