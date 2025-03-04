#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SquadNPCSpawner

#include "Basic.hpp"

#include "BP_MonoNPCSpawner_classes.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "F_NPCOnePointSpawnInfo_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SquadNPCSpawner.BP_SquadNPCSpawner_C
// 0x0040 (0x0488 - 0x0448)
class ABP_SquadNPCSpawner_C : public ABP_MonoNPCSpawner_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SquadNPCSpawner_C;               // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UPalIndividualCharacterHandle*>  SpawnedHandleList;                                 // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TArray<struct FF_NPCOnePointSpawnInfo>        SpawnInfoList;                                     // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsLoadingFlag;                                     // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52FB[0x3];                                     // 0x0471(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SpawnedCount;                                      // 0x0474(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSquadSpawnedCharacter;                           // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Check_Spawn(double DeltaTime);
	void DeleteOnePoint(class AActor* Point);
	void Despawn();
	void DespawnDelegate(const struct FPalInstanceID& ID);
	void ExecuteUbergraph_BP_SquadNPCSpawner(int32 EntryPoint);
	void FindIndividualHandle(const struct FPalInstanceID& ID, class UPalIndividualCharacterHandle** Handle, int32* Param_Index);
	void GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>* Handles);
	float GetSpawnPointRadius_0();
	void GetWorldLoadWaitRadius(double* Radius);
	void OnSquadSpawnedCharacter__DelegateSignature(class UPalIndividualCharacterHandle* NewParam);
	void ReceiveBeginPlay();
	void SetAllNPCLocation();
	void SetCharaNames();
	void SetNullHandleWhenDestoryNPC(class AActor* DestroyedActor);
	void SetupSpawnInfoList();
	void Spawn();
	void SpawnDelegate(const struct FPalInstanceID& ID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SquadNPCSpawner_C">();
	}
	static class ABP_SquadNPCSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SquadNPCSpawner_C>();
	}
};
static_assert(alignof(ABP_SquadNPCSpawner_C) == 0x000008, "Wrong alignment on ABP_SquadNPCSpawner_C");
static_assert(sizeof(ABP_SquadNPCSpawner_C) == 0x000488, "Wrong size on ABP_SquadNPCSpawner_C");
static_assert(offsetof(ABP_SquadNPCSpawner_C, UberGraphFrame_BP_SquadNPCSpawner_C) == 0x000448, "Member 'ABP_SquadNPCSpawner_C::UberGraphFrame_BP_SquadNPCSpawner_C' has a wrong offset!");
static_assert(offsetof(ABP_SquadNPCSpawner_C, SpawnedHandleList) == 0x000450, "Member 'ABP_SquadNPCSpawner_C::SpawnedHandleList' has a wrong offset!");
static_assert(offsetof(ABP_SquadNPCSpawner_C, SpawnInfoList) == 0x000460, "Member 'ABP_SquadNPCSpawner_C::SpawnInfoList' has a wrong offset!");
static_assert(offsetof(ABP_SquadNPCSpawner_C, IsLoadingFlag) == 0x000470, "Member 'ABP_SquadNPCSpawner_C::IsLoadingFlag' has a wrong offset!");
static_assert(offsetof(ABP_SquadNPCSpawner_C, SpawnedCount) == 0x000474, "Member 'ABP_SquadNPCSpawner_C::SpawnedCount' has a wrong offset!");
static_assert(offsetof(ABP_SquadNPCSpawner_C, OnSquadSpawnedCharacter) == 0x000478, "Member 'ABP_SquadNPCSpawner_C::OnSquadSpawnedCharacter' has a wrong offset!");

}

