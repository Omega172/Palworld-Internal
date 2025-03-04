#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RaidBossSummonGeneratorBase

#include "Basic.hpp"

#include "BP_RaidBossSummonGeneratorBase_classes.hpp"
#include "BP_RaidBossSummonGeneratorBase_parameters.hpp"


namespace SDK
{

// Function BP_RaidBossSummonGeneratorBase.BP_RaidBossSummonGeneratorBase_C.CalcSpawnTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CenterPos                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Height                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       SpawnTF                                                (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RaidBossSummonGeneratorBase_C::CalcSpawnTransform(int32 Param_Index, int32 MaxNum, const struct FVector& CenterPos, double Height, struct FTransform* SpawnTF)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidBossSummonGeneratorBase_C", "CalcSpawnTransform");

	Params::BP_RaidBossSummonGeneratorBase_C_CalcSpawnTransform Parms{};

	Parms.Param_Index = Param_Index;
	Parms.MaxNum = MaxNum;
	Parms.CenterPos = std::move(CenterPos);
	Parms.Height = Height;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnTF != nullptr)
		*SpawnTF = std::move(Parms.SpawnTF);
}


// Function BP_RaidBossSummonGeneratorBase.BP_RaidBossSummonGeneratorBase_C.SpawnSpawner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           BossActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            CampID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   GeneralIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RaidBossSummonGeneratorBase_C::SpawnSpawner(class AActor* BossActor, const struct FGuid& CampID, int32 GeneralIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidBossSummonGeneratorBase_C", "SpawnSpawner");

	Params::BP_RaidBossSummonGeneratorBase_C_SpawnSpawner Parms{};

	Parms.BossActor = BossActor;
	Parms.CampID = std::move(CampID);
	Parms.GeneralIndex = GeneralIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

