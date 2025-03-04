#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionFriendlyLookat

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ActionFriendlyLookat.BP_ActionFriendlyLookat_C.ChangeFace
// 0x0018 (0x0018 - 0x0000)
struct BP_ActionFriendlyLookat_C_ChangeFace final
{
public:
	bool                                          Smile;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43C0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionFriendlyLookat_C_ChangeFace) == 0x000008, "Wrong alignment on BP_ActionFriendlyLookat_C_ChangeFace");
static_assert(sizeof(BP_ActionFriendlyLookat_C_ChangeFace) == 0x000018, "Wrong size on BP_ActionFriendlyLookat_C_ChangeFace");
static_assert(offsetof(BP_ActionFriendlyLookat_C_ChangeFace, Smile) == 0x000000, "Member 'BP_ActionFriendlyLookat_C_ChangeFace::Smile' has a wrong offset!");
static_assert(offsetof(BP_ActionFriendlyLookat_C_ChangeFace, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionFriendlyLookat_C_ChangeFace::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFriendlyLookat_C_ChangeFace, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_ActionFriendlyLookat_C_ChangeFace::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_ActionFriendlyLookat.BP_ActionFriendlyLookat_C.ExecuteUbergraph_BP_ActionFriendlyLookat
// 0x0018 (0x0018 - 0x0000)
struct BP_ActionFriendlyLookat_C_ExecuteUbergraph_BP_ActionFriendlyLookat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionFriendlyLookat_C_ExecuteUbergraph_BP_ActionFriendlyLookat) == 0x000008, "Wrong alignment on BP_ActionFriendlyLookat_C_ExecuteUbergraph_BP_ActionFriendlyLookat");
static_assert(sizeof(BP_ActionFriendlyLookat_C_ExecuteUbergraph_BP_ActionFriendlyLookat) == 0x000018, "Wrong size on BP_ActionFriendlyLookat_C_ExecuteUbergraph_BP_ActionFriendlyLookat");
static_assert(offsetof(BP_ActionFriendlyLookat_C_ExecuteUbergraph_BP_ActionFriendlyLookat, EntryPoint) == 0x000000, "Member 'BP_ActionFriendlyLookat_C_ExecuteUbergraph_BP_ActionFriendlyLookat::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionFriendlyLookat_C_ExecuteUbergraph_BP_ActionFriendlyLookat, K2Node_Event_DeltaTime) == 0x000004, "Member 'BP_ActionFriendlyLookat_C_ExecuteUbergraph_BP_ActionFriendlyLookat::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionFriendlyLookat_C_ExecuteUbergraph_BP_ActionFriendlyLookat, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionFriendlyLookat_C_ExecuteUbergraph_BP_ActionFriendlyLookat::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFriendlyLookat_C_ExecuteUbergraph_BP_ActionFriendlyLookat, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000010, "Member 'BP_ActionFriendlyLookat_C_ExecuteUbergraph_BP_ActionFriendlyLookat::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

// Function BP_ActionFriendlyLookat.BP_ActionFriendlyLookat_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionFriendlyLookat_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionFriendlyLookat_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionFriendlyLookat_C_TickAction");
static_assert(sizeof(BP_ActionFriendlyLookat_C_TickAction) == 0x000004, "Wrong size on BP_ActionFriendlyLookat_C_TickAction");
static_assert(offsetof(BP_ActionFriendlyLookat_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionFriendlyLookat_C_TickAction::DeltaTime' has a wrong offset!");

}

