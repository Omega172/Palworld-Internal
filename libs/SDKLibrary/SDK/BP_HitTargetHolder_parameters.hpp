#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HitTargetHolder

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_HitTargetHolder.BP_HitTargetHolder_C.AddUniqueHitActor
// 0x0018 (0x0018 - 0x0000)
struct BP_HitTargetHolder_C_AddUniqueHitActor final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNew;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNewActor;                                        // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6697[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6698[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HitTargetHolder_C_AddUniqueHitActor) == 0x000008, "Wrong alignment on BP_HitTargetHolder_C_AddUniqueHitActor");
static_assert(sizeof(BP_HitTargetHolder_C_AddUniqueHitActor) == 0x000018, "Wrong size on BP_HitTargetHolder_C_AddUniqueHitActor");
static_assert(offsetof(BP_HitTargetHolder_C_AddUniqueHitActor, Actor) == 0x000000, "Member 'BP_HitTargetHolder_C_AddUniqueHitActor::Actor' has a wrong offset!");
static_assert(offsetof(BP_HitTargetHolder_C_AddUniqueHitActor, IsNew) == 0x000008, "Member 'BP_HitTargetHolder_C_AddUniqueHitActor::IsNew' has a wrong offset!");
static_assert(offsetof(BP_HitTargetHolder_C_AddUniqueHitActor, IsNewActor) == 0x000009, "Member 'BP_HitTargetHolder_C_AddUniqueHitActor::IsNewActor' has a wrong offset!");
static_assert(offsetof(BP_HitTargetHolder_C_AddUniqueHitActor, CallFunc_Array_Find_ReturnValue) == 0x00000C, "Member 'BP_HitTargetHolder_C_AddUniqueHitActor::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitTargetHolder_C_AddUniqueHitActor, CallFunc_Less_IntInt_ReturnValue) == 0x000010, "Member 'BP_HitTargetHolder_C_AddUniqueHitActor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitTargetHolder_C_AddUniqueHitActor, CallFunc_Array_Add_ReturnValue) == 0x000014, "Member 'BP_HitTargetHolder_C_AddUniqueHitActor::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

