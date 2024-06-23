// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmptyGame_init() {}
	EMPTYGAME_API UFunction* Z_Construct_UDelegateFunction_EmptyGame_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EmptyGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EmptyGame()
	{
		if (!Z_Registration_Info_UPackage__Script_EmptyGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_EmptyGame_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EmptyGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x991C1253,
				0xCF1B70DC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EmptyGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EmptyGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EmptyGame(Z_Construct_UPackage__Script_EmptyGame, TEXT("/Script/EmptyGame"), Z_Registration_Info_UPackage__Script_EmptyGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x991C1253, 0xCF1B70DC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
