#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookSectionTileWidget

#include "Basic.hpp"

#include "CollectionBookSectionTileWidget_classes.hpp"
#include "CollectionBookSectionTileWidget_parameters.hpp"


namespace SDK
{

// Function CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C.ExecuteUbergraph_CollectionBookSectionTileWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionTileWidget_C::ExecuteUbergraph_CollectionBookSectionTileWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSectionTileWidget_C", "ExecuteUbergraph_CollectionBookSectionTileWidget");

	Params::CollectionBookSectionTileWidget_C_ExecuteUbergraph_CollectionBookSectionTileWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C.OnSectionSlotUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   NumFilledSlots                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumSlots                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortCollectionBookState                SectionState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookSectionTileWidget_C::OnSectionSlotUpdate(int32 NumFilledSlots, int32 NumSlots, EFortCollectionBookState SectionState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSectionTileWidget_C", "OnSectionSlotUpdate");

	Params::CollectionBookSectionTileWidget_C_OnSectionSlotUpdate Parms{};

	Parms.NumFilledSlots = NumFilledSlots;
	Parms.NumSlots = NumSlots;
	Parms.SectionState = SectionState;

	UObject::ProcessEvent(Func, &Parms);
}

}

