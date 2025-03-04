#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EnemyNotice_Q

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_EnemyNotice_Q.WBP_EnemyNotice_Q_C
// 0x0020 (0x0298 - 0x0278)
class UWBP_EnemyNotice_Q_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Anm_Close;                                         // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Q;                                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Q_1;                                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EnemyNotice_Q_C">();
	}
	static class UWBP_EnemyNotice_Q_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EnemyNotice_Q_C>();
	}
};
static_assert(alignof(UWBP_EnemyNotice_Q_C) == 0x000008, "Wrong alignment on UWBP_EnemyNotice_Q_C");
static_assert(sizeof(UWBP_EnemyNotice_Q_C) == 0x000298, "Wrong size on UWBP_EnemyNotice_Q_C");
static_assert(offsetof(UWBP_EnemyNotice_Q_C, Anm_Close) == 0x000278, "Member 'UWBP_EnemyNotice_Q_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyNotice_Q_C, Anm_Open) == 0x000280, "Member 'UWBP_EnemyNotice_Q_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyNotice_Q_C, Q) == 0x000288, "Member 'UWBP_EnemyNotice_Q_C::Q' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyNotice_Q_C, Q_1) == 0x000290, "Member 'UWBP_EnemyNotice_Q_C::Q_1' has a wrong offset!");

}

