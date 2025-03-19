#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabInputOptions

#include "Basic.hpp"

#include "TabInputOptions_classes.hpp"
#include "TabInputOptions_parameters.hpp"


namespace SDK
{

// Function TabInputOptions.TabInputOptions_C.Enable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Accept_Input                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             Overlay_Text                                           (Parm)

void UTabInputOptions_C::Enable_Overlay__DelegateSignature(bool Accept_Input, const class FText& Overlay_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabInputOptions_C", "Enable Overlay__DelegateSignature");

	Params::TabInputOptions_C_Enable_Overlay__DelegateSignature Parms{};

	Parms.Accept_Input = Accept_Input;
	Parms.Overlay_Text = std::move(Overlay_Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabInputOptions.TabInputOptions_C.Disable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTabInputOptions_C::Disable_Overlay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabInputOptions_C", "Disable Overlay__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabInputOptions.TabInputOptions_C.Gamepad Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Gamepad_Enabled                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabInputOptions_C::Gamepad_Changed__DelegateSignature(bool Gamepad_Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabInputOptions_C", "Gamepad Changed__DelegateSignature");

	Params::TabInputOptions_C_Gamepad_Changed__DelegateSignature Parms{};

	Parms.Gamepad_Enabled = Gamepad_Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabInputOptions.TabInputOptions_C.ExecuteUbergraph_TabInputOptions
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabInputOptions_C::ExecuteUbergraph_TabInputOptions(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabInputOptions_C", "ExecuteUbergraph_TabInputOptions");

	Params::TabInputOptions_C_ExecuteUbergraph_TabInputOptions Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabInputOptions.TabInputOptions_C.UnbindClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Number_in_List                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabInputOptions_C::UnbindClicked(int32 Number_in_List)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabInputOptions_C", "UnbindClicked");

	Params::TabInputOptions_C_UnbindClicked Parms{};

	Parms.Number_in_List = Number_in_List;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabInputOptions.TabInputOptions_C.HandleUsingGamepadChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabInputOptions_C::HandleUsingGamepadChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabInputOptions_C", "HandleUsingGamepadChanged");

	Params::TabInputOptions_C_HandleUsingGamepadChanged Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabInputOptions.TabInputOptions_C.BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabInputOptions_C::BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabInputOptions_C", "BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature");

	Params::TabInputOptions_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabInputOptions.TabInputOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabInputOptions_C::UpdateOptionsTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabInputOptions_C", "UpdateOptionsTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabInputOptions.TabInputOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabInputOptions_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabInputOptions_C", "CenterOnTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabInputOptions.TabInputOptions_C.Input Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Number_in_List                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_Primary_Button                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabInputOptions_C::Input_Clicked(int32 Number_in_List, bool Is_Primary_Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabInputOptions_C", "Input Clicked");

	Params::TabInputOptions_C_Input_Clicked Parms{};

	Parms.Number_in_List = Number_in_List;
	Parms.Is_Primary_Button = Is_Primary_Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabInputOptions.TabInputOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabInputOptions_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabInputOptions_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabInputOptions.TabInputOptions_C.Overlay Key Pressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             NewKey                                                 (Parm, HasGetValueTypeHash)

void UTabInputOptions_C::Overlay_Key_Pressed(const struct FKey& NewKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabInputOptions_C", "Overlay Key Pressed");

	Params::TabInputOptions_C_Overlay_Key_Pressed Parms{};

	Parms.NewKey = std::move(NewKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabInputOptions.TabInputOptions_C.Set Input Enabled
// (Public, BlueprintCallable, BlueprintEvent)

void UTabInputOptions_C::Set_Input_Enabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabInputOptions_C", "Set Input Enabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabInputOptions.TabInputOptions_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)

void UTabInputOptions_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabInputOptions_C", "NewFunction_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

