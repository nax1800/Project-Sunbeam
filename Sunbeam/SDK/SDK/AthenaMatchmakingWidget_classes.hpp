#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMatchmakingWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMatchmakingWidget.AthenaMatchmakingWidget_C
// 0x0010 (0x02E0 - 0x02D0)
class UAthenaMatchmakingWidget_C final : public UFortAthenaMatchmakingWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 MatchmakingSpinner;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaMatchmakingWidget(int32 EntryPoint);
	void BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature(int32 Value);
	void SetCancelButtonState(bool bIsMatchmaking);
	void Construct();
	void SetPlayButtonState(bool bCanMatchmake);
	void BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetAutoFillOptions();
	void PlaylistChange(bool bDirection);
	void FillChange(bool bDirection);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMatchmakingWidget_C">();
	}
	static class UAthenaMatchmakingWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMatchmakingWidget_C>();
	}
};
static_assert(alignof(UAthenaMatchmakingWidget_C) == 0x000008, "Wrong alignment on UAthenaMatchmakingWidget_C");
static_assert(sizeof(UAthenaMatchmakingWidget_C) == 0x0002E0, "Wrong size on UAthenaMatchmakingWidget_C");
static_assert(offsetof(UAthenaMatchmakingWidget_C, UberGraphFrame) == 0x0002D0, "Member 'UAthenaMatchmakingWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingWidget_C, MatchmakingSpinner) == 0x0002D8, "Member 'UAthenaMatchmakingWidget_C::MatchmakingSpinner' has a wrong offset!");

}

