#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_PlayerGauge_HP

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Menu_PlayerGauge_HP.WBP_Menu_PlayerGauge_HP_C.ExecuteUbergraph_WBP_Menu_PlayerGauge_HP
// 0x0028 (0x0028 - 0x0000)
struct WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DBC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DBD[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP) == 0x000008, "Wrong alignment on WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP");
static_assert(sizeof(WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP) == 0x000028, "Wrong size on WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP");
static_assert(offsetof(WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP, EntryPoint) == 0x000000, "Member 'WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000018, "Member 'WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP, CallFunc_IsValid_ReturnValue_2) == 0x000021, "Member 'WBP_Menu_PlayerGauge_HP_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_HP::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

}

