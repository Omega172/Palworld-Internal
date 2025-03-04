#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_LifeSteal

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Status_LifeSteal.BP_Status_LifeSteal_C.ExecuteUbergraph_BP_Status_LifeSteal
// 0x00E0 (0x00E0 - 0x0000)
struct BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B2E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B2F[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_damage;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalucRecoverPoint_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B30[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue_1;         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue_2;         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue_3;         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetMainMeshByActor_ReturnValue;           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B31[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B32[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B33[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue_4;         // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue_5;         // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B34[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal) == 0x000008, "Wrong alignment on BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal");
static_assert(sizeof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal) == 0x0000E0, "Wrong size on BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, EntryPoint) == 0x000000, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000008, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, K2Node_Event_damage) == 0x000014, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::K2Node_Event_damage' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_CalucRecoverPoint_ReturnValue) == 0x000028, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_CalucRecoverPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000040, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000050, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000060, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_GetPalDebugSetting_ReturnValue_1) == 0x000070, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_GetPalDebugSetting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_GetPalDebugSetting_ReturnValue_2) == 0x000078, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_GetPalDebugSetting_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_GetPalDebugSetting_ReturnValue_3) == 0x000080, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_GetPalDebugSetting_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_GetOwner_ReturnValue) == 0x000088, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_GetMainMeshByActor_ReturnValue) == 0x000090, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_GetMainMeshByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, K2Node_Event_DeltaTime) == 0x000098, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_SpawnSystemAttached_ReturnValue) == 0x0000A0, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0000B8, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_GetPalDebugSetting_ReturnValue_4) == 0x0000C0, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_GetPalDebugSetting_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_GetPalDebugSetting_ReturnValue_5) == 0x0000C8, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_GetPalDebugSetting_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_IsValid_ReturnValue_1) == 0x0000D0, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_IsValid_ReturnValue_2) == 0x0000D1, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0000D8, "Member 'BP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BP_Status_LifeSteal.BP_Status_LifeSteal_C.OnLifeSteal
// 0x0004 (0x0004 - 0x0000)
struct BP_Status_LifeSteal_C_OnLifeSteal final
{
public:
	int32                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_LifeSteal_C_OnLifeSteal) == 0x000004, "Wrong alignment on BP_Status_LifeSteal_C_OnLifeSteal");
static_assert(sizeof(BP_Status_LifeSteal_C_OnLifeSteal) == 0x000004, "Wrong size on BP_Status_LifeSteal_C_OnLifeSteal");
static_assert(offsetof(BP_Status_LifeSteal_C_OnLifeSteal, Damage) == 0x000000, "Member 'BP_Status_LifeSteal_C_OnLifeSteal::Damage' has a wrong offset!");

// Function BP_Status_LifeSteal.BP_Status_LifeSteal_C.TickStatus
// 0x0004 (0x0004 - 0x0000)
struct BP_Status_LifeSteal_C_TickStatus final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_LifeSteal_C_TickStatus) == 0x000004, "Wrong alignment on BP_Status_LifeSteal_C_TickStatus");
static_assert(sizeof(BP_Status_LifeSteal_C_TickStatus) == 0x000004, "Wrong size on BP_Status_LifeSteal_C_TickStatus");
static_assert(offsetof(BP_Status_LifeSteal_C_TickStatus, DeltaTime) == 0x000000, "Member 'BP_Status_LifeSteal_C_TickStatus::DeltaTime' has a wrong offset!");

}

