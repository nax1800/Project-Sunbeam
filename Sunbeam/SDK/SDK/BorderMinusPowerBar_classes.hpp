#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BorderMinusPowerBar

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Border-PowerBar.Border-PowerBar_C
// 0x0000 (0x00B8 - 0x00B8)
class UBorderMinusPowerBar_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-PowerBar_C">();
	}
	static class UBorderMinusPowerBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorderMinusPowerBar_C>();
	}
};
static_assert(alignof(UBorderMinusPowerBar_C) == 0x000008, "Wrong alignment on UBorderMinusPowerBar_C");
static_assert(sizeof(UBorderMinusPowerBar_C) == 0x0000B8, "Wrong size on UBorderMinusPowerBar_C");

}

