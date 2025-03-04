#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_ReturnTerritory_WildPal

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_ReturnTerritory_WildPal_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_ReturnTerritory_WildPal_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_ReturnTerritory_WildPal_C_ActionFinished");
static_assert(sizeof(BP_AIAction_ReturnTerritory_WildPal_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_ReturnTerritory_WildPal_C_ActionFinished");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ActionPause
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_ReturnTerritory_WildPal_C_ActionPause final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_ReturnTerritory_WildPal_C_ActionPause) == 0x000008, "Wrong alignment on BP_AIAction_ReturnTerritory_WildPal_C_ActionPause");
static_assert(sizeof(BP_AIAction_ReturnTerritory_WildPal_C_ActionPause) == 0x000008, "Wrong size on BP_AIAction_ReturnTerritory_WildPal_C_ActionPause");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ActionPause, ControlledPawn) == 0x000000, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ActionPause::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ActionResume
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_ReturnTerritory_WildPal_C_ActionResume final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_ReturnTerritory_WildPal_C_ActionResume) == 0x000008, "Wrong alignment on BP_AIAction_ReturnTerritory_WildPal_C_ActionResume");
static_assert(sizeof(BP_AIAction_ReturnTerritory_WildPal_C_ActionResume) == 0x000008, "Wrong size on BP_AIAction_ReturnTerritory_WildPal_C_ActionResume");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ActionResume, ControlledPawn) == 0x000000, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ActionResume::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_ReturnTerritory_WildPal_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_ReturnTerritory_WildPal_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_ReturnTerritory_WildPal_C_ActionStart");
static_assert(sizeof(BP_AIAction_ReturnTerritory_WildPal_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_ReturnTerritory_WildPal_C_ActionStart");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_ReturnTerritory_WildPal_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_ReturnTerritory_WildPal_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_ReturnTerritory_WildPal_C_ActionTick");
static_assert(sizeof(BP_AIAction_ReturnTerritory_WildPal_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_ReturnTerritory_WildPal_C_ActionTick");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal
// 0x0158 (0x0158 - 0x0000)
struct BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49EC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_4;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoPoint_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49ED[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController;             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49EE[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49EF[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIBlackboardBase*                   CallFunc_GetMyPalBlackboard_ReturnValue;           // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*           K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49F0[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_2;              // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_3;              // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_2;        // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_3;        // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49F1[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalAIController*                       CallFunc_GetControllerRef_PalAIController;         // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                       CallFunc_GetControllerRef_PalAIController_1;       // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOnNavMesh_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PalAIMoveToTargetLocation_ReturnValue;    // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49F2[0x6];                                     // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalAIController*                       CallFunc_GetControllerRef_PalAIController_2;       // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_4;        // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSizeSquared_ReturnValue;                 // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49F3[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PalAIBlackboard_Common_C*           CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common; // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*           CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common_1; // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal) == 0x000008, "Wrong alignment on BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal");
static_assert(sizeof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal) == 0x000158, "Wrong size on BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, EntryPoint) == 0x000000, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_K2_GetPawn_ReturnValue) == 0x000010, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, K2Node_Event_ControlledPawn_4) == 0x000030, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::K2Node_Event_ControlledPawn_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_IsNearTwoPoint_ReturnValue) == 0x000038, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_IsNearTwoPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetController_ReturnValue_1) == 0x000040, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, K2Node_DynamicCast_AsPal_AIController) == 0x000048, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::K2Node_DynamicCast_AsPal_AIController' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, K2Node_Event_ControlledPawn_3) == 0x000058, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, K2Node_Event_WithResult) == 0x000060, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetMyPalBlackboard_ReturnValue) == 0x000068, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetMyPalBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common) == 0x000070, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, K2Node_Event_ControlledPawn_2) == 0x000080, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, K2Node_Event_ControlledPawn_1) == 0x000088, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetController_ReturnValue_2) == 0x000090, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000098, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetController_ReturnValue_3) == 0x0000A0, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetComponentByClass_ReturnValue) == 0x0000A8, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_K2_GetPawn_ReturnValue_2) == 0x0000B0, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_K2_GetPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0000B8, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetComponentByClass_ReturnValue_2) == 0x0000C0, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetComponentByClass_ReturnValue_3) == 0x0000C8, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, K2Node_Event_ControlledPawn) == 0x0000D0, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, K2Node_Event_DeltaSeconds) == 0x0000D8, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetControllerRef_PalAIController) == 0x0000E0, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetControllerRef_PalAIController' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetControllerRef_PalAIController_1) == 0x0000E8, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetControllerRef_PalAIController_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_IsOnNavMesh_ReturnValue) == 0x0000F0, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_IsOnNavMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_PalAIMoveToTargetLocation_ReturnValue) == 0x0000F1, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_PalAIMoveToTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetControllerRef_PalAIController_2) == 0x0000F8, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetControllerRef_PalAIController_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetCharacter_ReturnValue) == 0x000100, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000108, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetComponentByClass_ReturnValue_4) == 0x000110, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetComponentByClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetVelocity_ReturnValue) == 0x000118, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_VSizeSquared_ReturnValue) == 0x000130, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_VSizeSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000138, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000139, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common) == 0x000140, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common_1) == 0x000148, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000150, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.GetBlackboard
// 0x0038 (0x0038 - 0x0000)
struct BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard final
{
public:
	class UBP_PalAIBlackboard_Common_C*           AsBP_Pal_AIBlackboard_Common;                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49F4[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIBlackboardBase*                   CallFunc_GetMyPalBlackboard_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*           K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard) == 0x000008, "Wrong alignment on BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard");
static_assert(sizeof(BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard) == 0x000038, "Wrong size on BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard, AsBP_Pal_AIBlackboard_Common) == 0x000000, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard::AsBP_Pal_AIBlackboard_Common' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard, K2Node_DynamicCast_AsPal_AIController) == 0x000010, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard::K2Node_DynamicCast_AsPal_AIController' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard, CallFunc_GetMyPalBlackboard_ReturnValue) == 0x000020, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard::CallFunc_GetMyPalBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard, K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common) == 0x000028, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard::K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.GetControllerRef
// 0x0020 (0x0020 - 0x0000)
struct BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef final
{
public:
	class APalAIController*                       PalAIController;                                   // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef) == 0x000008, "Wrong alignment on BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef");
static_assert(sizeof(BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef) == 0x000020, "Wrong size on BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef, PalAIController) == 0x000000, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef::PalAIController' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef, K2Node_DynamicCast_AsPal_AIController) == 0x000010, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef::K2Node_DynamicCast_AsPal_AIController' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

