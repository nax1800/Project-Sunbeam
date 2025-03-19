#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PowerToastWidget

#include "Basic.hpp"

#include "PowerToastWidget_classes.hpp"
#include "PowerToastWidget_parameters.hpp"


namespace SDK
{

// Function PowerToastWidget.PowerToastWidget_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPowerToastWidget_C::OnFinishedToast__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "OnFinishedToast__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerToastWidget_C::ExecuteUbergraph_PowerToastWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "ExecuteUbergraph_PowerToastWidget");

	Params::PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerToastWidget.PowerToastWidget_C.HandleSynchronizeTimeout
// (BlueprintCallable, BlueprintEvent)

void UPowerToastWidget_C::HandleSynchronizeTimeout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "HandleSynchronizeTimeout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PowerToastWidget.PowerToastWidget_C.OnTeamMemberFinishedSynchronizing_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 NewTeamMemberId                                        (Parm, HasGetValueTypeHash)

void UPowerToastWidget_C::OnTeamMemberFinishedSynchronizing_Event_0(const struct FUniqueNetIdRepl& NewTeamMemberId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "OnTeamMemberFinishedSynchronizing_Event_0");

	Params::PowerToastWidget_C_OnTeamMemberFinishedSynchronizing_Event_0 Parms{};

	Parms.NewTeamMemberId = std::move(NewTeamMemberId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerToastWidget.PowerToastWidget_C.BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UPowerToastWidget_C::BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PowerToastWidget.PowerToastWidget_C.BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UPowerToastWidget_C::BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PowerToastWidget.PowerToastWidget_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              NewInfo                                                (Parm)

void UPowerToastWidget_C::OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "OnPlayerInfoChanged");

	Params::PowerToastWidget_C_OnPlayerInfoChanged Parms{};

	Parms.NewInfo = std::move(NewInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerToastWidget.PowerToastWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerToastWidget_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::PowerToastWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, Parm, OutParm, ReferenceParm)

void UPowerToastWidget_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "OnMouseLeave");

	Params::PowerToastWidget_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, Parm, OutParm, ReferenceParm)

void UPowerToastWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "OnMouseEnter");

	Params::PowerToastWidget_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay
// (BlueprintCallable, BlueprintEvent)

void UPowerToastWidget_C::HandleAnimationDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "HandleAnimationDelay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PowerToastWidget.PowerToastWidget_C.HandleOutroFinished
// (BlueprintCallable, BlueprintEvent)

void UPowerToastWidget_C::HandleOutroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "HandleOutroFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PowerToastWidget.PowerToastWidget_C.HandleIntroFinished
// (BlueprintCallable, BlueprintEvent)

void UPowerToastWidget_C::HandleIntroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "HandleIntroFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PowerToastWidget.PowerToastWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPowerToastWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PowerToastWidget.PowerToastWidget_C.SetToast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*              Toast                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerToastWidget_C::SetToast(class UFortUINotification* Toast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "SetToast");

	Params::PowerToastWidget_C_SetToast Parms{};

	Parms.Toast = Toast;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerToastWidget.PowerToastWidget_C.ShowText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (Parm)
// class UCommonTextBlock*                 TextBlock                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerToastWidget_C::ShowText(const class FText& Text, class UCommonTextBlock* TextBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "ShowText");

	Params::PowerToastWidget_C_ShowText Parms{};

	Parms.Text = std::move(Text);
	Parms.TextBlock = TextBlock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerToastWidget.PowerToastWidget_C.StartIntro
// (Public, BlueprintCallable, BlueprintEvent)

void UPowerToastWidget_C::StartIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "StartIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PowerToastWidget.PowerToastWidget_C.UpdatePowerRating
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPowerToastWidget_C::UpdatePowerRating()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerToastWidget_C", "UpdatePowerRating");

	UObject::ProcessEvent(Func, nullptr);
}

}

