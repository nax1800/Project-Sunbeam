#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ErrorEntry

#include "Basic.hpp"

#include "ErrorEntry_classes.hpp"
#include "ErrorEntry_parameters.hpp"


namespace SDK
{

// Function ErrorEntry.ErrorEntry_C.ExecuteUbergraph_ErrorEntry
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UErrorEntry_C::ExecuteUbergraph_ErrorEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorEntry_C", "ExecuteUbergraph_ErrorEntry");

	Params::ErrorEntry_C_ExecuteUbergraph_ErrorEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ErrorEntry.ErrorEntry_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UErrorEntry_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorEntry_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature");

	Params::ErrorEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ErrorEntry.ErrorEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UErrorEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ErrorEntry.ErrorEntry_C.GetButtonVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UErrorEntry_C::GetButtonVisibility(ESlateVisibility* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorEntry_C", "GetButtonVisibility");

	Params::ErrorEntry_C_GetButtonVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function ErrorEntry.ErrorEntry_C.SetErrorInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortErrorInfo                   ErrorInfo_0                                            (Parm)

void UErrorEntry_C::SetErrorInfo(const struct FFortErrorInfo& ErrorInfo_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorEntry_C", "SetErrorInfo");

	Params::ErrorEntry_C_SetErrorInfo Parms{};

	Parms.ErrorInfo_0 = std::move(ErrorInfo_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ErrorEntry.ErrorEntry_C.Center on Widget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Did_Center                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UErrorEntry_C::Center_on_Widget(bool* Did_Center)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorEntry_C", "Center on Widget");

	Params::ErrorEntry_C_Center_on_Widget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Did_Center != nullptr)
		*Did_Center = Parms.Did_Center;
}

}

