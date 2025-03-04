#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalCraftInfo

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.ExecuteUbergraph_WBP_PalCraftInfo
// 0x0058 (0x0058 - 0x0000)
struct WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCraftInfo_Pal_C*                CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64CF[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64D0[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PalCraftInfo_Pal_C*>        K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo) == 0x000008, "Wrong alignment on WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo");
static_assert(sizeof(WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo) == 0x000058, "Wrong size on WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo");
static_assert(offsetof(WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo, EntryPoint) == 0x000000, "Member 'WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo, CallFunc_Array_Get_Item) == 0x000010, "Member 'WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo, CallFunc_PlayAnimation_ReturnValue_2) == 0x000030, "Member 'WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo, CallFunc_GetEndTime_ReturnValue) == 0x000038, "Member 'WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo, CallFunc_PlayAnimation_ReturnValue_3) == 0x000040, "Member 'WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo, K2Node_MakeArray_Array) == 0x000048, "Member 'WBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.IsCharacterAssignedFixedToTargetWork
// 0x0050 (0x0050 - 0x0000)
struct WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork final
{
public:
	class UPalCharacterParameterComponent*        TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  WorkId;                                            // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64D1[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalWorkAssign*                         WorkAssign;                                        // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFixed_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64D2[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetWorkId_ReturnValue;                    // 0x002C(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64D3[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalWorkAssign*                         CallFunc_GetWorkAssign_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork) == 0x000008, "Wrong alignment on WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork");
static_assert(sizeof(WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork) == 0x000050, "Wrong size on WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork");
static_assert(offsetof(WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork, TargetCharacter) == 0x000000, "Member 'WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork::TargetCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork, WorkId) == 0x000008, "Member 'WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork::WorkId' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork, ReturnValue) == 0x000018, "Member 'WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork, WorkAssign) == 0x000020, "Member 'WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork::WorkAssign' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork, CallFunc_IsFixed_ReturnValue) == 0x000029, "Member 'WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork::CallFunc_IsFixed_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork, CallFunc_GetWorkId_ReturnValue) == 0x00002C, "Member 'WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork::CallFunc_GetWorkId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork, CallFunc_GetWorkAssign_ReturnValue) == 0x000040, "Member 'WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork::CallFunc_GetWorkAssign_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork, CallFunc_EqualEqual_GuidGuid_ReturnValue) == 0x000048, "Member 'WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork::CallFunc_EqualEqual_GuidGuid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork, CallFunc_BooleanAND_ReturnValue) == 0x000049, "Member 'WBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.SetIcon
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCraftInfo_C_SetIcon final
{
public:
	class FName                                   ItemId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCraftInfo_C_SetIcon) == 0x000004, "Wrong alignment on WBP_PalCraftInfo_C_SetIcon");
static_assert(sizeof(WBP_PalCraftInfo_C_SetIcon) == 0x000008, "Wrong size on WBP_PalCraftInfo_C_SetIcon");
static_assert(offsetof(WBP_PalCraftInfo_C_SetIcon, ItemId) == 0x000000, "Member 'WBP_PalCraftInfo_C_SetIcon::ItemId' has a wrong offset!");

// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.SetInfinityProductMode
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalCraftInfo_C_SetInfinityProductMode final
{
public:
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0000(0x0018)()
};
static_assert(alignof(WBP_PalCraftInfo_C_SetInfinityProductMode) == 0x000008, "Wrong alignment on WBP_PalCraftInfo_C_SetInfinityProductMode");
static_assert(sizeof(WBP_PalCraftInfo_C_SetInfinityProductMode) == 0x000018, "Wrong size on WBP_PalCraftInfo_C_SetInfinityProductMode");
static_assert(offsetof(WBP_PalCraftInfo_C_SetInfinityProductMode, CallFunc_GetLocalizedText_ReturnValue) == 0x000000, "Member 'WBP_PalCraftInfo_C_SetInfinityProductMode::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");

// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.SetProductItemID
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalCraftInfo_C_SetProductItemID final
{
public:
	class FName                                   ItemId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetItemName_outName;                      // 0x0008(0x0018)()
};
static_assert(alignof(WBP_PalCraftInfo_C_SetProductItemID) == 0x000008, "Wrong alignment on WBP_PalCraftInfo_C_SetProductItemID");
static_assert(sizeof(WBP_PalCraftInfo_C_SetProductItemID) == 0x000020, "Wrong size on WBP_PalCraftInfo_C_SetProductItemID");
static_assert(offsetof(WBP_PalCraftInfo_C_SetProductItemID, ItemId) == 0x000000, "Member 'WBP_PalCraftInfo_C_SetProductItemID::ItemId' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetProductItemID, CallFunc_GetItemName_outName) == 0x000008, "Member 'WBP_PalCraftInfo_C_SetProductItemID::CallFunc_GetItemName_outName' has a wrong offset!");

// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.SetProductNum
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_PalCraftInfo_C_SetProductNum final
{
public:
	int32                                         NowProductNum;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxProductNum;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0060(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
};
static_assert(alignof(WBP_PalCraftInfo_C_SetProductNum) == 0x000008, "Wrong alignment on WBP_PalCraftInfo_C_SetProductNum");
static_assert(sizeof(WBP_PalCraftInfo_C_SetProductNum) == 0x0000A0, "Wrong size on WBP_PalCraftInfo_C_SetProductNum");
static_assert(offsetof(WBP_PalCraftInfo_C_SetProductNum, NowProductNum) == 0x000000, "Member 'WBP_PalCraftInfo_C_SetProductNum::NowProductNum' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetProductNum, MaxProductNum) == 0x000004, "Member 'WBP_PalCraftInfo_C_SetProductNum::MaxProductNum' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetProductNum, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'WBP_PalCraftInfo_C_SetProductNum::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetProductNum, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'WBP_PalCraftInfo_C_SetProductNum::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetProductNum, CallFunc_Conv_IntToText_ReturnValue) == 0x000060, "Member 'WBP_PalCraftInfo_C_SetProductNum::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetProductNum, K2Node_MakeArray_Array) == 0x000078, "Member 'WBP_PalCraftInfo_C_SetProductNum::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetProductNum, CallFunc_Format_ReturnValue) == 0x000088, "Member 'WBP_PalCraftInfo_C_SetProductNum::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.SetWorkerPalSlots
// 0x0098 (0x0098 - 0x0000)
struct WBP_PalCraftInfo_C_SetWorkerPalSlots final
{
public:
	TArray<class UPalIndividualCharacterSlot*>    Slots;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGuid                                  WorkId;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64D4[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64D5[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCraftInfo_Pal_C*                CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64D6[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64D7[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64D8[0x2];                                     // 0x0076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCharacterAssignedFixedToTargetWork_ReturnValue; // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64D9[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalCraftInfo_Pal_C*                CallFunc_Array_Get_Item_2;                         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAssignedToAnyWork_ReturnValue;          // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCraftInfo_C_SetWorkerPalSlots) == 0x000008, "Wrong alignment on WBP_PalCraftInfo_C_SetWorkerPalSlots");
static_assert(sizeof(WBP_PalCraftInfo_C_SetWorkerPalSlots) == 0x000098, "Wrong size on WBP_PalCraftInfo_C_SetWorkerPalSlots");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, Slots) == 0x000000, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::Slots' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, WorkId) == 0x000010, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::WorkId' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, Temp_int_Variable) == 0x000020, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, Temp_int_Array_Index_Variable) == 0x000038, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_Array_Get_Item) == 0x000040, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_GetHandle_ReturnValue) == 0x000050, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_Array_Length_ReturnValue_1) == 0x00005C, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_Min_ReturnValue) == 0x000060, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000068, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_Subtract_IntInt_ReturnValue) == 0x000070, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_IsValid_ReturnValue_1) == 0x000074, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000075, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000078, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_IsCharacterAssignedFixedToTargetWork_ReturnValue) == 0x000080, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_IsCharacterAssignedFixedToTargetWork_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_Array_Get_Item_2) == 0x000088, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_Array_Length_ReturnValue_2) == 0x000090, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_IsAssignedToAnyWork_ReturnValue) == 0x000094, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_IsAssignedToAnyWork_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_Less_IntInt_ReturnValue) == 0x000095, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkerPalSlots, CallFunc_IsValid_ReturnValue_2) == 0x000096, "Member 'WBP_PalCraftInfo_C_SetWorkerPalSlots::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.SetWorkProgressRate
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCraftInfo_C_SetWorkProgressRate final
{
public:
	double                                        Rate;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCraftInfo_C_SetWorkProgressRate) == 0x000008, "Wrong alignment on WBP_PalCraftInfo_C_SetWorkProgressRate");
static_assert(sizeof(WBP_PalCraftInfo_C_SetWorkProgressRate) == 0x000008, "Wrong size on WBP_PalCraftInfo_C_SetWorkProgressRate");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkProgressRate, Rate) == 0x000000, "Member 'WBP_PalCraftInfo_C_SetWorkProgressRate::Rate' has a wrong offset!");

// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.SetWorkSuitability
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalCraftInfo_C_SetWorkSuitability final
{
public:
	EPalWorkSuitability                           WorkSuitability;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCraftInfo_C_SetWorkSuitability) == 0x000001, "Wrong alignment on WBP_PalCraftInfo_C_SetWorkSuitability");
static_assert(sizeof(WBP_PalCraftInfo_C_SetWorkSuitability) == 0x000001, "Wrong size on WBP_PalCraftInfo_C_SetWorkSuitability");
static_assert(offsetof(WBP_PalCraftInfo_C_SetWorkSuitability, WorkSuitability) == 0x000000, "Member 'WBP_PalCraftInfo_C_SetWorkSuitability::WorkSuitability' has a wrong offset!");

// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.UpdateRequireInfo
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCraftInfo_C_UpdateRequireInfo final
{
public:
	class UPalWorkBase*                           Work;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalWorkSuitability                           WorkSuitability;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCraftInfo_C_UpdateRequireInfo) == 0x000008, "Wrong alignment on WBP_PalCraftInfo_C_UpdateRequireInfo");
static_assert(sizeof(WBP_PalCraftInfo_C_UpdateRequireInfo) == 0x000010, "Wrong size on WBP_PalCraftInfo_C_UpdateRequireInfo");
static_assert(offsetof(WBP_PalCraftInfo_C_UpdateRequireInfo, Work) == 0x000000, "Member 'WBP_PalCraftInfo_C_UpdateRequireInfo::Work' has a wrong offset!");
static_assert(offsetof(WBP_PalCraftInfo_C_UpdateRequireInfo, WorkSuitability) == 0x000008, "Member 'WBP_PalCraftInfo_C_UpdateRequireInfo::WorkSuitability' has a wrong offset!");

}

