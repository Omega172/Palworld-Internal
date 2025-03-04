#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Visitor_TravelToBaseCamp_Guardman

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_AIAction_CanCombatBase_classes.hpp"
#include "Pal_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_Visitor_TravelToBaseCamp_Guardman.BP_AIAction_Visitor_TravelToBaseCamp_Guardman_C
// 0x0078 (0x01D0 - 0x0158)
class UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C final : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIAction_Visitor_TravelToBaseCamp_Guardman_C; // 0x0158(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                BaseCampLocation;                                  // 0x0160(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnArrivedTargetPoint;                              // 0x0178(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                                PrevLocation;                                      // 0x0188(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StuckElapsedTime;                                  // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnStuck;                                           // 0x01A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsStuck;                                           // 0x01B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47CF[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalVisitorFormationMoveModule*         FormationMoveModule;                               // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          VisitorLeader;                                     // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_Visitor_TravelToBaseCamp_Guardman(int32 EntryPoint);
	void IsVisitorLeaderTalking(bool* IsTalking);
	void OnArrivedTargetPoint__DelegateSignature();
	void OnLeaderArrived();
	void OnStuck__DelegateSignature();
	void Tick_Move_to_Base_Camp(class AActor* ControlledPawn, float DeltaTime);
	void ActionResume(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void Fun_Damage_AIResponse(const struct FPalDamageResult& DamageResult);
	void SightCheckAndResponse(EPalAIResponseType Current, bool OverrideIsDamage, bool* ChangeNextAction);
	void SoundEvent(const struct FVector& EmitLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_Visitor_TravelToBaseCamp_Guardman_C">();
	}
	static class UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C>();
	}
};
static_assert(alignof(UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C) == 0x000008, "Wrong alignment on UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C");
static_assert(sizeof(UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C) == 0x0001D0, "Wrong size on UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C, UberGraphFrame_BP_AIAction_Visitor_TravelToBaseCamp_Guardman_C) == 0x000158, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C::UberGraphFrame_BP_AIAction_Visitor_TravelToBaseCamp_Guardman_C' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C, BaseCampLocation) == 0x000160, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C::BaseCampLocation' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C, OnArrivedTargetPoint) == 0x000178, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C::OnArrivedTargetPoint' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C, PrevLocation) == 0x000188, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C::PrevLocation' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C, StuckElapsedTime) == 0x0001A0, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C::StuckElapsedTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C, OnStuck) == 0x0001A8, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C::OnStuck' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C, IsStuck) == 0x0001B8, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C::IsStuck' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C, FormationMoveModule) == 0x0001C0, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C::FormationMoveModule' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C, VisitorLeader) == 0x0001C8, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C::VisitorLeader' has a wrong offset!");

}

