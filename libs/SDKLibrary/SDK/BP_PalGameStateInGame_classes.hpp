#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalGameStateInGame

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalGameStateInGame.BP_PalGameStateInGame_C
// 0x0008 (0x0478 - 0x0470)
class ABP_PalGameStateInGame_C final : public APalGameStateInGame
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalGameStateInGame_C">();
	}
	static class ABP_PalGameStateInGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalGameStateInGame_C>();
	}
};
static_assert(alignof(ABP_PalGameStateInGame_C) == 0x000008, "Wrong alignment on ABP_PalGameStateInGame_C");
static_assert(sizeof(ABP_PalGameStateInGame_C) == 0x000478, "Wrong size on ABP_PalGameStateInGame_C");
static_assert(offsetof(ABP_PalGameStateInGame_C, DefaultSceneRoot) == 0x000470, "Member 'ABP_PalGameStateInGame_C::DefaultSceneRoot' has a wrong offset!");

}

