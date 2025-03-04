#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalIncidentInvaderBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalIncidentInvaderBase.BP_PalIncidentInvaderBase_C
// 0x0090 (0x0350 - 0x02C0)
#pragma pack(push, 0x1)
class alignas(0x10) UBP_PalIncidentInvaderBase_C : public UPalInvaderIncidentBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UPalIndividualCharacterHandle*>  IndividualHandleList;                              // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                MarchStartPoint;                                   // 0x02D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MemberCount;                                       // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SpawnedCount;                                      // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DummyNavigationInvoker_C*           DummyNav_Start;                                    // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_DummyNavigationInvoker_C*           DummyNav_Goal;                                     // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CashedBaseCampLocation;                            // 0x0308(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBaseCampLocationCashed;                          // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A50[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           OtomoNames;                                        // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UPalIndividualCharacterHandle*>  OtomoHandleList;                                   // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	struct FVector CalcSpawnLocation(const struct FVector& SpawnCenter, const struct FRotator& Rot, int32 Param_Index);
	void DummyActorSetLoaction();
	void EndProc();
	void ExecuteUbergraph_BP_PalIncidentInvaderBase(int32 EntryPoint);
	void FindIndividualHandle(const struct FPalInstanceID& ID, class UPalIndividualCharacterHandle** Handle);
	void Get_Character_Location_Type(EPalCharacterLocationType* CharacterLocationType);
	void GetIndividualHandleIndex(class UPalIndividualCharacterHandle* IndividualHandle, int32* Param_Index);
	void GetStartLocation(struct FVector* StartLocation);
	void GetTargetBaseCampPosition(struct FVector* Location);
	void GoalPointPerAgent(int32 SpawnedIndex, struct FVector* GoalPosition);
	void IsSquad(bool* Result);
	void IsUniqueNPCID(class FName CharacterID, bool* IsUnique);
	void OnAllCharacterSpawned(TArray<class APalAIController*>& Param_MemberController);
	void OnCharacterSpawned(class APalCharacter* SpawnedCharacter);
	void OnDespawnOtomoByTerminate(const struct FPalInstanceID& ID);
	void OnDestroyActor(class AActor* Actor);
	void OnEndInvade();
	void OnInitialized();
	void OnOtomoSpawned(class AController* HolderController, class APalCharacter* OtomoPal);
	void OnStartInvade();
	void RandomTransform(int32 Param_Index, struct FVector* RandomPos);
	void RemoveHandleList(class APalCharacter* Character);
	void SetNullHandleWhenDestoryOtomo(class AActor* DestroyedActor);
	void SpawnCharacter(const struct FPalInvaderSpawnCharacterParameter& SpawnParameter, int32 Param_Index, const struct FRotator& SpawnRot);
	void SpawnDelegate(const struct FPalInstanceID& ID);
	void SpawnDummyNavInvoker(class ABP_DummyNavigationInvoker_C** DummyNav);
	void SpawnMemberCharacters(const struct FVector& StartLocation);
	void StartProc();
	void TerminateProc();

	TSubclassOf<class APalAIController> GetNPCAIControllerClass(const struct FPalInvaderSpawnCharacterParameter& SpawnParameter) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalIncidentInvaderBase_C">();
	}
	static class UBP_PalIncidentInvaderBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalIncidentInvaderBase_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(UBP_PalIncidentInvaderBase_C) == 0x000010, "Wrong alignment on UBP_PalIncidentInvaderBase_C");
static_assert(sizeof(UBP_PalIncidentInvaderBase_C) == 0x000350, "Wrong size on UBP_PalIncidentInvaderBase_C");
static_assert(offsetof(UBP_PalIncidentInvaderBase_C, UberGraphFrame) == 0x0002C0, "Member 'UBP_PalIncidentInvaderBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentInvaderBase_C, IndividualHandleList) == 0x0002C8, "Member 'UBP_PalIncidentInvaderBase_C::IndividualHandleList' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentInvaderBase_C, MarchStartPoint) == 0x0002D8, "Member 'UBP_PalIncidentInvaderBase_C::MarchStartPoint' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentInvaderBase_C, MemberCount) == 0x0002F0, "Member 'UBP_PalIncidentInvaderBase_C::MemberCount' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentInvaderBase_C, SpawnedCount) == 0x0002F4, "Member 'UBP_PalIncidentInvaderBase_C::SpawnedCount' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentInvaderBase_C, DummyNav_Start) == 0x0002F8, "Member 'UBP_PalIncidentInvaderBase_C::DummyNav_Start' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentInvaderBase_C, DummyNav_Goal) == 0x000300, "Member 'UBP_PalIncidentInvaderBase_C::DummyNav_Goal' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentInvaderBase_C, CashedBaseCampLocation) == 0x000308, "Member 'UBP_PalIncidentInvaderBase_C::CashedBaseCampLocation' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentInvaderBase_C, IsBaseCampLocationCashed) == 0x000320, "Member 'UBP_PalIncidentInvaderBase_C::IsBaseCampLocationCashed' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentInvaderBase_C, OtomoNames) == 0x000328, "Member 'UBP_PalIncidentInvaderBase_C::OtomoNames' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentInvaderBase_C, OtomoHandleList) == 0x000338, "Member 'UBP_PalIncidentInvaderBase_C::OtomoHandleList' has a wrong offset!");

}

