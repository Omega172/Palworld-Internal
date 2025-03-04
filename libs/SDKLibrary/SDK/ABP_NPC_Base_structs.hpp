#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_NPC_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_NPC_Base.ABP_NPC_Base_C.AnimBlueprintGeneratedConstantData
// 0x01AF (0x01B0 - 0x0001)
struct ABP_NPC_Base::FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_4FA7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_489;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_490;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_491;                                // 0x0014(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_492;                                // 0x001C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_493;                                // 0x0024(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_494;                                // 0x002C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_495;                                // 0x0034(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_496;                                // 0x003C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_497;                                // 0x0044(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_498;                                 // 0x004C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_499;                                // 0x0050(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_500;                                 // 0x0058(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_501;                                // 0x005C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_502;                                 // 0x0064(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendProfile*                          __BlendProfile_503;                                // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_504;                                  // 0x0070(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_505;                                // 0x0078(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_506;                                // 0x0079(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA8[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_507;                               // 0x0080(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_508;                                // 0x0090(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_509;                                 // 0x0098(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_510;                                // 0x009C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA9[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_511;                               // 0x00A0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_512;                              // 0x00A4(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_513;                               // 0x00D0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_514;                                // 0x00D4(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_515;                                // 0x00D5(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_516;                                // 0x00D6(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FAA[0x1];                                     // 0x00D7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_517;                                // 0x00D8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_518;                                // 0x00E0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_519;                                // 0x00E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_520;                                 // 0x00F0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FAB[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_521;                              // 0x00F8(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0118(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0198(0x0018)()
};
static_assert(alignof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_NPC_Base::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData) == 0x0001B0, "Wrong size on ABP_NPC_Base::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __NameProperty_489) == 0x000004, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__NameProperty_489' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __NameProperty_490) == 0x00000C, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__NameProperty_490' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __NameProperty_491) == 0x000014, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__NameProperty_491' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __NameProperty_492) == 0x00001C, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__NameProperty_492' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __NameProperty_493) == 0x000024, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__NameProperty_493' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __NameProperty_494) == 0x00002C, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__NameProperty_494' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __NameProperty_495) == 0x000034, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__NameProperty_495' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __NameProperty_496) == 0x00003C, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__NameProperty_496' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __NameProperty_497) == 0x000044, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__NameProperty_497' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __IntProperty_498) == 0x00004C, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__IntProperty_498' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __NameProperty_499) == 0x000050, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__NameProperty_499' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __IntProperty_500) == 0x000058, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__IntProperty_500' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __NameProperty_501) == 0x00005C, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__NameProperty_501' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __IntProperty_502) == 0x000064, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__IntProperty_502' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __BlendProfile_503) == 0x000068, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__BlendProfile_503' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __CurveFloat_504) == 0x000070, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__CurveFloat_504' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __EnumProperty_505) == 0x000078, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__EnumProperty_505' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __EnumProperty_506) == 0x000079, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__EnumProperty_506' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __ArrayProperty_507) == 0x000080, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__ArrayProperty_507' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __NameProperty_508) == 0x000090, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__NameProperty_508' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __IntProperty_509) == 0x000098, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__IntProperty_509' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __BoolProperty_510) == 0x00009C, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__BoolProperty_510' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __FloatProperty_511) == 0x0000A0, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__FloatProperty_511' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __StructProperty_512) == 0x0000A4, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__StructProperty_512' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __FloatProperty_513) == 0x0000D0, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__FloatProperty_513' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __BoolProperty_514) == 0x0000D4, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__BoolProperty_514' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __EnumProperty_515) == 0x0000D5, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__EnumProperty_515' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __ByteProperty_516) == 0x0000D6, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__ByteProperty_516' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __NameProperty_517) == 0x0000D8, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__NameProperty_517' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __NameProperty_518) == 0x0000E0, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__NameProperty_518' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __NameProperty_519) == 0x0000E8, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__NameProperty_519' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __IntProperty_520) == 0x0000F0, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__IntProperty_520' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, __StructProperty_521) == 0x0000F8, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::__StructProperty_521' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000118, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000198, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_NPC_Base.ABP_NPC_Base_C.AnimBlueprintGeneratedMutableData
// 0x001B (0x001C - 0x0001)
struct ABP_NPC_Base::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_0;                                  // 0x0002(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_1;                                  // 0x0003(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_2;                                  // 0x0004(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_3;                                  // 0x0005(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_4;                                  // 0x0006(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_5;                                  // 0x0007(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_6;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_7;                                  // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_8;                                  // 0x000D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FAC[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_9;                                 // 0x0010(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_10;                                // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_11;                                // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_NPC_Base::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on ABP_NPC_Base::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_NPC_Base::FAnimBlueprintGeneratedMutableData) == 0x00001C, "Wrong size on ABP_NPC_Base::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000002, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedMutableData, __BoolProperty_1) == 0x000003, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedMutableData::__BoolProperty_1' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedMutableData, __BoolProperty_2) == 0x000004, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedMutableData::__BoolProperty_2' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedMutableData, __BoolProperty_3) == 0x000005, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedMutableData::__BoolProperty_3' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedMutableData, __BoolProperty_4) == 0x000006, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedMutableData::__BoolProperty_4' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedMutableData, __BoolProperty_5) == 0x000007, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedMutableData::__BoolProperty_5' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedMutableData, __FloatProperty_6) == 0x000008, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedMutableData::__FloatProperty_6' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedMutableData, __BoolProperty_7) == 0x00000C, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedMutableData::__BoolProperty_7' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedMutableData, __BoolProperty_8) == 0x00000D, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedMutableData::__BoolProperty_8' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedMutableData, __FloatProperty_9) == 0x000010, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedMutableData::__FloatProperty_9' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedMutableData, __FloatProperty_10) == 0x000014, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedMutableData::__FloatProperty_10' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Base::FAnimBlueprintGeneratedMutableData, __FloatProperty_11) == 0x000018, "Member 'ABP_NPC_Base::FAnimBlueprintGeneratedMutableData::__FloatProperty_11' has a wrong offset!");

}

