#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCAIController_Visitor_Guardman

#include "Basic.hpp"

#include "BP_NPCAIController_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPCAIController_Visitor_Guardman.BP_NPCAIController_Visitor_Guardman_C
// 0x0050 (0x05E0 - 0x0590)
class ABP_NPCAIController_Visitor_Guardman_C final : public ABP_NPCAIController_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_NPCAIController_Visitor_Guardman_C; // 0x0590(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                GoalLocation;                                      // 0x0598(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnTimeMinutes;                                 // 0x05B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WalkAreaSplitNum;                                  // 0x05B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalIVisitorNPCAction                         ActionTimeLimit;                                   // 0x05B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10[0x7];                                       // 0x05B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Formation_Offset;                                  // 0x05C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          VisitorLeader;                                     // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BindArriveEvent(class UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C* Action);
	void BindWaitFinishEvent(class UBP_AIAction_Visitor_WaitInBaseCamp_C* Action);
	void ExecuteUbergraph_BP_NPCAIController_Visitor_Guardman(int32 EntryPoint);
	void FindTargetPlayer(class AActor** TargetActor);
	void OnArrivedTargetPoint();
	void OnDeadByVisitorLeader(const struct FPalDeadInfo& DeadInfo);
	void OnReturnSpawnedPointByVisitorLeader();
	void OnStuck();
	void OnWaitFinished();
	void SetupVisitorLeader();
	void SetupVisitorParameter(const struct FPalVisitorInitParameter& InitParam);
	void StartRaid();
	void StartReturnToSpawnedPointAction();
	void StartTravelToBaseCamp();
	void StartWaitAction();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCAIController_Visitor_Guardman_C">();
	}
	static class ABP_NPCAIController_Visitor_Guardman_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPCAIController_Visitor_Guardman_C>();
	}
};
static_assert(alignof(ABP_NPCAIController_Visitor_Guardman_C) == 0x000008, "Wrong alignment on ABP_NPCAIController_Visitor_Guardman_C");
static_assert(sizeof(ABP_NPCAIController_Visitor_Guardman_C) == 0x0005E0, "Wrong size on ABP_NPCAIController_Visitor_Guardman_C");
static_assert(offsetof(ABP_NPCAIController_Visitor_Guardman_C, UberGraphFrame_BP_NPCAIController_Visitor_Guardman_C) == 0x000590, "Member 'ABP_NPCAIController_Visitor_Guardman_C::UberGraphFrame_BP_NPCAIController_Visitor_Guardman_C' has a wrong offset!");
static_assert(offsetof(ABP_NPCAIController_Visitor_Guardman_C, GoalLocation) == 0x000598, "Member 'ABP_NPCAIController_Visitor_Guardman_C::GoalLocation' has a wrong offset!");
static_assert(offsetof(ABP_NPCAIController_Visitor_Guardman_C, ReturnTimeMinutes) == 0x0005B0, "Member 'ABP_NPCAIController_Visitor_Guardman_C::ReturnTimeMinutes' has a wrong offset!");
static_assert(offsetof(ABP_NPCAIController_Visitor_Guardman_C, WalkAreaSplitNum) == 0x0005B4, "Member 'ABP_NPCAIController_Visitor_Guardman_C::WalkAreaSplitNum' has a wrong offset!");
static_assert(offsetof(ABP_NPCAIController_Visitor_Guardman_C, ActionTimeLimit) == 0x0005B8, "Member 'ABP_NPCAIController_Visitor_Guardman_C::ActionTimeLimit' has a wrong offset!");
static_assert(offsetof(ABP_NPCAIController_Visitor_Guardman_C, Formation_Offset) == 0x0005C0, "Member 'ABP_NPCAIController_Visitor_Guardman_C::Formation_Offset' has a wrong offset!");
static_assert(offsetof(ABP_NPCAIController_Visitor_Guardman_C, VisitorLeader) == 0x0005D8, "Member 'ABP_NPCAIController_Visitor_Guardman_C::VisitorLeader' has a wrong offset!");

}

