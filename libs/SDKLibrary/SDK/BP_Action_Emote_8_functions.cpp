#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Emote_8

#include "Basic.hpp"

#include "BP_Action_Emote_8_classes.hpp"
#include "BP_Action_Emote_8_parameters.hpp"


namespace SDK
{

// Function BP_Action_Emote_8.BP_Action_Emote_8_C.ExecuteUbergraph_BP_Action_Emote_8
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Emote_8_C::ExecuteUbergraph_BP_Action_Emote_8(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Emote_8_C", "ExecuteUbergraph_BP_Action_Emote_8");

	Params::BP_Action_Emote_8_C_ExecuteUbergraph_BP_Action_Emote_8 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Emote_8.BP_Action_Emote_8_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Emote_8_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Emote_8_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Emote_8.BP_Action_Emote_8_C.OnNotify
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Emote_8_C::OnNotify(class FName Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Emote_8_C", "OnNotify");

	Params::BP_Action_Emote_8_C_OnNotify Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

