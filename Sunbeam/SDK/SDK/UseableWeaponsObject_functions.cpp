#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UseableWeaponsObject

#include "Basic.hpp"

#include "UseableWeaponsObject_classes.hpp"
#include "UseableWeaponsObject_parameters.hpp"


namespace SDK
{

// Function UseableWeaponsObject.UseableWeaponsObject_C.ExecuteUbergraph_UseableWeaponsObject
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUseableWeaponsObject_C::ExecuteUbergraph_UseableWeaponsObject(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UseableWeaponsObject_C", "ExecuteUbergraph_UseableWeaponsObject");

	Params::UseableWeaponsObject_C_ExecuteUbergraph_UseableWeaponsObject Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

