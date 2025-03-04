#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CaptureWireBullet

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_CaptureWireBullet.BP_CaptureWireBullet_C.ExecuteUbergraph_BP_CaptureWireBullet
// 0x01C0 (0x01C0 - 0x0000)
struct BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_HitComp;                              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0020(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AD9[0xE];                                     // 0x0112(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0120(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGuid& SpawnGUID, class AActor* SpawnActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0188(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_SpawnActorBroadcast_SpawnGuid;            // 0x0198(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SpawnActorBroadcast_ReturnValue;          // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ADA[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_UpdateRotator_DeltaTime_ImplicitCast;     // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet) == 0x000010, "Wrong alignment on BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet");
static_assert(sizeof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet) == 0x0001C0, "Wrong size on BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet");
static_assert(offsetof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet, EntryPoint) == 0x000000, "Member 'BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet, K2Node_Event_HitComp) == 0x000008, "Member 'BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet::K2Node_Event_HitComp' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet, K2Node_Event_OtherActor) == 0x000010, "Member 'BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet, K2Node_Event_OtherComp) == 0x000018, "Member 'BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet, K2Node_Event_Hit) == 0x000020, "Member 'BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet, K2Node_DynamicCast_AsPal_Character) == 0x000108, "Member 'BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet, CallFunc_IsValid_ReturnValue) == 0x000111, "Member 'BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet, CallFunc_GetTransform_ReturnValue) == 0x000120, "Member 'BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000180, "Member 'BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet, K2Node_CreateDelegate_OutputDelegate) == 0x000188, "Member 'BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet, CallFunc_SpawnActorBroadcast_SpawnGuid) == 0x000198, "Member 'BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet::CallFunc_SpawnActorBroadcast_SpawnGuid' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet, CallFunc_SpawnActorBroadcast_ReturnValue) == 0x0001A8, "Member 'BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet::CallFunc_SpawnActorBroadcast_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet, CallFunc_UpdateRotator_DeltaTime_ImplicitCast) == 0x0001B0, "Member 'BP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet::CallFunc_UpdateRotator_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_CaptureWireBullet.BP_CaptureWireBullet_C.OnHitToActor
// 0x0100 (0x0100 - 0x0000)
struct BP_CaptureWireBullet_C_OnHitToActor final
{
public:
	class UPrimitiveComponent*                    HitComp;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0018(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_CaptureWireBullet_C_OnHitToActor) == 0x000008, "Wrong alignment on BP_CaptureWireBullet_C_OnHitToActor");
static_assert(sizeof(BP_CaptureWireBullet_C_OnHitToActor) == 0x000100, "Wrong size on BP_CaptureWireBullet_C_OnHitToActor");
static_assert(offsetof(BP_CaptureWireBullet_C_OnHitToActor, HitComp) == 0x000000, "Member 'BP_CaptureWireBullet_C_OnHitToActor::HitComp' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_OnHitToActor, OtherActor) == 0x000008, "Member 'BP_CaptureWireBullet_C_OnHitToActor::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_OnHitToActor, OtherComp) == 0x000010, "Member 'BP_CaptureWireBullet_C_OnHitToActor::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_OnHitToActor, Hit) == 0x000018, "Member 'BP_CaptureWireBullet_C_OnHitToActor::Hit' has a wrong offset!");

// Function BP_CaptureWireBullet.BP_CaptureWireBullet_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_CaptureWireBullet_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CaptureWireBullet_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_CaptureWireBullet_C_ReceiveTick");
static_assert(sizeof(BP_CaptureWireBullet_C_ReceiveTick) == 0x000004, "Wrong size on BP_CaptureWireBullet_C_ReceiveTick");
static_assert(offsetof(BP_CaptureWireBullet_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_CaptureWireBullet_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_CaptureWireBullet.BP_CaptureWireBullet_C.SpawnDelegate
// 0x0028 (0x0028 - 0x0000)
struct BP_CaptureWireBullet_C_SpawnDelegate final
{
public:
	struct FGuid                                  Guid;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CaptureWire_C*                      K2Node_DynamicCast_AsBP_Capture_Wire;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CaptureWireBullet_C_SpawnDelegate) == 0x000008, "Wrong alignment on BP_CaptureWireBullet_C_SpawnDelegate");
static_assert(sizeof(BP_CaptureWireBullet_C_SpawnDelegate) == 0x000028, "Wrong size on BP_CaptureWireBullet_C_SpawnDelegate");
static_assert(offsetof(BP_CaptureWireBullet_C_SpawnDelegate, Guid) == 0x000000, "Member 'BP_CaptureWireBullet_C_SpawnDelegate::Guid' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_SpawnDelegate, Actor) == 0x000010, "Member 'BP_CaptureWireBullet_C_SpawnDelegate::Actor' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_SpawnDelegate, K2Node_DynamicCast_AsBP_Capture_Wire) == 0x000018, "Member 'BP_CaptureWireBullet_C_SpawnDelegate::K2Node_DynamicCast_AsBP_Capture_Wire' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_SpawnDelegate, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_CaptureWireBullet_C_SpawnDelegate::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_CaptureWireBullet.BP_CaptureWireBullet_C.UpdateRotator
// 0x0128 (0x0128 - 0x0000)
struct BP_CaptureWireBullet_C_UpdateRotator final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Multiply_RotatorFloat_ReturnValue;        // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0038(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Multiply_RotatorFloat_B_ImplicitCast;     // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CaptureWireBullet_C_UpdateRotator) == 0x000008, "Wrong alignment on BP_CaptureWireBullet_C_UpdateRotator");
static_assert(sizeof(BP_CaptureWireBullet_C_UpdateRotator) == 0x000128, "Wrong size on BP_CaptureWireBullet_C_UpdateRotator");
static_assert(offsetof(BP_CaptureWireBullet_C_UpdateRotator, DeltaTime) == 0x000000, "Member 'BP_CaptureWireBullet_C_UpdateRotator::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_UpdateRotator, CallFunc_Multiply_RotatorFloat_ReturnValue) == 0x000008, "Member 'BP_CaptureWireBullet_C_UpdateRotator::CallFunc_Multiply_RotatorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_UpdateRotator, CallFunc_ComposeRotators_ReturnValue) == 0x000020, "Member 'BP_CaptureWireBullet_C_UpdateRotator::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_UpdateRotator, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000038, "Member 'BP_CaptureWireBullet_C_UpdateRotator::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_CaptureWireBullet_C_UpdateRotator, CallFunc_Multiply_RotatorFloat_B_ImplicitCast) == 0x000120, "Member 'BP_CaptureWireBullet_C_UpdateRotator::CallFunc_Multiply_RotatorFloat_B_ImplicitCast' has a wrong offset!");

}

