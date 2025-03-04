#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameMenu_Chest_LockNum

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_Chest_LockNum.WBP_IngameMenu_Chest_LockNum_C
// 0x0040 (0x02B8 - 0x0278)
class UWBP_IngameMenu_Chest_LockNum_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Push;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 FocusFrame;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Num;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnNumClicked;                                      // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Num;                                               // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Destruct();
	void ExecuteUbergraph_WBP_IngameMenu_Chest_LockNum(int32 EntryPoint);
	void OnNumClicked__DelegateSignature(int32 ClickedNum);
	void SetNum(int32 Param_Num);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_Chest_LockNum_C">();
	}
	static class UWBP_IngameMenu_Chest_LockNum_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_Chest_LockNum_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_Chest_LockNum_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_Chest_LockNum_C");
static_assert(sizeof(UWBP_IngameMenu_Chest_LockNum_C) == 0x0002B8, "Wrong size on UWBP_IngameMenu_Chest_LockNum_C");
static_assert(offsetof(UWBP_IngameMenu_Chest_LockNum_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameMenu_Chest_LockNum_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_LockNum_C, Anm_Push) == 0x000280, "Member 'UWBP_IngameMenu_Chest_LockNum_C::Anm_Push' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_LockNum_C, FocusFrame) == 0x000288, "Member 'UWBP_IngameMenu_Chest_LockNum_C::FocusFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_LockNum_C, Text_Num) == 0x000290, "Member 'UWBP_IngameMenu_Chest_LockNum_C::Text_Num' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_LockNum_C, WBP_PalInvisibleButton) == 0x000298, "Member 'UWBP_IngameMenu_Chest_LockNum_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_LockNum_C, OnNumClicked) == 0x0002A0, "Member 'UWBP_IngameMenu_Chest_LockNum_C::OnNumClicked' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_LockNum_C, Num) == 0x0002B0, "Member 'UWBP_IngameMenu_Chest_LockNum_C::Num' has a wrong offset!");

}

