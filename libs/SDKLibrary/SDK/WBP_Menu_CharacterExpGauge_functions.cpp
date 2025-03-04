#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_CharacterExpGauge

#include "Basic.hpp"

#include "WBP_Menu_CharacterExpGauge_classes.hpp"
#include "WBP_Menu_CharacterExpGauge_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_CharacterExpGauge.WBP_Menu_CharacterExpGauge_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_CharacterExpGauge_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_CharacterExpGauge_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_CharacterExpGauge.WBP_Menu_CharacterExpGauge_C.ExecuteUbergraph_WBP_Menu_CharacterExpGauge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_CharacterExpGauge_C::ExecuteUbergraph_WBP_Menu_CharacterExpGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_CharacterExpGauge_C", "ExecuteUbergraph_WBP_Menu_CharacterExpGauge");

	Params::WBP_Menu_CharacterExpGauge_C_ExecuteUbergraph_WBP_Menu_CharacterExpGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_CharacterExpGauge.WBP_Menu_CharacterExpGauge_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_CharacterExpGauge_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_CharacterExpGauge_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_CharacterExpGauge.WBP_Menu_CharacterExpGauge_C.UpdateExp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   AddExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   OldExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NowExpRate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_CharacterExpGauge_C::UpdateExp(int64 AddExp, int64 OldExp, double NowExpRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_CharacterExpGauge_C", "UpdateExp");

	Params::WBP_Menu_CharacterExpGauge_C_UpdateExp Parms{};

	Parms.AddExp = AddExp;
	Parms.OldExp = OldExp;
	Parms.NowExpRate = NowExpRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_CharacterExpGauge.WBP_Menu_CharacterExpGauge_C.UpdateLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_CharacterExpGauge_C::UpdateLevel(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_CharacterExpGauge_C", "UpdateLevel");

	Params::WBP_Menu_CharacterExpGauge_C_UpdateLevel Parms{};

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}

}

