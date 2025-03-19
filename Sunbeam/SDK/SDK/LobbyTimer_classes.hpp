#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyTimer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LobbyTimer.LobbyTimer_C
// 0x0030 (0x0260 - 0x0230)
class ULobbyTimer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       TimerIntro;                                        // 0x0238(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          LobbyTimerBorder;                                  // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       LobbyTimerText;                                    // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundBase*                             SoundCue_Countdown_10SecLeft;                      // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundCue_Countdown_10SecTick;                      // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LobbyTimer(int32 EntryPoint);
	void Construct();
	void Handle_Lobby_Started();
	void Handle_Lobby_Disconnected();
	void Show_Lobby_Timer(bool Show);
	void Bind_Delegates();
	void Handle_Show_Lobby_Timer(bool Show);
	void Handle_Lobby_Timer_Updated(int32 Seconds_Remaining);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LobbyTimer_C">();
	}
	static class ULobbyTimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobbyTimer_C>();
	}
};
static_assert(alignof(ULobbyTimer_C) == 0x000008, "Wrong alignment on ULobbyTimer_C");
static_assert(sizeof(ULobbyTimer_C) == 0x000260, "Wrong size on ULobbyTimer_C");
static_assert(offsetof(ULobbyTimer_C, UberGraphFrame) == 0x000230, "Member 'ULobbyTimer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULobbyTimer_C, TimerIntro) == 0x000238, "Member 'ULobbyTimer_C::TimerIntro' has a wrong offset!");
static_assert(offsetof(ULobbyTimer_C, LobbyTimerBorder) == 0x000240, "Member 'ULobbyTimer_C::LobbyTimerBorder' has a wrong offset!");
static_assert(offsetof(ULobbyTimer_C, LobbyTimerText) == 0x000248, "Member 'ULobbyTimer_C::LobbyTimerText' has a wrong offset!");
static_assert(offsetof(ULobbyTimer_C, SoundCue_Countdown_10SecLeft) == 0x000250, "Member 'ULobbyTimer_C::SoundCue_Countdown_10SecLeft' has a wrong offset!");
static_assert(offsetof(ULobbyTimer_C, SoundCue_Countdown_10SecTick) == 0x000258, "Member 'ULobbyTimer_C::SoundCue_Countdown_10SecTick' has a wrong offset!");

}

