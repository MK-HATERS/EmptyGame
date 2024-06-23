// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EmptyGamePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EMPTYGAME_EmptyGamePlayerController_generated_h
#error "EmptyGamePlayerController.generated.h already included, missing '#pragma once' in EmptyGamePlayerController.h"
#endif
#define EMPTYGAME_EmptyGamePlayerController_generated_h

#define FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGamePlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEmptyGamePlayerController(); \
	friend struct Z_Construct_UClass_AEmptyGamePlayerController_Statics; \
public: \
	DECLARE_CLASS(AEmptyGamePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EmptyGame"), NO_API) \
	DECLARE_SERIALIZER(AEmptyGamePlayerController)


#define FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGamePlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEmptyGamePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEmptyGamePlayerController(AEmptyGamePlayerController&&); \
	AEmptyGamePlayerController(const AEmptyGamePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEmptyGamePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmptyGamePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEmptyGamePlayerController) \
	NO_API virtual ~AEmptyGamePlayerController();


#define FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGamePlayerController_h_14_PROLOG
#define FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGamePlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGamePlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGamePlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EMPTYGAME_API UClass* StaticClass<class AEmptyGamePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGamePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
