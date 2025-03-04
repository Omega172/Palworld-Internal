#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalCheatManager

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PalCheatManager.BP_PalCheatManager_C.DebugItemWindow
// 0x0018 (0x0018 - 0x0000)
struct BP_PalCheatManager_C_DebugItemWindow final
{
public:
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Push_ReturnValue;                         // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCheatManager_C_DebugItemWindow) == 0x000008, "Wrong alignment on BP_PalCheatManager_C_DebugItemWindow");
static_assert(sizeof(BP_PalCheatManager_C_DebugItemWindow) == 0x000018, "Wrong size on BP_PalCheatManager_C_DebugItemWindow");
static_assert(offsetof(BP_PalCheatManager_C_DebugItemWindow, CallFunc_GetHUDService_ReturnValue) == 0x000000, "Member 'BP_PalCheatManager_C_DebugItemWindow::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_DebugItemWindow, CallFunc_Push_ReturnValue) == 0x000008, "Member 'BP_PalCheatManager_C_DebugItemWindow::CallFunc_Push_ReturnValue' has a wrong offset!");

// Function BP_PalCheatManager.BP_PalCheatManager_C.ExecuteUbergraph_BP_PalCheatManager
// 0x0160 (0x0160 - 0x0000)
struct BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58AA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_IngameMenu_Task_Tutorial_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58AB[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58AC[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_Task_Tutorial_C*        CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                  CallFunc_GetPalMonsters_OutCharacters;             // 0x0050(0x0010)(ReferenceParm)
	class APalCharacter*                          CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58AD[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58AE[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_ControllerDebugInterface_C> K2Node_DynamicCast_AsBPI_Controller_Debug_Interface; // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58AF[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58B0[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APPSkyCreator_ControllerExample_C*      CallFunc_GetActorOfClass_ReturnValue;              // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58B1[0x5];                                     // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00C0(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PalDebugInfo_C*>            CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x0128(0x0010)(ReferenceParm, ContainsInstancedReference)
	class ABP_PalAdminSpectator_C*                CallFunc_FinishSpawningActor_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalDebugInfo_C*                    CallFunc_Array_Get_Item_2;                         // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58B2[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager) == 0x000010, "Wrong alignment on BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager");
static_assert(sizeof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager) == 0x000160, "Wrong size on BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, EntryPoint) == 0x000000, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000008, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, Temp_int_Loop_Counter_Variable_1) == 0x000024, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, Temp_byte_Variable) == 0x000030, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, Temp_int_Array_Index_Variable_1) == 0x000034, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, Temp_int_Loop_Counter_Variable_2) == 0x000038, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_Add_IntInt_ReturnValue_2) == 0x000040, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, Temp_int_Array_Index_Variable_2) == 0x000044, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_GetPalMonsters_OutCharacters) == 0x000050, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_GetPalMonsters_OutCharacters' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_Array_Length_ReturnValue_1) == 0x000068, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_GetController_ReturnValue) == 0x000070, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_Less_IntInt_ReturnValue_1) == 0x000078, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, K2Node_DynamicCast_AsBPI_Controller_Debug_Interface) == 0x000080, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::K2Node_DynamicCast_AsBPI_Controller_Debug_Interface' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_IsValid_ReturnValue) == 0x000091, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000098, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, Temp_byte_Variable_1) == 0x0000A0, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_GetActorOfClass_ReturnValue) == 0x0000A8, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, Temp_bool_Variable) == 0x0000B0, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_IsValid_ReturnValue_1) == 0x0000B1, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_Not_PreBool_ReturnValue) == 0x0000B2, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_GetPlayerController_ReturnValue) == 0x0000B8, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_GetTransform_ReturnValue) == 0x0000C0, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000120, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_GetAllWidgetsOfClass_FoundWidgets_1) == 0x000128, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_GetAllWidgetsOfClass_FoundWidgets_1' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_FinishSpawningActor_ReturnValue) == 0x000138, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_Array_Get_Item_2) == 0x000140, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_IsVisible_ReturnValue) == 0x000148, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_Array_Length_ReturnValue_2) == 0x00014C, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, CallFunc_Less_IntInt_ReturnValue_2) == 0x000150, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager, K2Node_Select_Default) == 0x000151, "Member 'BP_PalCheatManager_C_ExecuteUbergraph_BP_PalCheatManager::K2Node_Select_Default' has a wrong offset!");

// Function BP_PalCheatManager.BP_PalCheatManager_C.ToggleAllDebugInfo
// 0x0040 (0x0040 - 0x0000)
struct BP_PalCheatManager_C_ToggleAllDebugInfo final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58B3[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCheatManager_C_ToggleAllDebugInfo) == 0x000008, "Wrong alignment on BP_PalCheatManager_C_ToggleAllDebugInfo");
static_assert(sizeof(BP_PalCheatManager_C_ToggleAllDebugInfo) == 0x000040, "Wrong size on BP_PalCheatManager_C_ToggleAllDebugInfo");
static_assert(offsetof(BP_PalCheatManager_C_ToggleAllDebugInfo, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_PalCheatManager_C_ToggleAllDebugInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ToggleAllDebugInfo, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_PalCheatManager_C_ToggleAllDebugInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ToggleAllDebugInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_PalCheatManager_C_ToggleAllDebugInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ToggleAllDebugInfo, K2Node_MakeArray_Array) == 0x000010, "Member 'BP_PalCheatManager_C_ToggleAllDebugInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ToggleAllDebugInfo, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'BP_PalCheatManager_C_ToggleAllDebugInfo::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ToggleAllDebugInfo, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_PalCheatManager_C_ToggleAllDebugInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ToggleAllDebugInfo, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_PalCheatManager_C_ToggleAllDebugInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCheatManager_C_ToggleAllDebugInfo, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'BP_PalCheatManager_C_ToggleAllDebugInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

