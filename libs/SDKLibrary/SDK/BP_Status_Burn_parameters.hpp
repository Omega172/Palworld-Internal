#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_Burn

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Status_Burn.BP_Status_Burn_C.ExecuteUbergraph_BP_Status_Burn
// 0x0168 (0x0168 - 0x0000)
struct BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsIgnoreElement_Ignore;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E81[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasSelfPalElement_Has;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E82[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint64                          CallFunc_GetMaxHP_ReturnValue;                     // 0x0020(0x0008)(NoDestructor)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E83[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E84[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E85[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character_1;              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E86[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;                   // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHittingLava_ReturnValue;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E87[0x5];                                     // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E88[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E89[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_4;                   // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBodyTemperatureComponent*           CallFunc_GetComponentByClass_ReturnValue_3;        // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_5;                   // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E8A[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBodyTemperatureComponent*           CallFunc_GetComponentByClass_ReturnValue_4;        // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E8B[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_6;                   // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_5;        // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_7;                   // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_6;        // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_8;                   // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue_7;        // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRaidBossPal_ReturnValue;                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBossPal_Database_ExceptRare_ReturnValue; // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTowerBossPal_ReturnValue;               // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E8C[0x5];                                     // 0x012B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasSelfPalElement_Has_1;                  // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E8D[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E8E[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_DurationTimer_BP_ImplicitCast;  // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_DurationTimer_BP_ImplicitCast_1; // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn) == 0x000008, "Wrong alignment on BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn");
static_assert(sizeof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn) == 0x000168, "Wrong size on BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, EntryPoint) == 0x000000, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_IsIgnoreElement_Ignore) == 0x000004, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_IsIgnoreElement_Ignore' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_HasSelfPalElement_Has) == 0x000010, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_HasSelfPalElement_Has' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetMaxHP_ReturnValue) == 0x000020, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetMaxHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000028, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000030, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_IsValid_ReturnValue_1) == 0x000034, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetOwner_ReturnValue_1) == 0x000040, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, K2Node_DynamicCast_AsPal_Character) == 0x000048, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetOwner_ReturnValue_2) == 0x000058, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, K2Node_Event_DeltaTime) == 0x000060, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, K2Node_DynamicCast_AsPal_Character_1) == 0x000068, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::K2Node_DynamicCast_AsPal_Character_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetOwner_ReturnValue_3) == 0x000078, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, K2Node_CreateDelegate_OutputDelegate) == 0x000080, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000090, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000098, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_IsHittingLava_ReturnValue) == 0x0000A0, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_IsHittingLava_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_Greater_IntInt_ReturnValue) == 0x0000A1, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_BooleanOR_ReturnValue) == 0x0000A2, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B4, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetOwner_ReturnValue_4) == 0x0000C8, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetOwner_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetComponentByClass_ReturnValue_3) == 0x0000D0, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetOwner_ReturnValue_5) == 0x0000D8, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetOwner_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_IsValid_ReturnValue_2) == 0x0000E0, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetComponentByClass_ReturnValue_4) == 0x0000E8, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetComponentByClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_IsValid_ReturnValue_3) == 0x0000F0, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetOwner_ReturnValue_6) == 0x0000F8, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetOwner_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetComponentByClass_ReturnValue_5) == 0x000100, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetComponentByClass_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetOwner_ReturnValue_7) == 0x000108, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetOwner_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetComponentByClass_ReturnValue_6) == 0x000110, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetComponentByClass_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetOwner_ReturnValue_8) == 0x000118, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetOwner_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_GetComponentByClass_ReturnValue_7) == 0x000120, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_GetComponentByClass_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_IsRaidBossPal_ReturnValue) == 0x000128, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_IsRaidBossPal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_IsBossPal_Database_ExceptRare_ReturnValue) == 0x000129, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_IsBossPal_Database_ExceptRare_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_IsTowerBossPal_ReturnValue) == 0x00012A, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_IsTowerBossPal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000130, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_HasSelfPalElement_Has_1) == 0x000138, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_HasSelfPalElement_Has_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_FTrunc_ReturnValue) == 0x00013C, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_BooleanOR_ReturnValue_1) == 0x000140, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000148, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000150, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, K2Node_VariableSet_DurationTimer_BP_ImplicitCast) == 0x000158, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::K2Node_VariableSet_DurationTimer_BP_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn, K2Node_VariableSet_DurationTimer_BP_ImplicitCast_1) == 0x000160, "Member 'BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn::K2Node_VariableSet_DurationTimer_BP_ImplicitCast_1' has a wrong offset!");

// Function BP_Status_Burn.BP_Status_Burn_C.TickStatus
// 0x0004 (0x0004 - 0x0000)
struct BP_Status_Burn_C_TickStatus final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Burn_C_TickStatus) == 0x000004, "Wrong alignment on BP_Status_Burn_C_TickStatus");
static_assert(sizeof(BP_Status_Burn_C_TickStatus) == 0x000004, "Wrong size on BP_Status_Burn_C_TickStatus");
static_assert(offsetof(BP_Status_Burn_C_TickStatus, DeltaTime) == 0x000000, "Member 'BP_Status_Burn_C_TickStatus::DeltaTime' has a wrong offset!");

}

