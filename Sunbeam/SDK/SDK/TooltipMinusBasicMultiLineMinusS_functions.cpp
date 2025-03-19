#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TooltipMinusBasicMultiLineMinusS

#include "Basic.hpp"

#include "TooltipMinusBasicMultiLineMinusS_classes.hpp"
#include "TooltipMinusBasicMultiLineMinusS_parameters.hpp"


namespace SDK
{

// Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.ExecuteUbergraph_Tooltip-BasicMultiLine-S
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipMinusBasicMultiLineMinusS_C::ExecuteUbergraph_TooltipMinusBasicMultiLineMinusS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-BasicMultiLine-S_C", "ExecuteUbergraph_Tooltip-BasicMultiLine-S");

	Params::TooltipMinusBasicMultiLineMinusS_C_ExecuteUbergraph_TooltipMinusBasicMultiLineMinusS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTooltipMinusBasicMultiLineMinusS_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-BasicMultiLine-S_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Get Body Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTooltipMinusBasicMultiLineMinusS_C::Get_Body_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-BasicMultiLine-S_C", "Get Body Text");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Get Header Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UTooltipMinusBasicMultiLineMinusS_C::Get_Header_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-BasicMultiLine-S_C", "Get Header Text");

	Params::TooltipMinusBasicMultiLineMinusS_C_Get_Header_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Get Icon Brush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UTooltipMinusBasicMultiLineMinusS_C::Get_Icon_Brush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-BasicMultiLine-S_C", "Get Icon Brush");

	Params::TooltipMinusBasicMultiLineMinusS_C_Get_Icon_Brush Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

