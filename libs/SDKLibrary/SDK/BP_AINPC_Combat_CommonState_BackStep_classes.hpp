#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_Combat_CommonState_BackStep

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AINPC_CombatState_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AINPC_Combat_CommonState_BackStep.BP_AINPC_Combat_CommonState_BackStep_C
// 0x0008 (0x0040 - 0x0038)
class UBP_AINPC_Combat_CommonState_BackStep_C final : public UBP_AINPC_CombatState_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep(int32 EntryPoint);
	void StateEnter();
	void StateTick(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AINPC_Combat_CommonState_BackStep_C">();
	}
	static class UBP_AINPC_Combat_CommonState_BackStep_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AINPC_Combat_CommonState_BackStep_C>();
	}
};
static_assert(alignof(UBP_AINPC_Combat_CommonState_BackStep_C) == 0x000008, "Wrong alignment on UBP_AINPC_Combat_CommonState_BackStep_C");
static_assert(sizeof(UBP_AINPC_Combat_CommonState_BackStep_C) == 0x000040, "Wrong size on UBP_AINPC_Combat_CommonState_BackStep_C");
static_assert(offsetof(UBP_AINPC_Combat_CommonState_BackStep_C, UberGraphFrame) == 0x000038, "Member 'UBP_AINPC_Combat_CommonState_BackStep_C::UberGraphFrame' has a wrong offset!");

}

