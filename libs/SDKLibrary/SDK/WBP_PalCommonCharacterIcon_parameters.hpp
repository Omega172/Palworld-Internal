#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalCommonCharacterIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_PalCommonCharacterIcon.WBP_PalCommonCharacterIcon_C.ExecuteUbergraph_WBP_PalCommonCharacterIcon
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UTexture2D* LoadedTexture)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F84[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon) == 0x000008, "Wrong alignment on WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon");
static_assert(sizeof(WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon) == 0x000048, "Wrong size on WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon");
static_assert(offsetof(WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon, EntryPoint) == 0x000000, "Member 'WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000038, "Member 'WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000040, "Member 'WBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

// Function WBP_PalCommonCharacterIcon.WBP_PalCommonCharacterIcon_C.OnLoaded
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCommonCharacterIcon_C_OnLoaded final
{
public:
	class UTexture2D*                             LoadedTexture;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonCharacterIcon_C_OnLoaded) == 0x000008, "Wrong alignment on WBP_PalCommonCharacterIcon_C_OnLoaded");
static_assert(sizeof(WBP_PalCommonCharacterIcon_C_OnLoaded) == 0x000010, "Wrong size on WBP_PalCommonCharacterIcon_C_OnLoaded");
static_assert(offsetof(WBP_PalCommonCharacterIcon_C_OnLoaded, LoadedTexture) == 0x000000, "Member 'WBP_PalCommonCharacterIcon_C_OnLoaded::LoadedTexture' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterIcon_C_OnLoaded, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PalCommonCharacterIcon_C_OnLoaded::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalCommonCharacterIcon.WBP_PalCommonCharacterIcon_C.SetFraction
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCommonCharacterIcon_C_SetFraction final
{
public:
	double                                        Fraction;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F85[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonCharacterIcon_C_SetFraction) == 0x000008, "Wrong alignment on WBP_PalCommonCharacterIcon_C_SetFraction");
static_assert(sizeof(WBP_PalCommonCharacterIcon_C_SetFraction) == 0x000010, "Wrong size on WBP_PalCommonCharacterIcon_C_SetFraction");
static_assert(offsetof(WBP_PalCommonCharacterIcon_C_SetFraction, Fraction) == 0x000000, "Member 'WBP_PalCommonCharacterIcon_C_SetFraction::Fraction' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterIcon_C_SetFraction, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PalCommonCharacterIcon_C_SetFraction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterIcon_C_SetFraction, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x00000C, "Member 'WBP_PalCommonCharacterIcon_C_SetFraction::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

}

