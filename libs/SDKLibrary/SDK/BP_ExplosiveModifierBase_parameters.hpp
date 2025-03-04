#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExplosiveModifierBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ExplosiveModifierBase.BP_ExplosiveModifierBase_C.ExecuteUbergraph_BP_ExplosiveModifierBase
// 0x01F0 (0x01F0 - 0x0000)
struct BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55E2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_CustomEvent_HitComp;                        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherCharacter;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherComp;                      // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_CustomEvent_Hi;                             // 0x0020(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55E3[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55E4[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalBullet*                             K2Node_DynamicCast_AsPal_Bullet;                   // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55E5[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetWeaponDamage_ReturnValue;              // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55E6[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0140(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetParameterWithPassiveSkillEffect_ReturnValue; // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class APalBullet*                       K2Node_Event_bullet;                               // 0x01B0(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ExplosionAttackBase_C*              CallFunc_FinishSpawningActor_ReturnValue;          // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, struct FHitResult& Hi)> K2Node_CreateDelegate_OutputDelegate;              // 0x01D0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FTrunc_A_ImplicitCast;                    // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase) == 0x000010, "Wrong alignment on BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase");
static_assert(sizeof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase) == 0x0001F0, "Wrong size on BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, EntryPoint) == 0x000000, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, K2Node_CustomEvent_HitComp) == 0x000008, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::K2Node_CustomEvent_HitComp' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, K2Node_CustomEvent_OtherCharacter) == 0x000010, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::K2Node_CustomEvent_OtherCharacter' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, K2Node_CustomEvent_OtherComp) == 0x000018, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::K2Node_CustomEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, K2Node_CustomEvent_Hi) == 0x000020, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::K2Node_CustomEvent_Hi' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, CallFunc_IsValid_ReturnValue) == 0x000108, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, CallFunc_GetOwner_ReturnValue) == 0x000110, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, CallFunc_IsValid_ReturnValue_1) == 0x000118, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, K2Node_DynamicCast_AsPal_Bullet) == 0x000120, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::K2Node_DynamicCast_AsPal_Bullet' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, K2Node_DynamicCast_bSuccess) == 0x000128, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, CallFunc_GetWeaponDamage_ReturnValue) == 0x00012C, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::CallFunc_GetWeaponDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000130, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000138, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, CallFunc_GetTransform_ReturnValue) == 0x000140, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, CallFunc_GetParameterWithPassiveSkillEffect_ReturnValue) == 0x0001A0, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::CallFunc_GetParameterWithPassiveSkillEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, CallFunc_FTrunc_ReturnValue) == 0x0001A4, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001A8, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, K2Node_Event_bullet) == 0x0001B0, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::K2Node_Event_bullet' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001B8, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0001C0, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, CallFunc_SpawnSystemAttached_ReturnValue) == 0x0001C8, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, K2Node_CreateDelegate_OutputDelegate) == 0x0001D0, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase, CallFunc_FTrunc_A_ImplicitCast) == 0x0001E0, "Member 'BP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase::CallFunc_FTrunc_A_ImplicitCast' has a wrong offset!");

// Function BP_ExplosiveModifierBase.BP_ExplosiveModifierBase_C.Initialize
// 0x0008 (0x0008 - 0x0000)
struct BP_ExplosiveModifierBase_C_Initialize final
{
public:
	const class APalBullet*                       Bullet;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosiveModifierBase_C_Initialize) == 0x000008, "Wrong alignment on BP_ExplosiveModifierBase_C_Initialize");
static_assert(sizeof(BP_ExplosiveModifierBase_C_Initialize) == 0x000008, "Wrong size on BP_ExplosiveModifierBase_C_Initialize");
static_assert(offsetof(BP_ExplosiveModifierBase_C_Initialize, Bullet) == 0x000000, "Member 'BP_ExplosiveModifierBase_C_Initialize::Bullet' has a wrong offset!");

// Function BP_ExplosiveModifierBase.BP_ExplosiveModifierBase_C.�������_0
// 0x0100 (0x0100 - 0x0000)
struct BP_ExplosiveModifierBase_C__________0 final
{
public:
	class UPrimitiveComponent*                    HitComp;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherCharacter;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hi;                                                // 0x0018(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ExplosiveModifierBase_C__________0) == 0x000008, "Wrong alignment on BP_ExplosiveModifierBase_C__________0");
static_assert(sizeof(BP_ExplosiveModifierBase_C__________0) == 0x000100, "Wrong size on BP_ExplosiveModifierBase_C__________0");
static_assert(offsetof(BP_ExplosiveModifierBase_C__________0, HitComp) == 0x000000, "Member 'BP_ExplosiveModifierBase_C__________0::HitComp' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C__________0, OtherCharacter) == 0x000008, "Member 'BP_ExplosiveModifierBase_C__________0::OtherCharacter' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C__________0, OtherComp) == 0x000010, "Member 'BP_ExplosiveModifierBase_C__________0::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ExplosiveModifierBase_C__________0, Hi) == 0x000018, "Member 'BP_ExplosiveModifierBase_C__________0::Hi' has a wrong offset!");

}

