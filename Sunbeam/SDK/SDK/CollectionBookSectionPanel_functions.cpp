#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookSectionPanel

#include "Basic.hpp"

#include "CollectionBookSectionPanel_classes.hpp"
#include "CollectionBookSectionPanel_parameters.hpp"


namespace SDK
{

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ExecuteUbergraph_CollectionBookSectionPanel
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionPanel_C::ExecuteUbergraph_CollectionBookSectionPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "ExecuteUbergraph_CollectionBookSectionPanel");

	Params::CollectionBookSectionPanel_C_ExecuteUbergraph_CollectionBookSectionPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UCollectionBookSectionPanel_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookSection*       Section                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionPanel_C::OnSectionChanged(const class UFortCollectionBookSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "OnSectionChanged");

	Params::CollectionBookSectionPanel_C_OnSectionChanged Parms{};

	Parms.Section = Section;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCollectionBookSectionPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ShowItemDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        SelectedItem                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionPanel_C::ShowItemDetail(class UFortItem* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "ShowItemDetail");

	Params::CollectionBookSectionPanel_C_ShowItemDetail Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSlotItemConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        ItemToSlot                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionPanel_C::OnSlotItemConfirm(class UFortItem* ItemToSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "OnSlotItemConfirm");

	Params::CollectionBookSectionPanel_C_OnSlotItemConfirm Parms{};

	Parms.ItemToSlot = ItemToSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnInspectItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AllowItemModifications                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsTemporaryItem                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookSectionPanel_C::OnInspectItem(class UFortItem* Item, bool AllowItemModifications, bool IsTemporaryItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "OnInspectItem");

	Params::CollectionBookSectionPanel_C_OnInspectItem Parms{};

	Parms.Item = Item;
	Parms.AllowItemModifications = AllowItemModifications;
	Parms.IsTemporaryItem = IsTemporaryItem;

	UObject::ProcessEvent(Func, &Parms);
}

}

