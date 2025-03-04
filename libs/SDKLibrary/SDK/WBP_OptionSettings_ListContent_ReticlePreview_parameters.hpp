#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSettings_ListContent_ReticlePreview

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_OptionSettings_ListContent_ReticlePreview.WBP_OptionSettings_ListContent_ReticlePreview_C.SetReticleColor
// 0x0004 (0x0004 - 0x0000)
struct WBP_OptionSettings_ListContent_ReticlePreview_C_SetReticleColor final
{
public:
	int32                                         ColorIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ListContent_ReticlePreview_C_SetReticleColor) == 0x000004, "Wrong alignment on WBP_OptionSettings_ListContent_ReticlePreview_C_SetReticleColor");
static_assert(sizeof(WBP_OptionSettings_ListContent_ReticlePreview_C_SetReticleColor) == 0x000004, "Wrong size on WBP_OptionSettings_ListContent_ReticlePreview_C_SetReticleColor");
static_assert(offsetof(WBP_OptionSettings_ListContent_ReticlePreview_C_SetReticleColor, ColorIndex) == 0x000000, "Member 'WBP_OptionSettings_ListContent_ReticlePreview_C_SetReticleColor::ColorIndex' has a wrong offset!");

// Function WBP_OptionSettings_ListContent_ReticlePreview.WBP_OptionSettings_ListContent_ReticlePreview_C.SetOutline
// 0x0008 (0x0008 - 0x0000)
struct WBP_OptionSettings_ListContent_ReticlePreview_C_SetOutline final
{
public:
	double                                        OutlineOpacity;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ListContent_ReticlePreview_C_SetOutline) == 0x000008, "Wrong alignment on WBP_OptionSettings_ListContent_ReticlePreview_C_SetOutline");
static_assert(sizeof(WBP_OptionSettings_ListContent_ReticlePreview_C_SetOutline) == 0x000008, "Wrong size on WBP_OptionSettings_ListContent_ReticlePreview_C_SetOutline");
static_assert(offsetof(WBP_OptionSettings_ListContent_ReticlePreview_C_SetOutline, OutlineOpacity) == 0x000000, "Member 'WBP_OptionSettings_ListContent_ReticlePreview_C_SetOutline::OutlineOpacity' has a wrong offset!");

// Function WBP_OptionSettings_ListContent_ReticlePreview.WBP_OptionSettings_ListContent_ReticlePreview_C.ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview
// 0x0050 (0x0050 - 0x0000)
struct WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_2;                            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_3;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_4;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ColorIndex;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5996[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_OutlineOpacity;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview) == 0x000008, "Wrong alignment on WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview");
static_assert(sizeof(WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview) == 0x000050, "Wrong size on WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview");
static_assert(offsetof(WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview, EntryPoint) == 0x000000, "Member 'WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview, Temp_int_Variable) == 0x000004, "Member 'WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview, Temp_object_Variable) == 0x000008, "Member 'WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview, Temp_object_Variable_1) == 0x000010, "Member 'WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview, Temp_object_Variable_2) == 0x000018, "Member 'WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview, Temp_object_Variable_3) == 0x000020, "Member 'WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview, Temp_object_Variable_4) == 0x000028, "Member 'WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview, K2Node_CustomEvent_ColorIndex) == 0x000030, "Member 'WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview::K2Node_CustomEvent_ColorIndex' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview, K2Node_CustomEvent_OutlineOpacity) == 0x000038, "Member 'WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview::K2Node_CustomEvent_OutlineOpacity' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview, K2Node_Select_Default) == 0x000040, "Member 'WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000048, "Member 'WBP_OptionSettings_ListContent_ReticlePreview_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

}

