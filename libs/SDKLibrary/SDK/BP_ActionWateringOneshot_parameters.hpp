#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionWateringOneshot

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionWateringOneshot.BP_ActionWateringOneshot_C.ExecuteUbergraph_BP_ActionWateringOneshot
// 0x000C (0x000C - 0x0000)
struct BP_ActionWateringOneshot_C_ExecuteUbergraph_BP_ActionWateringOneshot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_NotifyName;                           // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWateringOneshot_C_ExecuteUbergraph_BP_ActionWateringOneshot) == 0x000004, "Wrong alignment on BP_ActionWateringOneshot_C_ExecuteUbergraph_BP_ActionWateringOneshot");
static_assert(sizeof(BP_ActionWateringOneshot_C_ExecuteUbergraph_BP_ActionWateringOneshot) == 0x00000C, "Wrong size on BP_ActionWateringOneshot_C_ExecuteUbergraph_BP_ActionWateringOneshot");
static_assert(offsetof(BP_ActionWateringOneshot_C_ExecuteUbergraph_BP_ActionWateringOneshot, EntryPoint) == 0x000000, "Member 'BP_ActionWateringOneshot_C_ExecuteUbergraph_BP_ActionWateringOneshot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionWateringOneshot_C_ExecuteUbergraph_BP_ActionWateringOneshot, K2Node_Event_NotifyName) == 0x000004, "Member 'BP_ActionWateringOneshot_C_ExecuteUbergraph_BP_ActionWateringOneshot::K2Node_Event_NotifyName' has a wrong offset!");

// Function BP_ActionWateringOneshot.BP_ActionWateringOneshot_C.NotifyWatered
// 0x00E8 (0x00E8 - 0x0000)
struct BP_ActionWateringOneshot_C_NotifyWatered final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ActionTarget;                                      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0010(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0050)(HasGetValueTypeHash)
	TScriptInterface<class IPalMapObjectWaterRecievableInterface> K2Node_DynamicCast_AsPal_Map_Object_Water_Recievable_Interface; // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D93[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ReferenceParm)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D94[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWateringOneshot_C_NotifyWatered) == 0x000008, "Wrong alignment on BP_ActionWateringOneshot_C_NotifyWatered");
static_assert(sizeof(BP_ActionWateringOneshot_C_NotifyWatered) == 0x0000E8, "Wrong size on BP_ActionWateringOneshot_C_NotifyWatered");
static_assert(offsetof(BP_ActionWateringOneshot_C_NotifyWatered, NotifyName) == 0x000000, "Member 'BP_ActionWateringOneshot_C_NotifyWatered::NotifyName' has a wrong offset!");
static_assert(offsetof(BP_ActionWateringOneshot_C_NotifyWatered, ActionTarget) == 0x000008, "Member 'BP_ActionWateringOneshot_C_NotifyWatered::ActionTarget' has a wrong offset!");
static_assert(offsetof(BP_ActionWateringOneshot_C_NotifyWatered, CallFunc_Conv_NameToText_ReturnValue) == 0x000010, "Member 'BP_ActionWateringOneshot_C_NotifyWatered::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWateringOneshot_C_NotifyWatered, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'BP_ActionWateringOneshot_C_NotifyWatered::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_ActionWateringOneshot_C_NotifyWatered, K2Node_DynamicCast_AsPal_Map_Object_Water_Recievable_Interface) == 0x000078, "Member 'BP_ActionWateringOneshot_C_NotifyWatered::K2Node_DynamicCast_AsPal_Map_Object_Water_Recievable_Interface' has a wrong offset!");
static_assert(offsetof(BP_ActionWateringOneshot_C_NotifyWatered, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'BP_ActionWateringOneshot_C_NotifyWatered::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionWateringOneshot_C_NotifyWatered, K2Node_MakeArray_Array) == 0x000090, "Member 'BP_ActionWateringOneshot_C_NotifyWatered::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ActionWateringOneshot_C_NotifyWatered, CallFunc_GetActionCharacter_ReturnValue) == 0x0000A0, "Member 'BP_ActionWateringOneshot_C_NotifyWatered::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWateringOneshot_C_NotifyWatered, CallFunc_Format_ReturnValue) == 0x0000A8, "Member 'BP_ActionWateringOneshot_C_NotifyWatered::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWateringOneshot_C_NotifyWatered, CallFunc_Conv_TextToString_ReturnValue) == 0x0000C0, "Member 'BP_ActionWateringOneshot_C_NotifyWatered::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWateringOneshot_C_NotifyWatered, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'BP_ActionWateringOneshot_C_NotifyWatered::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWateringOneshot_C_NotifyWatered, CallFunc_GetActionTarget_ReturnValue) == 0x0000D8, "Member 'BP_ActionWateringOneshot_C_NotifyWatered::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWateringOneshot_C_NotifyWatered, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000E0, "Member 'BP_ActionWateringOneshot_C_NotifyWatered::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function BP_ActionWateringOneshot.BP_ActionWateringOneshot_C.OnNotifyBegin
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionWateringOneshot_C_OnNotifyBegin final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWateringOneshot_C_OnNotifyBegin) == 0x000004, "Wrong alignment on BP_ActionWateringOneshot_C_OnNotifyBegin");
static_assert(sizeof(BP_ActionWateringOneshot_C_OnNotifyBegin) == 0x000008, "Wrong size on BP_ActionWateringOneshot_C_OnNotifyBegin");
static_assert(offsetof(BP_ActionWateringOneshot_C_OnNotifyBegin, NotifyName) == 0x000000, "Member 'BP_ActionWateringOneshot_C_OnNotifyBegin::NotifyName' has a wrong offset!");

}

