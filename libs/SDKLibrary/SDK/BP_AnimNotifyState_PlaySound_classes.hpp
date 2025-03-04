#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimNotifyState_PlaySound

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AnimNotifyState_PlaySound.BP_AnimNotifyState_PlaySound_C
// 0x0058 (0x0088 - 0x0030)
class UBP_AnimNotifyState_PlaySound_C final : public UAnimNotifyState
{
public:
	bool                                          Mute;                                              // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B1C[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDataTableRowName_SoundID           SoundId;                                           // 0x0034(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                          StopOnNotifyEnded;                                 // 0x003C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B1D[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalSoundOptions                       SoundOption;                                       // 0x0040(0x0004)(Edit, BlueprintVisible, NoDestructor)
	class FName                                   SocketName;                                        // 0x0044(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B1E[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   DebugSoundSlot;                                    // 0x0050(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	EPhysicalSurface                              DebugPhysicsMaterial;                              // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Get_Raycast_Location(class UMeshComponent* Mesh, struct FVector* St, struct FVector* Ed) const;
	void PlaySound(class UMeshComponent* MeshComp) const;
	bool PlaySound_Editor(class UMeshComponent* MeshComp) const;
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimNotifyState_PlaySound_C">();
	}
	static class UBP_AnimNotifyState_PlaySound_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AnimNotifyState_PlaySound_C>();
	}
};
static_assert(alignof(UBP_AnimNotifyState_PlaySound_C) == 0x000008, "Wrong alignment on UBP_AnimNotifyState_PlaySound_C");
static_assert(sizeof(UBP_AnimNotifyState_PlaySound_C) == 0x000088, "Wrong size on UBP_AnimNotifyState_PlaySound_C");
static_assert(offsetof(UBP_AnimNotifyState_PlaySound_C, Mute) == 0x000030, "Member 'UBP_AnimNotifyState_PlaySound_C::Mute' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_PlaySound_C, SoundId) == 0x000034, "Member 'UBP_AnimNotifyState_PlaySound_C::SoundId' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_PlaySound_C, StopOnNotifyEnded) == 0x00003C, "Member 'UBP_AnimNotifyState_PlaySound_C::StopOnNotifyEnded' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_PlaySound_C, SoundOption) == 0x000040, "Member 'UBP_AnimNotifyState_PlaySound_C::SoundOption' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_PlaySound_C, SocketName) == 0x000044, "Member 'UBP_AnimNotifyState_PlaySound_C::SocketName' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_PlaySound_C, DebugSoundSlot) == 0x000050, "Member 'UBP_AnimNotifyState_PlaySound_C::DebugSoundSlot' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_PlaySound_C, DebugPhysicsMaterial) == 0x000080, "Member 'UBP_AnimNotifyState_PlaySound_C::DebugPhysicsMaterial' has a wrong offset!");

}

