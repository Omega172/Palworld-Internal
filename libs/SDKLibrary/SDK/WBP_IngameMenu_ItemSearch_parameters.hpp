#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameMenu_ItemSearch

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_IngameMenu_ItemSearch.WBP_IngameMenu_ItemSearch_C.BndEvt__WBP_IngameMenu_ItemSearch_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_1_OnRightClickSlot__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameMenu_ItemSearch_C_BndEvt__WBP_IngameMenu_ItemSearch_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_1_OnRightClickSlot__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           Param_Slot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_ItemSearch_C_BndEvt__WBP_IngameMenu_ItemSearch_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_1_OnRightClickSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_ItemSearch_C_BndEvt__WBP_IngameMenu_ItemSearch_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_1_OnRightClickSlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_ItemSearch_C_BndEvt__WBP_IngameMenu_ItemSearch_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_1_OnRightClickSlot__DelegateSignature) == 0x000010, "Wrong size on WBP_IngameMenu_ItemSearch_C_BndEvt__WBP_IngameMenu_ItemSearch_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_1_OnRightClickSlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_BndEvt__WBP_IngameMenu_ItemSearch_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_1_OnRightClickSlot__DelegateSignature, Param_Slot) == 0x000000, "Member 'WBP_IngameMenu_ItemSearch_C_BndEvt__WBP_IngameMenu_ItemSearch_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_1_OnRightClickSlot__DelegateSignature::Param_Slot' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_BndEvt__WBP_IngameMenu_ItemSearch_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_1_OnRightClickSlot__DelegateSignature, PressType) == 0x000008, "Member 'WBP_IngameMenu_ItemSearch_C_BndEvt__WBP_IngameMenu_ItemSearch_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_1_OnRightClickSlot__DelegateSignature::PressType' has a wrong offset!");

