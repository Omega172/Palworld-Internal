#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_GeneralWorkAttack

#include "Basic.hpp"

#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_GeneralWorkAttack.BP_Action_GeneralWorkAttack_C
// 0x0000 (0x02C0 - 0x02C0)
class UBP_Action_GeneralWorkAttack_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	void OnSpawnEffect(class APalSkillEffectBase* Param_Effect);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_GeneralWorkAttack_C">();
	}
	static class UBP_Action_GeneralWorkAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_GeneralWorkAttack_C>();
	}
};
static_assert(alignof(UBP_Action_GeneralWorkAttack_C) == 0x000010, "Wrong alignment on UBP_Action_GeneralWorkAttack_C");
static_assert(sizeof(UBP_Action_GeneralWorkAttack_C) == 0x0002C0, "Wrong size on UBP_Action_GeneralWorkAttack_C");

}

