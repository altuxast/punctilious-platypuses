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
struct FHitResult;
#ifdef ADVGAMESPROGRAMMING_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define ADVGAMESPROGRAMMING_Pickup_generated_h

#define AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_SPARSE_DATA
#define AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEnterPickup);


#define AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEnterPickup);


#define AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_PRIVATE_PROPERTY_OFFSET
#define AGP_A4_Source_AdvGamesProgramming_Pickup_h_9_PROLOG
#define AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_SPARSE_DATA \
	AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_RPC_WRAPPERS \
	AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_INCLASS \
	AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_SPARSE_DATA \
	AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_INCLASS_NO_PURE_DECLS \
	AGP_A4_Source_AdvGamesProgramming_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AGP_A4_Source_AdvGamesProgramming_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
