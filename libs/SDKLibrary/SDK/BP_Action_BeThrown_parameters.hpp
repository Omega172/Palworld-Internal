#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_BeThrown

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_Action_BeThrown.BP_Action_BeThrown_C.ExecuteUbergraph_BP_Action_BeThrown
// 0x0030 (0x0030 - 0x0000)
struct BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                Temp_byte_Variable;                                // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_476A[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimMontage_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_476B[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown) == 0x000008, "Wrong alignment on BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown");
static_assert(sizeof(BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown) == 0x000030, "Wrong size on BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown");
static_assert(offsetof(BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown, EntryPoint) == 0x000000, "Member 'BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown, Temp_byte_Variable) == 0x000004, "Member 'BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000010, "Member 'BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown, CallFunc_PlayAnimMontage_ReturnValue) == 0x000018, "Member 'BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown, CallFunc_IsDead_ReturnValue) == 0x00001C, "Member 'BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown, CallFunc_Map_Find_Value) == 0x000020, "Member 'BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_Action_BeThrown.BP_Action_BeThrown_C.PlayThrownFX
// 0x0068 (0x0068 - 0x0000)
struct BP_Action_BeThrown_C_PlayThrownFX final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_BeThrown_C_PlayThrownFX) == 0x000008, "Wrong alignment on BP_Action_BeThrown_C_PlayThrownFX");
static_assert(sizeof(BP_Action_BeThrown_C_PlayThrownFX) == 0x000068, "Wrong size on BP_Action_BeThrown_C_PlayThrownFX");
static_assert(offsetof(BP_Action_BeThrown_C_PlayThrownFX, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_Action_BeThrown_C_PlayThrownFX::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_PlayThrownFX, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000008, "Member 'BP_Action_BeThrown_C_PlayThrownFX::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_PlayThrownFX, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_Action_BeThrown_C_PlayThrownFX::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_PlayThrownFX, CallFunc_GetMovementComponent_ReturnValue) == 0x000028, "Member 'BP_Action_BeThrown_C_PlayThrownFX::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_PlayThrownFX, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000030, "Member 'BP_Action_BeThrown_C_PlayThrownFX::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_PlayThrownFX, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000048, "Member 'BP_Action_BeThrown_C_PlayThrownFX::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_PlayThrownFX, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000050, "Member 'BP_Action_BeThrown_C_PlayThrownFX::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_PlayThrownFX, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000058, "Member 'BP_Action_BeThrown_C_PlayThrownFX::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_BeThrown_C_PlayThrownFX, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000060, "Member 'BP_Action_BeThrown_C_PlayThrownFX::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");

}

