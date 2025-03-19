#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBoostInfoText

#include "Basic.hpp"

#include "XpBoostInfoText_classes.hpp"
#include "XpBoostInfoText_parameters.hpp"


namespace SDK
{

// Function XpBoostInfoText.XpBoostInfoText_C.ExecuteUbergraph_XpBoostInfoText
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostInfoText_C::ExecuteUbergraph_XpBoostInfoText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostInfoText_C", "ExecuteUbergraph_XpBoostInfoText");

	Params::XpBoostInfoText_C_ExecuteUbergraph_XpBoostInfoText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBoostInfoText.XpBoostInfoText_C.Xp Boost Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BoostAmount                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostInfoText_C::Xp_Boost_Changed(int32 BoostAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostInfoText_C", "Xp Boost Changed");

	Params::XpBoostInfoText_C_Xp_Boost_Changed Parms{};

	Parms.BoostAmount = BoostAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBoostInfoText.XpBoostInfoText_C.HandleAccountUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo           NewInfo                                                (Parm, NoDestructor)

void UXpBoostInfoText_C::HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostInfoText_C", "HandleAccountUpdate");

	Params::XpBoostInfoText_C_HandleAccountUpdate Parms{};

	Parms.NewInfo = std::move(NewInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBoostInfoText.XpBoostInfoText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpBoostInfoText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostInfoText_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function XpBoostInfoText.XpBoostInfoText_C.Update Available Boosts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UXpBoostInfoText_C::Update_Available_Boosts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostInfoText_C", "Update Available Boosts");

	UObject::ProcessEvent(Func, nullptr);
}

}

