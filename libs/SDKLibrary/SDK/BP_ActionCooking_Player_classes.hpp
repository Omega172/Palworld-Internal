#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionCooking_Player

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionInteractBase_Player_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionCooking_Player.BP_ActionCooking_Player_C
// 0x0020 (0x01B0 - 0x0190)
class UBP_ActionCooking_Player_C final : public UBP_ActionInteractBase_Player_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionCooking_Player_C;          // 0x0190(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_CookingFryingPan_C*                 CookingToolActor_L;                                // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CheckEndCancelTimer_0;                             // 0x01A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_CookingSpatula_C*                   CookingToolActor_R;                                // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionCooking_Player(int32 EntryPoint);
	void OnMontageEnd();
	void OnNotifyBegin(class FName NotifyName);
	void SyncAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionCooking_Player_C">();
	}
	static class UBP_ActionCooking_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionCooking_Player_C>();
	}
};
static_assert(alignof(UBP_ActionCooking_Player_C) == 0x000010, "Wrong alignment on UBP_ActionCooking_Player_C");
static_assert(sizeof(UBP_ActionCooking_Player_C) == 0x0001B0, "Wrong size on UBP_ActionCooking_Player_C");
static_assert(offsetof(UBP_ActionCooking_Player_C, UberGraphFrame_BP_ActionCooking_Player_C) == 0x000190, "Member 'UBP_ActionCooking_Player_C::UberGraphFrame_BP_ActionCooking_Player_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionCooking_Player_C, CookingToolActor_L) == 0x000198, "Member 'UBP_ActionCooking_Player_C::CookingToolActor_L' has a wrong offset!");
static_assert(offsetof(UBP_ActionCooking_Player_C, CheckEndCancelTimer_0) == 0x0001A0, "Member 'UBP_ActionCooking_Player_C::CheckEndCancelTimer_0' has a wrong offset!");
static_assert(offsetof(UBP_ActionCooking_Player_C, CookingToolActor_R) == 0x0001A8, "Member 'UBP_ActionCooking_Player_C::CookingToolActor_R' has a wrong offset!");

}

