#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_CombatGunState_Aim_Oilrig

#include "Basic.hpp"

#include "BP_AINPC_CombatGunState_Aim_Oilrig_classes.hpp"
#include "BP_AINPC_CombatGunState_Aim_Oilrig_parameters.hpp"


namespace SDK
{

// Function BP_AINPC_CombatGunState_Aim_Oilrig.BP_AINPC_CombatGunState_Aim_Oilrig_C.ExecuteUbergraph_BP_AINPC_CombatGunState_Aim_Oilrig
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_Aim_Oilrig_C::ExecuteUbergraph_BP_AINPC_CombatGunState_Aim_Oilrig(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_Aim_Oilrig_C", "ExecuteUbergraph_BP_AINPC_CombatGunState_Aim_Oilrig");

	Params::BP_AINPC_CombatGunState_Aim_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Aim_Oilrig Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AINPC_CombatGunState_Aim_Oilrig.BP_AINPC_CombatGunState_Aim_Oilrig_C.StateEnter
// (Event, Public, BlueprintEvent)

void UBP_AINPC_CombatGunState_Aim_Oilrig_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_Aim_Oilrig_C", "StateEnter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AINPC_CombatGunState_Aim_Oilrig.BP_AINPC_CombatGunState_Aim_Oilrig_C.StateExit
// (Event, Public, BlueprintEvent)

void UBP_AINPC_CombatGunState_Aim_Oilrig_C::StateExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_Aim_Oilrig_C", "StateExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AINPC_CombatGunState_Aim_Oilrig.BP_AINPC_CombatGunState_Aim_Oilrig_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_Aim_Oilrig_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_Aim_Oilrig_C", "StateTick");

	Params::BP_AINPC_CombatGunState_Aim_Oilrig_C_StateTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