// Function WBP_IngameMenu_ItemSearch.WBP_IngameMenu_ItemSearch_C.ExecuteUbergraph_WBP_IngameMenu_ItemSearch
// 0x0210 (0x0210 - 0x0000)
struct WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54F9[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54FA[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemSlotButtonBase_C*           K2Node_ComponentBoundEvent_Slot;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         K2Node_ComponentBoundEvent_PressType;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54FB[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalItemAndNum                         CallFunc_GetItemAndNum_ItemAndNum;                 // 0x0030(0x002C)(NoDestructor)
	uint8                                         Pad_54FC[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_HUDDispatchParameter_ItemSearch_C*  K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_Item_Search; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54FD[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0070(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54FE[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalStaticItemDataStruct               CallFunc_GetDataTableRowFromName_OutRow;           // 0x0090(0x0128)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54FF[0x1];                                     // 0x01BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemId                             K2Node_MakeStruct_PalItemId;                       // 0x01BC(0x0028)(NoDestructor, HasGetValueTypeHash)
	struct FPalItemAndNum                         K2Node_MakeStruct_PalItemAndNum;                   // 0x01E4(0x002C)(NoDestructor)
};
static_assert(alignof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch) == 0x000008, "Wrong alignment on WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch");
static_assert(sizeof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch) == 0x000210, "Wrong size on WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, EntryPoint) == 0x000000, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, Temp_bool_True_if_break_was_hit_Variable) == 0x000004, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, K2Node_ComponentBoundEvent_Slot) == 0x000018, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::K2Node_ComponentBoundEvent_Slot' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, K2Node_ComponentBoundEvent_PressType) == 0x000020, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::K2Node_ComponentBoundEvent_PressType' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, CallFunc_GetParam_ReturnValue) == 0x000028, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, CallFunc_GetItemAndNum_ItemAndNum) == 0x000030, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::CallFunc_GetItemAndNum_ItemAndNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_Item_Search) == 0x000060, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_Item_Search' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000070, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, CallFunc_Array_Get_Item) == 0x000080, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, CallFunc_GetDataTableRowFromName_OutRow) == 0x000090, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0001B8, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, CallFunc_Less_IntInt_ReturnValue) == 0x0001B9, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, CallFunc_BooleanAND_ReturnValue) == 0x0001BA, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, K2Node_MakeStruct_PalItemId) == 0x0001BC, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::K2Node_MakeStruct_PalItemId' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch, K2Node_MakeStruct_PalItemAndNum) == 0x0001E4, "Member 'WBP_IngameMenu_ItemSearch_C_ExecuteUbergraph_WBP_IngameMenu_ItemSearch::K2Node_MakeStruct_PalItemAndNum' has a wrong offset!");

// Function WBP_IngameMenu_ItemSearch.WBP_IngameMenu_ItemSearch_C.OnCancelAction
// 0x0003 (0x0003 - 0x0000)
struct WBP_IngameMenu_ItemSearch_C_OnCancelAction final
{
public:
	bool                                          CallFunc_HasAnyUserFocus_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasKeyboardFocus_ReturnValue;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_ItemSearch_C_OnCancelAction) == 0x000001, "Wrong alignment on WBP_IngameMenu_ItemSearch_C_OnCancelAction");
static_assert(sizeof(WBP_IngameMenu_ItemSearch_C_OnCancelAction) == 0x000003, "Wrong size on WBP_IngameMenu_ItemSearch_C_OnCancelAction");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_OnCancelAction, CallFunc_HasAnyUserFocus_ReturnValue) == 0x000000, "Member 'WBP_IngameMenu_ItemSearch_C_OnCancelAction::CallFunc_HasAnyUserFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_OnCancelAction, CallFunc_HasKeyboardFocus_ReturnValue) == 0x000001, "Member 'WBP_IngameMenu_ItemSearch_C_OnCancelAction::CallFunc_HasKeyboardFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_OnCancelAction, CallFunc_BooleanOR_ReturnValue) == 0x000002, "Member 'WBP_IngameMenu_ItemSearch_C_OnCancelAction::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_ItemSearch.WBP_IngameMenu_ItemSearch_C.Setup
// 0x0078 (0x0078 - 0x0000)
struct WBP_IngameMenu_ItemSearch_C_Setup final
{
public:
	struct FPalItemSlotId                         NewLocalVar;                                       // 0x0000(0x0014)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5500[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPalItemAndNum>                 TempItemInfos;                                     // 0x0018(0x0010)(Edit, BlueprintVisible)
	class FName                                   Temp_name_Variable;                                // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue;        // 0x0048(0x0004)(NoDestructor)
	uint8                                         Pad_5501[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_HUDDispatchParameter_ItemSearch_C*  K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_Item_Search; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Update_Item_Stack_Info_SlotUpdated;       // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_ItemSearch_C_Setup) == 0x000008, "Wrong alignment on WBP_IngameMenu_ItemSearch_C_Setup");
static_assert(sizeof(WBP_IngameMenu_ItemSearch_C_Setup) == 0x000078, "Wrong size on WBP_IngameMenu_ItemSearch_C_Setup");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_Setup, NewLocalVar) == 0x000000, "Member 'WBP_IngameMenu_ItemSearch_C_Setup::NewLocalVar' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_Setup, TempItemInfos) == 0x000018, "Member 'WBP_IngameMenu_ItemSearch_C_Setup::TempItemInfos' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_Setup, Temp_name_Variable) == 0x000028, "Member 'WBP_IngameMenu_ItemSearch_C_Setup::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'WBP_IngameMenu_ItemSearch_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_Setup, CallFunc_MakeLiteralName_ReturnValue) == 0x000040, "Member 'WBP_IngameMenu_ItemSearch_C_Setup::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_Setup, CallFunc_RegisterActionBinding_ReturnValue) == 0x000048, "Member 'WBP_IngameMenu_ItemSearch_C_Setup::CallFunc_RegisterActionBinding_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_Setup, CallFunc_GetParam_ReturnValue) == 0x000050, "Member 'WBP_IngameMenu_ItemSearch_C_Setup::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_Setup, K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_Item_Search) == 0x000058, "Member 'WBP_IngameMenu_ItemSearch_C_Setup::K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_Item_Search' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_Setup, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WBP_IngameMenu_ItemSearch_C_Setup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_Setup, CallFunc_Update_Item_Stack_Info_SlotUpdated) == 0x000061, "Member 'WBP_IngameMenu_ItemSearch_C_Setup::CallFunc_Update_Item_Stack_Info_SlotUpdated' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_Setup, CallFunc_Not_PreBool_ReturnValue) == 0x000062, "Member 'WBP_IngameMenu_ItemSearch_C_Setup::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_Setup, CallFunc_Array_RemoveItem_ReturnValue) == 0x000063, "Member 'WBP_IngameMenu_ItemSearch_C_Setup::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_Setup, K2Node_CreateDelegate_OutputDelegate_1) == 0x000064, "Member 'WBP_IngameMenu_ItemSearch_C_Setup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function WBP_IngameMenu_ItemSearch.WBP_IngameMenu_ItemSearch_C.BP_GetDesiredFocusTarget
// 0x0020 (0x0020 - 0x0000)
struct WBP_IngameMenu_ItemSearch_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetLastFocusSlot_Slot;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5502[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumItems_ReturnValue;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_ItemSearch_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_IngameMenu_ItemSearch_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_IngameMenu_ItemSearch_C_BP_GetDesiredFocusTarget) == 0x000020, "Wrong size on WBP_IngameMenu_ItemSearch_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_IngameMenu_ItemSearch_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_BP_GetDesiredFocusTarget, CallFunc_GetLastFocusSlot_Slot) == 0x000008, "Member 'WBP_IngameMenu_ItemSearch_C_BP_GetDesiredFocusTarget::CallFunc_GetLastFocusSlot_Slot' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_BP_GetDesiredFocusTarget, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_ItemSearch_C_BP_GetDesiredFocusTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_BP_GetDesiredFocusTarget, CallFunc_GetNumItems_ReturnValue) == 0x000014, "Member 'WBP_IngameMenu_ItemSearch_C_BP_GetDesiredFocusTarget::CallFunc_GetNumItems_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_ItemSearch_C_BP_GetDesiredFocusTarget, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_ItemSearch_C_BP_GetDesiredFocusTarget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

