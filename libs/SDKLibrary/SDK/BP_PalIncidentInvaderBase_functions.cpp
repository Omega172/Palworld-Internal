#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalIncidentInvaderBase

#include "Basic.hpp"

#include "BP_PalIncidentInvaderBase_classes.hpp"
#include "BP_PalIncidentInvaderBase_parameters.hpp"


namespace SDK
{

// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.CalcSpawnLocation
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          SpawnCenter                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rot                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBP_PalIncidentInvaderBase_C::CalcSpawnLocation(const struct FVector& SpawnCenter, const struct FRotator& Rot, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "CalcSpawnLocation");

	Params::BP_PalIncidentInvaderBase_C_CalcSpawnLocation Parms{};

	Parms.SpawnCenter = std::move(SpawnCenter);
	Parms.Rot = std::move(Rot);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.DummyActorSetLoaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalIncidentInvaderBase_C::DummyActorSetLoaction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "DummyActorSetLoaction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.EndProc
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalIncidentInvaderBase_C::EndProc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "EndProc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.ExecuteUbergraph_BP_PalIncidentInvaderBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::ExecuteUbergraph_BP_PalIncidentInvaderBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "ExecuteUbergraph_BP_PalIncidentInvaderBase");

	Params::BP_PalIncidentInvaderBase_C_ExecuteUbergraph_BP_PalIncidentInvaderBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.FindIndividualHandle
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    Handle                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::FindIndividualHandle(const struct FPalInstanceID& ID, class UPalIndividualCharacterHandle** Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "FindIndividualHandle");

	Params::BP_PalIncidentInvaderBase_C_FindIndividualHandle Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);

	if (Handle != nullptr)
		*Handle = Parms.Handle;
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.Get Character Location Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalCharacterLocationType               CharacterLocationType                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::Get_Character_Location_Type(EPalCharacterLocationType* CharacterLocationType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "Get Character Location Type");

	Params::BP_PalIncidentInvaderBase_C_Get_Character_Location_Type Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterLocationType != nullptr)
		*CharacterLocationType = Parms.CharacterLocationType;
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.GetIndividualHandleIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterHandle*    IndividualHandle                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::GetIndividualHandleIndex(class UPalIndividualCharacterHandle* IndividualHandle, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "GetIndividualHandleIndex");

	Params::BP_PalIncidentInvaderBase_C_GetIndividualHandleIndex Parms{};

	Parms.IndividualHandle = IndividualHandle;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.GetStartLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          StartLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::GetStartLocation(struct FVector* StartLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "GetStartLocation");

	Params::BP_PalIncidentInvaderBase_C_GetStartLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StartLocation != nullptr)
		*StartLocation = std::move(Parms.StartLocation);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.GetTargetBaseCampPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::GetTargetBaseCampPosition(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "GetTargetBaseCampPosition");

	Params::BP_PalIncidentInvaderBase_C_GetTargetBaseCampPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.GoalPointPerAgent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SpawnedIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          GoalPosition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::GoalPointPerAgent(int32 SpawnedIndex, struct FVector* GoalPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "GoalPointPerAgent");

	Params::BP_PalIncidentInvaderBase_C_GoalPointPerAgent Parms{};

	Parms.SpawnedIndex = SpawnedIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (GoalPosition != nullptr)
		*GoalPosition = std::move(Parms.GoalPosition);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.IsSquad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::IsSquad(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "IsSquad");

	Params::BP_PalIncidentInvaderBase_C_IsSquad Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.IsUniqueNPCID
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsUnique                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::IsUniqueNPCID(class FName CharacterID, bool* IsUnique)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "IsUniqueNPCID");

	Params::BP_PalIncidentInvaderBase_C_IsUniqueNPCID Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUnique != nullptr)
		*IsUnique = Parms.IsUnique;
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.OnAllCharacterSpawned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APalAIController*>         Param_MemberController                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PalIncidentInvaderBase_C::OnAllCharacterSpawned(TArray<class APalAIController*>& Param_MemberController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "OnAllCharacterSpawned");

	Params::BP_PalIncidentInvaderBase_C_OnAllCharacterSpawned Parms{};

	Parms.Param_MemberController = std::move(Param_MemberController);

	UObject::ProcessEvent(Func, &Parms);

	Param_MemberController = std::move(Parms.Param_MemberController);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.OnCharacterSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    SpawnedCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::OnCharacterSpawned(class APalCharacter* SpawnedCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "OnCharacterSpawned");

	Params::BP_PalIncidentInvaderBase_C_OnCharacterSpawned Parms{};

	Parms.SpawnedCharacter = SpawnedCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.OnDespawnOtomoByTerminate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::OnDespawnOtomoByTerminate(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "OnDespawnOtomoByTerminate");

	Params::BP_PalIncidentInvaderBase_C_OnDespawnOtomoByTerminate Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.OnDestroyActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::OnDestroyActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "OnDestroyActor");

	Params::BP_PalIncidentInvaderBase_C_OnDestroyActor Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.OnEndInvade
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_PalIncidentInvaderBase_C::OnEndInvade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "OnEndInvade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.OnInitialized
// (Event, Public, BlueprintEvent)

