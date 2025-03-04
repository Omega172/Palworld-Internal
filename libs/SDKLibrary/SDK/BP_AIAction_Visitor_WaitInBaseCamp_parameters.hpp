#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Visitor_WaitInBaseCamp

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_Visitor_WaitInBaseCamp.BP_AIAction_Visitor_WaitInBaseCamp_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Visitor_WaitInBaseCamp_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Visitor_WaitInBaseCamp_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_Visitor_WaitInBaseCamp_C_ActionStart");
static_assert(sizeof(BP_AIAction_Visitor_WaitInBaseCamp_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_Visitor_WaitInBaseCamp_C_ActionStart");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_Visitor_WaitInBaseCamp.BP_AIAction_Visitor_WaitInBaseCamp_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_Visitor_WaitInBaseCamp_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Visitor_WaitInBaseCamp_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_Visitor_WaitInBaseCamp_C_ActionTick");
static_assert(sizeof(BP_AIAction_Visitor_WaitInBaseCamp_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_Visitor_WaitInBaseCamp_C_ActionTick");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_Visitor_WaitInBaseCamp.BP_AIAction_Visitor_WaitInBaseCamp_C.ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp
// 0x0048 (0x0048 - 0x0000)
struct BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A3F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A40[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A41[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp) == 0x000008, "Wrong alignment on BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp");
static_assert(sizeof(BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp) == 0x000048, "Wrong size on BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp, EntryPoint) == 0x000000, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp, K2Node_Event_ControlledPawn) == 0x000008, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp, K2Node_Event_ControlledPawn_1) == 0x000018, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000028, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_AIAction_Visitor_WaitInBaseCamp.BP_AIAction_Visitor_WaitInBaseCamp_C.SightCheck
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_Visitor_WaitInBaseCamp_C_SightCheck final
{
public:
	EPalAIResponseType                            CurrentState;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OverrideIsDamage;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A42[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Target;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalAIResponseType                            ResponseType;                                      // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Visitor_WaitInBaseCamp_C_SightCheck) == 0x000008, "Wrong alignment on BP_AIAction_Visitor_WaitInBaseCamp_C_SightCheck");
static_assert(sizeof(BP_AIAction_Visitor_WaitInBaseCamp_C_SightCheck) == 0x000018, "Wrong size on BP_AIAction_Visitor_WaitInBaseCamp_C_SightCheck");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_SightCheck, CurrentState) == 0x000000, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_SightCheck::CurrentState' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_SightCheck, OverrideIsDamage) == 0x000001, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_SightCheck::OverrideIsDamage' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_SightCheck, Target) == 0x000008, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_SightCheck::Target' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_WaitInBaseCamp_C_SightCheck, ResponseType) == 0x000010, "Member 'BP_AIAction_Visitor_WaitInBaseCamp_C_SightCheck::ResponseType' has a wrong offset!");

}

