#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Paldex_PalInfo_00

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C
// 0x00A8 (0x0320 - 0x0278)
class UWBP_Paldex_PalInfo_00_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_PartnerSkill;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FoodAmountBase;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_CaptureNum;                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_NoDropItem;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 RichText_PartnerSkillDesc;                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SkillInfo;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_CaptureNumValue;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PartnerSkillName;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      UniformGrid_Suitability;                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_FoodAmount_C*         WBP_MainMenu_Pal_FoodAmount;                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Paldex_DropItem_C*                 WBP_Paldex_DropItem;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Paldex_DropItem_C*                 WBP_Paldex_DropItem_1;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Paldex_DropItem_C*                 WBP_Paldex_DropItem_2;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Paldex_DropItem_C*                 WBP_Paldex_DropItem_3;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Paldex_DropItem_C*                 WBP_Paldex_DropItem_4;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Paldex_Task_C*                     WBP_Paldex_Task;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_Paldex_DropItem_C*>         DropItemWidgetArray;                               // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        New_Offset;                                        // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ChangePalInfoScrollOffset(double Offset);
	void ExecuteUbergraph_WBP_Paldex_PalInfo_00(int32 EntryPoint);
	void HideDropItems();
	void OnInitialized();
	void Setup(const struct FPalUIPaldex_DisplayInfo& DisplayInfo);
	void Setup_Captured(const struct FPalUIPaldex_DisplayInfo& DisplayInfo);
	void Setup_Encounted(const struct FPalUIPaldex_DisplayInfo& DisplayInfo);
	void Setup_NotEncounted(const struct FPalUIPaldex_DisplayInfo& DisplayInfo);
	void SetupCaptureBonusInfo(class FName CharacterID);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Paldex_PalInfo_00_C">();
	}
	static class UWBP_Paldex_PalInfo_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Paldex_PalInfo_00_C>();
	}
};
static_assert(alignof(UWBP_Paldex_PalInfo_00_C) == 0x000008, "Wrong alignment on UWBP_Paldex_PalInfo_00_C");
static_assert(sizeof(UWBP_Paldex_PalInfo_00_C) == 0x000320, "Wrong size on UWBP_Paldex_PalInfo_00_C");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Paldex_PalInfo_00_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, Canvas_PartnerSkill) == 0x000280, "Member 'UWBP_Paldex_PalInfo_00_C::Canvas_PartnerSkill' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, FoodAmountBase) == 0x000288, "Member 'UWBP_Paldex_PalInfo_00_C::FoodAmountBase' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, HorizontalBox_CaptureNum) == 0x000290, "Member 'UWBP_Paldex_PalInfo_00_C::HorizontalBox_CaptureNum' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, Overlay_NoDropItem) == 0x000298, "Member 'UWBP_Paldex_PalInfo_00_C::Overlay_NoDropItem' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, RichText_PartnerSkillDesc) == 0x0002A0, "Member 'UWBP_Paldex_PalInfo_00_C::RichText_PartnerSkillDesc' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, ScrollBox) == 0x0002A8, "Member 'UWBP_Paldex_PalInfo_00_C::ScrollBox' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, SkillInfo) == 0x0002B0, "Member 'UWBP_Paldex_PalInfo_00_C::SkillInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, Text_CaptureNumValue) == 0x0002B8, "Member 'UWBP_Paldex_PalInfo_00_C::Text_CaptureNumValue' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, Text_PartnerSkillName) == 0x0002C0, "Member 'UWBP_Paldex_PalInfo_00_C::Text_PartnerSkillName' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, UniformGrid_Suitability) == 0x0002C8, "Member 'UWBP_Paldex_PalInfo_00_C::UniformGrid_Suitability' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, WBP_MainMenu_Pal_FoodAmount) == 0x0002D0, "Member 'UWBP_Paldex_PalInfo_00_C::WBP_MainMenu_Pal_FoodAmount' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, WBP_Paldex_DropItem) == 0x0002D8, "Member 'UWBP_Paldex_PalInfo_00_C::WBP_Paldex_DropItem' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, WBP_Paldex_DropItem_1) == 0x0002E0, "Member 'UWBP_Paldex_PalInfo_00_C::WBP_Paldex_DropItem_1' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, WBP_Paldex_DropItem_2) == 0x0002E8, "Member 'UWBP_Paldex_PalInfo_00_C::WBP_Paldex_DropItem_2' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, WBP_Paldex_DropItem_3) == 0x0002F0, "Member 'UWBP_Paldex_PalInfo_00_C::WBP_Paldex_DropItem_3' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, WBP_Paldex_DropItem_4) == 0x0002F8, "Member 'UWBP_Paldex_PalInfo_00_C::WBP_Paldex_DropItem_4' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, WBP_Paldex_Task) == 0x000300, "Member 'UWBP_Paldex_PalInfo_00_C::WBP_Paldex_Task' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, DropItemWidgetArray) == 0x000308, "Member 'UWBP_Paldex_PalInfo_00_C::DropItemWidgetArray' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_PalInfo_00_C, New_Offset) == 0x000318, "Member 'UWBP_Paldex_PalInfo_00_C::New_Offset' has a wrong offset!");

}

