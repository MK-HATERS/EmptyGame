// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EmptyGame/EmptyGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmptyGameGameMode() {}

// Begin Cross Module References
EMPTYGAME_API UClass* Z_Construct_UClass_AEmptyGameGameMode();
EMPTYGAME_API UClass* Z_Construct_UClass_AEmptyGameGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_EmptyGame();
// End Cross Module References

// Begin Class AEmptyGameGameMode
void AEmptyGameGameMode::StaticRegisterNativesAEmptyGameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEmptyGameGameMode);
UClass* Z_Construct_UClass_AEmptyGameGameMode_NoRegister()
{
	return AEmptyGameGameMode::StaticClass();
}
struct Z_Construct_UClass_AEmptyGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EmptyGameGameMode.h" },
		{ "ModuleRelativePath", "EmptyGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEmptyGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEmptyGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EmptyGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEmptyGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEmptyGameGameMode_Statics::ClassParams = {
	&AEmptyGameGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEmptyGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AEmptyGameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEmptyGameGameMode()
{
	if (!Z_Registration_Info_UClass_AEmptyGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEmptyGameGameMode.OuterSingleton, Z_Construct_UClass_AEmptyGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEmptyGameGameMode.OuterSingleton;
}
template<> EMPTYGAME_API UClass* StaticClass<AEmptyGameGameMode>()
{
	return AEmptyGameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEmptyGameGameMode);
AEmptyGameGameMode::~AEmptyGameGameMode() {}
// End Class AEmptyGameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEmptyGameGameMode, AEmptyGameGameMode::StaticClass, TEXT("AEmptyGameGameMode"), &Z_Registration_Info_UClass_AEmptyGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEmptyGameGameMode), 362257941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGameGameMode_h_3393933132(TEXT("/Script/EmptyGame"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
