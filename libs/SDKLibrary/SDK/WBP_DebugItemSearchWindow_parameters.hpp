#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DebugItemSearchWindow

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_DebugItemSearchWindow.WBP_DebugItemSearchWindow_C.BndEvt__WBP_DebugItemSearchWindow_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_0_OnRightClickSlot__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_DebugItemSearchWindow_C_BndEvt__WBP_DebugItemSearchWindow_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_0_OnRightClickSlot__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           Param_Slot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DebugItemSearchWindow_C_BndEvt__WBP_DebugItemSearchWindow_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_0_OnRightClickSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_DebugItemSearchWindow_C_BndEvt__WBP_DebugItemSearchWindow_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_0_OnRightClickSlot__DelegateSignature");
static_assert(sizeof(WBP_DebugItemSearchWindow_C_BndEvt__WBP_DebugItemSearchWindow_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_0_OnRightClickSlot__DelegateSignature) == 0x000010, "Wrong size on WBP_DebugItemSearchWindow_C_BndEvt__WBP_DebugItemSearchWindow_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_0_OnRightClickSlot__DelegateSignature");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_BndEvt__WBP_DebugItemSearchWindow_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_0_OnRightClickSlot__DelegateSignature, Param_Slot) == 0x000000, "Member 'WBP_DebugItemSearchWindow_C_BndEvt__WBP_DebugItemSearchWindow_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_0_OnRightClickSlot__DelegateSignature::Param_Slot' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_BndEvt__WBP_DebugItemSearchWindow_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_0_OnRightClickSlot__DelegateSignature, PressType) == 0x000008, "Member 'WBP_DebugItemSearchWindow_C_BndEvt__WBP_DebugItemSearchWindow_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_0_OnRightClickSlot__DelegateSignature::PressType' has a wrong offset!");

// Function WBP_DebugItemSearchWindow.WBP_DebugItemSearchWindow_C.ExecuteUbergraph_WBP_DebugItemSearchWindow
// 0x0318 (0x0318 - 0x0000)
struct WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A89[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A8A[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0028(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A8B[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalStaticItemDataStruct               CallFunc_GetDataTableRowFromName_OutRow;           // 0x0048(0x0128)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A8C[0x1];                                     // 0x0173(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemId                             K2Node_MakeStruct_PalItemId;                       // 0x0174(0x0028)(NoDestructor, HasGetValueTypeHash)
	struct FPalItemAndNum                         K2Node_MakeStruct_PalItemAndNum;                   // 0x019C(0x002C)(NoDestructor)
	class UWBP_PalItemSlotButtonBase_C*           K2Node_ComponentBoundEvent_Slot;                   // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         K2Node_ComponentBoundEvent_PressType;              // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Update_Item_Stack_Info_SlotUpdated;       // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A8D[0x2];                                     // 0x01D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemAndNum                         CallFunc_GetItemAndNum_ItemAndNum;                 // 0x01D4(0x002C)(NoDestructor)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0200(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0218(0x0050)(HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A8E[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0270(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0288(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x02D8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x02E8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0300(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_FTrunc_A_ImplicitCast;                    // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow) == 0x000008, "Wrong alignment on WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow");
static_assert(sizeof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow) == 0x000318, "Wrong size on WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, EntryPoint) == 0x000000, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, Temp_bool_True_if_break_was_hit_Variable) == 0x000014, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, Temp_int_Array_Index_Variable) == 0x000018, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_Not_PreBool_ReturnValue) == 0x00001C, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000028, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_GetDataTableRowFromName_OutRow) == 0x000048, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000170, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_Less_IntInt_ReturnValue) == 0x000171, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_BooleanAND_ReturnValue) == 0x000172, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, K2Node_MakeStruct_PalItemId) == 0x000174, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::K2Node_MakeStruct_PalItemId' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, K2Node_MakeStruct_PalItemAndNum) == 0x00019C, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::K2Node_MakeStruct_PalItemAndNum' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, K2Node_ComponentBoundEvent_Slot) == 0x0001C8, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::K2Node_ComponentBoundEvent_Slot' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, K2Node_ComponentBoundEvent_PressType) == 0x0001D0, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::K2Node_ComponentBoundEvent_PressType' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_Update_Item_Stack_Info_SlotUpdated) == 0x0001D1, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_Update_Item_Stack_Info_SlotUpdated' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_GetItemAndNum_ItemAndNum) == 0x0001D4, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_GetItemAndNum_ItemAndNum' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_Conv_NameToText_ReturnValue) == 0x000200, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, K2Node_MakeStruct_FormatArgumentData) == 0x000218, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_GetValue_ReturnValue) == 0x000268, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000270, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_FTrunc_ReturnValue) == 0x000278, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_MakeLiteralInt_ReturnValue) == 0x00027C, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000280, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, K2Node_MakeStruct_FormatArgumentData_1) == 0x000288, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, K2Node_MakeArray_Array) == 0x0002D8, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_Format_ReturnValue) == 0x0002E8, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_Conv_TextToString_ReturnValue) == 0x000300, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow, CallFunc_FTrunc_A_ImplicitCast) == 0x000310, "Member 'WBP_DebugItemSearchWindow_C_ExecuteUbergraph_WBP_DebugItemSearchWindow::CallFunc_FTrunc_A_ImplicitCast' has a wrong offset!");

// Function WBP_DebugItemSearchWindow.WBP_DebugItemSearchWindow_C.OnCancelAction
// 0x0003 (0x0003 - 0x0000)
struct WBP_DebugItemSearchWindow_C_OnCancelAction final
{
public:
	bool                                          CallFunc_HasAnyUserFocus_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasKeyboardFocus_ReturnValue;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DebugItemSearchWindow_C_OnCancelAction) == 0x000001, "Wrong alignment on WBP_DebugItemSearchWindow_C_OnCancelAction");
static_assert(sizeof(WBP_DebugItemSearchWindow_C_OnCancelAction) == 0x000003, "Wrong size on WBP_DebugItemSearchWindow_C_OnCancelAction");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_OnCancelAction, CallFunc_HasAnyUserFocus_ReturnValue) == 0x000000, "Member 'WBP_DebugItemSearchWindow_C_OnCancelAction::CallFunc_HasAnyUserFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_OnCancelAction, CallFunc_HasKeyboardFocus_ReturnValue) == 0x000001, "Member 'WBP_DebugItemSearchWindow_C_OnCancelAction::CallFunc_HasKeyboardFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugItemSearchWindow_C_OnCancelAction, CallFunc_BooleanOR_ReturnValue) == 0x000002, "Member 'WBP_DebugItemSearchWindow_C_OnCancelAction::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

