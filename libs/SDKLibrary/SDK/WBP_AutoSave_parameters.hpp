#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AutoSave

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_AutoSave.WBP_AutoSave_C.DisplayFailedSaveNotice
// 0x0040 (0x0040 - 0x0000)
struct WBP_AutoSave_C_DisplayFailedSaveNotice final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BC4[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AutoSave_C_DisplayFailedSaveNotice) == 0x000008, "Wrong alignment on WBP_AutoSave_C_DisplayFailedSaveNotice");
static_assert(sizeof(WBP_AutoSave_C_DisplayFailedSaveNotice) == 0x000040, "Wrong size on WBP_AutoSave_C_DisplayFailedSaveNotice");
static_assert(offsetof(WBP_AutoSave_C_DisplayFailedSaveNotice, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_AutoSave_C_DisplayFailedSaveNotice::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_DisplayFailedSaveNotice, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_AutoSave_C_DisplayFailedSaveNotice::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_DisplayFailedSaveNotice, CallFunc_GetEndTime_ReturnValue) == 0x000018, "Member 'WBP_AutoSave_C_DisplayFailedSaveNotice::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_DisplayFailedSaveNotice, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_AutoSave_C_DisplayFailedSaveNotice::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_DisplayFailedSaveNotice, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'WBP_AutoSave_C_DisplayFailedSaveNotice::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_DisplayFailedSaveNotice, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'WBP_AutoSave_C_DisplayFailedSaveNotice::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_DisplayFailedSaveNotice, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000038, "Member 'WBP_AutoSave_C_DisplayFailedSaveNotice::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function WBP_AutoSave.WBP_AutoSave_C.EndSave
// 0x000C (0x000C - 0x0000)
struct WBP_AutoSave_C_EndSave final
{
public:
	class FName                                   SavingKey;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAllSaveCompleted_bCompleted;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AutoSave_C_EndSave) == 0x000004, "Wrong alignment on WBP_AutoSave_C_EndSave");
