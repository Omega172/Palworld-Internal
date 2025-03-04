#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalWorkPowerPlant_Gauge

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_PalWorkPowerPlant_Gauge.WBP_PalWorkPowerPlant_Gauge_C.AnmEvent_Changing
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalWorkPowerPlant_Gauge_C_AnmEvent_Changing final
{
public:
	bool                                          IsChanging;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalWorkPowerPlant_Gauge_C_AnmEvent_Changing) == 0x000001, "Wrong alignment on WBP_PalWorkPowerPlant_Gauge_C_AnmEvent_Changing");
static_assert(sizeof(WBP_PalWorkPowerPlant_Gauge_C_AnmEvent_Changing) == 0x000001, "Wrong size on WBP_PalWorkPowerPlant_Gauge_C_AnmEvent_Changing");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_AnmEvent_Changing, IsChanging) == 0x000000, "Member 'WBP_PalWorkPowerPlant_Gauge_C_AnmEvent_Changing::IsChanging' has a wrong offset!");

// Function WBP_PalWorkPowerPlant_Gauge.WBP_PalWorkPowerPlant_Gauge_C.ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge
// 0x0038 (0x0038 - 0x0000)
struct WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsLow;                          // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Show;                           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_258C[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsChanging;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_258D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge) == 0x000008, "Wrong alignment on WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge");
static_assert(sizeof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge) == 0x000038, "Wrong size on WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge, EntryPoint) == 0x000000, "Member 'WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge, Temp_bool_Variable) == 0x000004, "Member 'WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge, Temp_byte_Variable) == 0x000005, "Member 'WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge, Temp_bool_Variable_1) == 0x000007, "Member 'WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge, K2Node_Select_Default) == 0x000008, "Member 'WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge, Temp_byte_Variable_2) == 0x000009, "Member 'WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge, Temp_byte_Variable_3) == 0x00000A, "Member 'WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge, K2Node_CustomEvent_IsLow) == 0x00000B, "Member 'WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge::K2Node_CustomEvent_IsLow' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge, K2Node_CustomEvent_Show) == 0x00000C, "Member 'WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge::K2Node_CustomEvent_Show' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge, CallFunc_SelectColor_ReturnValue) == 0x000010, "Member 'WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge, K2Node_CustomEvent_IsChanging) == 0x000020, "Member 'WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge::K2Node_CustomEvent_IsChanging' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000030, "Member 'WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge, K2Node_Select_Default_1) == 0x000031, "Member 'WBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_PalWorkPowerPlant_Gauge.WBP_PalWorkPowerPlant_Gauge_C.SetState
// 0x0002 (0x0002 - 0x0000)
struct WBP_PalWorkPowerPlant_Gauge_C_SetState final
{
public:
	bool                                          IsLow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show;                                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalWorkPowerPlant_Gauge_C_SetState) == 0x000001, "Wrong alignment on WBP_PalWorkPowerPlant_Gauge_C_SetState");
static_assert(sizeof(WBP_PalWorkPowerPlant_Gauge_C_SetState) == 0x000002, "Wrong size on WBP_PalWorkPowerPlant_Gauge_C_SetState");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_SetState, IsLow) == 0x000000, "Member 'WBP_PalWorkPowerPlant_Gauge_C_SetState::IsLow' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkPowerPlant_Gauge_C_SetState, Show) == 0x000001, "Member 'WBP_PalWorkPowerPlant_Gauge_C_SetState::Show' has a wrong offset!");

}

