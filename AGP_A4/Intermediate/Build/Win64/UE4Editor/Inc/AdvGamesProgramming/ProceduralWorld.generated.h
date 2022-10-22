// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVGAMESPROGRAMMING_ProceduralWorld_generated_h
#error "ProceduralWorld.generated.h already included, missing '#pragma once' in ProceduralWorld.h"
#endif
#define ADVGAMESPROGRAMMING_ProceduralWorld_generated_h

#define AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_SPARSE_DATA
#define AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateGrid);


#define AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateGrid);


#define AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProceduralWorld(); \
	friend struct Z_Construct_UClass_AProceduralWorld_Statics; \
public: \
	DECLARE_CLASS(AProceduralWorld, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AProceduralWorld)


#define AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAProceduralWorld(); \
	friend struct Z_Construct_UClass_AProceduralWorld_Statics; \
public: \
	DECLARE_CLASS(AProceduralWorld, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AProceduralWorld)


#define AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProceduralWorld(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProceduralWorld) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceduralWorld); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralWorld); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProceduralWorld(AProceduralWorld&&); \
	NO_API AProceduralWorld(const AProceduralWorld&); \
public:


#define AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProceduralWorld(AProceduralWorld&&); \
	NO_API AProceduralWorld(const AProceduralWorld&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceduralWorld); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralWorld); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProceduralWorld)


#define AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TileMesh() { return STRUCT_OFFSET(AProceduralWorld, TileMesh); } \
	FORCEINLINE static uint32 __PPO__PillarClass() { return STRUCT_OFFSET(AProceduralWorld, PillarClass); }


#define AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_10_PROLOG
#define AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_PRIVATE_PROPERTY_OFFSET \
	AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_SPARSE_DATA \
	AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_RPC_WRAPPERS \
	AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_INCLASS \
	AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_PRIVATE_PROPERTY_OFFSET \
	AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_SPARSE_DATA \
	AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_INCLASS_NO_PURE_DECLS \
	AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class AProceduralWorld>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AGP_A4_Source_AdvGamesProgramming_ProceduralWorld_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
