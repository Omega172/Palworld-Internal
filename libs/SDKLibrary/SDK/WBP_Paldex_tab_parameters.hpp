#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Paldex_tab

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Paldex_tab.WBP_Paldex_tab_C.BndEvt__WBP_Paldex_tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Paldex_tab_C_BndEvt__WBP_Paldex_tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Paldex_tab_C_BndEvt__WBP_Paldex_tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Paldex_tab_C_BndEvt__WBP_Paldex_tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Paldex_tab_C_BndEvt__WBP_Paldex_tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Paldex_tab_C_BndEvt__WBP_Paldex_tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Paldex_tab_C_BndEvt__WBP_Paldex_tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Paldex_tab_C_BndEvt__WBP_Paldex_tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_Paldex_tab.WBP_Paldex_tab_C.ExecuteUbergraph_WBP_Paldex_tab
// 0x0038 (0x0038 - 0x0000)
struct WBP_Paldex_tab_C_ExecuteUbergraph_WBP_Paldex_tab final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E23[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0020(0x0018)()
};
static_assert(alignof(WBP_Paldex_tab_C_ExecuteUbergraph_WBP_Paldex_tab) == 0x000008, "Wrong alignment on WBP_Paldex_tab_C_ExecuteUbergraph_WBP_Paldex_tab");
static_assert(sizeof(WBP_Paldex_tab_C_ExecuteUbergraph_WBP_Paldex_tab) == 0x000038, "Wrong size on WBP_Paldex_tab_C_ExecuteUbergraph_WBP_Paldex_tab");
static_assert(offsetof(WBP_Paldex_tab_C_ExecuteUbergraph_WBP_Paldex_tab, EntryPoint) == 0x000000, "Member 'WBP_Paldex_tab_C_ExecuteUbergraph_WBP_Paldex_tab::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_tab_C_ExecuteUbergraph_WBP_Paldex_tab, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'WBP_Paldex_tab_C_ExecuteUbergraph_WBP_Paldex_tab::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_tab_C_ExecuteUbergraph_WBP_Paldex_tab, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_Paldex_tab_C_ExecuteUbergraph_WBP_Paldex_tab::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_tab_C_ExecuteUbergraph_WBP_Paldex_tab, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'WBP_Paldex_tab_C_ExecuteUbergraph_WBP_Paldex_tab::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_tab_C_ExecuteUbergraph_WBP_Paldex_tab, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000020, "Member 'WBP_Paldex_tab_C_ExecuteUbergraph_WBP_Paldex_tab::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");

}

