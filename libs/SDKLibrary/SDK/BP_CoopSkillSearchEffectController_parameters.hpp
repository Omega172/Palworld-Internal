#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CoopSkillSearchEffectController

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.ExecuteUbergraph_BP_CoopSkillSearchEffectController
// 0x0078 (0x0078 - 0x0000)
struct BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4764[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalCoopSkillSearchEffectParameter     K2Node_Event_EffectParam;                          // 0x0018(0x0040)(NoDestructor)
	float                                         K2Node_Event_DeltaTime;                            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4765[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_Select_Default;                             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEventAtLocation_ReturnValue;          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4766[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_ProcTick_DeltaTime_ImplicitCast;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController) == 0x000008, "Wrong alignment on BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController");
static_assert(sizeof(BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController) == 0x000078, "Wrong size on BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController, EntryPoint) == 0x000000, "Member 'BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController, Temp_bool_Variable) == 0x000004, "Member 'BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController, Temp_object_Variable) == 0x000008, "Member 'BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController, Temp_object_Variable_1) == 0x000010, "Member 'BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController, K2Node_Event_EffectParam) == 0x000018, "Member 'BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController::K2Node_Event_EffectParam' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController, K2Node_Event_DeltaTime) == 0x000058, "Member 'BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController, CallFunc_IsValid_ReturnValue) == 0x00005C, "Member 'BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController, K2Node_Select_Default) == 0x000060, "Member 'BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController, CallFunc_PostEventAtLocation_ReturnValue) == 0x000068, "Member 'BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController::CallFunc_PostEventAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController, CallFunc_ProcTick_DeltaTime_ImplicitCast) == 0x000070, "Member 'BP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController::CallFunc_ProcTick_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.ExtendEffect
// 0x0018 (0x0018 - 0x0000)
struct BP_CoopSkillSearchEffectController_C_ExtendEffect final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentSearchRadius;                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4767[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CoopSkillSearchEffectController_C_ExtendEffect) == 0x000008, "Wrong alignment on BP_CoopSkillSearchEffectController_C_ExtendEffect");
static_assert(sizeof(BP_CoopSkillSearchEffectController_C_ExtendEffect) == 0x000018, "Wrong size on BP_CoopSkillSearchEffectController_C_ExtendEffect");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ExtendEffect, DeltaTime) == 0x000000, "Member 'BP_CoopSkillSearchEffectController_C_ExtendEffect::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ExtendEffect, CurrentSearchRadius) == 0x000008, "Member 'BP_CoopSkillSearchEffectController_C_ExtendEffect::CurrentSearchRadius' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ExtendEffect, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_CoopSkillSearchEffectController_C_ExtendEffect::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ExtendEffect, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast) == 0x000014, "Member 'BP_CoopSkillSearchEffectController_C_ExtendEffect::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast' has a wrong offset!");

// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.FadeOut
// 0x0030 (0x0030 - 0x0000)
struct BP_CoopSkillSearchEffectController_C_FadeOut final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4768[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CoopSkillSearchEffectController_C_FadeOut) == 0x000008, "Wrong alignment on BP_CoopSkillSearchEffectController_C_FadeOut");
static_assert(sizeof(BP_CoopSkillSearchEffectController_C_FadeOut) == 0x000030, "Wrong size on BP_CoopSkillSearchEffectController_C_FadeOut");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_FadeOut, DeltaTime) == 0x000000, "Member 'BP_CoopSkillSearchEffectController_C_FadeOut::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_FadeOut, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_CoopSkillSearchEffectController_C_FadeOut::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_FadeOut, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_CoopSkillSearchEffectController_C_FadeOut::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_FadeOut, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_CoopSkillSearchEffectController_C_FadeOut::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_FadeOut, CallFunc_FMax_ReturnValue) == 0x000020, "Member 'BP_CoopSkillSearchEffectController_C_FadeOut::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_FadeOut, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_CoopSkillSearchEffectController_C_FadeOut::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_FadeOut, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast) == 0x00002C, "Member 'BP_CoopSkillSearchEffectController_C_FadeOut::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast' has a wrong offset!");

// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.GetCurrentSearchRadius
// 0x0020 (0x0020 - 0x0000)
struct BP_CoopSkillSearchEffectController_C_GetCurrentSearchRadius final
{
public:
	double                                        CurrentRadius;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CoopSkillSearchEffectController_C_GetCurrentSearchRadius) == 0x000008, "Wrong alignment on BP_CoopSkillSearchEffectController_C_GetCurrentSearchRadius");
