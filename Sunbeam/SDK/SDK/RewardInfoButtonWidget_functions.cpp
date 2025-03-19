#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RewardInfoButtonWidget

#include "Basic.hpp"

#include "RewardInfoButtonWidget_classes.hpp"
#include "RewardInfoButtonWidget_parameters.hpp"


namespace SDK
{

// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.ExecuteUbergraph_RewardInfoButtonWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardInfoButtonWidget_C::ExecuteUbergraph_RewardInfoButtonWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardInfoButtonWidget_C", "ExecuteUbergraph_RewardInfoButtonWidget");

	Params::RewardInfoButtonWidget_C_ExecuteUbergraph_RewardInfoButtonWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)

void URewardInfoButtonWidget_C::HandleDifferentItemOrQuantitySetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardInfoButtonWidget_C", "HandleDifferentItemOrQuantitySetBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.SetShowDescriptionBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInShowDescription                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardInfoButtonWidget_C::SetShowDescriptionBP(bool bInShowDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardInfoButtonWidget_C", "SetShowDescriptionBP");

	Params::RewardInfoButtonWidget_C_SetShowDescriptionBP Parms{};

	Parms.bInShowDescription = bInShowDescription;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.GetDisplayName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             DisplayName                                            (Parm, OutParm)

void URewardInfoButtonWidget_C::GetDisplayName(class FText* DisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardInfoButtonWidget_C", "GetDisplayName");

	Params::RewardInfoButtonWidget_C_GetDisplayName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = std::move(Parms.DisplayName);
}

}