void UBP_PalIncidentInvaderBase_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.OnOtomoSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      HolderController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    OtomoPal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::OnOtomoSpawned(class AController* HolderController, class APalCharacter* OtomoPal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "OnOtomoSpawned");

	Params::BP_PalIncidentInvaderBase_C_OnOtomoSpawned Parms{};

	Parms.HolderController = HolderController;
	Parms.OtomoPal = OtomoPal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.OnStartInvade
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_PalIncidentInvaderBase_C::OnStartInvade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "OnStartInvade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.RandomTransform
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RandomPos                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::RandomTransform(int32 Param_Index, struct FVector* RandomPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "RandomTransform");

	Params::BP_PalIncidentInvaderBase_C_RandomTransform Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (RandomPos != nullptr)
		*RandomPos = std::move(Parms.RandomPos);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.RemoveHandleList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::RemoveHandleList(class APalCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "RemoveHandleList");

	Params::BP_PalIncidentInvaderBase_C_RemoveHandleList Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.SetNullHandleWhenDestoryOtomo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::SetNullHandleWhenDestoryOtomo(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "SetNullHandleWhenDestoryOtomo");

	Params::BP_PalIncidentInvaderBase_C_SetNullHandleWhenDestoryOtomo Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.SpawnCharacter
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInvaderSpawnCharacterParameterSpawnParameter                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         SpawnRot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PalIncidentInvaderBase_C::SpawnCharacter(const struct FPalInvaderSpawnCharacterParameter& SpawnParameter, int32 Param_Index, const struct FRotator& SpawnRot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "SpawnCharacter");

	Params::BP_PalIncidentInvaderBase_C_SpawnCharacter Parms{};

	Parms.SpawnParameter = std::move(SpawnParameter);
	Parms.Param_Index = Param_Index;
	Parms.SpawnRot = std::move(SpawnRot);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.SpawnDelegate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::SpawnDelegate(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "SpawnDelegate");

	Params::BP_PalIncidentInvaderBase_C_SpawnDelegate Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.SpawnDummyNavInvoker
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DummyNavigationInvoker_C*     DummyNav                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::SpawnDummyNavInvoker(class ABP_DummyNavigationInvoker_C** DummyNav)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "SpawnDummyNavInvoker");

	Params::BP_PalIncidentInvaderBase_C_SpawnDummyNavInvoker Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DummyNav != nullptr)
		*DummyNav = Parms.DummyNav;
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.SpawnMemberCharacters
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderBase_C::SpawnMemberCharacters(const struct FVector& StartLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "SpawnMemberCharacters");

	Params::BP_PalIncidentInvaderBase_C_SpawnMemberCharacters Parms{};

	Parms.StartLocation = std::move(StartLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.StartProc
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalIncidentInvaderBase_C::StartProc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "StartProc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.TerminateProc
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalIncidentInvaderBase_C::TerminateProc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "TerminateProc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C.GetNPCAIControllerClass
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FPalInvaderSpawnCharacterParameterSpawnParameter                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// TSubclassOf<class APalAIController>     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class APalAIController> UBP_PalIncidentInvaderBase_C::GetNPCAIControllerClass(const struct FPalInvaderSpawnCharacterParameter& SpawnParameter) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentInvaderBase_C", "GetNPCAIControllerClass");

	Params::BP_PalIncidentInvaderBase_C_GetNPCAIControllerClass Parms{};

	Parms.SpawnParameter = std::move(SpawnParameter);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

