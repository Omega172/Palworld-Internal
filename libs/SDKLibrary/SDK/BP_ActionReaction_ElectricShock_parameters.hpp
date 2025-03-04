#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionReaction_ElectricShock

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.ChangeFacial
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionReaction_ElectricShock_C_ChangeFacial final
{
public:
	EPalFacialEyeType                             Eye;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48CD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionReaction_ElectricShock_C_ChangeFacial) == 0x000008, "Wrong alignment on BP_ActionReaction_ElectricShock_C_ChangeFacial");
static_assert(sizeof(BP_ActionReaction_ElectricShock_C_ChangeFacial) == 0x000020, "Wrong size on BP_ActionReaction_ElectricShock_C_ChangeFacial");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ChangeFacial, Eye) == 0x000000, "Member 'BP_ActionReaction_ElectricShock_C_ChangeFacial::Eye' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ChangeFacial, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionReaction_ElectricShock_C_ChangeFacial::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ChangeFacial, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_ActionReaction_ElectricShock_C_ChangeFacial::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ChangeFacial, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_ActionReaction_ElectricShock_C_ChangeFacial::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.ExecuteUbergraph_BP_ActionReaction_ElectricShock
// 0x00A8 (0x00A8 - 0x0000)
struct BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48CE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48CF[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_NewParam;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_NewParam_1;                   // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimMontage_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48D0[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_NewParam_2;                   // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48D1[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_PlayAnimMontage_ReturnValue_1;            // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_NewParam_3;                   // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ExistFacialNotifyInMontage_ReturnValue;   // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48D2[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock) == 0x000008, "Wrong alignment on BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock");
static_assert(sizeof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock) == 0x0000A8, "Wrong size on BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, EntryPoint) == 0x000000, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, K2Node_Event_DeltaTime) == 0x000010, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000020, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_GetMainMesh_ReturnValue) == 0x000028, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_BreakVector_X) == 0x000030, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_BreakVector_Y) == 0x000038, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_BreakVector_Z) == 0x000040, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_FindMontage_NewParam) == 0x000048, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_FindMontage_NewParam' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_FindMontage_NewParam_1) == 0x000050, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_FindMontage_NewParam_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_PlayAnimMontage_ReturnValue) == 0x000058, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000060, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000068, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_FindMontage_NewParam_2) == 0x000070, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_FindMontage_NewParam_2' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_PlayAnimMontage_ReturnValue_1) == 0x00007C, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_PlayAnimMontage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_GetActionCharacter_ReturnValue_4) == 0x000080, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_FindMontage_NewParam_3) == 0x000088, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_FindMontage_NewParam_3' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_GetComponentByClass_ReturnValue) == 0x000090, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_IsValid_ReturnValue_1) == 0x000098, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_ExistFacialNotifyInMontage_ReturnValue) == 0x000099, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_ExistFacialNotifyInMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x0000A0, "Member 'BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.FindMontage
// 0x0030 (0x0030 - 0x0000)
struct BP_ActionReaction_ElectricShock_C_FindMontage final
{
public:
	class UAnimMontage*                           NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                Temp_byte_Variable;                                // 0x0008(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48D3[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionReaction_ElectricShock_C_FindMontage) == 0x000008, "Wrong alignment on BP_ActionReaction_ElectricShock_C_FindMontage");
static_assert(sizeof(BP_ActionReaction_ElectricShock_C_FindMontage) == 0x000030, "Wrong size on BP_ActionReaction_ElectricShock_C_FindMontage");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_FindMontage, NewParam) == 0x000000, "Member 'BP_ActionReaction_ElectricShock_C_FindMontage::NewParam' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_FindMontage, Temp_byte_Variable) == 0x000008, "Member 'BP_ActionReaction_ElectricShock_C_FindMontage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_FindMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionReaction_ElectricShock_C_FindMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_FindMontage, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_ActionReaction_ElectricShock_C_FindMontage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_FindMontage, CallFunc_Map_Find_Value) == 0x000020, "Member 'BP_ActionReaction_ElectricShock_C_FindMontage::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_FindMontage, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'BP_ActionReaction_ElectricShock_C_FindMontage::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.ResetMeshLocation
// 0x0110 (0x0110 - 0x0000)
struct BP_ActionReaction_ElectricShock_C_ResetMeshLocation final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0028(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ActionReaction_ElectricShock_C_ResetMeshLocation) == 0x000008, "Wrong alignment on BP_ActionReaction_ElectricShock_C_ResetMeshLocation");
static_assert(sizeof(BP_ActionReaction_ElectricShock_C_ResetMeshLocation) == 0x000110, "Wrong size on BP_ActionReaction_ElectricShock_C_ResetMeshLocation");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ResetMeshLocation, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_ActionReaction_ElectricShock_C_ResetMeshLocation::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ResetMeshLocation, CallFunc_MakeVector_ReturnValue) == 0x000008, "Member 'BP_ActionReaction_ElectricShock_C_ResetMeshLocation::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ResetMeshLocation, CallFunc_GetMainMesh_ReturnValue) == 0x000020, "Member 'BP_ActionReaction_ElectricShock_C_ResetMeshLocation::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_ResetMeshLocation, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000028, "Member 'BP_ActionReaction_ElectricShock_C_ResetMeshLocation::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.SetDisable
// 0x0068 (0x0068 - 0x0000)
struct BP_ActionReaction_ElectricShock_C_SetDisable final
{
public:
	bool                                          Disable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48D4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalShooterComponent*                   Shooter;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Rate;                                              // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         Movement;                                          // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48D5[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLookAtComponent*                    CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast; // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast; // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionReaction_ElectricShock_C_SetDisable) == 0x000008, "Wrong alignment on BP_ActionReaction_ElectricShock_C_SetDisable");
static_assert(sizeof(BP_ActionReaction_ElectricShock_C_SetDisable) == 0x000068, "Wrong size on BP_ActionReaction_ElectricShock_C_SetDisable");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_SetDisable, Disable) == 0x000000, "Member 'BP_ActionReaction_ElectricShock_C_SetDisable::Disable' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_SetDisable, Shooter) == 0x000008, "Member 'BP_ActionReaction_ElectricShock_C_SetDisable::Shooter' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_SetDisable, Rate) == 0x000010, "Member 'BP_ActionReaction_ElectricShock_C_SetDisable::Rate' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_SetDisable, Movement) == 0x000018, "Member 'BP_ActionReaction_ElectricShock_C_SetDisable::Movement' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_SetDisable, FlagName) == 0x000020, "Member 'BP_ActionReaction_ElectricShock_C_SetDisable::FlagName' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_SetDisable, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_ActionReaction_ElectricShock_C_SetDisable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_SetDisable, CallFunc_GetActionCharacter_ReturnValue) == 0x000030, "Member 'BP_ActionReaction_ElectricShock_C_SetDisable::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_SetDisable, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BP_ActionReaction_ElectricShock_C_SetDisable::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_SetDisable, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000040, "Member 'BP_ActionReaction_ElectricShock_C_SetDisable::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_SetDisable, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000048, "Member 'BP_ActionReaction_ElectricShock_C_SetDisable::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_SetDisable, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000050, "Member 'BP_ActionReaction_ElectricShock_C_SetDisable::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_SetDisable, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000058, "Member 'BP_ActionReaction_ElectricShock_C_SetDisable::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_SetDisable, CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast) == 0x000060, "Member 'BP_ActionReaction_ElectricShock_C_SetDisable::CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_SetDisable, CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast) == 0x000064, "Member 'BP_ActionReaction_ElectricShock_C_SetDisable::CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast' has a wrong offset!");

// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionReaction_ElectricShock_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionReaction_ElectricShock_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionReaction_ElectricShock_C_TickAction");
static_assert(sizeof(BP_ActionReaction_ElectricShock_C_TickAction) == 0x000004, "Wrong size on BP_ActionReaction_ElectricShock_C_TickAction");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionReaction_ElectricShock_C_TickAction::DeltaTime' has a wrong offset!");

// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.UpdateMeshLocation
// 0x0168 (0x0168 - 0x0000)
struct BP_ActionReaction_ElectricShock_C_UpdateMeshLocation final
{
public:
	double                                        Gain_Right;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Timer_Right;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Cos_ReturnValue;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Sin_ReturnValue;                          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0068(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Map_Find_Value;                           // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48D6[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation) == 0x000008, "Wrong alignment on BP_ActionReaction_ElectricShock_C_UpdateMeshLocation");
static_assert(sizeof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation) == 0x000168, "Wrong size on BP_ActionReaction_ElectricShock_C_UpdateMeshLocation");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation, Gain_Right) == 0x000000, "Member 'BP_ActionReaction_ElectricShock_C_UpdateMeshLocation::Gain_Right' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation, Timer_Right) == 0x000008, "Member 'BP_ActionReaction_ElectricShock_C_UpdateMeshLocation::Timer_Right' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation, CallFunc_Cos_ReturnValue) == 0x000010, "Member 'BP_ActionReaction_ElectricShock_C_UpdateMeshLocation::CallFunc_Cos_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation, CallFunc_Sin_ReturnValue) == 0x000018, "Member 'BP_ActionReaction_ElectricShock_C_UpdateMeshLocation::CallFunc_Sin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_ActionReaction_ElectricShock_C_UpdateMeshLocation::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000028, "Member 'BP_ActionReaction_ElectricShock_C_UpdateMeshLocation::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation, CallFunc_MakeVector_ReturnValue) == 0x000030, "Member 'BP_ActionReaction_ElectricShock_C_UpdateMeshLocation::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation, CallFunc_GetActionCharacter_ReturnValue) == 0x000048, "Member 'BP_ActionReaction_ElectricShock_C_UpdateMeshLocation::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000050, "Member 'BP_ActionReaction_ElectricShock_C_UpdateMeshLocation::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation, CallFunc_GetMainMesh_ReturnValue) == 0x000058, "Member 'BP_ActionReaction_ElectricShock_C_UpdateMeshLocation::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation, CallFunc_GetComponentByClass_ReturnValue) == 0x000060, "Member 'BP_ActionReaction_ElectricShock_C_UpdateMeshLocation::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000068, "Member 'BP_ActionReaction_ElectricShock_C_UpdateMeshLocation::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation, CallFunc_Map_Find_Value) == 0x000150, "Member 'BP_ActionReaction_ElectricShock_C_UpdateMeshLocation::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation, CallFunc_Map_Find_ReturnValue) == 0x000158, "Member 'BP_ActionReaction_ElectricShock_C_UpdateMeshLocation::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReaction_ElectricShock_C_UpdateMeshLocation, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000160, "Member 'BP_ActionReaction_ElectricShock_C_UpdateMeshLocation::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");

}

