#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_Status_Mud

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_VisualEffect_Status_Mud.BP_VisualEffect_Status_Mud_C.ExecuteUbergraph_BP_VisualEffect_Status_Mud
// 0x0020 (0x0020 - 0x0000)
struct BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59B6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetMainMesh_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud) == 0x000008, "Wrong alignment on BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud");
static_assert(sizeof(BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud) == 0x000020, "Wrong size on BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud");
static_assert(offsetof(BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud, EntryPoint) == 0x000000, "Member 'BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud, CallFunc_GetMainMesh_ReturnValue) == 0x000008, "Member 'BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000010, "Member 'BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud, K2Node_Event_DeltaTime) == 0x000018, "Member 'BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'BP_VisualEffect_Status_Mud_C_ExecuteUbergraph_BP_VisualEffect_Status_Mud::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_VisualEffect_Status_Mud.BP_VisualEffect_Status_Mud_C.TerminatingTickVisualEffect
// 0x0004 (0x0004 - 0x0000)
struct BP_VisualEffect_Status_Mud_C_TerminatingTickVisualEffect final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_Status_Mud_C_TerminatingTickVisualEffect) == 0x000004, "Wrong alignment on BP_VisualEffect_Status_Mud_C_TerminatingTickVisualEffect");
static_assert(sizeof(BP_VisualEffect_Status_Mud_C_TerminatingTickVisualEffect) == 0x000004, "Wrong size on BP_VisualEffect_Status_Mud_C_TerminatingTickVisualEffect");
static_assert(offsetof(BP_VisualEffect_Status_Mud_C_TerminatingTickVisualEffect, DeltaTime) == 0x000000, "Member 'BP_VisualEffect_Status_Mud_C_TerminatingTickVisualEffect::DeltaTime' has a wrong offset!");

}

