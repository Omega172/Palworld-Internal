#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapObject_DamagableRock0017

#include "Basic.hpp"

#include "BP_MapObject_DamagableRock0017_classes.hpp"
#include "BP_MapObject_DamagableRock0017_parameters.hpp"


namespace SDK
{

// Function BP_MapObject_DamagableRock0017.BP_MapObject_DamagableRock0017_C.IsShowOutlineInReticleTargetting
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MapObject_DamagableRock0017_C::IsShowOutlineInReticleTargetting() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_DamagableRock0017_C", "IsShowOutlineInReticleTargetting");

	Params::BP_MapObject_DamagableRock0017_C_IsShowOutlineInReticleTargetting Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

