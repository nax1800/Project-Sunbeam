#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TRV_Candle_03

#include "Basic.hpp"

#include "Transylvania_LightMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TRV_Candle_03.BP_TRV_Candle_03_C
// 0x0020 (0x1100 - 0x10E0)
class ABP_TRV_Candle_03_C final : public ATransylvania_LightMaster_C
{
public:
	class UStaticMeshComponent*                   BloomPlane2;                                       // 0x10E0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Flame2;                                            // 0x10E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BloomPlane1;                                       // 0x10F0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Flame1;                                            // 0x10F8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TRV_Candle_03_C">();
	}
	static class ABP_TRV_Candle_03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TRV_Candle_03_C>();
	}
};
static_assert(alignof(ABP_TRV_Candle_03_C) == 0x000010, "Wrong alignment on ABP_TRV_Candle_03_C");
static_assert(sizeof(ABP_TRV_Candle_03_C) == 0x001100, "Wrong size on ABP_TRV_Candle_03_C");
static_assert(offsetof(ABP_TRV_Candle_03_C, BloomPlane2) == 0x0010E0, "Member 'ABP_TRV_Candle_03_C::BloomPlane2' has a wrong offset!");
static_assert(offsetof(ABP_TRV_Candle_03_C, Flame2) == 0x0010E8, "Member 'ABP_TRV_Candle_03_C::Flame2' has a wrong offset!");
static_assert(offsetof(ABP_TRV_Candle_03_C, BloomPlane1) == 0x0010F0, "Member 'ABP_TRV_Candle_03_C::BloomPlane1' has a wrong offset!");
static_assert(offsetof(ABP_TRV_Candle_03_C, Flame1) == 0x0010F8, "Member 'ABP_TRV_Candle_03_C::Flame1' has a wrong offset!");

}

