#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AttackBulletBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AttackBulletBase.BP_AttackBulletBase_C.ExecuteUbergraph_BP_AttackBulletBase
// 0x0008 (0x0008 - 0x0000)
struct BP_AttackBulletBase_C_ExecuteUbergraph_BP_AttackBulletBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackBulletBase_C_ExecuteUbergraph_BP_AttackBulletBase) == 0x000004, "Wrong alignment on BP_AttackBulletBase_C_ExecuteUbergraph_BP_AttackBulletBase");
static_assert(sizeof(BP_AttackBulletBase_C_ExecuteUbergraph_BP_AttackBulletBase) == 0x000008, "Wrong size on BP_AttackBulletBase_C_ExecuteUbergraph_BP_AttackBulletBase");
static_assert(offsetof(BP_AttackBulletBase_C_ExecuteUbergraph_BP_AttackBulletBase, EntryPoint) == 0x000000, "Member 'BP_AttackBulletBase_C_ExecuteUbergraph_BP_AttackBulletBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_ExecuteUbergraph_BP_AttackBulletBase, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_AttackBulletBase_C_ExecuteUbergraph_BP_AttackBulletBase::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_AttackBulletBase.BP_AttackBulletBase_C.GetBulletAttackType
// 0x0001 (0x0001 - 0x0000)
struct BP_AttackBulletBase_C_GetBulletAttackType final
{
public:
	EPalAttackType                                AttackType;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackBulletBase_C_GetBulletAttackType) == 0x000001, "Wrong alignment on BP_AttackBulletBase_C_GetBulletAttackType");
static_assert(sizeof(BP_AttackBulletBase_C_GetBulletAttackType) == 0x000001, "Wrong size on BP_AttackBulletBase_C_GetBulletAttackType");
static_assert(offsetof(BP_AttackBulletBase_C_GetBulletAttackType, AttackType) == 0x000000, "Member 'BP_AttackBulletBase_C_GetBulletAttackType::AttackType' has a wrong offset!");

// Function BP_AttackBulletBase.BP_AttackBulletBase_C.GetBulletElementType
// 0x0001 (0x0001 - 0x0000)
struct BP_AttackBulletBase_C_GetBulletElementType final
{
public:
	EPalElementType                               NewParam;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackBulletBase_C_GetBulletElementType) == 0x000001, "Wrong alignment on BP_AttackBulletBase_C_GetBulletElementType");
static_assert(sizeof(BP_AttackBulletBase_C_GetBulletElementType) == 0x000001, "Wrong size on BP_AttackBulletBase_C_GetBulletElementType");
static_assert(offsetof(BP_AttackBulletBase_C_GetBulletElementType, NewParam) == 0x000000, "Member 'BP_AttackBulletBase_C_GetBulletElementType::NewParam' has a wrong offset!");

// Function BP_AttackBulletBase.BP_AttackBulletBase_C.GetEffectType
// 0x0001 (0x0001 - 0x0000)
struct BP_AttackBulletBase_C_GetEffectType final
{
public:
	EPalAdditionalEffectType                      Effect;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackBulletBase_C_GetEffectType) == 0x000001, "Wrong alignment on BP_AttackBulletBase_C_GetEffectType");
static_assert(sizeof(BP_AttackBulletBase_C_GetEffectType) == 0x000001, "Wrong size on BP_AttackBulletBase_C_GetEffectType");
static_assert(offsetof(BP_AttackBulletBase_C_GetEffectType, Effect) == 0x000000, "Member 'BP_AttackBulletBase_C_GetEffectType::Effect' has a wrong offset!");

