#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AlertByKilledFriendState_AproachDeadPoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AlertByKilledFriendState_AproachDeadPoint.BP_AlertByKilledFriendState_AproachDeadPoint_C
// 0x0008 (0x0038 - 0x0030)
class UBP_AlertByKilledFriendState_AproachDeadPoint_C final : public UPalStateMachineStateBase_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_AlertByKilledFriendState_AproachDeadPoint(int32 EntryPoint);
	void StateExit();
	void StateTick(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AlertByKilledFriendState_AproachDeadPoint_C">();
	}
	static class UBP_AlertByKilledFriendState_AproachDeadPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AlertByKilledFriendState_AproachDeadPoint_C>();
	}
};
static_assert(alignof(UBP_AlertByKilledFriendState_AproachDeadPoint_C) == 0x000008, "Wrong alignment on UBP_AlertByKilledFriendState_AproachDeadPoint_C");
static_assert(sizeof(UBP_AlertByKilledFriendState_AproachDeadPoint_C) == 0x000038, "Wrong size on UBP_AlertByKilledFriendState_AproachDeadPoint_C");
static_assert(offsetof(UBP_AlertByKilledFriendState_AproachDeadPoint_C, UberGraphFrame) == 0x000030, "Member 'UBP_AlertByKilledFriendState_AproachDeadPoint_C::UberGraphFrame' has a wrong offset!");

}

