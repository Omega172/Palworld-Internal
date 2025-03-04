#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonsterAIController_RaidBoss

#include "Basic.hpp"

#include "BP_MonsterAIControllerBase_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MonsterAIController_RaidBoss.BP_MonsterAIController_RaidBoss_C
// 0x0030 (0x0580 - 0x0550)
class ABP_MonsterAIController_RaidBoss_C : public ABP_MonsterAIControllerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MonsterAIController_RaidBoss_C;  // 0x0550(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalAISensorComponent*                  PalAISensor;                                       // 0x0558(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNotFreeAIMode;                                   // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1383[0x3];                                     // 0x0561(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  TargetBaseCampID;                                  // 0x0564(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1384[0x4];                                     // 0x0574(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UPalAIActionBase>           CombatAIActionClass;                               // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void DeleteDeadBody(const struct FPalDeadInfo& DeadInfo);
	void ExecuteUbergraph_BP_MonsterAIController_RaidBoss(int32 EntryPoint);
	void Force_Battle_Startto_Target_For_Raid_Boss(class APalPlayerCharacter* Player, TArray<class APalPlayerCharacter*>& AllPlayer);
	void GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard);
	void GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard);
	void GetTargetCampID(struct FGuid* CampID);
	void ReceivePossess(class APawn* PossessedPawn);
	void SetTargetCampID(const struct FGuid& CampID);
	void ________(const struct FPalInstanceID& ID);
	void _________1(class APalCharacter* InCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MonsterAIController_RaidBoss_C">();
	}
	static class ABP_MonsterAIController_RaidBoss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MonsterAIController_RaidBoss_C>();
	}
};
static_assert(alignof(ABP_MonsterAIController_RaidBoss_C) == 0x000008, "Wrong alignment on ABP_MonsterAIController_RaidBoss_C");
static_assert(sizeof(ABP_MonsterAIController_RaidBoss_C) == 0x000580, "Wrong size on ABP_MonsterAIController_RaidBoss_C");
static_assert(offsetof(ABP_MonsterAIController_RaidBoss_C, UberGraphFrame_BP_MonsterAIController_RaidBoss_C) == 0x000550, "Member 'ABP_MonsterAIController_RaidBoss_C::UberGraphFrame_BP_MonsterAIController_RaidBoss_C' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_RaidBoss_C, PalAISensor) == 0x000558, "Member 'ABP_MonsterAIController_RaidBoss_C::PalAISensor' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_RaidBoss_C, IsNotFreeAIMode) == 0x000560, "Member 'ABP_MonsterAIController_RaidBoss_C::IsNotFreeAIMode' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_RaidBoss_C, TargetBaseCampID) == 0x000564, "Member 'ABP_MonsterAIController_RaidBoss_C::TargetBaseCampID' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_RaidBoss_C, CombatAIActionClass) == 0x000578, "Member 'ABP_MonsterAIController_RaidBoss_C::CombatAIActionClass' has a wrong offset!");

}

