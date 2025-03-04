#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIActionCombatHeli_StandbyMode

#include "Basic.hpp"

#include "BP_AIActionCombatHeli_StandbyMode_classes.hpp"
#include "BP_AIActionCombatHeli_StandbyMode_parameters.hpp"


namespace SDK
{

// Function BP_AIActionCombatHeli_StandbyMode.BP_AIActionCombatHeli_StandbyMode_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_StandbyMode_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_StandbyMode_C", "ActionTick");

	Params::BP_AIActionCombatHeli_StandbyMode_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_StandbyMode.BP_AIActionCombatHeli_StandbyMode_C.ExecuteUbergraph_BP_AIActionCombatHeli_StandbyMode
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_StandbyMode_C::ExecuteUbergraph_BP_AIActionCombatHeli_StandbyMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_StandbyMode_C", "ExecuteUbergraph_BP_AIActionCombatHeli_StandbyMode");

	Params::BP_AIActionCombatHeli_StandbyMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_StandbyMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_StandbyMode.BP_AIActionCombatHeli_StandbyMode_C.MoveToSpawnedPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_StandbyMode_C::MoveToSpawnedPoint(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_StandbyMode_C", "MoveToSpawnedPoint");

	Params::BP_AIActionCombatHeli_StandbyMode_C_MoveToSpawnedPoint Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

