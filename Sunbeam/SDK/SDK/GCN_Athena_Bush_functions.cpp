#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_Bush

#include "Basic.hpp"

#include "GCN_Athena_Bush_classes.hpp"
#include "GCN_Athena_Bush_parameters.hpp"


namespace SDK
{

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.ExecuteUbergraph_GCN_Athena_Bush
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Athena_Bush_C::ExecuteUbergraph_GCN_Athena_Bush(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Bush_C", "ExecuteUbergraph_GCN_Athena_Bush");

	Params::GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Athena_Bush.GCN_Athena_Bush_C.On Player Step
// (BlueprintCallable, BlueprintEvent)

void AGCN_Athena_Bush_C::On_Player_Step()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Bush_C", "On Player Step");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_Athena_Bush.GCN_Athena_Bush_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Athena_Bush_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Bush_C", "ReceiveTick");

	Params::GCN_Athena_Bush_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Athena_Bush.GCN_Athena_Bush_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_Athena_Bush_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Bush_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_Athena_Bush.GCN_Athena_Bush_C.OnRemove
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCN_Athena_Bush_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Bush_C", "OnRemove");

	Params::GCN_Athena_Bush_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCN_Athena_Bush.GCN_Athena_Bush_C.OnActive
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCN_Athena_Bush_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Bush_C", "OnActive");

	Params::GCN_Athena_Bush_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

