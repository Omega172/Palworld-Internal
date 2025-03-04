#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionPlanting_Player

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionInteractBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionPlanting_Player.BP_ActionPlanting_Player_C
// 0x0010 (0x0190 - 0x0180)
class UBP_ActionPlanting_Player_C final : public UBP_ActionInteractBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionPlanting_Player_C;         // 0x0180(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   FlagName;                                          // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionPlanting_Player(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionPlanting_Player_C">();
	}
	static class UBP_ActionPlanting_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionPlanting_Player_C>();
	}
};
static_assert(alignof(UBP_ActionPlanting_Player_C) == 0x000010, "Wrong alignment on UBP_ActionPlanting_Player_C");
static_assert(sizeof(UBP_ActionPlanting_Player_C) == 0x000190, "Wrong size on UBP_ActionPlanting_Player_C");
static_assert(offsetof(UBP_ActionPlanting_Player_C, UberGraphFrame_BP_ActionPlanting_Player_C) == 0x000180, "Member 'UBP_ActionPlanting_Player_C::UberGraphFrame_BP_ActionPlanting_Player_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionPlanting_Player_C, FlagName) == 0x000188, "Member 'UBP_ActionPlanting_Player_C::FlagName' has a wrong offset!");

}

