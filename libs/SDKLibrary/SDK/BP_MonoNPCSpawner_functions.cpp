#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonoNPCSpawner

#include "Basic.hpp"

#include "BP_MonoNPCSpawner_classes.hpp"
#include "BP_MonoNPCSpawner_parameters.hpp"


namespace SDK
{

// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.AdjustFloor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SpaenedChara                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::AdjustFloor(class AActor* SpaenedChara)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "AdjustFloor");

	Params::BP_MonoNPCSpawner_C_AdjustFloor Parms{};

	Parms.SpaenedChara = SpaenedChara;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.BlueprintTick_Despawning
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::BlueprintTick_Despawning(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "BlueprintTick_Despawning");

	Params::BP_MonoNPCSpawner_C_BlueprintTick_Despawning Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.BlueprintTick_Spawning
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::BlueprintTick_Spawning(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "BlueprintTick_Spawning");

	Params::BP_MonoNPCSpawner_C_BlueprintTick_Spawning Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.Check Spawn
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::Check_Spawn(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "Check Spawn");

	Params::BP_MonoNPCSpawner_C_Check_Spawn Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.CheckWorldLoadCompleted
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MonoNPCSpawner_C::CheckWorldLoadCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "CheckWorldLoadCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.CreateWalkPathList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FF_NPC_PathWalkArray             PathArray                                              (Parm, OutParm, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::CreateWalkPathList(class USceneComponent* Parent, struct FF_NPC_PathWalkArray* PathArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "CreateWalkPathList");

	Params::BP_MonoNPCSpawner_C_CreateWalkPathList Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

	if (PathArray != nullptr)
		*PathArray = std::move(Parms.PathArray);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.Despawn
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_MonoNPCSpawner_C::Despawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "Despawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.DespawnDelegateMono
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::DespawnDelegateMono(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "DespawnDelegateMono");

	Params::BP_MonoNPCSpawner_C_DespawnDelegateMono Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.Editor Setup Walk Point Ref
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MonoNPCSpawner_C::Editor_Setup_Walk_Point_Ref()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "Editor Setup Walk Point Ref");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.ExecuteUbergraph_BP_MonoNPCSpawner
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::ExecuteUbergraph_BP_MonoNPCSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "ExecuteUbergraph_BP_MonoNPCSpawner");

	Params::BP_MonoNPCSpawner_C_ExecuteUbergraph_BP_MonoNPCSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.GetAllSpawnedNPCHandle
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterHandle*>Handles                                                (Parm, OutParm)

void ABP_MonoNPCSpawner_C::GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>* Handles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "GetAllSpawnedNPCHandle");

	Params::BP_MonoNPCSpawner_C_GetAllSpawnedNPCHandle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Handles != nullptr)
		*Handles = std::move(Parms.Handles);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.GetSpawnPointRadius
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_MonoNPCSpawner_C::GetSpawnPointRadius()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "GetSpawnPointRadius");

	Params::BP_MonoNPCSpawner_C_GetSpawnPointRadius Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.GetWorldLoadWaitRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Radius                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::GetWorldLoadWaitRadius(double* Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "GetWorldLoadWaitRadius");

	Params::BP_MonoNPCSpawner_C_GetWorldLoadWaitRadius Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Radius != nullptr)
		*Radius = Parms.Radius;
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.InitializeSpawnedCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    Handle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                           DefaultAction                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FF_NPC_PathWalkArray             WalkPath                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                             Otomo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::InitializeSpawnedCharacter(class UPalIndividualCharacterHandle* Handle, class UClass* DefaultAction, const struct FF_NPC_PathWalkArray& WalkPath, class FName Otomo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "InitializeSpawnedCharacter");

	Params::BP_MonoNPCSpawner_C_InitializeSpawnedCharacter Parms{};

	Parms.Handle = Handle;
	Parms.DefaultAction = DefaultAction;
	Parms.WalkPath = std::move(WalkPath);
	Parms.Otomo = Otomo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.On Capture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    SelfCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    Attacker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::On_Capture(class APalCharacter* SelfCharacter, class APalCharacter* Attacker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "On Capture");

	Params::BP_MonoNPCSpawner_C_On_Capture Parms{};

	Parms.SelfCharacter = SelfCharacter;
	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.On Dead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_MonoNPCSpawner_C::On_Dead(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "On Dead");

	Params::BP_MonoNPCSpawner_C_On_Dead Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.OnOtomoSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      HolderController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    OtomoPal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::OnOtomoSpawned(class AController* HolderController, class APalCharacter* OtomoPal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "OnOtomoSpawned");

	Params::BP_MonoNPCSpawner_C_OnOtomoSpawned Parms{};

	Parms.HolderController = HolderController;
	Parms.OtomoPal = OtomoPal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MonoNPCSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "ReceiveEndPlay");

	Params::BP_MonoNPCSpawner_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.RespawnByOutside
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MonoNPCSpawner_C::RespawnByOutside()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "RespawnByOutside");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.SetAllNPCLocation
// (Event, Protected, BlueprintEvent)

void ABP_MonoNPCSpawner_C::SetAllNPCLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "SetAllNPCLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.SetCharaNames
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_MonoNPCSpawner_C::SetCharaNames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "SetCharaNames");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.SetFlag_IsLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Next                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::SetFlag_IsLoading(bool Next)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "SetFlag_IsLoading");

	Params::BP_MonoNPCSpawner_C_SetFlag_IsLoading Parms{};

	Parms.Next = Next;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.SetNullHandleWhenDestoryNPC
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::SetNullHandleWhenDestoryNPC(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "SetNullHandleWhenDestoryNPC");

	Params::BP_MonoNPCSpawner_C_SetNullHandleWhenDestoryNPC Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.SetNullHandleWhenDestoryOtomo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::SetNullHandleWhenDestoryOtomo(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "SetNullHandleWhenDestoryOtomo");

	Params::BP_MonoNPCSpawner_C_SetNullHandleWhenDestoryOtomo Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.SetSaveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Boss                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::SetSaveData(class AActor* Boss)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "SetSaveData");

	Params::BP_MonoNPCSpawner_C_SetSaveData Parms{};

	Parms.Boss = Boss;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.Spawn
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MonoNPCSpawner_C::Spawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "Spawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.SpawnDelegate
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MonoNPCSpawner_C::SpawnDelegate(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "SpawnDelegate");

	Params::BP_MonoNPCSpawner_C_SpawnDelegate Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonoNPCSpawner.BP_MonoNPCSpawner_C.�������_0
// (BlueprintCallable, BlueprintEvent)

void ABP_MonoNPCSpawner_C::_________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonoNPCSpawner_C", "�������_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

