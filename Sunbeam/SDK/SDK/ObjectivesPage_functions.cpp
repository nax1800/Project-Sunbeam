#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ObjectivesPage

#include "Basic.hpp"

#include "ObjectivesPage_classes.hpp"
#include "ObjectivesPage_parameters.hpp"


namespace SDK
{

// Function ObjectivesPage.ObjectivesPage_C.ExecuteUbergraph_ObjectivesPage
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UObjectivesPage_C::ExecuteUbergraph_ObjectivesPage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectivesPage_C", "ExecuteUbergraph_ObjectivesPage");

	Params::ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ObjectivesPage.ObjectivesPage_C.OnActiveGameplayModifiersChanged_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*>AppliedModifiers                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UObjectivesPage_C::OnActiveGameplayModifiersChanged_Event_0(const TArray<class UFortGameplayModifierItemDefinition*>& AppliedModifiers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectivesPage_C", "OnActiveGameplayModifiersChanged_Event_0");

	Params::ObjectivesPage_C_OnActiveGameplayModifiersChanged_Event_0 Parms{};

	Parms.AppliedModifiers = std::move(AppliedModifiers);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ObjectivesPage.ObjectivesPage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UObjectivesPage_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectivesPage_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ObjectivesPage.ObjectivesPage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UObjectivesPage_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectivesPage_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ObjectivesPage.ObjectivesPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UObjectivesPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectivesPage_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ObjectivesPage.ObjectivesPage_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PassThrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UObjectivesPage_C::HandleBack(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectivesPage_C", "HandleBack");

	Params::ObjectivesPage_C_HandleBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}


// Function ObjectivesPage.ObjectivesPage_C.HandleSelectedButtonChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    InButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InButtonIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UObjectivesPage_C::HandleSelectedButtonChanged(class UCommonButton* InButton, int32 InButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectivesPage_C", "HandleSelectedButtonChanged");

	Params::ObjectivesPage_C_HandleSelectedButtonChanged Parms{};

	Parms.InButton = InButton;
	Parms.InButtonIndex = InButtonIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ObjectivesPage.ObjectivesPage_C.HandleInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PassThrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UObjectivesPage_C::HandleInventory(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectivesPage_C", "HandleInventory");

	Params::ObjectivesPage_C_HandleInventory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}


// Function ObjectivesPage.ObjectivesPage_C.ConfigureModifiersView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShowModifiers                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UObjectivesPage_C::ConfigureModifiersView(bool ShowModifiers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectivesPage_C", "ConfigureModifiersView");

	Params::ObjectivesPage_C_ConfigureModifiersView Parms{};

	Parms.ShowModifiers = ShowModifiers;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ObjectivesPage.ObjectivesPage_C.MissionHasModifiers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    MissionHasModifiers_0                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UObjectivesPage_C::MissionHasModifiers(bool* MissionHasModifiers_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectivesPage_C", "MissionHasModifiers");

	Params::ObjectivesPage_C_MissionHasModifiers Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MissionHasModifiers_0 != nullptr)
		*MissionHasModifiers_0 = Parms.MissionHasModifiers_0;
}

}

