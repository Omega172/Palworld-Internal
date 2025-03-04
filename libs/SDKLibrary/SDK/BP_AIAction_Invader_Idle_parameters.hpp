#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Invader_Idle

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AIAction_Invader_Idle.BP_AIAction_Invader_Idle_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Invader_Idle_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Invader_Idle_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_Invader_Idle_C_ActionStart");
static_assert(sizeof(BP_AIAction_Invader_Idle_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_Invader_Idle_C_ActionStart");
static_assert(offsetof(BP_AIAction_Invader_Idle_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Invader_Idle_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_Invader_Idle.BP_AIAction_Invader_Idle_C.ExecuteUbergraph_BP_AIAction_Invader_Idle
// 0x0040 (0x0040 - 0x0000)
struct BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1482[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard;     // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1483[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAISensorComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*           CallFunc_GetMyBB_PalBrackboard;                    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle) == 0x000008, "Wrong alignment on BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle");
static_assert(sizeof(BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle) == 0x000040, "Wrong size on BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle");
static_assert(offsetof(BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle, EntryPoint) == 0x000000, "Member 'BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle, K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard) == 0x000010, "Member 'BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle::K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle, CallFunc_GetMyBB_PalBrackboard) == 0x000030, "Member 'BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle::CallFunc_GetMyBB_PalBrackboard' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle, K2Node_Event_ControlledPawn) == 0x000038, "Member 'BP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle::K2Node_Event_ControlledPawn' has a wrong offset!");

}

