#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CopyMesh_ReturnToBallEmissive

#include "Basic.hpp"

#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_CopyMesh_ReturnToBallEmissive.BP_CopyMesh_ReturnToBallEmissive_C.ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive
// 0x00A0 (0x00A0 - 0x0000)
struct BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_561E[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                CallFunc_GetAllMesh_OutComponent;                  // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_561F[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2;  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5620[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5621[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5622[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive) == 0x000008, "Wrong alignment on BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive");
static_assert(sizeof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive) == 0x0000A0, "Wrong size on BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, EntryPoint) == 0x000000, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, Temp_bool_Has_Been_Initd_Variable) == 0x000005, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_GetAllMesh_OutComponent) == 0x000008, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_GetAllMesh_OutComponent' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000028, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000034, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_Less_IntInt_ReturnValue) == 0x000035, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x00003C, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2) == 0x00003D, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000048, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_FClamp_ReturnValue) == 0x000050, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000058, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_FClamp_ReturnValue_1) == 0x000060, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_Lerp_ReturnValue) == 0x000068, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, K2Node_Event_DeltaSeconds) == 0x000070, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000078, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000080, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_Delay_Duration_ImplicitCast) == 0x000088, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000090, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000098, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BP_CopyMesh_ReturnToBallEmissive.BP_CopyMesh_ReturnToBallEmissive_C.PlayPalReturnSound
// 0x0014 (0x0014 - 0x0000)
struct BP_CopyMesh_ReturnToBallEmissive_C_PlayPalReturnSound final
{
public:
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0000(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CopyMesh_ReturnToBallEmissive_C_PlayPalReturnSound) == 0x000004, "Wrong alignment on BP_CopyMesh_ReturnToBallEmissive_C_PlayPalReturnSound");
static_assert(sizeof(BP_CopyMesh_ReturnToBallEmissive_C_PlayPalReturnSound) == 0x000014, "Wrong size on BP_CopyMesh_ReturnToBallEmissive_C_PlayPalReturnSound");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_PlayPalReturnSound, Temp_delegate_Variable) == 0x000000, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_PlayPalReturnSound::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_PlayPalReturnSound, CallFunc_PostEvent_ReturnValue) == 0x000010, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_PlayPalReturnSound::CallFunc_PostEvent_ReturnValue' has a wrong offset!");

// Function BP_CopyMesh_ReturnToBallEmissive.BP_CopyMesh_ReturnToBallEmissive_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_CopyMesh_ReturnToBallEmissive_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CopyMesh_ReturnToBallEmissive_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_CopyMesh_ReturnToBallEmissive_C_ReceiveTick");
static_assert(sizeof(BP_CopyMesh_ReturnToBallEmissive_C_ReceiveTick) == 0x000004, "Wrong size on BP_CopyMesh_ReturnToBallEmissive_C_ReceiveTick");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_CopyMesh_ReturnToBallEmissive.BP_CopyMesh_ReturnToBallEmissive_C.SetEmission
// 0x0040 (0x0040 - 0x0000)
struct BP_CopyMesh_ReturnToBallEmissive_C_SetEmission final
{
public:
	double                                        Value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5623[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       CallFunc_GetMainMeshMaterials_ReturnValue;         // 0x0018(0x0010)(ReferenceParm)
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5624[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CopyMesh_ReturnToBallEmissive_C_SetEmission) == 0x000008, "Wrong alignment on BP_CopyMesh_ReturnToBallEmissive_C_SetEmission");
static_assert(sizeof(BP_CopyMesh_ReturnToBallEmissive_C_SetEmission) == 0x000040, "Wrong size on BP_CopyMesh_ReturnToBallEmissive_C_SetEmission");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetEmission, Value) == 0x000000, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetEmission::Value' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetEmission, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetEmission::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetEmission, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetEmission::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetEmission, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetEmission::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetEmission, CallFunc_GetMainMeshMaterials_ReturnValue) == 0x000018, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetEmission::CallFunc_GetMainMeshMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetEmission, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetEmission::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetEmission, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetEmission::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetEmission, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetEmission::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetEmission, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000038, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetEmission::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

// Function BP_CopyMesh_ReturnToBallEmissive.BP_CopyMesh_ReturnToBallEmissive_C.SetFade
// 0x0040 (0x0040 - 0x0000)
struct BP_CopyMesh_ReturnToBallEmissive_C_SetFade final
{
public:
	double                                        Value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5625[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       CallFunc_GetMainMeshMaterials_ReturnValue;         // 0x0018(0x0010)(ReferenceParm)
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5626[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CopyMesh_ReturnToBallEmissive_C_SetFade) == 0x000008, "Wrong alignment on BP_CopyMesh_ReturnToBallEmissive_C_SetFade");
static_assert(sizeof(BP_CopyMesh_ReturnToBallEmissive_C_SetFade) == 0x000040, "Wrong size on BP_CopyMesh_ReturnToBallEmissive_C_SetFade");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetFade, Value) == 0x000000, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetFade::Value' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetFade, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetFade::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetFade, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetFade::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetFade, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetFade::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetFade, CallFunc_GetMainMeshMaterials_ReturnValue) == 0x000018, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetFade::CallFunc_GetMainMeshMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetFade, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetFade::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetFade, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetFade::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetFade, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetFade::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CopyMesh_ReturnToBallEmissive_C_SetFade, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000038, "Member 'BP_CopyMesh_ReturnToBallEmissive_C_SetFade::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

}

