#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TextStyleMinusBase

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TextStyle-Base.TextStyle-Base_C
// 0x0000 (0x00D0 - 0x00D0)
class UTextStyleMinusBase_C : public UCommonTextStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-Base_C">();
	}
	static class UTextStyleMinusBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyleMinusBase_C>();
	}
};
static_assert(alignof(UTextStyleMinusBase_C) == 0x000008, "Wrong alignment on UTextStyleMinusBase_C");
static_assert(sizeof(UTextStyleMinusBase_C) == 0x0000D0, "Wrong size on UTextStyleMinusBase_C");

}

