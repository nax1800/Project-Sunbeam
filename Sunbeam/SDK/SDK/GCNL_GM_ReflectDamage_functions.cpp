#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_ReflectDamage

#include "Basic.hpp"

#include "GCNL_GM_ReflectDamage_classes.hpp"
#include "GCNL_GM_ReflectDamage_parameters.hpp"


namespace SDK
{

// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ExecuteUbergraph_GCNL_GM_ReflectDamage
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_GM_ReflectDamage_C::ExecuteUbergraph_GCNL_GM_ReflectDamage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_GM_ReflectDamage_C", "ExecuteUbergraph_GCNL_GM_ReflectDamage");

	Params::GCNL_GM_ReflectDamage_C_ExecuteUbergraph_GCNL_GM_ReflectDamage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_GM_ReflectDamage_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_GM_ReflectDamage_C", "ReceiveTick");

	Params::GCNL_GM_ReflectDamage_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCNL_GM_ReflectDamage_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_GM_ReflectDamage_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_GM_ReflectDamage_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_GM_ReflectDamage_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*         SpawnedParticleSysComponent                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCNL_GM_ReflectDamage_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_GM_ReflectDamage_C", "OnStartParticleSystemSpawned");

	Params::GCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned Parms{};

	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

}

