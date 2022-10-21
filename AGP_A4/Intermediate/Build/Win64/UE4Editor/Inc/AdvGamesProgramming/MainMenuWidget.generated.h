// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVGAMESPROGRAMMING_MainMenuWidget_generated_h
#error "MainMenuWidget.generated.h already included, missing '#pragma once' in MainMenuWidget.h"
#endif
#define ADVGAMESPROGRAMMING_MainMenuWidget_generated_h

#define AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_SPARSE_DATA
#define AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuitButtonPressed); \
	DECLARE_FUNCTION(execOnJoinButtonPressed); \
	DECLARE_FUNCTION(execOnHostButtonPressed);


#define AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuitButtonPressed); \
	DECLARE_FUNCTION(execOnJoinButtonPressed); \
	DECLARE_FUNCTION(execOnHostButtonPressed);


#define AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public:


#define AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget)


#define AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ButtonHost() { return STRUCT_OFFSET(UMainMenuWidget, ButtonHost); } \
	FORCEINLINE static uint32 __PPO__ButtonJoin() { return STRUCT_OFFSET(UMainMenuWidget, ButtonJoin); } \
	FORCEINLINE static uint32 __PPO__ButtonQuit() { return STRUCT_OFFSET(UMainMenuWidget, ButtonQuit); }


#define AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_12_PROLOG
#define AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_SPARSE_DATA \
	AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_RPC_WRAPPERS \
	AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_INCLASS \
	AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_SPARSE_DATA \
	AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_INCLASS_NO_PURE_DECLS \
	AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class UMainMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AGP_A4_Source_AdvGamesProgramming_MainMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
