#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabAccountLinkage

#include "Basic.hpp"

#include "TabAccountLinkage_classes.hpp"
#include "TabAccountLinkage_parameters.hpp"


namespace SDK
{

// Function TabAccountLinkage.TabAccountLinkage_C.ExecuteUbergraph_TabAccountLinkage
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccountLinkage_C::ExecuteUbergraph_TabAccountLinkage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabAccountLinkage_C", "ExecuteUbergraph_TabAccountLinkage");

	Params::TabAccountLinkage_C_ExecuteUbergraph_TabAccountLinkage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabAccountLinkage.TabAccountLinkage_C.BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccountLinkage_C::BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabAccountLinkage_C", "BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature");

	Params::TabAccountLinkage_C_BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabAccountLinkage.TabAccountLinkage_C.BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                             NewTooltipText                                         (Parm)

void UTabAccountLinkage_C::BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature(const class FText& NewTooltipText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabAccountLinkage_C", "BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature");

	Params::TabAccountLinkage_C_BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature Parms{};

	Parms.NewTooltipText = std::move(NewTooltipText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabAccountLinkage.TabAccountLinkage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabAccountLinkage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabAccountLinkage_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabAccountLinkage.TabAccountLinkage_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabAccountLinkage_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabAccountLinkage_C", "CenterOnTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabAccountLinkage.TabAccountLinkage_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabAccountLinkage_C::UpdateOptionsTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabAccountLinkage_C", "UpdateOptionsTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabAccountLinkage.TabAccountLinkage_C.Update Data
// (Public, BlueprintCallable, BlueprintEvent)

void UTabAccountLinkage_C::Update_Data()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabAccountLinkage_C", "Update Data");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabAccountLinkage.TabAccountLinkage_C.Initialize Data
// (Public, BlueprintCallable, BlueprintEvent)

void UTabAccountLinkage_C::Initialize_Data()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabAccountLinkage_C", "Initialize Data");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabAccountLinkage.TabAccountLinkage_C.Fire Enter Live Stream Analytic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabAccountLinkage_C::Fire_Enter_Live_Stream_Analytic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabAccountLinkage_C", "Fire Enter Live Stream Analytic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabAccountLinkage.TabAccountLinkage_C.Build Player Name Analytic Attribute
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortAnalyticsEventAttribute     ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FFortAnalyticsEventAttribute UTabAccountLinkage_C::Build_Player_Name_Analytic_Attribute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabAccountLinkage_C", "Build Player Name Analytic Attribute");

	Params::TabAccountLinkage_C_Build_Player_Name_Analytic_Attribute Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TabAccountLinkage.TabAccountLinkage_C.Build Player Id Analytic Attribute
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortAnalyticsEventAttribute     ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FFortAnalyticsEventAttribute UTabAccountLinkage_C::Build_Player_Id_Analytic_Attribute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabAccountLinkage_C", "Build Player Id Analytic Attribute");

	Params::TabAccountLinkage_C_Build_Player_Id_Analytic_Attribute Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TabAccountLinkage.TabAccountLinkage_C.InitializeWebsiteConfiguration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabAccountLinkage_C::InitializeWebsiteConfiguration()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabAccountLinkage_C", "InitializeWebsiteConfiguration");

	UObject::ProcessEvent(Func, nullptr);
}

}

