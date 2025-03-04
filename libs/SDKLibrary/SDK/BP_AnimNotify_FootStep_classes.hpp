#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimNotify_FootStep

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AnimNotify_FootStep.BP_AnimNotify_FootStep_C
// 0x0050 (0x00C0 - 0x0070)
class UBP_AnimNotify_FootStep_C final : public UPalAnimNotify_FootStep
{
public:
	double                                        InWaterRate_Feet;                                  // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Effect_Offset_Z_Feet;                              // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Mute;                                              // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalLandingType                               LandingType;                                       // 0x0081(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalFootType                                  FootType;                                          // 0x0082(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51E2[0x5];                                     // 0x0083(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   DebugSoundSlot;                                    // 0x0088(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash)
	EPhysicalSurface                              DebugPhysicsMaterial;                              // 0x00B8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51E3[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StepCount;                                         // 0x00BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Create_Foot_Step_Effect(class AActor* OwnerActor, const struct FTransform& FootTransform) const;
	void CreateEffect(class AActor* Owner, const struct FTransform& FootTransform, EPalLandingType NewParam, EPhysicalSurface PhysicalSurface) const;
	void CreateFootstepDecal(class AActor* Owner, const struct FTransform& FootTransform) const;
	void Get_Foot_Transform(class AActor* Owner, EPalFootType Param_FootType, struct FTransform* NewTransform) const;
	void IsFootStepRun(class AActor* Owner, bool* Param_IsFootStepRun) const;
	void IsPlaySound(bool* PlaySound) const;
	void IsSteppingShallows(class AActor* OwnerActor, bool* NewParam) const;
	void IsSwimming(class AActor* Owner, bool* Param_IsSwimming) const;
	void MakeSwitchStatePalSize(class APalMonsterCharacter* Pal, class FString* PalSize) const;
	void PlaySound(class AActor* Owner, const struct FPalDataTableRowName_SoundID& SoundId) const;
	void PlayStepSound(class AActor* Owner) const;
	void ProcFootStep(class AActor* Owner, EPalFootType Param_FootType) const;
	void ProcJumpLanding(class AActor* Owner, EPalFootType Param_FootType) const;
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;
	void SpawnRollStepEffect(class AActor* Owner) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimNotify_FootStep_C">();
	}
	static class UBP_AnimNotify_FootStep_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AnimNotify_FootStep_C>();
	}
};
static_assert(alignof(UBP_AnimNotify_FootStep_C) == 0x000008, "Wrong alignment on UBP_AnimNotify_FootStep_C");
static_assert(sizeof(UBP_AnimNotify_FootStep_C) == 0x0000C0, "Wrong size on UBP_AnimNotify_FootStep_C");
static_assert(offsetof(UBP_AnimNotify_FootStep_C, InWaterRate_Feet) == 0x000070, "Member 'UBP_AnimNotify_FootStep_C::InWaterRate_Feet' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_FootStep_C, Effect_Offset_Z_Feet) == 0x000078, "Member 'UBP_AnimNotify_FootStep_C::Effect_Offset_Z_Feet' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_FootStep_C, Mute) == 0x000080, "Member 'UBP_AnimNotify_FootStep_C::Mute' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_FootStep_C, LandingType) == 0x000081, "Member 'UBP_AnimNotify_FootStep_C::LandingType' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_FootStep_C, FootType) == 0x000082, "Member 'UBP_AnimNotify_FootStep_C::FootType' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_FootStep_C, DebugSoundSlot) == 0x000088, "Member 'UBP_AnimNotify_FootStep_C::DebugSoundSlot' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_FootStep_C, DebugPhysicsMaterial) == 0x0000B8, "Member 'UBP_AnimNotify_FootStep_C::DebugPhysicsMaterial' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_FootStep_C, StepCount) == 0x0000BC, "Member 'UBP_AnimNotify_FootStep_C::StepCount' has a wrong offset!");

}

