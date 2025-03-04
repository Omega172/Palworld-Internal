#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Emote_8

#include "Basic.hpp"

#include "BP_Action_Emote_Base_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_Emote_8.BP_Action_Emote_8_C
// 0x0010 (0x0170 - 0x0160)
class UBP_Action_Emote_8_C final : public UBP_Action_Emote_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_Emote_8_C;                // 0x0158(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Action_Emote_KickCollision_C*       NewVar;                                            // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_Emote_8(int32 EntryPoint);
	void OnEndAction();
	void OnNotify(class FName Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Emote_8_C">();
	}
	static class UBP_Action_Emote_8_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Emote_8_C>();
	}
};
static_assert(alignof(UBP_Action_Emote_8_C) == 0x000010, "Wrong alignment on UBP_Action_Emote_8_C");
static_assert(sizeof(UBP_Action_Emote_8_C) == 0x000170, "Wrong size on UBP_Action_Emote_8_C");
static_assert(offsetof(UBP_Action_Emote_8_C, UberGraphFrame_BP_Action_Emote_8_C) == 0x000158, "Member 'UBP_Action_Emote_8_C::UberGraphFrame_BP_Action_Emote_8_C' has a wrong offset!");
static_assert(offsetof(UBP_Action_Emote_8_C, NewVar) == 0x000160, "Member 'UBP_Action_Emote_8_C::NewVar' has a wrong offset!");

}

