#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionTrackerEntry

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionTrackerEntry.MissionTrackerEntry_C
// 0x0018 (0x02F8 - 0x02E0)
class UMissionTrackerEntry_C final : public UFortMissionTrackerEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(Transient, DuplicateTransient)
	UMulticastDelegateProperty_                   WidgetVisibilityChanged;                           // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void WidgetVisibilityChanged__DelegateSignature();
	void ExecuteUbergraph_MissionTrackerEntry(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionTrackerEntry_C">();
	}
	static class UMissionTrackerEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionTrackerEntry_C>();
	}
};
static_assert(alignof(UMissionTrackerEntry_C) == 0x000008, "Wrong alignment on UMissionTrackerEntry_C");
static_assert(sizeof(UMissionTrackerEntry_C) == 0x0002F8, "Wrong size on UMissionTrackerEntry_C");
static_assert(offsetof(UMissionTrackerEntry_C, UberGraphFrame) == 0x0002E0, "Member 'UMissionTrackerEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMissionTrackerEntry_C, WidgetVisibilityChanged) == 0x0002E8, "Member 'UMissionTrackerEntry_C::WidgetVisibilityChanged' has a wrong offset!");

}

