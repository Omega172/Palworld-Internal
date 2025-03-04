#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerBase.BP_PlayerBase_C.BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C74[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_PlayerBase.BP_PlayerBase_C.BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_PlayerBase.BP_PlayerBase_C.BndEvt__BP_PlayerBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnJumpDelegate__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerBase_C_BndEvt__BP_PlayerBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnJumpDelegate__DelegateSignature final
{
public:
	class UPalCharacterMovementComponent*         Component;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnJumpDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_PlayerBase_C_BndEvt__BP_PlayerBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnJumpDelegate__DelegateSignature");
static_assert(sizeof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnJumpDelegate__DelegateSignature) == 0x000008, "Wrong size on BP_PlayerBase_C_BndEvt__BP_PlayerBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnJumpDelegate__DelegateSignature");
static_assert(offsetof(BP_PlayerBase_C_BndEvt__BP_PlayerBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnJumpDelegate__DelegateSignature, Component) == 0x000000, "Member 'BP_PlayerBase_C_BndEvt__BP_PlayerBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnJumpDelegate__DelegateSignature::Component' has a wrong offset!");

// Function BP_PlayerBase.BP_PlayerBase_C.ClearLantern
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerBase_C_ClearLantern final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerBase_C_ClearLantern) == 0x000001, "Wrong alignment on BP_PlayerBase_C_ClearLantern");
static_assert(sizeof(BP_PlayerBase_C_ClearLantern) == 0x000001, "Wrong size on BP_PlayerBase_C_ClearLantern");
static_assert(offsetof(BP_PlayerBase_C_ClearLantern, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_PlayerBase_C_ClearLantern::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PlayerBase.BP_PlayerBase_C.CreateLantern
// 0x0090 (0x0090 - 0x0000)
struct BP_PlayerBase_C_CreateLantern final
{
public:
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0000(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C75[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Lamp_C*                             CallFunc_FinishSpawningActor_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerBase_C_CreateLantern) == 0x000010, "Wrong alignment on BP_PlayerBase_C_CreateLantern");
static_assert(sizeof(BP_PlayerBase_C_CreateLantern) == 0x000090, "Wrong size on BP_PlayerBase_C_CreateLantern");
static_assert(offsetof(BP_PlayerBase_C_CreateLantern, CallFunc_MakeTransform_ReturnValue) == 0x000000, "Member 'BP_PlayerBase_C_CreateLantern::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_CreateLantern, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'BP_PlayerBase_C_CreateLantern::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_CreateLantern, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000068, "Member 'BP_PlayerBase_C_CreateLantern::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_CreateLantern, CallFunc_FinishSpawningActor_ReturnValue) == 0x000070, "Member 'BP_PlayerBase_C_CreateLantern::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_CreateLantern, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000078, "Member 'BP_PlayerBase_C_CreateLantern::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_CreateLantern, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000080, "Member 'BP_PlayerBase_C_CreateLantern::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

// Function BP_PlayerBase.BP_PlayerBase_C.ExecuteUbergraph_BP_PlayerBase
// 0x0218 (0x0218 - 0x0000)
struct BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C76[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class APalCharacter* InCharacter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 AddLevel, int32 NowLevel)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         K2Node_DynamicCast_AsNiagara_System;               // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C77[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDataTableRowName_SoundID           K2Node_MakeStruct_PalDataTableRowName_SoundID;     // 0x0044(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C78[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         K2Node_DynamicCast_AsPal_Character_Movement_Component; // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C79[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         K2Node_DynamicCast_AsPal_Character_Movement_Component_1; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C7A[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C7B[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffectForActor_ReturnValue;      // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C7C[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x00A8(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	ECollisionChannel                             CallFunc_GetCollisionObjectType_ReturnValue;       // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C7D[0x6];                                     // 0x0192(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0198(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionChannel                             CallFunc_GetCollisionObjectType_ReturnValue_1;     // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C7E[0x2];                                     // 0x01B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x01B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_CustomEvent_InCharacter;                    // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_addLevel;                       // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_nowLevel;                       // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C7F[0x3];                                     // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_4;            // 0x01DC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C80[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C81[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         K2Node_ComponentBoundEvent_component;              // 0x0200(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue; // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalSoundOptions                       K2Node_MakeStruct_PalSoundOptions;                 // 0x0210(0x0004)(NoDestructor)
};
static_assert(alignof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase) == 0x000008, "Wrong alignment on BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase");
static_assert(sizeof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase) == 0x000218, "Wrong size on BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, EntryPoint) == 0x000000, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_CustomEvent_Loaded) == 0x000018, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, Temp_object_Variable) == 0x000030, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_DynamicCast_AsNiagara_System) == 0x000038, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_DynamicCast_AsNiagara_System' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_MakeStruct_PalDataTableRowName_SoundID) == 0x000044, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_MakeStruct_PalDataTableRowName_SoundID' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_DynamicCast_AsPal_Character_Movement_Component) == 0x000050, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_DynamicCast_AsPal_Character_Movement_Component' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_DynamicCast_AsPal_Character_Movement_Component_1) == 0x000060, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_DynamicCast_AsPal_Character_Movement_Component_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_CreateDelegate_OutputDelegate_2) == 0x00006C, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, CallFunc_AddVisualEffectForActor_ReturnValue) == 0x000080, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::CallFunc_AddVisualEffectForActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000088, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000090, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000098, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x0000A0, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_ComponentBoundEvent_bFromSweep) == 0x0000A4, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_ComponentBoundEvent_SweepResult) == 0x0000A8, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, CallFunc_GetCollisionObjectType_ReturnValue) == 0x000190, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::CallFunc_GetCollisionObjectType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000191, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000198, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_ComponentBoundEvent_OtherActor) == 0x0001A0, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_ComponentBoundEvent_OtherComp) == 0x0001A8, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0001B0, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, CallFunc_GetCollisionObjectType_ReturnValue_1) == 0x0001B4, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::CallFunc_GetCollisionObjectType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001B5, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001B8, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_CustomEvent_InCharacter) == 0x0001C8, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_CustomEvent_InCharacter' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_CustomEvent_addLevel) == 0x0001D0, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_CustomEvent_addLevel' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_CustomEvent_nowLevel) == 0x0001D4, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_CustomEvent_nowLevel' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, CallFunc_IsValid_ReturnValue_1) == 0x0001D8, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001DC, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, CallFunc_SpawnSystemAttached_ReturnValue) == 0x0001F0, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_Event_EndPlayReason) == 0x0001F8, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_ComponentBoundEvent_component) == 0x000200, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_ComponentBoundEvent_component' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue) == 0x000208, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase, K2Node_MakeStruct_PalSoundOptions) == 0x000210, "Member 'BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase::K2Node_MakeStruct_PalSoundOptions' has a wrong offset!");

// Function BP_PlayerBase.BP_PlayerBase_C.OnCompleteInitializeParameterDelegate_����_0
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerBase_C_OnCompleteInitializeParameterDelegate______0 final
{
public:
	class APalCharacter*                          InCharacter;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerBase_C_OnCompleteInitializeParameterDelegate______0) == 0x000008, "Wrong alignment on BP_PlayerBase_C_OnCompleteInitializeParameterDelegate______0");
static_assert(sizeof(BP_PlayerBase_C_OnCompleteInitializeParameterDelegate______0) == 0x000008, "Wrong size on BP_PlayerBase_C_OnCompleteInitializeParameterDelegate______0");
static_assert(offsetof(BP_PlayerBase_C_OnCompleteInitializeParameterDelegate______0, InCharacter) == 0x000000, "Member 'BP_PlayerBase_C_OnCompleteInitializeParameterDelegate______0::InCharacter' has a wrong offset!");

// Function BP_PlayerBase.BP_PlayerBase_C.OnLoaded_02DA547E4C37CAA237537F82C5DB3211
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerBase_C_OnLoaded_02DA547E4C37CAA237537F82C5DB3211 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerBase_C_OnLoaded_02DA547E4C37CAA237537F82C5DB3211) == 0x000008, "Wrong alignment on BP_PlayerBase_C_OnLoaded_02DA547E4C37CAA237537F82C5DB3211");
static_assert(sizeof(BP_PlayerBase_C_OnLoaded_02DA547E4C37CAA237537F82C5DB3211) == 0x000008, "Wrong size on BP_PlayerBase_C_OnLoaded_02DA547E4C37CAA237537F82C5DB3211");
static_assert(offsetof(BP_PlayerBase_C_OnLoaded_02DA547E4C37CAA237537F82C5DB3211, Loaded) == 0x000000, "Member 'BP_PlayerBase_C_OnLoaded_02DA547E4C37CAA237537F82C5DB3211::Loaded' has a wrong offset!");

