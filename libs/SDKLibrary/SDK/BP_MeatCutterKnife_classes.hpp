#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MeatCutterKnife

#include "Basic.hpp"

#include "BP_MeleeWeaponBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MeatCutterKnife.BP_MeatCutterKnife_C
// 0x0000 (0x05A0 - 0x05A0)
class ABP_MeatCutterKnife_C final : public ABP_MeleeWeaponBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MeatCutterKnife_C">();
	}
	static class ABP_MeatCutterKnife_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MeatCutterKnife_C>();
	}
};
static_assert(alignof(ABP_MeatCutterKnife_C) == 0x000008, "Wrong alignment on ABP_MeatCutterKnife_C");
static_assert(sizeof(ABP_MeatCutterKnife_C) == 0x0005A0, "Wrong size on ABP_MeatCutterKnife_C");

}

