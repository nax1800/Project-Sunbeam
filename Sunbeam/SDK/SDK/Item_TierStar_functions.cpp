#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item_TierStar

#include "Basic.hpp"

#include "Item_TierStar_classes.hpp"
#include "Item_TierStar_parameters.hpp"


namespace SDK
{

// Function Item_TierStar.Item_TierStar_C.ExecuteUbergraph_Item_TierStar
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItem_TierStar_C::ExecuteUbergraph_Item_TierStar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_TierStar_C", "ExecuteUbergraph_Item_TierStar");

	Params::Item_TierStar_C_ExecuteUbergraph_Item_TierStar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Item_TierStar.Item_TierStar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItem_TierStar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_TierStar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