// Function BP_PlayerBase.BP_PlayerBase_C.OnUpdateLevelDelegate_����_0
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerBase_C_OnUpdateLevelDelegate______0 final
{
public:
	int32                                         AddLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowLevel;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerBase_C_OnUpdateLevelDelegate______0) == 0x000004, "Wrong alignment on BP_PlayerBase_C_OnUpdateLevelDelegate______0");
static_assert(sizeof(BP_PlayerBase_C_OnUpdateLevelDelegate______0) == 0x000008, "Wrong size on BP_PlayerBase_C_OnUpdateLevelDelegate______0");
static_assert(offsetof(BP_PlayerBase_C_OnUpdateLevelDelegate______0, AddLevel) == 0x000000, "Member 'BP_PlayerBase_C_OnUpdateLevelDelegate______0::AddLevel' has a wrong offset!");
static_assert(offsetof(BP_PlayerBase_C_OnUpdateLevelDelegate______0, NowLevel) == 0x000004, "Member 'BP_PlayerBase_C_OnUpdateLevelDelegate______0::NowLevel' has a wrong offset!");

// Function BP_PlayerBase.BP_PlayerBase_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerBase_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerBase_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_PlayerBase_C_ReceiveEndPlay");
static_assert(sizeof(BP_PlayerBase_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_PlayerBase_C_ReceiveEndPlay");
static_assert(offsetof(BP_PlayerBase_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_PlayerBase_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_PlayerBase.BP_PlayerBase_C.SetPlayerLightEnable
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerBase_C_SetPlayerLightEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerBase_C_SetPlayerLightEnable) == 0x000001, "Wrong alignment on BP_PlayerBase_C_SetPlayerLightEnable");
static_assert(sizeof(BP_PlayerBase_C_SetPlayerLightEnable) == 0x000001, "Wrong size on BP_PlayerBase_C_SetPlayerLightEnable");
static_assert(offsetof(BP_PlayerBase_C_SetPlayerLightEnable, IsEnable) == 0x000000, "Member 'BP_PlayerBase_C_SetPlayerLightEnable::IsEnable' has a wrong offset!");

}

