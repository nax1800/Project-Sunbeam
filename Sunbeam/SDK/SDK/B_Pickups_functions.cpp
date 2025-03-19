#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Pickups

#include "Basic.hpp"

#include "B_Pickups_classes.hpp"
#include "B_Pickups_parameters.hpp"


namespace SDK
{

// Function B_Pickups.B_Pickups_C.ExecuteUbergraph_B_Pickups
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_C::ExecuteUbergraph_B_Pickups(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_C", "ExecuteUbergraph_B_Pickups");

	Params::B_Pickups_C_ExecuteUbergraph_B_Pickups Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Pickups.B_Pickups_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Pickups_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups.B_Pickups_C.OnPickedUp
// (Event, Public, BlueprintEvent)

void AB_Pickups_C::OnPickedUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_C", "OnPickedUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups.B_Pickups_C.OnTossed
// (Event, Public, BlueprintEvent)

void AB_Pickups_C::OnTossed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_C", "OnTossed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups.B_Pickups_C.OnAboutToEnterBackpack
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        PickupTarget                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_C::OnAboutToEnterBackpack(class AFortPawn* PickupTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_C", "OnAboutToEnterBackpack");

	Params::B_Pickups_C_OnAboutToEnterBackpack Parms{};

	Parms.PickupTarget = PickupTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Pickups.B_Pickups_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_C", "ReceiveTick");

	Params::B_Pickups_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Pickups.B_Pickups_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups.B_Pickups_C.SetRarityColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::SetRarityColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_C", "SetRarityColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups.B_Pickups_C.SpawnPickedUpTrailPS
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::SpawnPickedUpTrailPS()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_C", "SpawnPickedUpTrailPS");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups.B_Pickups_C.SetHologramPickedUpParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Tier_0_or_1                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Pickups_C::SetHologramPickedUpParams(bool Tier_0_or_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_C", "SetHologramPickedUpParams");

	Params::B_Pickups_C_SetHologramPickedUpParams Parms{};

	Parms.Tier_0_or_1 = Tier_0_or_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Pickups.B_Pickups_C.CreateHologramMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::CreateHologramMIDs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_C", "CreateHologramMIDs");

	UObject::ProcessEvent(Func, nullptr);
}

}

