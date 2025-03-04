#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Paldex_tabset

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.ExecuteUbergraph_WBP_Paldex_tabset
// 0x0034 (0x0034 - 0x0000)
struct WBP_Paldex_tabset_C_ExecuteUbergraph_WBP_Paldex_tabset final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 OldIndex, int32 NewIndex)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 OldIndex, int32 NewIndex)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Paldex_tabset_C_ExecuteUbergraph_WBP_Paldex_tabset) == 0x000004, "Wrong alignment on WBP_Paldex_tabset_C_ExecuteUbergraph_WBP_Paldex_tabset");
static_assert(sizeof(WBP_Paldex_tabset_C_ExecuteUbergraph_WBP_Paldex_tabset) == 0x000034, "Wrong size on WBP_Paldex_tabset_C_ExecuteUbergraph_WBP_Paldex_tabset");
static_assert(offsetof(WBP_Paldex_tabset_C_ExecuteUbergraph_WBP_Paldex_tabset, EntryPoint) == 0x000000, "Member 'WBP_Paldex_tabset_C_ExecuteUbergraph_WBP_Paldex_tabset::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_tabset_C_ExecuteUbergraph_WBP_Paldex_tabset, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_Paldex_tabset_C_ExecuteUbergraph_WBP_Paldex_tabset::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_tabset_C_ExecuteUbergraph_WBP_Paldex_tabset, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_Paldex_tabset_C_ExecuteUbergraph_WBP_Paldex_tabset::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_tabset_C_ExecuteUbergraph_WBP_Paldex_tabset, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'WBP_Paldex_tabset_C_ExecuteUbergraph_WBP_Paldex_tabset::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.OnChangedIndexEvent
// 0x0018 (0x0018 - 0x0000)
struct WBP_Paldex_tabset_C_OnChangedIndexEvent final
{
public:
	int32                                         OldIndex;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewIndex;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                FocusTargetWidget;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Paldex_tabset_C_OnChangedIndexEvent) == 0x000008, "Wrong alignment on WBP_Paldex_tabset_C_OnChangedIndexEvent");
static_assert(sizeof(WBP_Paldex_tabset_C_OnChangedIndexEvent) == 0x000018, "Wrong size on WBP_Paldex_tabset_C_OnChangedIndexEvent");
static_assert(offsetof(WBP_Paldex_tabset_C_OnChangedIndexEvent, OldIndex) == 0x000000, "Member 'WBP_Paldex_tabset_C_OnChangedIndexEvent::OldIndex' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_tabset_C_OnChangedIndexEvent, NewIndex) == 0x000004, "Member 'WBP_Paldex_tabset_C_OnChangedIndexEvent::NewIndex' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_tabset_C_OnChangedIndexEvent, FocusTargetWidget) == 0x000008, "Member 'WBP_Paldex_tabset_C_OnChangedIndexEvent::FocusTargetWidget' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_tabset_C_OnChangedIndexEvent, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000010, "Member 'WBP_Paldex_tabset_C_OnChangedIndexEvent::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_tabset_C_OnChangedIndexEvent, K2Node_SwitchInteger_CmpSuccess) == 0x000011, "Member 'WBP_Paldex_tabset_C_OnChangedIndexEvent::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.OnNextEvent
// 0x0008 (0x0008 - 0x0000)
struct WBP_Paldex_tabset_C_OnNextEvent final
{
public:
	int32                                         OldIndex;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewIndex;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Paldex_tabset_C_OnNextEvent) == 0x000004, "Wrong alignment on WBP_Paldex_tabset_C_OnNextEvent");
static_assert(sizeof(WBP_Paldex_tabset_C_OnNextEvent) == 0x000008, "Wrong size on WBP_Paldex_tabset_C_OnNextEvent");
static_assert(offsetof(WBP_Paldex_tabset_C_OnNextEvent, OldIndex) == 0x000000, "Member 'WBP_Paldex_tabset_C_OnNextEvent::OldIndex' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_tabset_C_OnNextEvent, NewIndex) == 0x000004, "Member 'WBP_Paldex_tabset_C_OnNextEvent::NewIndex' has a wrong offset!");

// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.OnPrevEvent
// 0x0008 (0x0008 - 0x0000)
struct WBP_Paldex_tabset_C_OnPrevEvent final
{
public:
	int32                                         OldIndex;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewIndex;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Paldex_tabset_C_OnPrevEvent) == 0x000004, "Wrong alignment on WBP_Paldex_tabset_C_OnPrevEvent");
static_assert(sizeof(WBP_Paldex_tabset_C_OnPrevEvent) == 0x000008, "Wrong size on WBP_Paldex_tabset_C_OnPrevEvent");
static_assert(offsetof(WBP_Paldex_tabset_C_OnPrevEvent, OldIndex) == 0x000000, "Member 'WBP_Paldex_tabset_C_OnPrevEvent::OldIndex' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_tabset_C_OnPrevEvent, NewIndex) == 0x000004, "Member 'WBP_Paldex_tabset_C_OnPrevEvent::NewIndex' has a wrong offset!");

// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.RegisterPanelWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_Paldex_tabset_C_RegisterPanelWidget final
{
public:
	class UPanelWidget*                           PanelWidget;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Paldex_tabset_C_RegisterPanelWidget) == 0x000008, "Wrong alignment on WBP_Paldex_tabset_C_RegisterPanelWidget");
static_assert(sizeof(WBP_Paldex_tabset_C_RegisterPanelWidget) == 0x000008, "Wrong size on WBP_Paldex_tabset_C_RegisterPanelWidget");
static_assert(offsetof(WBP_Paldex_tabset_C_RegisterPanelWidget, PanelWidget) == 0x000000, "Member 'WBP_Paldex_tabset_C_RegisterPanelWidget::PanelWidget' has a wrong offset!");

}

