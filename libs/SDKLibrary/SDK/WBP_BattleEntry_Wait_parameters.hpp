#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BattleEntry_Wait

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_BattleEntry_Wait.WBP_BattleEntry_Wait_C.ExecuteUbergraph_WBP_BattleEntry_Wait
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5666[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5667[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetBossBattleRowName_ReturnValue;         // 0x0024(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0030(0x0010)(NoDestructor)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0040(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0058(0x0018)()
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetBattleTimeLimit_ReturnValue;           // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalcRemainBattleTime_ReturnValue;         // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5668[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalWaitInfoWorldHUDParameter*          K2Node_DynamicCast_AsPal_Wait_Info_World_HUDParameter; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5669[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_Select_Default_1;                           // 0x00A8(0x0010)(NoDestructor)
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue_1;       // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x00C0(0x0018)()
	float                                         CallFunc_GetBattleTimeLimit_ReturnValue_1;         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FTrunc_A_ImplicitCast;                    // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FTrunc_A_ImplicitCast_1;                  // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait) == 0x000008, "Wrong alignment on WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait");
static_assert(sizeof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait) == 0x0000F0, "Wrong size on WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, EntryPoint) == 0x000000, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, Temp_bool_Variable) == 0x000004, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, Temp_bool_Variable_1) == 0x000005, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000021, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_K2_IsValidTimerHandle_ReturnValue_1) == 0x000022, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_K2_IsValidTimerHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_GetBossBattleRowName_ReturnValue) == 0x000024, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_GetBossBattleRowName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_GetLevel_ReturnValue) == 0x00002C, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, K2Node_MakeStruct_DataTableRowHandle) == 0x000030, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_Conv_IntToText_ReturnValue) == 0x000040, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000058, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_GetBossBattleManager_ReturnValue) == 0x000070, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_GetBossBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_GetBattleTimeLimit_ReturnValue) == 0x000078, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_GetBattleTimeLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_FTrunc_ReturnValue) == 0x00007C, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_CalcRemainBattleTime_ReturnValue) == 0x000080, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_CalcRemainBattleTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, K2Node_Select_Default) == 0x000084, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_GetParam_ReturnValue) == 0x000088, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000090, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, K2Node_DynamicCast_AsPal_Wait_Info_World_HUDParameter) == 0x000098, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::K2Node_DynamicCast_AsPal_Wait_Info_World_HUDParameter' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, K2Node_Select_Default_1) == 0x0000A8, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_GetBossBattleManager_ReturnValue_1) == 0x0000B8, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_GetBossBattleManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_GetLocalizedTextFromHandle_Text_1) == 0x0000C0, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_GetLocalizedTextFromHandle_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_GetBattleTimeLimit_ReturnValue_1) == 0x0000D8, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_GetBattleTimeLimit_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_FTrunc_ReturnValue_1) == 0x0000DC, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_FTrunc_A_ImplicitCast) == 0x0000E0, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_FTrunc_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait, CallFunc_FTrunc_A_ImplicitCast_1) == 0x0000E8, "Member 'WBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait::CallFunc_FTrunc_A_ImplicitCast_1' has a wrong offset!");

}

