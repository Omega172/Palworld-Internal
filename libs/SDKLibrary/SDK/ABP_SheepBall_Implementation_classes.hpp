#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_SheepBall_Implementation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_SheepBall_Implementation.ABP_SheepBall_Implementation_C
// 0x03C0 (0x0710 - 0x0350)
class UABP_SheepBall_Implementation_C final : public UAnimInstance
{
public:
	uint8                                         Pad_66C1[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x0368(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;                   // 0x0388(0x00C8)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x0450(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x0518(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0538(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0600(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0620(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x06E8(0x0020)()

public:
	void AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator, struct FPoseLink* Param_AimingOverride);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_ABP_SheepBall_Implementation(int32 EntryPoint);
	void LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation, struct FPoseLink* Param_LookAtOverride);
	void UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* Param_UpperOverride);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_SheepBall_Implementation_C">();
	}
	static class UABP_SheepBall_Implementation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_SheepBall_Implementation_C>();
	}
};
static_assert(alignof(UABP_SheepBall_Implementation_C) == 0x000010, "Wrong alignment on UABP_SheepBall_Implementation_C");
static_assert(sizeof(UABP_SheepBall_Implementation_C) == 0x000710, "Wrong size on UABP_SheepBall_Implementation_C");
static_assert(offsetof(UABP_SheepBall_Implementation_C, UberGraphFrame) == 0x000350, "Member 'UABP_SheepBall_Implementation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_SheepBall_Implementation_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UABP_SheepBall_Implementation_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_SheepBall_Implementation_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UABP_SheepBall_Implementation_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_SheepBall_Implementation_C, AnimGraphNode_Root_3) == 0x000368, "Member 'UABP_SheepBall_Implementation_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(UABP_SheepBall_Implementation_C, AnimGraphNode_LinkedInputPose_3) == 0x000388, "Member 'UABP_SheepBall_Implementation_C::AnimGraphNode_LinkedInputPose_3' has a wrong offset!");
static_assert(offsetof(UABP_SheepBall_Implementation_C, AnimGraphNode_LinkedInputPose_2) == 0x000450, "Member 'UABP_SheepBall_Implementation_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(UABP_SheepBall_Implementation_C, AnimGraphNode_Root_2) == 0x000518, "Member 'UABP_SheepBall_Implementation_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UABP_SheepBall_Implementation_C, AnimGraphNode_LinkedInputPose_1) == 0x000538, "Member 'UABP_SheepBall_Implementation_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABP_SheepBall_Implementation_C, AnimGraphNode_Root_1) == 0x000600, "Member 'UABP_SheepBall_Implementation_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_SheepBall_Implementation_C, AnimGraphNode_LinkedInputPose) == 0x000620, "Member 'UABP_SheepBall_Implementation_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_SheepBall_Implementation_C, AnimGraphNode_Root) == 0x0006E8, "Member 'UABP_SheepBall_Implementation_C::AnimGraphNode_Root' has a wrong offset!");

}

