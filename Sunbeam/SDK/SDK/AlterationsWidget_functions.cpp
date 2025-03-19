#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlterationsWidget

#include "Basic.hpp"

#include "AlterationsWidget_classes.hpp"
#include "AlterationsWidget_parameters.hpp"


namespace SDK
{

// Function AlterationsWidget.AlterationsWidget_C.ExecuteUbergraph_AlterationsWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationsWidget_C::ExecuteUbergraph_AlterationsWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationsWidget_C", "ExecuteUbergraph_AlterationsWidget");

	Params::AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AlterationsWidget.AlterationsWidget_C.OnStateChanged
// (Event, Public, BlueprintEvent)

void UAlterationsWidget_C::OnStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationsWidget_C", "OnStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationsWidget.AlterationsWidget_C.OnItemToCompareWithChanged
// (Event, Public, BlueprintEvent)

void UAlterationsWidget_C::OnItemToCompareWithChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationsWidget_C", "OnItemToCompareWithChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationsWidget.AlterationsWidget_C.OnItemChanged
// (Event, Public, BlueprintEvent)

void UAlterationsWidget_C::OnItemChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationsWidget_C", "OnItemChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationsWidget.AlterationsWidget_C.OnGenerateAlteration
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIAlteration                AlterationInfo                                         (Parm, NoDestructor)

void UAlterationsWidget_C::OnGenerateAlteration(const struct FFortUIAlteration& AlterationInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationsWidget_C", "OnGenerateAlteration");

	Params::AlterationsWidget_C_OnGenerateAlteration Parms{};

	Parms.AlterationInfo = std::move(AlterationInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AlterationsWidget.AlterationsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAlterationsWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationsWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

