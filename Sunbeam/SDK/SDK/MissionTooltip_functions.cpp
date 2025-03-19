#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionTooltip

#include "Basic.hpp"

#include "MissionTooltip_classes.hpp"
#include "MissionTooltip_parameters.hpp"


namespace SDK
{

// Function MissionTooltip.MissionTooltip_C.ExecuteUbergraph_MissionTooltip
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionTooltip_C::ExecuteUbergraph_MissionTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTooltip_C", "ExecuteUbergraph_MissionTooltip");

	Params::MissionTooltip_C_ExecuteUbergraph_MissionTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionTooltip.MissionTooltip_C.InitFromObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InitObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionTooltip_C::InitFromObject(class UObject* InitObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTooltip_C", "InitFromObject");

	Params::MissionTooltip_C_InitFromObject Parms{};

	Parms.InitObject = InitObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionTooltip.MissionTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionTooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTooltip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionTooltip.MissionTooltip_C.UpdateMissionInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Hex_PARENT_C*                 Mission_Details                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionTooltip_C::UpdateMissionInfo(class ABP_Hex_PARENT_C* Mission_Details)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTooltip_C", "UpdateMissionInfo");

	Params::MissionTooltip_C_UpdateMissionInfo Parms{};

	Parms.Mission_Details = Mission_Details;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionTooltip.MissionTooltip_C.HandleMissionRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionTooltip_C::HandleMissionRewards()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTooltip_C", "HandleMissionRewards");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionTooltip.MissionTooltip_C.HandleGameplayModifiers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*>GameplayModifiers                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMissionTooltip_C::HandleGameplayModifiers(TArray<class UFortGameplayModifierItemDefinition*>& GameplayModifiers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionTooltip_C", "HandleGameplayModifiers");

	Params::MissionTooltip_C_HandleGameplayModifiers Parms{};

	Parms.GameplayModifiers = std::move(GameplayModifiers);

	UObject::ProcessEvent(Func, &Parms);

	GameplayModifiers = std::move(Parms.GameplayModifiers);
}

}

