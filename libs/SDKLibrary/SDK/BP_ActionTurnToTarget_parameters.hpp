#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionTurnToTarget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionTurnToTarget.BP_ActionTurnToTarget_C.ExecuteUbergraph_BP_ActionTurnToTarget
// 0x0090 (0x0090 - 0x0000)
struct BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4647[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4648[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_1;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4649[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_2;            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_3;            // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoPoint_ReturnValue;               // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464A[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InFanShap_ReturnValue;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget) == 0x000008, "Wrong alignment on BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget");
static_assert(sizeof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget) == 0x000090, "Wrong size on BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget");
static_assert(offsetof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget, EntryPoint) == 0x000000, "Member 'BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget, CallFunc_GetActionTarget_ReturnValue) == 0x000008, "Member 'BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget, K2Node_Event_DeltaTime) == 0x000010, "Member 'BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget, CallFunc_GetActionTarget_ReturnValue_1) == 0x000018, "Member 'BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget::CallFunc_GetActionTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget, CallFunc_GetActionCharacter_ReturnValue) == 0x000028, "Member 'BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget, CallFunc_GetActionTarget_ReturnValue_2) == 0x000048, "Member 'BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget::CallFunc_GetActionTarget_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000050, "Member 'BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000058, "Member 'BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget, CallFunc_GetActionTarget_ReturnValue_3) == 0x000070, "Member 'BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget::CallFunc_GetActionTarget_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget, CallFunc_IsNearTwoPoint_ReturnValue) == 0x000078, "Member 'BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget::CallFunc_IsNearTwoPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000080, "Member 'BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget, CallFunc_InFanShap_ReturnValue) == 0x000088, "Member 'BP_ActionTurnToTarget_C_ExecuteUbergraph_BP_ActionTurnToTarget::CallFunc_InFanShap_ReturnValue' has a wrong offset!");

// Function BP_ActionTurnToTarget.BP_ActionTurnToTarget_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionTurnToTarget_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionTurnToTarget_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionTurnToTarget_C_TickAction");
static_assert(sizeof(BP_ActionTurnToTarget_C_TickAction) == 0x000004, "Wrong size on BP_ActionTurnToTarget_C_TickAction");
static_assert(offsetof(BP_ActionTurnToTarget_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionTurnToTarget_C_TickAction::DeltaTime' has a wrong offset!");

}

