#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_W1_DoorSide

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_W1_DoorSide.PBWA_W1_DoorSide_C
// 0x0000 (0x10C0 - 0x10C0)
class APBWA_W1_DoorSide_C final : public ABuildingWall
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_W1_DoorSide_C">();
	}
	static class APBWA_W1_DoorSide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_W1_DoorSide_C>();
	}
};
static_assert(alignof(APBWA_W1_DoorSide_C) == 0x000010, "Wrong alignment on APBWA_W1_DoorSide_C");
static_assert(sizeof(APBWA_W1_DoorSide_C) == 0x0010C0, "Wrong size on APBWA_W1_DoorSide_C");

}

