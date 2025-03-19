#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_LowHeath

#include "Basic.hpp"

#include "Announce_LowHeath_classes.hpp"
#include "Announce_LowHeath_parameters.hpp"


namespace SDK
{

// Function Announce_LowHeath.Announce_LowHeath_C.ExecuteUbergraph_Announce_LowHeath
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_LowHeath_C::ExecuteUbergraph_Announce_LowHeath(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_LowHeath_C", "ExecuteUbergraph_Announce_LowHeath");

	Params::Announce_LowHeath_C_ExecuteUbergraph_Announce_LowHeath Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announce_LowHeath.Announce_LowHeath_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_LowHeath_C::OnClientAnnouncementStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_LowHeath_C", "OnClientAnnouncementStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_LowHeath.Announce_LowHeath_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_LowHeath_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_LowHeath_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

