#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectEvolutionChoiceEntry

#include "Basic.hpp"

#include "ItemInspectEvolutionChoiceEntry_classes.hpp"
#include "ItemInspectEvolutionChoiceEntry_parameters.hpp"


namespace SDK
{

// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RecipeIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolutionChoiceEntry_C::OnEvolutionChoiceHovered__DelegateSignature(class UFortItem* Item, int32 RecipeIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "OnEvolutionChoiceHovered__DelegateSignature");

	Params::ItemInspectEvolutionChoiceEntry_C_OnEvolutionChoiceHovered__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolutionChoiceEntry_C::OnEvolutionChoiceUnhovered__DelegateSignature(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "OnEvolutionChoiceUnhovered__DelegateSignature");

	Params::ItemInspectEvolutionChoiceEntry_C_OnEvolutionChoiceUnhovered__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RecipeIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolutionChoiceEntry_C::OnEvolutionChoiceSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "OnEvolutionChoiceSelected__DelegateSignature");

	Params::ItemInspectEvolutionChoiceEntry_C_OnEvolutionChoiceSelected__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.ExecuteUbergraph_ItemInspectEvolutionChoiceEntry
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolutionChoiceEntry_C::ExecuteUbergraph_ItemInspectEvolutionChoiceEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "ExecuteUbergraph_ItemInspectEvolutionChoiceEntry");

	Params::ItemInspectEvolutionChoiceEntry_C_ExecuteUbergraph_ItemInspectEvolutionChoiceEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectEvolutionChoiceEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "PreConstruct");

	Params::ItemInspectEvolutionChoiceEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UItemInspectEvolutionChoiceEntry_C::OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.SetItemToRepresent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RecipeIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    EnabledChoice                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectEvolutionChoiceEntry_C::SetItemToRepresent(class UFortItem* Item, int32 RecipeIndex, bool EnabledChoice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "SetItemToRepresent");

	Params::ItemInspectEvolutionChoiceEntry_C_SetItemToRepresent Parms{};

	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;
	Parms.EnabledChoice = EnabledChoice;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.DoDesignTimeRandomization
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolutionChoiceEntry_C::DoDesignTimeRandomization()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "DoDesignTimeRandomization");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.SelectEvolutionChoice
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolutionChoiceEntry_C::SelectEvolutionChoice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "SelectEvolutionChoice");

	UObject::ProcessEvent(Func, nullptr);
}

}

