// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EmptyGameProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef EMPTYGAME_EmptyGameProjectile_generated_h
#error "EmptyGameProjectile.generated.h already included, missing '#pragma once' in EmptyGameProjectile.h"
#endif
#define EMPTYGAME_EmptyGameProjectile_generated_h

#define FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEmptyGameProjectile(); \
	friend struct Z_Construct_UClass_AEmptyGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AEmptyGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EmptyGame"), NO_API) \
	DECLARE_SERIALIZER(AEmptyGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEmptyGameProjectile(AEmptyGameProjectile&&); \
	AEmptyGameProjectile(const AEmptyGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEmptyGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmptyGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEmptyGameProjectile) \
	NO_API virtual ~AEmptyGameProjectile();


#define FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGameProjectile_h_12_PROLOG
#define FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EMPTYGAME_API UClass* StaticClass<class AEmptyGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