// Function BP_AttackBulletBase.BP_AttackBulletBase_C.GetEffectValue
// 0x0004 (0x0004 - 0x0000)
struct BP_AttackBulletBase_C_GetEffectValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackBulletBase_C_GetEffectValue) == 0x000004, "Wrong alignment on BP_AttackBulletBase_C_GetEffectValue");
static_assert(sizeof(BP_AttackBulletBase_C_GetEffectValue) == 0x000004, "Wrong size on BP_AttackBulletBase_C_GetEffectValue");
static_assert(offsetof(BP_AttackBulletBase_C_GetEffectValue, Value) == 0x000000, "Member 'BP_AttackBulletBase_C_GetEffectValue::Value' has a wrong offset!");

// Function BP_AttackBulletBase.BP_AttackBulletBase_C.GetExplosionClass
// 0x0008 (0x0008 - 0x0000)
struct BP_AttackBulletBase_C_GetExplosionClass final
{
public:
	class UClass*                                 ExplosionClass;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackBulletBase_C_GetExplosionClass) == 0x000008, "Wrong alignment on BP_AttackBulletBase_C_GetExplosionClass");
static_assert(sizeof(BP_AttackBulletBase_C_GetExplosionClass) == 0x000008, "Wrong size on BP_AttackBulletBase_C_GetExplosionClass");
static_assert(offsetof(BP_AttackBulletBase_C_GetExplosionClass, ExplosionClass) == 0x000000, "Member 'BP_AttackBulletBase_C_GetExplosionClass::ExplosionClass' has a wrong offset!");

// Function BP_AttackBulletBase.BP_AttackBulletBase_C.GetOverrideNetworkOwner
// 0x0008 (0x0008 - 0x0000)
struct BP_AttackBulletBase_C_GetOverrideNetworkOwner final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackBulletBase_C_GetOverrideNetworkOwner) == 0x000008, "Wrong alignment on BP_AttackBulletBase_C_GetOverrideNetworkOwner");
static_assert(sizeof(BP_AttackBulletBase_C_GetOverrideNetworkOwner) == 0x000008, "Wrong size on BP_AttackBulletBase_C_GetOverrideNetworkOwner");
static_assert(offsetof(BP_AttackBulletBase_C_GetOverrideNetworkOwner, Actor) == 0x000000, "Member 'BP_AttackBulletBase_C_GetOverrideNetworkOwner::Actor' has a wrong offset!");

