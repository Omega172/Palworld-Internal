#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_PlayerGauge_Shield

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_PlayerGauge_Shield.WBP_Menu_PlayerGauge_Shield_C
// 0x0038 (0x02B0 - 0x0278)
class UWBP_Menu_PlayerGauge_Shield_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_HP;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Line;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_ShieldGauge;                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_MaxSield;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_NowShield;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFixedPoint64                          CachedShieldHP;                                    // 0x02A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_Menu_PlayerGauge_Shield(int32 EntryPoint);
	void UpdateShield(const struct FFixedPoint64& NowShieldMaxHP, const struct FFixedPoint64& NowShieldHP);
	void UpdateShieldMaxHP(const struct FFixedPoint64& NowShieldMaxHP);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_PlayerGauge_Shield_C">();
	}
	static class UWBP_Menu_PlayerGauge_Shield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_PlayerGauge_Shield_C>();
	}
};
static_assert(alignof(UWBP_Menu_PlayerGauge_Shield_C) == 0x000008, "Wrong alignment on UWBP_Menu_PlayerGauge_Shield_C");
static_assert(sizeof(UWBP_Menu_PlayerGauge_Shield_C) == 0x0002B0, "Wrong size on UWBP_Menu_PlayerGauge_Shield_C");
static_assert(offsetof(UWBP_Menu_PlayerGauge_Shield_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Menu_PlayerGauge_Shield_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PlayerGauge_Shield_C, Canvas_HP) == 0x000280, "Member 'UWBP_Menu_PlayerGauge_Shield_C::Canvas_HP' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PlayerGauge_Shield_C, Image_Line) == 0x000288, "Member 'UWBP_Menu_PlayerGauge_Shield_C::Image_Line' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PlayerGauge_Shield_C, ProgressBar_ShieldGauge) == 0x000290, "Member 'UWBP_Menu_PlayerGauge_Shield_C::ProgressBar_ShieldGauge' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PlayerGauge_Shield_C, Text_MaxSield) == 0x000298, "Member 'UWBP_Menu_PlayerGauge_Shield_C::Text_MaxSield' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PlayerGauge_Shield_C, Text_NowShield) == 0x0002A0, "Member 'UWBP_Menu_PlayerGauge_Shield_C::Text_NowShield' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PlayerGauge_Shield_C, CachedShieldHP) == 0x0002A8, "Member 'UWBP_Menu_PlayerGauge_Shield_C::CachedShieldHP' has a wrong offset!");

}

