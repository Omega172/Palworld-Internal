#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionInteractBase

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionInteractBase.BP_ActionInteractBase_C.BindDelegates
// 0x0028 (0x0028 - 0x0000)
struct BP_ActionInteractBase_C_BindDelegates final
{
public:
	TDelegate<void(class UPalCharacterMovementComponent* Component)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionInteractBase_C_BindDelegates) == 0x000008, "Wrong alignment on BP_ActionInteractBase_C_BindDelegates");
static_assert(sizeof(BP_ActionInteractBase_C_BindDelegates) == 0x000028, "Wrong size on BP_ActionInteractBase_C_BindDelegates");
static_assert(offsetof(BP_ActionInteractBase_C_BindDelegates, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_ActionInteractBase_C_BindDelegates::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_BindDelegates, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionInteractBase_C_BindDelegates::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_BindDelegates, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_ActionInteractBase_C_BindDelegates::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_BindDelegates, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_ActionInteractBase_C_BindDelegates::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ActionInteractBase.BP_ActionInteractBase_C.CancelInteract
// 0x0018 (0x0018 - 0x0000)
struct BP_ActionInteractBase_C_CancelInteract final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInteractComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInteracting_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionInteractBase_C_CancelInteract) == 0x000008, "Wrong alignment on BP_ActionInteractBase_C_CancelInteract");
static_assert(sizeof(BP_ActionInteractBase_C_CancelInteract) == 0x000018, "Wrong size on BP_ActionInteractBase_C_CancelInteract");
static_assert(offsetof(BP_ActionInteractBase_C_CancelInteract, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_ActionInteractBase_C_CancelInteract::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_CancelInteract, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_ActionInteractBase_C_CancelInteract::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_CancelInteract, CallFunc_IsInteracting_ReturnValue) == 0x000010, "Member 'BP_ActionInteractBase_C_CancelInteract::CallFunc_IsInteracting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_CancelInteract, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_ActionInteractBase_C_CancelInteract::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ActionInteractBase.BP_ActionInteractBase_C.EnableMove
// 0x0040 (0x0040 - 0x0000)
struct BP_ActionInteractBase_C_EnableMove final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionInteractBase_C_EnableMove) == 0x000008, "Wrong alignment on BP_ActionInteractBase_C_EnableMove");
static_assert(sizeof(BP_ActionInteractBase_C_EnableMove) == 0x000040, "Wrong size on BP_ActionInteractBase_C_EnableMove");
static_assert(offsetof(BP_ActionInteractBase_C_EnableMove, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_ActionInteractBase_C_EnableMove::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_EnableMove, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionInteractBase_C_EnableMove::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_EnableMove, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000018, "Member 'BP_ActionInteractBase_C_EnableMove::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_EnableMove, CallFunc_GetController_ReturnValue) == 0x000020, "Member 'BP_ActionInteractBase_C_EnableMove::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_EnableMove, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000028, "Member 'BP_ActionInteractBase_C_EnableMove::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_EnableMove, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000030, "Member 'BP_ActionInteractBase_C_EnableMove::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_EnableMove, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_ActionInteractBase_C_EnableMove::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_ActionInteractBase.BP_ActionInteractBase_C.ExecuteUbergraph_BP_ActionInteractBase
// 0x0038 (0x0038 - 0x0000)
struct BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C1C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C1D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character_1;       // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase) == 0x000008, "Wrong alignment on BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase");
static_assert(sizeof(BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase) == 0x000038, "Wrong size on BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase");
static_assert(offsetof(BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase, EntryPoint) == 0x000000, "Member 'BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase, K2Node_DynamicCast_AsPal_Player_Character) == 0x000010, "Member 'BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000020, "Member 'BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase, K2Node_DynamicCast_AsPal_Player_Character_1) == 0x000028, "Member 'BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase::K2Node_DynamicCast_AsPal_Player_Character_1' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_ActionInteractBase.BP_ActionInteractBase_C.OnJumpDelegate
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionInteractBase_C_OnJumpDelegate final
{
public:
	class UPalCharacterMovementComponent*         Component;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionInteractBase_C_OnJumpDelegate) == 0x000008, "Wrong alignment on BP_ActionInteractBase_C_OnJumpDelegate");
static_assert(sizeof(BP_ActionInteractBase_C_OnJumpDelegate) == 0x000008, "Wrong size on BP_ActionInteractBase_C_OnJumpDelegate");
static_assert(offsetof(BP_ActionInteractBase_C_OnJumpDelegate, Component) == 0x000000, "Member 'BP_ActionInteractBase_C_OnJumpDelegate::Component' has a wrong offset!");

// Function BP_ActionInteractBase.BP_ActionInteractBase_C.SetPlayerFlags
// 0x0078 (0x0078 - 0x0000)
struct BP_ActionInteractBase_C_SetPlayerFlags final
{
public:
	bool                                          IsDisable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C1E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C1F[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInteractComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsToggleInteracting_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C20[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C21[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionInteractBase_C_SetPlayerFlags) == 0x000008, "Wrong alignment on BP_ActionInteractBase_C_SetPlayerFlags");
static_assert(sizeof(BP_ActionInteractBase_C_SetPlayerFlags) == 0x000078, "Wrong size on BP_ActionInteractBase_C_SetPlayerFlags");
static_assert(offsetof(BP_ActionInteractBase_C_SetPlayerFlags, IsDisable) == 0x000000, "Member 'BP_ActionInteractBase_C_SetPlayerFlags::IsDisable' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_SetPlayerFlags, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_ActionInteractBase_C_SetPlayerFlags::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_SetPlayerFlags, CallFunc_GetActionCharacter_ReturnValue) == 0x000018, "Member 'BP_ActionInteractBase_C_SetPlayerFlags::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_SetPlayerFlags, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_ActionInteractBase_C_SetPlayerFlags::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_SetPlayerFlags, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_ActionInteractBase_C_SetPlayerFlags::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_SetPlayerFlags, CallFunc_IsToggleInteracting_ReturnValue) == 0x000029, "Member 'BP_ActionInteractBase_C_SetPlayerFlags::CallFunc_IsToggleInteracting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_SetPlayerFlags, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000030, "Member 'BP_ActionInteractBase_C_SetPlayerFlags::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_SetPlayerFlags, CallFunc_GetController_ReturnValue) == 0x000038, "Member 'BP_ActionInteractBase_C_SetPlayerFlags::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_SetPlayerFlags, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000040, "Member 'BP_ActionInteractBase_C_SetPlayerFlags::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_SetPlayerFlags, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_ActionInteractBase_C_SetPlayerFlags::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_SetPlayerFlags, CallFunc_GetGameSetting_ReturnValue) == 0x000050, "Member 'BP_ActionInteractBase_C_SetPlayerFlags::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_SetPlayerFlags, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000058, "Member 'BP_ActionInteractBase_C_SetPlayerFlags::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_SetPlayerFlags, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000060, "Member 'BP_ActionInteractBase_C_SetPlayerFlags::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_SetPlayerFlags, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000068, "Member 'BP_ActionInteractBase_C_SetPlayerFlags::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_SetPlayerFlags, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'BP_ActionInteractBase_C_SetPlayerFlags::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_ActionInteractBase.BP_ActionInteractBase_C.UnbindDelegates
// 0x0058 (0x0058 - 0x0000)
struct BP_ActionInteractBase_C_UnbindDelegates final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalCharacterMovementComponent* Component)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C22[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionInteractBase_C_UnbindDelegates) == 0x000008, "Wrong alignment on BP_ActionInteractBase_C_UnbindDelegates");
static_assert(sizeof(BP_ActionInteractBase_C_UnbindDelegates) == 0x000058, "Wrong size on BP_ActionInteractBase_C_UnbindDelegates");
static_assert(offsetof(BP_ActionInteractBase_C_UnbindDelegates, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_ActionInteractBase_C_UnbindDelegates::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_UnbindDelegates, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionInteractBase_C_UnbindDelegates::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_UnbindDelegates, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'BP_ActionInteractBase_C_UnbindDelegates::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_UnbindDelegates, CallFunc_GetController_ReturnValue) == 0x000028, "Member 'BP_ActionInteractBase_C_UnbindDelegates::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_UnbindDelegates, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000030, "Member 'BP_ActionInteractBase_C_UnbindDelegates::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_UnbindDelegates, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000038, "Member 'BP_ActionInteractBase_C_UnbindDelegates::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_UnbindDelegates, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_ActionInteractBase_C_UnbindDelegates::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_UnbindDelegates, CallFunc_GetComponentByClass_ReturnValue) == 0x000048, "Member 'BP_ActionInteractBase_C_UnbindDelegates::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionInteractBase_C_UnbindDelegates, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_ActionInteractBase_C_UnbindDelegates::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

