#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_Combat_CommonState_Rest

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AINPC_Combat_CommonState_Rest.BP_AINPC_Combat_CommonState_Rest_C.ExecuteUbergraph_BP_AINPC_Combat_CommonState_Rest
// 0x0020 (0x0020 - 0x0000)
struct BP_AINPC_Combat_CommonState_Rest_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_Rest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4117[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_Combat_CommonState_Rest_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_Rest) == 0x000008, "Wrong alignment on BP_AINPC_Combat_CommonState_Rest_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_Rest");
static_assert(sizeof(BP_AINPC_Combat_CommonState_Rest_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_Rest) == 0x000020, "Wrong size on BP_AINPC_Combat_CommonState_Rest_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_Rest");
static_assert(offsetof(BP_AINPC_Combat_CommonState_Rest_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_Rest, EntryPoint) == 0x000000, "Member 'BP_AINPC_Combat_CommonState_Rest_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_Rest::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_Rest_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_Rest, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat) == 0x000008, "Member 'BP_AINPC_Combat_CommonState_Rest_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_Rest::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_Rest_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_Rest, CallFunc_GetController_ReturnValue) == 0x000010, "Member 'BP_AINPC_Combat_CommonState_Rest_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_Rest::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_Rest_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_Rest, K2Node_Event_DeltaTime) == 0x000018, "Member 'BP_AINPC_Combat_CommonState_Rest_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_Rest::K2Node_Event_DeltaTime' has a wrong offset!");

// Function BP_AINPC_Combat_CommonState_Rest.BP_AINPC_Combat_CommonState_Rest_C.StateTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AINPC_Combat_CommonState_Rest_C_StateTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_Combat_CommonState_Rest_C_StateTick) == 0x000004, "Wrong alignment on BP_AINPC_Combat_CommonState_Rest_C_StateTick");
static_assert(sizeof(BP_AINPC_Combat_CommonState_Rest_C_StateTick) == 0x000004, "Wrong size on BP_AINPC_Combat_CommonState_Rest_C_StateTick");
static_assert(offsetof(BP_AINPC_Combat_CommonState_Rest_C_StateTick, DeltaTime) == 0x000000, "Member 'BP_AINPC_Combat_CommonState_Rest_C_StateTick::DeltaTime' has a wrong offset!");

}

