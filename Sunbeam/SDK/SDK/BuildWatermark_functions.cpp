#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BuildWatermark

#include "Basic.hpp"

#include "BuildWatermark_classes.hpp"
#include "BuildWatermark_parameters.hpp"


namespace SDK
{

// Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildWatermark_C::ExecuteUbergraph_BuildWatermark(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "ExecuteUbergraph_BuildWatermark");

	Params::BuildWatermark_C_ExecuteUbergraph_BuildWatermark Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuildWatermark.BuildWatermark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuildWatermark_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuildWatermark.BuildWatermark_C.Update Watermark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBuildWatermark_C::Update_Watermark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "Update Watermark");

	UObject::ProcessEvent(Func, nullptr);
}

}

