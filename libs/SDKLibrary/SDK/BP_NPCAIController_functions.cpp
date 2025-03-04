#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCAIController

#include "Basic.hpp"

#include "BP_NPCAIController_classes.hpp"
#include "BP_NPCAIController_parameters.hpp"


namespace SDK
{

// Function BP_NPCAIController.BP_NPCAIController_C.CreateOtomo
// (BlueprintCallable, BlueprintEvent)

void ABP_NPCAIController_C::CreateOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "CreateOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCAIController.BP_NPCAIController_C.ExecuteUbergraph_BP_NPCAIController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::ExecuteUbergraph_BP_NPCAIController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "ExecuteUbergraph_BP_NPCAIController");

	Params::BP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.ForceBattleStartForOutside
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           StartActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::ForceBattleStartForOutside(class AActor* StartActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "ForceBattleStartForOutside");

	Params::BP_NPCAIController_C_ForceBattleStartForOutside Parms{};

	Parms.StartActor = StartActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.ForceBattleStartToTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::ForceBattleStartToTarget(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "ForceBattleStartToTarget");

	Params::BP_NPCAIController_C_ForceBattleStartToTarget Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.ForceEscapeStartFortOutSide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           StartActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::ForceEscapeStartFortOutSide(class AActor* StartActor, class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "ForceEscapeStartFortOutSide");

	Params::BP_NPCAIController_C_ForceEscapeStartFortOutSide Parms{};

	Parms.StartActor = StartActor;
	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.GetLeaderBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*     LeaderPalBrackboard                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "GetLeaderBB");

	Params::BP_NPCAIController_C_GetLeaderBB Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LeaderPalBrackboard != nullptr)
		*LeaderPalBrackboard = Parms.LeaderPalBrackboard;
}


// Function BP_NPCAIController.BP_NPCAIController_C.GetMyBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*     PalBrackboard                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "GetMyBB");

	Params::BP_NPCAIController_C_GetMyBB Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PalBrackboard != nullptr)
		*PalBrackboard = Parms.PalBrackboard;
}


// Function BP_NPCAIController.BP_NPCAIController_C.GetWeaponHandle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalNPCAIWeaponHandle*            Param_WeaponHandle                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::GetWeaponHandle(class UPalNPCAIWeaponHandle** Param_WeaponHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "GetWeaponHandle");

	Params::BP_NPCAIController_C_GetWeaponHandle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_WeaponHandle != nullptr)
		*Param_WeaponHandle = Parms.Param_WeaponHandle;
}


// Function BP_NPCAIController.BP_NPCAIController_C.GoBack_Teritory
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_NPCAIController_C::GoBack_Teritory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "GoBack_Teritory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCAIController.BP_NPCAIController_C.IsSleeping
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsSleep                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::IsSleeping(bool* IsSleep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "IsSleeping");

	Params::BP_NPCAIController_C_IsSleeping Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsSleep != nullptr)
		*IsSleep = Parms.IsSleep;
}


