#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_StatusBuffTimerContainer

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_StatusBuffTimerContainer.WBP_StatusBuffTimerContainer_C.ExecuteUbergraph_WBP_StatusBuffTimerContainer
// 0x0440 (0x0440 - 0x0000)
struct WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<EPalFoodStatusEffectType>              CallFunc_Map_Keys_Keys;                            // 0x0018(0x0010)(ReferenceParm)
	class UWBP_InventoryEquipment_StatusBuffTimer_C* CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalFoodStatusEffectType                      CallFunc_Array_Get_Item;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E3A[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E3B[0x1];                                     // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value;                           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E3C[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       K2Node_CustomEvent_IndividualParam;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E3D[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetSaveParameter_ReturnValue;             // 0x0058(0x02E0)(ConstParm)
	bool                                          CallFunc_GetSaveParameterValue_IsPlayer_ReturnValue; // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E3E[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalFoodRegeneInfo                     CallFunc_GetRegeneItemName_ReturnValue;            // 0x0340(0x0020)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E3F[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalStatusEffectFoodDataRow            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0368(0x0028)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E40[0x3];                                     // 0x0391(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetEffectFoodName_ReturnValue;            // 0x0394(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E41[0x4];                                     // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalStatusEffectFoodDataRow            CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x03A0(0x0028)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x03C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E42[0x6];                                     // 0x03CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalFoodStatusEffectType, int32>         K2Node_MakeMap_Map;                                // 0x03D0(0x0050)()
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0420(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue_1;   // 0x0428(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_InventoryEquipment_StatusBuffTimer_C* CallFunc_Create_ReturnValue_1;                     // 0x0430(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue_1;    // 0x0438(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer) == 0x000008, "Wrong alignment on WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer");
static_assert(sizeof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer) == 0x000440, "Wrong size on WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, EntryPoint) == 0x000000, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000010, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Map_Keys_Keys) == 0x000018, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Create_ReturnValue) == 0x000028, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000038, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Less_IntInt_ReturnValue) == 0x000039, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00003A, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Map_Find_Value) == 0x00003C, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, K2Node_CustomEvent_IndividualParam) == 0x000048, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::K2Node_CustomEvent_IndividualParam' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetSaveParameter_ReturnValue) == 0x000058, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetSaveParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetSaveParameterValue_IsPlayer_ReturnValue) == 0x000338, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetSaveParameterValue_IsPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetRegeneItemName_ReturnValue) == 0x000340, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetRegeneItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_BooleanAND_ReturnValue) == 0x000360, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetDataTableRowFromName_OutRow) == 0x000368, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000390, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetEffectFoodName_ReturnValue) == 0x000394, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetEffectFoodName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0003A0, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0003C8, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0003C9, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, K2Node_MakeMap_Map) == 0x0003D0, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::K2Node_MakeMap_Map' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000420, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_GetLocalPlayerController_ReturnValue_1) == 0x000428, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_GetLocalPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_Create_ReturnValue_1) == 0x000430, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer, CallFunc_AddChildToHorizontalBox_ReturnValue_1) == 0x000438, "Member 'WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer::CallFunc_AddChildToHorizontalBox_ReturnValue_1' has a wrong offset!");

// Function WBP_StatusBuffTimerContainer.WBP_StatusBuffTimerContainer_C.UpdateCharacterBuff
// 0x0008 (0x0008 - 0x0000)
struct WBP_StatusBuffTimerContainer_C_UpdateCharacterBuff final
{
public:
	class UPalIndividualCharacterParameter*       IndividualParam;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StatusBuffTimerContainer_C_UpdateCharacterBuff) == 0x000008, "Wrong alignment on WBP_StatusBuffTimerContainer_C_UpdateCharacterBuff");
static_assert(sizeof(WBP_StatusBuffTimerContainer_C_UpdateCharacterBuff) == 0x000008, "Wrong size on WBP_StatusBuffTimerContainer_C_UpdateCharacterBuff");
static_assert(offsetof(WBP_StatusBuffTimerContainer_C_UpdateCharacterBuff, IndividualParam) == 0x000000, "Member 'WBP_StatusBuffTimerContainer_C_UpdateCharacterBuff::IndividualParam' has a wrong offset!");

}