// Function BP_AttackBulletBase.BP_AttackBulletBase_C.GetOwnerActor
// 0x0010 (0x0010 - 0x0000)
struct BP_AttackBulletBase_C_GetOwnerActor final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackBulletBase_C_GetOwnerActor) == 0x000008, "Wrong alignment on BP_AttackBulletBase_C_GetOwnerActor");
static_assert(sizeof(BP_AttackBulletBase_C_GetOwnerActor) == 0x000010, "Wrong size on BP_AttackBulletBase_C_GetOwnerActor");
static_assert(offsetof(BP_AttackBulletBase_C_GetOwnerActor, OwnerActor) == 0x000000, "Member 'BP_AttackBulletBase_C_GetOwnerActor::OwnerActor' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_GetOwnerActor, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000008, "Member 'BP_AttackBulletBase_C_GetOwnerActor::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");

// Function BP_AttackBulletBase.BP_AttackBulletBase_C.OnHitToActor
// 0x04F8 (0x04F8 - 0x0000)
struct BP_AttackBulletBase_C_OnHitToActor final
{
public:
	class UPrimitiveComponent*                    HitComp;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0018(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<struct FPalSpecialAttackRateInfo>      AttackRateInfo;                                    // 0x0100(0x0010)(Edit, BlueprintVisible)
	TArray<struct FPalSpecialAttackRateInfo>      K2Node_MakeArray_Array;                            // 0x0110(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_GetOverrideNetworkOwner_Actor;            // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalAdditionalEffectType                      CallFunc_GetEffectType_Effect;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55C2[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEffectValue_Value;                     // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalAttackType                                CallFunc_GetBulletAttackType_AttackType;           // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55C3[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDecayDamageRate_ReturnValue;           // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDecayDamageRate_ReturnValue_1;         // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55C4[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_OwnerActor;                 // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerActor_OwnerActor_1;               // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSneakAttackRate_ReturnValue;           // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55C5[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponDamage_ReturnValue;              // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55C6[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0195(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55C7[0x2];                                     // 0x0196(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0210(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55C8[0x4];                                     // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0238(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0250(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0268(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               CallFunc_GetBulletElementType_NewParam;            // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55C9[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalMakeDamageInfo                     K2Node_MakeStruct_PalMakeDamageInfo;               // 0x0288(0x0190)(ContainsInstancedReference)
	struct FPalDamageInfo                         CallFunc_MakeDamageInfo_ReturnValue;               // 0x0418(0x00D0)()
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x04E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackBulletBase_C_OnHitToActor) == 0x000008, "Wrong alignment on BP_AttackBulletBase_C_OnHitToActor");
static_assert(sizeof(BP_AttackBulletBase_C_OnHitToActor) == 0x0004F8, "Wrong size on BP_AttackBulletBase_C_OnHitToActor");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, HitComp) == 0x000000, "Member 'BP_AttackBulletBase_C_OnHitToActor::HitComp' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, OtherActor) == 0x000008, "Member 'BP_AttackBulletBase_C_OnHitToActor::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, OtherComp) == 0x000010, "Member 'BP_AttackBulletBase_C_OnHitToActor::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, Hit) == 0x000018, "Member 'BP_AttackBulletBase_C_OnHitToActor::Hit' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, AttackRateInfo) == 0x000100, "Member 'BP_AttackBulletBase_C_OnHitToActor::AttackRateInfo' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, K2Node_MakeArray_Array) == 0x000110, "Member 'BP_AttackBulletBase_C_OnHitToActor::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_GetOverrideNetworkOwner_Actor) == 0x000120, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_GetOverrideNetworkOwner_Actor' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_GetEffectType_Effect) == 0x000128, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_GetEffectType_Effect' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_GetEffectValue_Value) == 0x00012C, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_GetEffectValue_Value' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_GetBulletAttackType_AttackType) == 0x000130, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_GetBulletAttackType_AttackType' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_GetDecayDamageRate_ReturnValue) == 0x000134, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_GetDecayDamageRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_GetDecayDamageRate_ReturnValue_1) == 0x000138, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_GetDecayDamageRate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_Less_DoubleDouble_ReturnValue) == 0x00013C, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_GetOwnerActor_OwnerActor) == 0x000140, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_GetOwnerActor_OwnerActor' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_GetOwnerActor_OwnerActor_1) == 0x000148, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_GetOwnerActor_OwnerActor_1' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_GetSneakAttackRate_ReturnValue) == 0x000150, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_GetSneakAttackRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000158, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000170, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_GetWeaponDamage_ReturnValue) == 0x000178, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_GetWeaponDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000180, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000188, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_FTrunc_ReturnValue) == 0x000190, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_bBlockingHit) == 0x000194, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_bInitialOverlap) == 0x000195, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_Time) == 0x000198, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_Distance) == 0x00019C, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_Location) == 0x0001A0, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_ImpactPoint) == 0x0001B8, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_Normal) == 0x0001D0, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_ImpactNormal) == 0x0001E8, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_PhysMat) == 0x000200, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_HitActor) == 0x000208, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_HitComponent) == 0x000210, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_HitBoneName) == 0x000218, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_BoneName) == 0x000220, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_HitItem) == 0x000228, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_ElementIndex) == 0x00022C, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_FaceIndex) == 0x000230, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_TraceStart) == 0x000238, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_BreakHitResult_TraceEnd) == 0x000250, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_GetActorForwardVector_ReturnValue) == 0x000268, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_GetBulletElementType_NewParam) == 0x000280, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_GetBulletElementType_NewParam' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, K2Node_MakeStruct_PalMakeDamageInfo) == 0x000288, "Member 'BP_AttackBulletBase_C_OnHitToActor::K2Node_MakeStruct_PalMakeDamageInfo' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_MakeDamageInfo_ReturnValue) == 0x000418, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_MakeDamageInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x0004E8, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_OnHitToActor, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x0004F0, "Member 'BP_AttackBulletBase_C_OnHitToActor::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_AttackBulletBase.BP_AttackBulletBase_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AttackBulletBase_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackBulletBase_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_AttackBulletBase_C_ReceiveTick");
static_assert(sizeof(BP_AttackBulletBase_C_ReceiveTick) == 0x000004, "Wrong size on BP_AttackBulletBase_C_ReceiveTick");
static_assert(offsetof(BP_AttackBulletBase_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_AttackBulletBase_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_AttackBulletBase.BP_AttackBulletBase_C.SetBulletHoleDecal
// 0x00F8 (0x00F8 - 0x0000)
struct BP_AttackBulletBase_C_SetBulletHoleDecal final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         LifeSpan;                                          // 0x00E8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeTime;                                          // 0x00EC(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeScreenSize;                                    // 0x00F0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00F4(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetBulletHoleDecal_ReturnValue;           // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackBulletBase_C_SetBulletHoleDecal) == 0x000008, "Wrong alignment on BP_AttackBulletBase_C_SetBulletHoleDecal");
static_assert(sizeof(BP_AttackBulletBase_C_SetBulletHoleDecal) == 0x0000F8, "Wrong size on BP_AttackBulletBase_C_SetBulletHoleDecal");
static_assert(offsetof(BP_AttackBulletBase_C_SetBulletHoleDecal, Hit) == 0x000000, "Member 'BP_AttackBulletBase_C_SetBulletHoleDecal::Hit' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_SetBulletHoleDecal, LifeSpan) == 0x0000E8, "Member 'BP_AttackBulletBase_C_SetBulletHoleDecal::LifeSpan' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_SetBulletHoleDecal, FadeTime) == 0x0000EC, "Member 'BP_AttackBulletBase_C_SetBulletHoleDecal::FadeTime' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_SetBulletHoleDecal, FadeScreenSize) == 0x0000F0, "Member 'BP_AttackBulletBase_C_SetBulletHoleDecal::FadeScreenSize' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_SetBulletHoleDecal, ReturnValue) == 0x0000F4, "Member 'BP_AttackBulletBase_C_SetBulletHoleDecal::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_SetBulletHoleDecal, CallFunc_SetBulletHoleDecal_ReturnValue) == 0x0000F5, "Member 'BP_AttackBulletBase_C_SetBulletHoleDecal::CallFunc_SetBulletHoleDecal_ReturnValue' has a wrong offset!");

// Function BP_AttackBulletBase.BP_AttackBulletBase_C.SpawnBulletHole
// 0x00F0 (0x00F0 - 0x0000)
struct BP_AttackBulletBase_C_SpawnBulletHole final
{
public:
	struct FHitResult                             Hit_Result;                                        // 0x0000(0x00E8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SetBulletHoleDecal_ReturnValue;           // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackBulletBase_C_SpawnBulletHole) == 0x000008, "Wrong alignment on BP_AttackBulletBase_C_SpawnBulletHole");
static_assert(sizeof(BP_AttackBulletBase_C_SpawnBulletHole) == 0x0000F0, "Wrong size on BP_AttackBulletBase_C_SpawnBulletHole");
static_assert(offsetof(BP_AttackBulletBase_C_SpawnBulletHole, Hit_Result) == 0x000000, "Member 'BP_AttackBulletBase_C_SpawnBulletHole::Hit_Result' has a wrong offset!");
static_assert(offsetof(BP_AttackBulletBase_C_SpawnBulletHole, CallFunc_SetBulletHoleDecal_ReturnValue) == 0x0000E8, "Member 'BP_AttackBulletBase_C_SpawnBulletHole::CallFunc_SetBulletHoleDecal_ReturnValue' has a wrong offset!");

}

