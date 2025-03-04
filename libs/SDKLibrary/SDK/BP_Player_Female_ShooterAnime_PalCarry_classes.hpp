#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Player_Female_ShooterAnime_PalCarry

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Player_Female_ShooterAnime_PalCarry.BP_Player_Female_ShooterAnime_PalCarry_C
// 0x0018 (0x02A0 - 0x0288)
class UBP_Player_Female_ShooterAnime_PalCarry_C final : public UPalShooterAnimeAssetBase
{
public:
	class UAnimMontage*                           Ride_Fire_Front;                                   // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Ride_Fire_Right;                                   // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Ride_Fire_Left;                                    // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeRidePullTriggerAnime(EPalStepAxisType Direction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Player_Female_ShooterAnime_PalCarry_C">();
	}
	static class UBP_Player_Female_ShooterAnime_PalCarry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Player_Female_ShooterAnime_PalCarry_C>();
	}
};
static_assert(alignof(UBP_Player_Female_ShooterAnime_PalCarry_C) == 0x000008, "Wrong alignment on UBP_Player_Female_ShooterAnime_PalCarry_C");
static_assert(sizeof(UBP_Player_Female_ShooterAnime_PalCarry_C) == 0x0002A0, "Wrong size on UBP_Player_Female_ShooterAnime_PalCarry_C");
static_assert(offsetof(UBP_Player_Female_ShooterAnime_PalCarry_C, Ride_Fire_Front) == 0x000288, "Member 'UBP_Player_Female_ShooterAnime_PalCarry_C::Ride_Fire_Front' has a wrong offset!");
static_assert(offsetof(UBP_Player_Female_ShooterAnime_PalCarry_C, Ride_Fire_Right) == 0x000290, "Member 'UBP_Player_Female_ShooterAnime_PalCarry_C::Ride_Fire_Right' has a wrong offset!");
static_assert(offsetof(UBP_Player_Female_ShooterAnime_PalCarry_C, Ride_Fire_Left) == 0x000298, "Member 'UBP_Player_Female_ShooterAnime_PalCarry_C::Ride_Fire_Left' has a wrong offset!");

}

