#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonoNPCSpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "F_NPC_PathWalkArray_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MonoNPCSpawner.BP_MonoNPCSpawner_C
// 0x00C8 (0x0448 - 0x0380)
class ABP_MonoNPCSpawner_C : public APalNPCSpawnerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       SpawnCollision;                                    // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Debug_Mesh;                                        // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_PalHumanData      HumanName;                                         // 0x03A0(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                          Spawned;                                           // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_5013[0x3];                                     // 0x03A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDataTableRowName_NPCUniqueData     UniqueName;                                        // 0x03AC(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_PalMonsterData    OtomoName;                                         // 0x03B4(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                         Level;                                             // 0x03BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CharaName;                                         // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          SpawnedHandle;                                     // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<class FName>                           NameList;                                          // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	double                                        ReturnRadius;                                      // 0x03E0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ControllerClass;                                   // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 DefaultActionClass;                                // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        DespawnPlusDistance;                               // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   UniqueNPCID;                                       // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FF_NPC_PathWalkArray                   PathWalkArray;                                     // 0x0408(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          IsLoading;                                         // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          IsWorldLoadComplete;                               // 0x0419(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          Debug_Disable;                                     // 0x041A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_5014[0x5];                                     // 0x041B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_NPC_WalkPathPoint_1_C*>      WalkPointRefarence;                                // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class UPalIndividualCharacterHandle*          OtomoHandle;                                       // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                         DespawnWaitCounter;                                // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBossSpawner;                                     // 0x043C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5015[0x3];                                     // 0x043D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SaveKeyName;                                       // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AdjustFloor(class AActor* SpaenedChara);
	void BlueprintTick_Despawning(float DeltaTime);
	void BlueprintTick_Spawning(float DeltaTime);
	void Check_Spawn(double DeltaTime);
	void CheckWorldLoadCompleted();
	void CreateWalkPathList(class USceneComponent* Parent, struct FF_NPC_PathWalkArray* PathArray);
	void Despawn();
	void DespawnDelegateMono(const struct FPalInstanceID& ID);
	void Editor_Setup_Walk_Point_Ref();
	void ExecuteUbergraph_BP_MonoNPCSpawner(int32 EntryPoint);
	void GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>* Handles);
	float GetSpawnPointRadius();
	void GetWorldLoadWaitRadius(double* Radius);
	void InitializeSpawnedCharacter(class UPalIndividualCharacterHandle* Handle, class UClass* DefaultAction, const struct FF_NPC_PathWalkArray& WalkPath, class FName Otomo);
	void On_Capture(class APalCharacter* SelfCharacter, class APalCharacter* Attacker);
	void On_Dead(const struct FPalDeadInfo& DeadInfo);
	void OnOtomoSpawned(class AController* HolderController, class APalCharacter* OtomoPal);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void RespawnByOutside();
	void SetAllNPCLocation();
	void SetCharaNames();
	void SetFlag_IsLoading(bool Next);
	void SetNullHandleWhenDestoryNPC(class AActor* DestroyedActor);
	void SetNullHandleWhenDestoryOtomo(class AActor* DestroyedActor);
	void SetSaveData(class AActor* Boss);
	void Spawn();
	void SpawnDelegate(const struct FPalInstanceID& ID);
	void _________0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MonoNPCSpawner_C">();
	}
	static class ABP_MonoNPCSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MonoNPCSpawner_C>();
	}
};
static_assert(alignof(ABP_MonoNPCSpawner_C) == 0x000008, "Wrong alignment on ABP_MonoNPCSpawner_C");
static_assert(sizeof(ABP_MonoNPCSpawner_C) == 0x000448, "Wrong size on ABP_MonoNPCSpawner_C");
static_assert(offsetof(ABP_MonoNPCSpawner_C, UberGraphFrame) == 0x000380, "Member 'ABP_MonoNPCSpawner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, SpawnCollision) == 0x000388, "Member 'ABP_MonoNPCSpawner_C::SpawnCollision' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, Debug_Mesh) == 0x000390, "Member 'ABP_MonoNPCSpawner_C::Debug_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, DefaultSceneRoot) == 0x000398, "Member 'ABP_MonoNPCSpawner_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, HumanName) == 0x0003A0, "Member 'ABP_MonoNPCSpawner_C::HumanName' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, Spawned) == 0x0003A8, "Member 'ABP_MonoNPCSpawner_C::Spawned' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, UniqueName) == 0x0003AC, "Member 'ABP_MonoNPCSpawner_C::UniqueName' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, OtomoName) == 0x0003B4, "Member 'ABP_MonoNPCSpawner_C::OtomoName' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, Level) == 0x0003BC, "Member 'ABP_MonoNPCSpawner_C::Level' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, CharaName) == 0x0003C0, "Member 'ABP_MonoNPCSpawner_C::CharaName' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, SpawnedHandle) == 0x0003C8, "Member 'ABP_MonoNPCSpawner_C::SpawnedHandle' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, NameList) == 0x0003D0, "Member 'ABP_MonoNPCSpawner_C::NameList' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, ReturnRadius) == 0x0003E0, "Member 'ABP_MonoNPCSpawner_C::ReturnRadius' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, ControllerClass) == 0x0003E8, "Member 'ABP_MonoNPCSpawner_C::ControllerClass' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, DefaultActionClass) == 0x0003F0, "Member 'ABP_MonoNPCSpawner_C::DefaultActionClass' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, DespawnPlusDistance) == 0x0003F8, "Member 'ABP_MonoNPCSpawner_C::DespawnPlusDistance' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, UniqueNPCID) == 0x000400, "Member 'ABP_MonoNPCSpawner_C::UniqueNPCID' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, PathWalkArray) == 0x000408, "Member 'ABP_MonoNPCSpawner_C::PathWalkArray' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, IsLoading) == 0x000418, "Member 'ABP_MonoNPCSpawner_C::IsLoading' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, IsWorldLoadComplete) == 0x000419, "Member 'ABP_MonoNPCSpawner_C::IsWorldLoadComplete' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, Debug_Disable) == 0x00041A, "Member 'ABP_MonoNPCSpawner_C::Debug_Disable' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, WalkPointRefarence) == 0x000420, "Member 'ABP_MonoNPCSpawner_C::WalkPointRefarence' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, OtomoHandle) == 0x000430, "Member 'ABP_MonoNPCSpawner_C::OtomoHandle' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, DespawnWaitCounter) == 0x000438, "Member 'ABP_MonoNPCSpawner_C::DespawnWaitCounter' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, IsBossSpawner) == 0x00043C, "Member 'ABP_MonoNPCSpawner_C::IsBossSpawner' has a wrong offset!");
static_assert(offsetof(ABP_MonoNPCSpawner_C, SaveKeyName) == 0x000440, "Member 'ABP_MonoNPCSpawner_C::SaveKeyName' has a wrong offset!");

}

