#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BuildingReticle

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BuildingReticle.WBP_BuildingReticle_C
// 0x0000 (0x0408 - 0x0408)
class UWBP_BuildingReticle_C final : public UPalUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BuildingReticle_C">();
	}
	static class UWBP_BuildingReticle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BuildingReticle_C>();
	}
};
static_assert(alignof(UWBP_BuildingReticle_C) == 0x000008, "Wrong alignment on UWBP_BuildingReticle_C");
static_assert(sizeof(UWBP_BuildingReticle_C) == 0x000408, "Wrong size on UWBP_BuildingReticle_C");

}

