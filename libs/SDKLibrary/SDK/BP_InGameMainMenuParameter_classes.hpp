#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InGameMainMenuParameter

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "EPalUIInGameMainMenuTabType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InGameMainMenuParameter.BP_InGameMainMenuParameter_C
// 0x0008 (0x0040 - 0x0038)
class UBP_InGameMainMenuParameter_C final : public UPalHUDDispatchParameterBase
{
public:
	EPalUIInGameMainMenuTabType                   TabType;                                           // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EPalBuildObjectTypeA                          BuildMenuInitialTypeA;                             // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Lock;                                              // 0x003A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InGameMainMenuParameter_C">();
	}
	static class UBP_InGameMainMenuParameter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InGameMainMenuParameter_C>();
	}
};
static_assert(alignof(UBP_InGameMainMenuParameter_C) == 0x000008, "Wrong alignment on UBP_InGameMainMenuParameter_C");
static_assert(sizeof(UBP_InGameMainMenuParameter_C) == 0x000040, "Wrong size on UBP_InGameMainMenuParameter_C");
static_assert(offsetof(UBP_InGameMainMenuParameter_C, TabType) == 0x000038, "Member 'UBP_InGameMainMenuParameter_C::TabType' has a wrong offset!");
static_assert(offsetof(UBP_InGameMainMenuParameter_C, BuildMenuInitialTypeA) == 0x000039, "Member 'UBP_InGameMainMenuParameter_C::BuildMenuInitialTypeA' has a wrong offset!");
static_assert(offsetof(UBP_InGameMainMenuParameter_C, Lock) == 0x00003A, "Member 'UBP_InGameMainMenuParameter_C::Lock' has a wrong offset!");

}

