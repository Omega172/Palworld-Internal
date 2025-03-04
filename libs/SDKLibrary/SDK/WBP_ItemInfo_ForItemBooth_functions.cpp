#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemInfo_ForItemBooth

#include "Basic.hpp"

#include "WBP_ItemInfo_ForItemBooth_classes.hpp"
#include "WBP_ItemInfo_ForItemBooth_parameters.hpp"


namespace SDK
{

// Function WBP_ItemInfo_ForItemBooth.WBP_ItemInfo_ForItemBooth_C.ExecuteUbergraph_WBP_ItemInfo_ForItemBooth
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemInfo_ForItemBooth_C::ExecuteUbergraph_WBP_ItemInfo_ForItemBooth(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemInfo_ForItemBooth_C", "ExecuteUbergraph_WBP_ItemInfo_ForItemBooth");

	Params::WBP_ItemInfo_ForItemBooth_C_ExecuteUbergraph_WBP_ItemInfo_ForItemBooth Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemInfo_ForItemBooth.WBP_ItemInfo_ForItemBooth_C.SetItemPairInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalItemAndNum                   Product                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPalItemAndNum                   Cost                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_ItemInfo_ForItemBooth_C::SetItemPairInfo(const struct FPalItemAndNum& Product, const struct FPalItemAndNum& Cost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemInfo_ForItemBooth_C", "SetItemPairInfo");

	Params::WBP_ItemInfo_ForItemBooth_C_SetItemPairInfo Parms{};

	Parms.Product = std::move(Product);
	Parms.Cost = std::move(Cost);

	UObject::ProcessEvent(Func, &Parms);
}

}