static_assert(sizeof(WBP_AutoSave_C_EndSave) == 0x00000C, "Wrong size on WBP_AutoSave_C_EndSave");
static_assert(offsetof(WBP_AutoSave_C_EndSave, SavingKey) == 0x000000, "Member 'WBP_AutoSave_C_EndSave::SavingKey' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_EndSave, Temp_bool_Variable) == 0x000008, "Member 'WBP_AutoSave_C_EndSave::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_EndSave, CallFunc_IsAllSaveCompleted_bCompleted) == 0x000009, "Member 'WBP_AutoSave_C_EndSave::CallFunc_IsAllSaveCompleted_bCompleted' has a wrong offset!");

// Function WBP_AutoSave.WBP_AutoSave_C.ExecuteUbergraph_WBP_AutoSave
// 0x0078 (0x0078 - 0x0000)
struct WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BC5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSaveGameManager*                    CallFunc_GetSaveGameManager_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BC6[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_InvalidateTimerHandle_ReturnValue;     // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UPalSaveGameManager*                    CallFunc_GetSaveGameManager_ReturnValue_1;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BC7[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsSuccess)>               K2Node_CreateDelegate_OutputDelegate_1;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsSuccess)>               K2Node_CreateDelegate_OutputDelegate_2;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsSuccess_1;                    // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsSuccess;                      // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave) == 0x000008, "Wrong alignment on WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave");
static_assert(sizeof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave) == 0x000078, "Wrong size on WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, EntryPoint) == 0x000000, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, CallFunc_GetSaveGameManager_ReturnValue) == 0x000010, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::CallFunc_GetSaveGameManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, CallFunc_K2_InvalidateTimerHandle_ReturnValue) == 0x000020, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::CallFunc_K2_InvalidateTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, CallFunc_GetSaveGameManager_ReturnValue_1) == 0x000028, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::CallFunc_GetSaveGameManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, K2Node_CreateDelegate_OutputDelegate_1) == 0x000044, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, K2Node_CreateDelegate_OutputDelegate_2) == 0x000054, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, K2Node_CreateDelegate_OutputDelegate_3) == 0x000064, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, K2Node_CustomEvent_IsSuccess_1) == 0x000074, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::K2Node_CustomEvent_IsSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, K2Node_CustomEvent_IsSuccess) == 0x000075, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::K2Node_CustomEvent_IsSuccess' has a wrong offset!");

// Function WBP_AutoSave.WBP_AutoSave_C.HideFailedSaveNotice
// 0x0008 (0x0008 - 0x0000)
struct WBP_AutoSave_C_HideFailedSaveNotice final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AutoSave_C_HideFailedSaveNotice) == 0x000008, "Wrong alignment on WBP_AutoSave_C_HideFailedSaveNotice");
static_assert(sizeof(WBP_AutoSave_C_HideFailedSaveNotice) == 0x000008, "Wrong size on WBP_AutoSave_C_HideFailedSaveNotice");
static_assert(offsetof(WBP_AutoSave_C_HideFailedSaveNotice, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WBP_AutoSave_C_HideFailedSaveNotice::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_AutoSave.WBP_AutoSave_C.IsAllSaveCompleted
// 0x0028 (0x0028 - 0x0000)
struct WBP_AutoSave_C_IsAllSaveCompleted final
{
public:
	bool                                          bCompleted;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BC8[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  CallFunc_Map_Values_Values;                        // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item;                           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AutoSave_C_IsAllSaveCompleted) == 0x000008, "Wrong alignment on WBP_AutoSave_C_IsAllSaveCompleted");
static_assert(sizeof(WBP_AutoSave_C_IsAllSaveCompleted) == 0x000028, "Wrong size on WBP_AutoSave_C_IsAllSaveCompleted");
static_assert(offsetof(WBP_AutoSave_C_IsAllSaveCompleted, bCompleted) == 0x000000, "Member 'WBP_AutoSave_C_IsAllSaveCompleted::bCompleted' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_IsAllSaveCompleted, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_AutoSave_C_IsAllSaveCompleted::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_IsAllSaveCompleted, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_AutoSave_C_IsAllSaveCompleted::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_IsAllSaveCompleted, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_AutoSave_C_IsAllSaveCompleted::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_IsAllSaveCompleted, CallFunc_Map_Values_Values) == 0x000010, "Member 'WBP_AutoSave_C_IsAllSaveCompleted::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_IsAllSaveCompleted, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WBP_AutoSave_C_IsAllSaveCompleted::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_IsAllSaveCompleted, CallFunc_Array_Get_Item) == 0x000024, "Member 'WBP_AutoSave_C_IsAllSaveCompleted::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_IsAllSaveCompleted, CallFunc_Less_IntInt_ReturnValue) == 0x000025, "Member 'WBP_AutoSave_C_IsAllSaveCompleted::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_AutoSave.WBP_AutoSave_C.OnEndedForceDisplayingTime
// 0x0008 (0x0008 - 0x0000)
struct WBP_AutoSave_C_OnEndedForceDisplayingTime final
{
public:
	struct FTimerHandle                           CallFunc_K2_InvalidateTimerHandle_ReturnValue;     // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AutoSave_C_OnEndedForceDisplayingTime) == 0x000008, "Wrong alignment on WBP_AutoSave_C_OnEndedForceDisplayingTime");
static_assert(sizeof(WBP_AutoSave_C_OnEndedForceDisplayingTime) == 0x000008, "Wrong size on WBP_AutoSave_C_OnEndedForceDisplayingTime");
static_assert(offsetof(WBP_AutoSave_C_OnEndedForceDisplayingTime, CallFunc_K2_InvalidateTimerHandle_ReturnValue) == 0x000000, "Member 'WBP_AutoSave_C_OnEndedForceDisplayingTime::CallFunc_K2_InvalidateTimerHandle_ReturnValue' has a wrong offset!");

// Function WBP_AutoSave.WBP_AutoSave_C.OnEndedLocalSave
// 0x0001 (0x0001 - 0x0000)
struct WBP_AutoSave_C_OnEndedLocalSave final
{
public:
	bool                                          IsSuccess;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AutoSave_C_OnEndedLocalSave) == 0x000001, "Wrong alignment on WBP_AutoSave_C_OnEndedLocalSave");
static_assert(sizeof(WBP_AutoSave_C_OnEndedLocalSave) == 0x000001, "Wrong size on WBP_AutoSave_C_OnEndedLocalSave");
static_assert(offsetof(WBP_AutoSave_C_OnEndedLocalSave, IsSuccess) == 0x000000, "Member 'WBP_AutoSave_C_OnEndedLocalSave::IsSuccess' has a wrong offset!");

// Function WBP_AutoSave.WBP_AutoSave_C.OnEndedWorldSave
// 0x0001 (0x0001 - 0x0000)
struct WBP_AutoSave_C_OnEndedWorldSave final
{
public:
	bool                                          IsSuccess;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AutoSave_C_OnEndedWorldSave) == 0x000001, "Wrong alignment on WBP_AutoSave_C_OnEndedWorldSave");
static_assert(sizeof(WBP_AutoSave_C_OnEndedWorldSave) == 0x000001, "Wrong size on WBP_AutoSave_C_OnEndedWorldSave");
static_assert(offsetof(WBP_AutoSave_C_OnEndedWorldSave, IsSuccess) == 0x000000, "Member 'WBP_AutoSave_C_OnEndedWorldSave::IsSuccess' has a wrong offset!");

// Function WBP_AutoSave.WBP_AutoSave_C.StartSaving
// 0x0038 (0x0038 - 0x0000)
struct WBP_AutoSave_C_StartSaving final
{
public:
	class FName                                   SavingKey;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BC9[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BCA[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_InvalidateTimerHandle_ReturnValue;     // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AutoSave_C_StartSaving) == 0x000008, "Wrong alignment on WBP_AutoSave_C_StartSaving");
static_assert(sizeof(WBP_AutoSave_C_StartSaving) == 0x000038, "Wrong size on WBP_AutoSave_C_StartSaving");
static_assert(offsetof(WBP_AutoSave_C_StartSaving, SavingKey) == 0x000000, "Member 'WBP_AutoSave_C_StartSaving::SavingKey' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_StartSaving, Temp_bool_Variable) == 0x000008, "Member 'WBP_AutoSave_C_StartSaving::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_StartSaving, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'WBP_AutoSave_C_StartSaving::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_StartSaving, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'WBP_AutoSave_C_StartSaving::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_StartSaving, CallFunc_K2_InvalidateTimerHandle_ReturnValue) == 0x000028, "Member 'WBP_AutoSave_C_StartSaving::CallFunc_K2_InvalidateTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_StartSaving, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000030, "Member 'WBP_AutoSave_C_StartSaving::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

}

