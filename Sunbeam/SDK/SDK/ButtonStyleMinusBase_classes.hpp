#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ButtonStyleMinusBase

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ButtonStyle-Base.ButtonStyle-Base_C
// 0x0000 (0x0530 - 0x0530)
class UButtonStyleMinusBase_C : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Base_C">();
	}
	static class UButtonStyleMinusBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyleMinusBase_C>();
	}
};
static_assert(alignof(UButtonStyleMinusBase_C) == 0x000008, "Wrong alignment on UButtonStyleMinusBase_C");
static_assert(sizeof(UButtonStyleMinusBase_C) == 0x000530, "Wrong size on UButtonStyleMinusBase_C");

}

