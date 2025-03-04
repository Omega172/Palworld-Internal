#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalLoupe_GaugeHunger

#include "Basic.hpp"

#include "WBP_PalLoupe_GaugeHunger_classes.hpp"
#include "WBP_PalLoupe_GaugeHunger_parameters.hpp"


namespace SDK
{

// Function WBP_PalLoupe_GaugeHunger.WBP_PalLoupe_GaugeHunger_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLoupe_GaugeHunger_C::SetPercent(double Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLoupe_GaugeHunger_C", "SetPercent");

	Params::WBP_PalLoupe_GaugeHunger_C_SetPercent Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}

}