static_assert(sizeof(BP_CoopSkillSearchEffectController_C_GetCurrentSearchRadius) == 0x000020, "Wrong size on BP_CoopSkillSearchEffectController_C_GetCurrentSearchRadius");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_GetCurrentSearchRadius, CurrentRadius) == 0x000000, "Member 'BP_CoopSkillSearchEffectController_C_GetCurrentSearchRadius::CurrentRadius' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_GetCurrentSearchRadius, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_CoopSkillSearchEffectController_C_GetCurrentSearchRadius::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_GetCurrentSearchRadius, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_CoopSkillSearchEffectController_C_GetCurrentSearchRadius::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_GetCurrentSearchRadius, CallFunc_FClamp_ReturnValue) == 0x000018, "Member 'BP_CoopSkillSearchEffectController_C_GetCurrentSearchRadius::CallFunc_FClamp_ReturnValue' has a wrong offset!");

// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.ProcStart
// 0x0088 (0x0088 - 0x0000)
struct BP_CoopSkillSearchEffectController_C_ProcStart final
{
public:
	struct FPalCoopSkillSearchEffectParameter     EffectParam;                                       // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                        CallFunc_BreakVector_X;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_SearchRadiusFrom_ImplicitCast;  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_SearchRadiusTo_ImplicitCast;    // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_ExtSearchRadiusPerSec_ImplicitCast; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_FadeOutSec_ImplicitCast;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1; // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2; // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CoopSkillSearchEffectController_C_ProcStart) == 0x000008, "Wrong alignment on BP_CoopSkillSearchEffectController_C_ProcStart");
static_assert(sizeof(BP_CoopSkillSearchEffectController_C_ProcStart) == 0x000088, "Wrong size on BP_CoopSkillSearchEffectController_C_ProcStart");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ProcStart, EffectParam) == 0x000000, "Member 'BP_CoopSkillSearchEffectController_C_ProcStart::EffectParam' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ProcStart, CallFunc_BreakVector_X) == 0x000040, "Member 'BP_CoopSkillSearchEffectController_C_ProcStart::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ProcStart, CallFunc_BreakVector_Y) == 0x000048, "Member 'BP_CoopSkillSearchEffectController_C_ProcStart::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ProcStart, CallFunc_BreakVector_Z) == 0x000050, "Member 'BP_CoopSkillSearchEffectController_C_ProcStart::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ProcStart, K2Node_VariableSet_SearchRadiusFrom_ImplicitCast) == 0x000058, "Member 'BP_CoopSkillSearchEffectController_C_ProcStart::K2Node_VariableSet_SearchRadiusFrom_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ProcStart, K2Node_VariableSet_SearchRadiusTo_ImplicitCast) == 0x000060, "Member 'BP_CoopSkillSearchEffectController_C_ProcStart::K2Node_VariableSet_SearchRadiusTo_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ProcStart, K2Node_VariableSet_ExtSearchRadiusPerSec_ImplicitCast) == 0x000068, "Member 'BP_CoopSkillSearchEffectController_C_ProcStart::K2Node_VariableSet_ExtSearchRadiusPerSec_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ProcStart, K2Node_VariableSet_FadeOutSec_ImplicitCast) == 0x000070, "Member 'BP_CoopSkillSearchEffectController_C_ProcStart::K2Node_VariableSet_FadeOutSec_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ProcStart, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast) == 0x000078, "Member 'BP_CoopSkillSearchEffectController_C_ProcStart::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ProcStart, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1) == 0x00007C, "Member 'BP_CoopSkillSearchEffectController_C_ProcStart::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ProcStart, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2) == 0x000080, "Member 'BP_CoopSkillSearchEffectController_C_ProcStart::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2' has a wrong offset!");

// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.ProcTick
// 0x0020 (0x0020 - 0x0000)
struct BP_CoopSkillSearchEffectController_C_ProcTick final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFinished_ReturnValue;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4769[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetCurrentSearchRadius_CurrentRadius;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CoopSkillSearchEffectController_C_ProcTick) == 0x000008, "Wrong alignment on BP_CoopSkillSearchEffectController_C_ProcTick");
static_assert(sizeof(BP_CoopSkillSearchEffectController_C_ProcTick) == 0x000020, "Wrong size on BP_CoopSkillSearchEffectController_C_ProcTick");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ProcTick, DeltaTime) == 0x000000, "Member 'BP_CoopSkillSearchEffectController_C_ProcTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ProcTick, CallFunc_IsFinished_ReturnValue) == 0x000008, "Member 'BP_CoopSkillSearchEffectController_C_ProcTick::CallFunc_IsFinished_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ProcTick, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_CoopSkillSearchEffectController_C_ProcTick::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_ProcTick, CallFunc_GetCurrentSearchRadius_CurrentRadius) == 0x000018, "Member 'BP_CoopSkillSearchEffectController_C_ProcTick::CallFunc_GetCurrentSearchRadius_CurrentRadius' has a wrong offset!");

// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.Start
// 0x0040 (0x0040 - 0x0000)
struct BP_CoopSkillSearchEffectController_C_Start final
{
public:
	struct FPalCoopSkillSearchEffectParameter     EffectParam;                                       // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_CoopSkillSearchEffectController_C_Start) == 0x000008, "Wrong alignment on BP_CoopSkillSearchEffectController_C_Start");
static_assert(sizeof(BP_CoopSkillSearchEffectController_C_Start) == 0x000040, "Wrong size on BP_CoopSkillSearchEffectController_C_Start");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_Start, EffectParam) == 0x000000, "Member 'BP_CoopSkillSearchEffectController_C_Start::EffectParam' has a wrong offset!");

// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.Tick
// 0x0004 (0x0004 - 0x0000)
struct BP_CoopSkillSearchEffectController_C_Tick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CoopSkillSearchEffectController_C_Tick) == 0x000004, "Wrong alignment on BP_CoopSkillSearchEffectController_C_Tick");
static_assert(sizeof(BP_CoopSkillSearchEffectController_C_Tick) == 0x000004, "Wrong size on BP_CoopSkillSearchEffectController_C_Tick");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_Tick, DeltaTime) == 0x000000, "Member 'BP_CoopSkillSearchEffectController_C_Tick::DeltaTime' has a wrong offset!");

// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.IsFadingOut
// 0x0003 (0x0003 - 0x0000)
struct BP_CoopSkillSearchEffectController_C_IsFadingOut final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRunning_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CoopSkillSearchEffectController_C_IsFadingOut) == 0x000001, "Wrong alignment on BP_CoopSkillSearchEffectController_C_IsFadingOut");
static_assert(sizeof(BP_CoopSkillSearchEffectController_C_IsFadingOut) == 0x000003, "Wrong size on BP_CoopSkillSearchEffectController_C_IsFadingOut");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_IsFadingOut, ReturnValue) == 0x000000, "Member 'BP_CoopSkillSearchEffectController_C_IsFadingOut::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_IsFadingOut, CallFunc_IsRunning_ReturnValue) == 0x000001, "Member 'BP_CoopSkillSearchEffectController_C_IsFadingOut::CallFunc_IsRunning_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_IsFadingOut, CallFunc_BooleanAND_ReturnValue) == 0x000002, "Member 'BP_CoopSkillSearchEffectController_C_IsFadingOut::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.IsFinished
// 0x0004 (0x0004 - 0x0000)
struct BP_CoopSkillSearchEffectController_C_IsFinished final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CoopSkillSearchEffectController_C_IsFinished) == 0x000001, "Wrong alignment on BP_CoopSkillSearchEffectController_C_IsFinished");
static_assert(sizeof(BP_CoopSkillSearchEffectController_C_IsFinished) == 0x000004, "Wrong size on BP_CoopSkillSearchEffectController_C_IsFinished");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_IsFinished, ReturnValue) == 0x000000, "Member 'BP_CoopSkillSearchEffectController_C_IsFinished::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_IsFinished, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BP_CoopSkillSearchEffectController_C_IsFinished::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_IsFinished, CallFunc_Not_PreBool_ReturnValue_1) == 0x000002, "Member 'BP_CoopSkillSearchEffectController_C_IsFinished::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_IsFinished, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'BP_CoopSkillSearchEffectController_C_IsFinished::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.IsRunning
// 0x0002 (0x0002 - 0x0000)
struct BP_CoopSkillSearchEffectController_C_IsRunning final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CoopSkillSearchEffectController_C_IsRunning) == 0x000001, "Wrong alignment on BP_CoopSkillSearchEffectController_C_IsRunning");
static_assert(sizeof(BP_CoopSkillSearchEffectController_C_IsRunning) == 0x000002, "Wrong size on BP_CoopSkillSearchEffectController_C_IsRunning");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_IsRunning, ReturnValue) == 0x000000, "Member 'BP_CoopSkillSearchEffectController_C_IsRunning::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoopSkillSearchEffectController_C_IsRunning, CallFunc_BooleanOR_ReturnValue) == 0x000001, "Member 'BP_CoopSkillSearchEffectController_C_IsRunning::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

