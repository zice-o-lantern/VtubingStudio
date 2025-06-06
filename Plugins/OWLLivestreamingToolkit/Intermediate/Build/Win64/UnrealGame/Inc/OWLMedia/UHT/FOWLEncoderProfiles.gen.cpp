// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLMedia/Public/FOWLEncoderProfiles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFOWLEncoderProfiles() {}

// Begin Cross Module References
OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLEncoderProfile();
UPackage* Z_Construct_UPackage__Script_OWLMedia();
// End Cross Module References

// Begin Enum EOWLEncoderProfile
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLEncoderProfile;
static UEnum* EOWLEncoderProfile_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOWLEncoderProfile.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOWLEncoderProfile.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWLMedia_EOWLEncoderProfile, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("EOWLEncoderProfile"));
	}
	return Z_Registration_Info_UEnum_EOWLEncoderProfile.OuterSingleton;
}
template<> OWLMEDIA_API UEnum* StaticEnum<EOWLEncoderProfile>()
{
	return EOWLEncoderProfile_StaticEnum();
}
struct Z_Construct_UEnum_OWLMedia_EOWLEncoderProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FOWLEncoderProfiles.h" },
		{ "P_BASELINE.DisplayName", "Baseline" },
		{ "P_BASELINE.Name", "EOWLEncoderProfile::P_BASELINE" },
		{ "P_CONSTRAINED_BASELINE.DisplayName", "Constrained Baseline" },
		{ "P_CONSTRAINED_BASELINE.Name", "EOWLEncoderProfile::P_CONSTRAINED_BASELINE" },
		{ "P_HIGH.DisplayName", "High" },
		{ "P_HIGH.Name", "EOWLEncoderProfile::P_HIGH" },
		{ "P_HIGH444.DisplayName", "High 444 (Professional)" },
		{ "P_HIGH444.Name", "EOWLEncoderProfile::P_HIGH444" },
		{ "P_MAIN.DisplayName", "Main" },
		{ "P_MAIN.Name", "EOWLEncoderProfile::P_MAIN" },
		{ "P_STEREO.DisplayName", "Stereo" },
		{ "P_STEREO.Name", "EOWLEncoderProfile::P_STEREO" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOWLEncoderProfile::P_BASELINE", (int64)EOWLEncoderProfile::P_BASELINE },
		{ "EOWLEncoderProfile::P_CONSTRAINED_BASELINE", (int64)EOWLEncoderProfile::P_CONSTRAINED_BASELINE },
		{ "EOWLEncoderProfile::P_MAIN", (int64)EOWLEncoderProfile::P_MAIN },
		{ "EOWLEncoderProfile::P_HIGH", (int64)EOWLEncoderProfile::P_HIGH },
		{ "EOWLEncoderProfile::P_HIGH444", (int64)EOWLEncoderProfile::P_HIGH444 },
		{ "EOWLEncoderProfile::P_STEREO", (int64)EOWLEncoderProfile::P_STEREO },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWLMedia_EOWLEncoderProfile_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OWLMedia,
	nullptr,
	"EOWLEncoderProfile",
	"EOWLEncoderProfile",
	Z_Construct_UEnum_OWLMedia_EOWLEncoderProfile_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OWLMedia_EOWLEncoderProfile_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWLMedia_EOWLEncoderProfile_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWLMedia_EOWLEncoderProfile_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OWLMedia_EOWLEncoderProfile()
{
	if (!Z_Registration_Info_UEnum_EOWLEncoderProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLEncoderProfile.InnerSingleton, Z_Construct_UEnum_OWLMedia_EOWLEncoderProfile_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOWLEncoderProfile.InnerSingleton;
}
// End Enum EOWLEncoderProfile

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_FOWLEncoderProfiles_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOWLEncoderProfile_StaticEnum, TEXT("EOWLEncoderProfile"), &Z_Registration_Info_UEnum_EOWLEncoderProfile, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1983132077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_FOWLEncoderProfiles_h_707216384(TEXT("/Script/OWLMedia"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_FOWLEncoderProfiles_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_FOWLEncoderProfiles_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
