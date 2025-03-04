#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionSitChair_Player

#include "Basic.hpp"

#include "BP_ActionSitChair_Player_classes.hpp"
#include "BP_ActionSitChair_Player_parameters.hpp"


namespace SDK
{

// Function BP_ActionSitChair_Player.BP_ActionSitChair_Player_C.DisableInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSitChair_Player_C::DisableInteract(bool Disable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSitChair_Player_C", "DisableInteract");

	Params::BP_ActionSitChair_Player_C_DisableInteract Parms{};

	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSitChair_Player.BP_ActionSitChair_Player_C.ExecuteUbergraph_BP_ActionSitChair_Player
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSitChair_Player_C::ExecuteUbergraph_BP_ActionSitChair_Player(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSitChair_Player_C", "ExecuteUbergraph_BP_ActionSitChair_Player");

	Params::BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSitChair_Player.BP_ActionSitChair_Player_C.MoveCharacterToSit
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ActionSitChair_Player_C::MoveCharacterToSit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSitChair_Player_C", "MoveCharacterToSit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSitChair_Player.BP_ActionSitChair_Player_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionSitChair_Player_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSitChair_Player_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSitChair_Player.BP_ActionSitChair_Player_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionSitChair_Player_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSitChair_Player_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSitChair_Player.BP_ActionSitChair_Player_C.ReleaseSit
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_ActionSitChair_Player_C::ReleaseSit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSitChair_Player_C", "ReleaseSit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSitChair_Player.BP_ActionSitChair_Player_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSitChair_Player_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSitChair_Player_C", "TickAction");

	Params::BP_ActionSitChair_Player_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

