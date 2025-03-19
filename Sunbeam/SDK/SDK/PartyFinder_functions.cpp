#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PartyFinder

#include "Basic.hpp"

#include "PartyFinder_classes.hpp"
#include "PartyFinder_parameters.hpp"


namespace SDK
{

// Function PartyFinder.PartyFinder_C.ExecuteUbergraph_PartyFinder
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::ExecuteUbergraph_PartyFinder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "ExecuteUbergraph_PartyFinder");

	Params::PartyFinder_C_ExecuteUbergraph_PartyFinder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature");

	Params::PartyFinder_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinder.PartyFinder_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPartyFinder_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinder.PartyFinder_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::PartyFinder_C_BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinder.PartyFinder_C.OnSocialListChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortSocialItem*>          SocialItems                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPartyFinder_C::OnSocialListChanged(const TArray<class UFortSocialItem*>& SocialItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "OnSocialListChanged");

	Params::PartyFinder_C_OnSocialListChanged Parms{};

	Parms.SocialItems = std::move(SocialItems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsSelected                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinder_C::BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature");

	Params::PartyFinder_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature");

	Params::PartyFinder_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinder.PartyFinder_C.BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature");

	Params::PartyFinder_C_BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinder.PartyFinder_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");

	Params::PartyFinder_C_BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinder.PartyFinder_C.HandlePartyDataChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPartyState                      PartyData                                              (ConstParm, Parm, OutParm, ReferenceParm)

void UPartyFinder_C::HandlePartyDataChanged(const struct FPartyState& PartyData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "HandlePartyDataChanged");

	Params::PartyFinder_C_HandlePartyDataChanged Parms{};

	Parms.PartyData = std::move(PartyData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature");

	Params::PartyFinder_C_BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinder.PartyFinder_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyFinder_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinder.PartyFinder_C.DialogResult_9763B6F5495998E5B2E944A5F646709C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult                       Result                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             ResultName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::DialogResult_9763B6F5495998E5B2E944A5F646709C(EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "DialogResult_9763B6F5495998E5B2E944A5F646709C");

	Params::PartyFinder_C_DialogResult_9763B6F5495998E5B2E944A5F646709C Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinder.PartyFinder_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::BindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "BindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinder.PartyFinder_C.HandlePartyTransitionStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPartyTransition                    Transition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinder_C::HandlePartyTransitionStarted(EFortPartyTransition Transition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "HandlePartyTransitionStarted");

	Params::PartyFinder_C_HandlePartyTransitionStarted Parms{};

	Parms.Transition = Transition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinder.PartyFinder_C.HandleSocialListChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortSocialItem*>          SocialItems                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                                    bExpandAll                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinder_C::HandleSocialListChanged(TArray<class UFortSocialItem*>& SocialItems, bool bExpandAll)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "HandleSocialListChanged");

	Params::PartyFinder_C_HandleSocialListChanged Parms{};

	Parms.SocialItems = std::move(SocialItems);
	Parms.bExpandAll = bExpandAll;

	UObject::ProcessEvent(Func, &Parms);

	SocialItems = std::move(Parms.SocialItems);
}


// Function PartyFinder.PartyFinder_C.UpdateDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSocialItem*                  PartyFinderItem                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::UpdateDetails(class UFortSocialItem* PartyFinderItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "UpdateDetails");

	Params::PartyFinder_C_UpdateDetails Parms{};

	Parms.PartyFinderItem = PartyFinderItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinder.PartyFinder_C.GetFinderItemVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortSocialItem*                  PartyFinderItem                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

ESlateVisibility UPartyFinder_C::GetFinderItemVisibility(class UFortSocialItem* PartyFinderItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "GetFinderItemVisibility");

	Params::PartyFinder_C_GetFinderItemVisibility Parms{};

	Parms.PartyFinderItem = PartyFinderItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PartyFinder.PartyFinder_C.SendInvite
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::SendInvite()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "SendInvite");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinder.PartyFinder_C.IgnoreInvite
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::IgnoreInvite()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "IgnoreInvite");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinder.PartyFinder_C.SocialTreeView_GetChildrenForCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UPartyFinder_C::SocialTreeView_GetChildrenForCategory(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "SocialTreeView_GetChildrenForCategory");

	Params::PartyFinder_C_SocialTreeView_GetChildrenForCategory Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PartyFinder.PartyFinder_C.HandleFriendPresenceUpdated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 FriendId                                               (Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UPartyFinder_C::HandleFriendPresenceUpdated(struct FUniqueNetIdRepl& FriendId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "HandleFriendPresenceUpdated");

	Params::PartyFinder_C_HandleFriendPresenceUpdated Parms{};

	Parms.FriendId = std::move(FriendId);

	UObject::ProcessEvent(Func, &Parms);

	FriendId = std::move(Parms.FriendId);
}


// Function PartyFinder.PartyFinder_C.UpdateDetailsEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::UpdateDetailsEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinder_C", "UpdateDetailsEmpty");

	UObject::ProcessEvent(Func, nullptr);
}

}