// Function BP_NPCAIController.BP_NPCAIController_C.NotifyTalkEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              TalkPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::NotifyTalkEnd(class APalPlayerCharacter* TalkPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "NotifyTalkEnd");

	Params::BP_NPCAIController_C_NotifyTalkEnd Parms{};

	Parms.TalkPlayer = TalkPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.NotifyTalkStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              TalkPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::NotifyTalkStart(class APalPlayerCharacter* TalkPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "NotifyTalkStart");

	Params::BP_NPCAIController_C_NotifyTalkStart Parms{};

	Parms.TalkPlayer = TalkPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.OnDead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           LastAttacker                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::OnDead(const class AActor* LastAttacker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "OnDead");

	Params::BP_NPCAIController_C_OnDead Parms{};

	Parms.LastAttacker = LastAttacker;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.OnNpcTalkIncidentNotify
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIncidentNotifyListener*       Listener                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalIncidentState                       IncidentState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalIncidentNotifyParameter      Parameter                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_NPCAIController_C::OnNpcTalkIncidentNotify(class UPalIncidentNotifyListener* Listener, EPalIncidentState IncidentState, const struct FPalIncidentNotifyParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "OnNpcTalkIncidentNotify");

	Params::BP_NPCAIController_C_OnNpcTalkIncidentNotify Parms{};

	Parms.Listener = Listener;
	Parms.IncidentState = IncidentState;
	Parms.Parameter = std::move(Parameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.OnShootDeclementBullet
// (BlueprintCallable, BlueprintEvent)

void ABP_NPCAIController_C::OnShootDeclementBullet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "OnShootDeclementBullet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCAIController.BP_NPCAIController_C.OverrideDefaultAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           DefaultAction                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::OverrideDefaultAction(class UClass* DefaultAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "OverrideDefaultAction");

	Params::BP_NPCAIController_C_OverrideDefaultAction Parms{};

	Parms.DefaultAction = DefaultAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NPCAIController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCAIController.BP_NPCAIController_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "ReceiveEndPlay");

	Params::BP_NPCAIController_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "ReceivePossess");

	Params::BP_NPCAIController_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "ReceiveTick");

	Params::BP_NPCAIController_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.ReturnToTerritory
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_NPCAIController_C::ReturnToTerritory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "ReturnToTerritory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCAIController.BP_NPCAIController_C.SetAutoDefaultAIAction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_NPCAIController_C::SetAutoDefaultAIAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "SetAutoDefaultAIAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCAIController.BP_NPCAIController_C.SetSpawnedInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          SpawnerLoc                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ReturnRadius                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_NPC_PathWalkArray             Param_PathWalk                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                             Otomo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::SetSpawnedInfo(const struct FVector& SpawnerLoc, double ReturnRadius, const struct FF_NPC_PathWalkArray& Param_PathWalk, class FName Otomo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "SetSpawnedInfo");

	Params::BP_NPCAIController_C_SetSpawnedInfo Parms{};

	Parms.SpawnerLoc = std::move(SpawnerLoc);
	Parms.ReturnRadius = ReturnRadius;
	Parms.Param_PathWalk = std::move(Param_PathWalk);
	Parms.Otomo = Otomo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.SetupAI_BP
// (BlueprintCallable, BlueprintEvent)

void ABP_NPCAIController_C::SetupAI_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "SetupAI_BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCAIController.BP_NPCAIController_C.SetupWeaponHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*                   Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::SetupWeaponHandle(class APalWeaponBase* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "SetupWeaponHandle");

	Params::BP_NPCAIController_C_SetupWeaponHandle Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.StartCombatMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_NPCAIController_C::StartCombatMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "StartCombatMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCAIController.BP_NPCAIController_C.StartDefaultAIAction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_NPCAIController_C::StartDefaultAIAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "StartDefaultAIAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCAIController.BP_NPCAIController_C.StartEscapeMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ByOutSide                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::StartEscapeMode(class AActor* TargetActor, bool ByOutSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "StartEscapeMode");

	Params::BP_NPCAIController_C_StartEscapeMode Parms{};

	Parms.TargetActor = TargetActor;
	Parms.ByOutSide = ByOutSide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.TalkEnd_Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SelfActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::TalkEnd_Func(class AActor* SelfActor, class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "TalkEnd_Func");

	Params::BP_NPCAIController_C_TalkEnd_Func Parms{};

	Parms.SelfActor = SelfActor;
	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.TalkStart_Func
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SelfActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::TalkStart_Func(class AActor* SelfActor, class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "TalkStart_Func");

	Params::BP_NPCAIController_C_TalkStart_Func Parms{};

	Parms.SelfActor = SelfActor;
	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.�������_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_NPCAIController_C::_________0(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "�������_0");

	Params::BP_NPCAIController_C__________0 Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.�������_1
// (BlueprintCallable, BlueprintEvent)

void ABP_NPCAIController_C::_________1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "�������_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCAIController.BP_NPCAIController_C.�������_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_NPCAIController_C::_________2(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "�������_2");

	Params::BP_NPCAIController_C__________2 Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController.BP_NPCAIController_C.�������_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      HolderController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    OtomoPal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::_________4(class AController* HolderController, class APalCharacter* OtomoPal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_C", "�������_4");

	Params::BP_NPCAIController_C__________4 Parms{};

	Parms.HolderController = HolderController;
	Parms.OtomoPal = OtomoPal;

	UObject::ProcessEvent(Func, &Parms);
}

}

