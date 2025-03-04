#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerInputKeyGuideIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PlayerInputKeyGuideIcon.WBP_PlayerInputKeyGuideIcon_C
// 0x0068 (0x0490 - 0x0428)
class UWBP_PlayerInputKeyGuideIcon_C final : public UPalUIActionWidgetForPlayerInput
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_32;                                          // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<ECommonInputType, class UTexture2D*>     OverrideImage;                                     // 0x0440(0x0050)(Edit, BlueprintVisible)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon(int32 EntryPoint);
	void OnInitialized();
	void SetOverrideSize(const struct FVector2D& Size);
	void UpdateImage(const struct FSlateBrush& NewBrush);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlayerInputKeyGuideIcon_C">();
	}
	static class UWBP_PlayerInputKeyGuideIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayerInputKeyGuideIcon_C>();
	}
};
static_assert(alignof(UWBP_PlayerInputKeyGuideIcon_C) == 0x000008, "Wrong alignment on UWBP_PlayerInputKeyGuideIcon_C");
static_assert(sizeof(UWBP_PlayerInputKeyGuideIcon_C) == 0x000490, "Wrong size on UWBP_PlayerInputKeyGuideIcon_C");
static_assert(offsetof(UWBP_PlayerInputKeyGuideIcon_C, UberGraphFrame) == 0x000428, "Member 'UWBP_PlayerInputKeyGuideIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerInputKeyGuideIcon_C, Image_32) == 0x000430, "Member 'UWBP_PlayerInputKeyGuideIcon_C::Image_32' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerInputKeyGuideIcon_C, SizeBox_0) == 0x000438, "Member 'UWBP_PlayerInputKeyGuideIcon_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerInputKeyGuideIcon_C, OverrideImage) == 0x000440, "Member 'UWBP_PlayerInputKeyGuideIcon_C::OverrideImage' has a wrong offset!");

}

