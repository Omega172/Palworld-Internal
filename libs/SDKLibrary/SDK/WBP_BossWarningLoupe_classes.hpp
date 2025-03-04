#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BossWarningLoupe

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "WBP_LoupeBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BossWarningLoupe.WBP_BossWarningLoupe_C
// 0x0040 (0x04C8 - 0x0488)
class UWBP_BossWarningLoupe_C final : public UWBP_LoupeBase_C
{
public:
	class UImage*                                 Loupe_Angle;                                       // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalInstanceID                         SyncId;                                            // 0x0498(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void CalcScreenPosition();
	void GetLoupeWidgetSize(struct FVector2D* Param_WidgetSize);
	void GetTargetWidgetSize(struct FVector2D* OutVector);
	void GetTargetWorldLocation(struct FVector* OutVector);
	bool IsEnableLoupe();
	void SetFinalWidgetOpacity(double CalcedOpacity);
	void Setup(class UPalIndividualCharacterHandle* Param_TargetHandle);
	void UpdateArrowImageAngle(double NewAngle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BossWarningLoupe_C">();
	}
	static class UWBP_BossWarningLoupe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BossWarningLoupe_C>();
	}
};
static_assert(alignof(UWBP_BossWarningLoupe_C) == 0x000008, "Wrong alignment on UWBP_BossWarningLoupe_C");
static_assert(sizeof(UWBP_BossWarningLoupe_C) == 0x0004C8, "Wrong size on UWBP_BossWarningLoupe_C");
static_assert(offsetof(UWBP_BossWarningLoupe_C, Loupe_Angle) == 0x000488, "Member 'UWBP_BossWarningLoupe_C::Loupe_Angle' has a wrong offset!");
static_assert(offsetof(UWBP_BossWarningLoupe_C, TargetHandle) == 0x000490, "Member 'UWBP_BossWarningLoupe_C::TargetHandle' has a wrong offset!");
static_assert(offsetof(UWBP_BossWarningLoupe_C, SyncId) == 0x000498, "Member 'UWBP_BossWarningLoupe_C::SyncId' has a wrong offset!");

}

