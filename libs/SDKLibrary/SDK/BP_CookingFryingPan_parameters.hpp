#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CookingFryingPan

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_CookingFryingPan.BP_CookingFryingPan_C.ExecuteUbergraph_BP_CookingFryingPan
// 0x0010 (0x0010 - 0x0000)
struct BP_CookingFryingPan_C_ExecuteUbergraph_BP_CookingFryingPan final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_507D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CookingFryingPan_C_ExecuteUbergraph_BP_CookingFryingPan) == 0x000008, "Wrong alignment on BP_CookingFryingPan_C_ExecuteUbergraph_BP_CookingFryingPan");
static_assert(sizeof(BP_CookingFryingPan_C_ExecuteUbergraph_BP_CookingFryingPan) == 0x000010, "Wrong size on BP_CookingFryingPan_C_ExecuteUbergraph_BP_CookingFryingPan");
static_assert(offsetof(BP_CookingFryingPan_C_ExecuteUbergraph_BP_CookingFryingPan, EntryPoint) == 0x000000, "Member 'BP_CookingFryingPan_C_ExecuteUbergraph_BP_CookingFryingPan::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CookingFryingPan_C_ExecuteUbergraph_BP_CookingFryingPan, CallFunc_GetAnimInstance_ReturnValue) == 0x000008, "Member 'BP_CookingFryingPan_C_ExecuteUbergraph_BP_CookingFryingPan::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");

}

