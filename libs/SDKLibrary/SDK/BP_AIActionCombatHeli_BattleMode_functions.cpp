#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIActionCombatHeli_BattleMode

#include "Basic.hpp"

#include "BP_AIActionCombatHeli_BattleMode_classes.hpp"
#include "BP_AIActionCombatHeli_BattleMode_parameters.hpp"


namespace SDK
{

// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::ActionAbort(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "ActionAbort");

	Params::BP_AIActionCombatHeli_BattleMode_C_ActionAbort Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "ActionFinished");

	Params::BP_AIActionCombatHeli_BattleMode_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "ActionPause");

	Params::BP_AIActionCombatHeli_BattleMode_C_ActionPause Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "ActionResume");

	Params::BP_AIActionCombatHeli_BattleMode_C_ActionResume Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "ActionStart");

	Params::BP_AIActionCombatHeli_BattleMode_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "ActionTick");

	Params::BP_AIActionCombatHeli_BattleMode_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.AttackProcess
// (BlueprintCallable, BlueprintEvent)

void UBP_AIActionCombatHeli_BattleMode_C::AttackProcess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "AttackProcess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ChangeAimTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIActionCombatHeli_BattleMode_C::ChangeAimTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "ChangeAimTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ChangeMoveDirection
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIActionCombatHeli_BattleMode_C::ChangeMoveDirection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "ChangeMoveDirection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ChangeNextWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIActionCombatHeli_BattleMode_C::ChangeNextWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "ChangeNextWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.CheckPlayerDistanceForBGM
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AIActionCombatHeli_BattleMode_C::CheckPlayerDistanceForBGM()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "CheckPlayerDistanceForBGM");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode");

	Params::BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.Is Valid Current Target
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::Is_Valid_Current_Target(bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "Is Valid Current Target");

	Params::BP_AIActionCombatHeli_BattleMode_C_Is_Valid_Current_Target Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.IsNearTarget2D
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Near                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::IsNearTarget2D(double Distance, bool* Near)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "IsNearTarget2D");

	Params::BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (Near != nullptr)
		*Near = Parms.Near;
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.OnChildActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPawnAction*                      Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::OnChildActionFinished(class UPawnAction* Action, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "OnChildActionFinished");

	Params::BP_AIActionCombatHeli_BattleMode_C_OnChildActionFinished Parms{};

	Parms.Action = Action;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.RayCheckToTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::RayCheckToTarget(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "RayCheckToTarget");

	Params::BP_AIActionCombatHeli_BattleMode_C_RayCheckToTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ReleaseTriggerAllWeapn
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AIActionCombatHeli_BattleMode_C::ReleaseTriggerAllWeapn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "ReleaseTriggerAllWeapn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.RemoveAllPlayerTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AIActionCombatHeli_BattleMode_C::RemoveAllPlayerTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "RemoveAllPlayerTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.RotateToTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::RotateToTarget(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "RotateToTarget");

	Params::BP_AIActionCombatHeli_BattleMode_C_RotateToTarget Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.SetMoveVelocity
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIActionCombatHeli_BattleMode_C::SetMoveVelocity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "SetMoveVelocity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.SetupComponent
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIActionCombatHeli_BattleMode_C::SetupComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "SetupComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.TickBP
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIActionCombatHeli_BattleMode_C::TickBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "TickBP");

	UObject::ProcessEvent(Func, nullptr);
}

}

