#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalCommonScrollList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Slate_structs.hpp"
#include "Pal_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalCommonScrollList.WBP_PalCommonScrollList_C
// 0x0038 (0x0440 - 0x0408)
class UWBP_PalCommonScrollList_C : public UPalCommonScrollListBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_Root;                                       // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryArrow_C*                  WBP_InventoryArrow_Bottom;                         // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryArrow_C*                  WBP_InventoryArrow_Top;                            // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        LastScrollOffset;                                  // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDisplayArrow;                                    // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EScrollWhenFocusChanges                       GamePadFocusChangeScrollType;                      // 0x0439(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddScrollOffset(double Offset);
	void AddWidget(class UUserWidget* Widget);
	void BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void ClearAllChildren();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_PalCommonScrollList(int32 EntryPoint);
	void GetAllChildrenNum(int32* Param_Index);
	void GetIndexFromWidget(class UWidget* Widget, int32* Param_Index);
	void GetScrollBox(class UScrollBox** ScrollBox);
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	void UpdateArrowVisibilityAndAnimation(double CurrentOffset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCommonScrollList_C">();
	}
	static class UWBP_PalCommonScrollList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCommonScrollList_C>();
	}
};
static_assert(alignof(UWBP_PalCommonScrollList_C) == 0x000008, "Wrong alignment on UWBP_PalCommonScrollList_C");
static_assert(sizeof(UWBP_PalCommonScrollList_C) == 0x000440, "Wrong size on UWBP_PalCommonScrollList_C");
static_assert(offsetof(UWBP_PalCommonScrollList_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalCommonScrollList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonScrollList_C, Canvas_Root) == 0x000410, "Member 'UWBP_PalCommonScrollList_C::Canvas_Root' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonScrollList_C, ScrollBox_0) == 0x000418, "Member 'UWBP_PalCommonScrollList_C::ScrollBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonScrollList_C, WBP_InventoryArrow_Bottom) == 0x000420, "Member 'UWBP_PalCommonScrollList_C::WBP_InventoryArrow_Bottom' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonScrollList_C, WBP_InventoryArrow_Top) == 0x000428, "Member 'UWBP_PalCommonScrollList_C::WBP_InventoryArrow_Top' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonScrollList_C, LastScrollOffset) == 0x000430, "Member 'UWBP_PalCommonScrollList_C::LastScrollOffset' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonScrollList_C, IsDisplayArrow) == 0x000438, "Member 'UWBP_PalCommonScrollList_C::IsDisplayArrow' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonScrollList_C, GamePadFocusChangeScrollType) == 0x000439, "Member 'UWBP_PalCommonScrollList_C::GamePadFocusChangeScrollType' has a wrong offset!");

}

