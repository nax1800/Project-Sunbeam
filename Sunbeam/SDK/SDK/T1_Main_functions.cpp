#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: T1_Main

#include "Basic.hpp"

#include "T1_Main_classes.hpp"
#include "T1_Main_parameters.hpp"


namespace SDK
{

// Function T1_Main.T1_Main_C.ExecuteUbergraph_T1_Main
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UT1_Main_C::ExecuteUbergraph_T1_Main(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("T1_Main_C", "ExecuteUbergraph_T1_Main");

	Params::T1_Main_C_ExecuteUbergraph_T1_Main Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function T1_Main.T1_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UT1_Main_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("T1_Main_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function T1_Main.T1_Main_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UT1_Main_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("T1_Main_C", "PreConstruct");

	Params::T1_Main_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

