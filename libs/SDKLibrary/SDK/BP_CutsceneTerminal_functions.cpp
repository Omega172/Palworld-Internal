#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CutsceneTerminal

#include "Basic.hpp"

#include "BP_CutsceneTerminal_classes.hpp"
#include "BP_CutsceneTerminal_parameters.hpp"


namespace SDK
{

// Function BP_CutsceneTerminal.BP_CutsceneTerminal_C.ExecuteUbergraph_BP_CutsceneTerminal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CutsceneTerminal_C::ExecuteUbergraph_BP_CutsceneTerminal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneTerminal_C", "ExecuteUbergraph_BP_CutsceneTerminal");

	Params::BP_CutsceneTerminal_C_ExecuteUbergraph_BP_CutsceneTerminal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CutsceneTerminal.BP_CutsceneTerminal_C.GetDisplayWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_DemoOP_TerminalScreen_C*     TerminalWidget                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CutsceneTerminal_C::GetDisplayWidget(class UWBP_DemoOP_TerminalScreen_C** TerminalWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneTerminal_C", "GetDisplayWidget");

	Params::BP_CutsceneTerminal_C_GetDisplayWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TerminalWidget != nullptr)
		*TerminalWidget = Parms.TerminalWidget;
}


// Function BP_CutsceneTerminal.BP_CutsceneTerminal_C.GetShadowWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_DemoOP_TerminalShadow_C*     ShadowWidget                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CutsceneTerminal_C::GetShadowWidget(class UWBP_DemoOP_TerminalShadow_C** ShadowWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneTerminal_C", "GetShadowWidget");

	Params::BP_CutsceneTerminal_C_GetShadowWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShadowWidget != nullptr)
		*ShadowWidget = Parms.ShadowWidget;
}


// Function BP_CutsceneTerminal.BP_CutsceneTerminal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CutsceneTerminal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneTerminal_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

