#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Item_PalSphere

#include "Basic.hpp"

#include "BP_ItemBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Item_PalSphere.BP_Item_PalSphere_C
// 0x0000 (0x02B0 - 0x02B0)
class ABP_Item_PalSphere_C final : public ABP_ItemBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Item_PalSphere_C">();
	}
	static class ABP_Item_PalSphere_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Item_PalSphere_C>();
	}
};
static_assert(alignof(ABP_Item_PalSphere_C) == 0x000008, "Wrong alignment on ABP_Item_PalSphere_C");
static_assert(sizeof(ABP_Item_PalSphere_C) == 0x0002B0, "Wrong size on ABP_Item_PalSphere_C");

}

