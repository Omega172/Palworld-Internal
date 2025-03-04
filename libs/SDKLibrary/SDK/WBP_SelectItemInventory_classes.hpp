#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SelectItemInventory

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SelectItemInventory.WBP_SelectItemInventory_C
// 0x0040 (0x0470 - 0x0430)
class UWBP_SelectItemInventory_C final : public UPalUISelectItemInventoryBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Inventory_C*                WBP_Common_Inventory;                              // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                        WBP_Menu_btn;                                      // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsRequireSelectNum;                                // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5628[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemSlotButtonBase_C*           SelectedButton;                                    // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_PalInventoryModel_C*                InventoryModel;                                    // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BgMsgID;                                           // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void BndEvt__WBP_SelectItemInventory_WBP_Common_Inventory_K2Node_ComponentBoundEvent_1_OnLeftClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Param_Slot, EPalItemSlotPressType PressType);
	void BndEvt__WBP_SelectItemInventory_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void ComplateSelect(const struct FPalItemSlotId& SlotID, int32 SelectNum);
	void Destruct();
	void DisplaySelectNumWidget();
	void ExecuteUbergraph_WBP_SelectItemInventory(int32 EntryPoint);
	void OnComplateSelectNum(EPalUISelectNumResult ResultType, int32 SelectedNum);
	void OnFocusedSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnLeftClicked(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
	void OnSetup();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SelectItemInventory_C">();
	}
	static class UWBP_SelectItemInventory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SelectItemInventory_C>();
	}
};
static_assert(alignof(UWBP_SelectItemInventory_C) == 0x000008, "Wrong alignment on UWBP_SelectItemInventory_C");
static_assert(sizeof(UWBP_SelectItemInventory_C) == 0x000470, "Wrong size on UWBP_SelectItemInventory_C");
static_assert(offsetof(UWBP_SelectItemInventory_C, UberGraphFrame) == 0x000430, "Member 'UWBP_SelectItemInventory_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SelectItemInventory_C, WBP_Common_Inventory) == 0x000438, "Member 'UWBP_SelectItemInventory_C::WBP_Common_Inventory' has a wrong offset!");
static_assert(offsetof(UWBP_SelectItemInventory_C, WBP_Menu_btn) == 0x000440, "Member 'UWBP_SelectItemInventory_C::WBP_Menu_btn' has a wrong offset!");
static_assert(offsetof(UWBP_SelectItemInventory_C, IsRequireSelectNum) == 0x000448, "Member 'UWBP_SelectItemInventory_C::IsRequireSelectNum' has a wrong offset!");
static_assert(offsetof(UWBP_SelectItemInventory_C, SelectedButton) == 0x000450, "Member 'UWBP_SelectItemInventory_C::SelectedButton' has a wrong offset!");
static_assert(offsetof(UWBP_SelectItemInventory_C, InventoryModel) == 0x000458, "Member 'UWBP_SelectItemInventory_C::InventoryModel' has a wrong offset!");
static_assert(offsetof(UWBP_SelectItemInventory_C, BgMsgID) == 0x000460, "Member 'UWBP_SelectItemInventory_C::BgMsgID' has a wrong offset!");

}

