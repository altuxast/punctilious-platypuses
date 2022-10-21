// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
#ifdef ADVGAMESPROGRAMMING_MultiplayerGameMode_generated_h
#error "MultiplayerGameMode.generated.h already included, missing '#pragma once' in MultiplayerGameMode.h"
#endif
#define ADVGAMESPROGRAMMING_MultiplayerGameMode_generated_h

#define AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_SPARSE_DATA
#define AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggerRespawn);


#define AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerRespawn);


#define AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerGameMode(); \
	friend struct Z_Construct_UClass_AMultiplayerGameMode_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerGameMode)


#define AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMultiplayerGameMode(); \
	friend struct Z_Construct_UClass_AMultiplayerGameMode_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerGameMode)


#define AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiplayerGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiplayerGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerGameMode(AMultiplayerGameMode&&); \
	NO_API AMultiplayerGameMode(const AMultiplayerGameMode&); \
public:


#define AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiplayerGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerGameMode(AMultiplayerGameMode&&); \
	NO_API AMultiplayerGameMode(const AMultiplayerGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiplayerGameMode)


#define AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_12_PROLOG
#define AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_SPARSE_DATA \
	AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_RPC_WRAPPERS \
	AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_INCLASS \
	AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_SPARSE_DATA \
	AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_INCLASS_NO_PURE_DECLS \
	AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class AMultiplayerGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AGP_A4_Source_AdvGamesProgramming_MultiplayerGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
