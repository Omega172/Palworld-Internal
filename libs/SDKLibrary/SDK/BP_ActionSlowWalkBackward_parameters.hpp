#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionSlowWalkBackward

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.ExecuteUbergraph_BP_ActionSlowWalkBackward
// 0x01A0 (0x01A0 - 0x0000)
struct BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                Temp_byte_Variable;                                // 0x0098(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C6[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue;            // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Normal2D_ReturnValue;              // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue_1; // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue_2; // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_5;         // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_6;         // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0160(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C7[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_7;         // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue_3; // 0x0190(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C8[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast; // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward) == 0x000008, "Wrong alignment on BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward");
static_assert(sizeof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward) == 0x0001A0, "Wrong size on BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, EntryPoint) == 0x000000, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000010, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, K2Node_CustomEvent_NotifyName_4) == 0x000028, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, K2Node_CustomEvent_NotifyName_3) == 0x000030, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, K2Node_CustomEvent_NotifyName_2) == 0x000048, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, K2Node_CreateDelegate_OutputDelegate_2) == 0x000050, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, K2Node_CustomEvent_NotifyName_1) == 0x000060, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, K2Node_CreateDelegate_OutputDelegate_3) == 0x000068, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, K2Node_CustomEvent_NotifyName) == 0x000078, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, K2Node_CreateDelegate_OutputDelegate_4) == 0x000080, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, Temp_name_Variable) == 0x000090, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, Temp_byte_Variable) == 0x000098, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, K2Node_Event_DeltaTime) == 0x00009C, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetActionCharacter_ReturnValue_1) == 0x0000A0, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetTargetLocation_ReturnValue) == 0x0000A8, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000C0, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetActionCharacter_ReturnValue_2) == 0x0000D8, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000E0, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetComponentByClass_ReturnValue) == 0x0000F8, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_Vector_Normal2D_ReturnValue) == 0x000100, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_Vector_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetPalCharacterMovementComponent_ReturnValue_1) == 0x000118, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetPalCharacterMovementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000120, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetPalCharacterMovementComponent_ReturnValue_2) == 0x000128, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetPalCharacterMovementComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetActionCharacter_ReturnValue_4) == 0x000130, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetActorForwardVector_ReturnValue) == 0x000138, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetActionCharacter_ReturnValue_5) == 0x000150, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetActionCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetActionCharacter_ReturnValue_6) == 0x000158, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetActionCharacter_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000160, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetMainMesh_ReturnValue) == 0x000168, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_Map_Find_Value) == 0x000170, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_Map_Find_ReturnValue) == 0x000178, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetActionCharacter_ReturnValue_7) == 0x000180, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetActionCharacter_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000188, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_GetPalCharacterMovementComponent_ReturnValue_3) == 0x000190, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_GetPalCharacterMovementComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_IsValid_ReturnValue) == 0x000198, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward, CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast) == 0x00019C, "Member 'BP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward::CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast' has a wrong offset!");

// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.OnBlendOut_990D050E4901A391C8C8F78879A92A4F
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSlowWalkBackward_C_OnBlendOut_990D050E4901A391C8C8F78879A92A4F final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSlowWalkBackward_C_OnBlendOut_990D050E4901A391C8C8F78879A92A4F) == 0x000004, "Wrong alignment on BP_ActionSlowWalkBackward_C_OnBlendOut_990D050E4901A391C8C8F78879A92A4F");
static_assert(sizeof(BP_ActionSlowWalkBackward_C_OnBlendOut_990D050E4901A391C8C8F78879A92A4F) == 0x000008, "Wrong size on BP_ActionSlowWalkBackward_C_OnBlendOut_990D050E4901A391C8C8F78879A92A4F");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_OnBlendOut_990D050E4901A391C8C8F78879A92A4F, NotifyName) == 0x000000, "Member 'BP_ActionSlowWalkBackward_C_OnBlendOut_990D050E4901A391C8C8F78879A92A4F::NotifyName' has a wrong offset!");

// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.OnCompleted_990D050E4901A391C8C8F78879A92A4F
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSlowWalkBackward_C_OnCompleted_990D050E4901A391C8C8F78879A92A4F final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSlowWalkBackward_C_OnCompleted_990D050E4901A391C8C8F78879A92A4F) == 0x000004, "Wrong alignment on BP_ActionSlowWalkBackward_C_OnCompleted_990D050E4901A391C8C8F78879A92A4F");
static_assert(sizeof(BP_ActionSlowWalkBackward_C_OnCompleted_990D050E4901A391C8C8F78879A92A4F) == 0x000008, "Wrong size on BP_ActionSlowWalkBackward_C_OnCompleted_990D050E4901A391C8C8F78879A92A4F");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_OnCompleted_990D050E4901A391C8C8F78879A92A4F, NotifyName) == 0x000000, "Member 'BP_ActionSlowWalkBackward_C_OnCompleted_990D050E4901A391C8C8F78879A92A4F::NotifyName' has a wrong offset!");

// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.OnInterrupted_990D050E4901A391C8C8F78879A92A4F
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSlowWalkBackward_C_OnInterrupted_990D050E4901A391C8C8F78879A92A4F final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSlowWalkBackward_C_OnInterrupted_990D050E4901A391C8C8F78879A92A4F) == 0x000004, "Wrong alignment on BP_ActionSlowWalkBackward_C_OnInterrupted_990D050E4901A391C8C8F78879A92A4F");
static_assert(sizeof(BP_ActionSlowWalkBackward_C_OnInterrupted_990D050E4901A391C8C8F78879A92A4F) == 0x000008, "Wrong size on BP_ActionSlowWalkBackward_C_OnInterrupted_990D050E4901A391C8C8F78879A92A4F");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_OnInterrupted_990D050E4901A391C8C8F78879A92A4F, NotifyName) == 0x000000, "Member 'BP_ActionSlowWalkBackward_C_OnInterrupted_990D050E4901A391C8C8F78879A92A4F::NotifyName' has a wrong offset!");

// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.OnNotifyBegin_990D050E4901A391C8C8F78879A92A4F
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSlowWalkBackward_C_OnNotifyBegin_990D050E4901A391C8C8F78879A92A4F final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSlowWalkBackward_C_OnNotifyBegin_990D050E4901A391C8C8F78879A92A4F) == 0x000004, "Wrong alignment on BP_ActionSlowWalkBackward_C_OnNotifyBegin_990D050E4901A391C8C8F78879A92A4F");
static_assert(sizeof(BP_ActionSlowWalkBackward_C_OnNotifyBegin_990D050E4901A391C8C8F78879A92A4F) == 0x000008, "Wrong size on BP_ActionSlowWalkBackward_C_OnNotifyBegin_990D050E4901A391C8C8F78879A92A4F");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_OnNotifyBegin_990D050E4901A391C8C8F78879A92A4F, NotifyName) == 0x000000, "Member 'BP_ActionSlowWalkBackward_C_OnNotifyBegin_990D050E4901A391C8C8F78879A92A4F::NotifyName' has a wrong offset!");

// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.OnNotifyEnd_990D050E4901A391C8C8F78879A92A4F
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSlowWalkBackward_C_OnNotifyEnd_990D050E4901A391C8C8F78879A92A4F final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSlowWalkBackward_C_OnNotifyEnd_990D050E4901A391C8C8F78879A92A4F) == 0x000004, "Wrong alignment on BP_ActionSlowWalkBackward_C_OnNotifyEnd_990D050E4901A391C8C8F78879A92A4F");
static_assert(sizeof(BP_ActionSlowWalkBackward_C_OnNotifyEnd_990D050E4901A391C8C8F78879A92A4F) == 0x000008, "Wrong size on BP_ActionSlowWalkBackward_C_OnNotifyEnd_990D050E4901A391C8C8F78879A92A4F");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_OnNotifyEnd_990D050E4901A391C8C8F78879A92A4F, NotifyName) == 0x000000, "Member 'BP_ActionSlowWalkBackward_C_OnNotifyEnd_990D050E4901A391C8C8F78879A92A4F::NotifyName' has a wrong offset!");

// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionSlowWalkBackward_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSlowWalkBackward_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionSlowWalkBackward_C_TickAction");
static_assert(sizeof(BP_ActionSlowWalkBackward_C_TickAction) == 0x000004, "Wrong size on BP_ActionSlowWalkBackward_C_TickAction");
static_assert(offsetof(BP_ActionSlowWalkBackward_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionSlowWalkBackward_C_TickAction::DeltaTime' has a wrong offset!");

}

