#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ButtonStyleMinusRight

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ButtonStyle-Right.ButtonStyle-Right_C
// 0x0000 (0x0530 - 0x0530)
class UButtonStyleMinusRight_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Right_C">();
	}
	static class UButtonStyleMinusRight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyleMinusRight_C>();
	}
};
static_assert(alignof(UButtonStyleMinusRight_C) == 0x000008, "Wrong alignment on UButtonStyleMinusRight_C");
static_assert(sizeof(UButtonStyleMinusRight_C) == 0x000530, "Wrong size on UButtonStyleMinusRight_C");

}

