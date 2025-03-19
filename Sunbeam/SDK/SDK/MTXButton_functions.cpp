#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MTXButton

#include "Basic.hpp"

#include "MTXButton_classes.hpp"
#include "MTXButton_parameters.hpp"


namespace SDK
{

// Function MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMTXButton_C::ExecuteUbergraph_MTXButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "ExecuteUbergraph_MTXButton");

	Params::MTXButton_C_ExecuteUbergraph_MTXButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MTXButton.MTXButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMTXButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MTXButton.MTXButton_C.HandleInputActionChnaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMTXButton_C::HandleInputActionChnaged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "HandleInputActionChnaged");

	Params::MTXButton_C_HandleInputActionChnaged Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MTXButton.MTXButton_C.BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button_0                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMTXButton_C::BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::MTXButton_C_BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button_0 = Button_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MTXButton.MTXButton_C.HandleLocalAccountInfoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPrivateAccountInfo          NewInfo                                                (Parm, NoDestructor)

void UMTXButton_C::HandleLocalAccountInfoChanged(const struct FFortPrivateAccountInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "HandleLocalAccountInfoChanged");

	Params::MTXButton_C_HandleLocalAccountInfoChanged Parms{};

	Parms.NewInfo = std::move(NewInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MTXButton.MTXButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMTXButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MTXButton.MTXButton_C.UpdateAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPrivateAccountInfo          FortPrivateAccountInfo                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UMTXButton_C::UpdateAmount(const struct FFortPrivateAccountInfo& FortPrivateAccountInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "UpdateAmount");

	Params::MTXButton_C_UpdateAmount Parms{};

	Parms.FortPrivateAccountInfo = std::move(FortPrivateAccountInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MTXButton.MTXButton_C.Get_Button_ToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UMTXButton_C::Get_Button_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "Get_Button_ToolTipWidget_0");

	Params::MTXButton_C_Get_Button_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MTXButton.MTXButton_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)

void UMTXButton_C::UpdateState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "UpdateState");

	UObject::ProcessEvent(Func, nullptr);
}

}

