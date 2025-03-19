#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JoinServer

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass JoinServer.JoinServer_C
// 0x0080 (0x0480 - 0x0400)
class UJoinServer_C final : public UFortUIStateWidget_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(Transient, DuplicateTransient)
	class UBuildWatermark_C*                      BuildWatermark;                                    // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                     MainContentStack;                                  // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ManualStart;                                       // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_419[0x7];                                      // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FConfirmationDialogAction>      TutorialCanceledConfirmActions;                    // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                   NoneAction;                                        // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundPromptTutorial;                               // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MatchmakingAttempts;                               // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TutorialMatchmakingStarted;                        // 0x0444(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_445[0x3];                                      // 0x0445(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UProgressWidget_C*                      ProgressWidget;                                    // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialWindow_C*                      TutorialWindow;                                    // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AbandonSession;                                    // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_459[0x7];                                      // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                MenuWidget;                                        // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxMatchmakingAttempts;                            // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C[0x4];                                      // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URejoinWindow_C*                        RejoinWindow;                                      // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RejoinAttemptCount;                                // 0x0478(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_JoinServer(int32 EntryPoint);
	void OnEnterState(EFortUIState PreviousUIState);
	void Construct();
	void HandleClientEvent_OnboardingStartMatchmaking(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleRequestAbandon();
	void HandleRequestRejoinRetry();
	void HandleClientEvent_RejoinStart(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void ShowSkipTutorial();
	void RequestTutorialRetry();
	void OnSuccess_C91A02504569664A4B1E259E5F57A79D();
	void OnFailure_C91A02504569664A4B1E259E5F57A79D();
	void OnSuccess_B419884742513722D11D8AB4D90DE5E2();
	void OnFailure_B419884742513722D11D8AB4D90DE5E2();
	void DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF(EFortDialogResult Result, class FName ResultName);
	void Initialize();
	void HandleMatchmakingComplete(EMatchmakingCompleteResult Result);
	void HandleMatchmakingStateChange(EMatchmakingState OldState, EMatchmakingState NewState);
	void HandleLobbyDisconnected();
	void HandleEnterState(EFortUIState PreviousState);
	void StartTutorialMatchmakingFlow();
	void SkipTutorial();
	void HandleLobbyTimeUpdated(int32 TimeRemaining);
	void GetMatchmakingError(EMatchmakingCompleteResult MatchMakingError, class FText* ErrorText);
	void ShowTutorialCanceled();
	class UWidget* HandleGetMainMenuContent();
	void ShowRejoinWindow();
	void HideRejoinWindow(bool AbandonSession_0);
	void ShowRejoiningProgress();
	void ShowRetryRejoinSession();
	void ShowRetryRejoinWindow(const class FText& Failure, bool AllowRetry);
	void ShowAbandoningProgress();
	void HandleLobbyConnectingToGame();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JoinServer_C">();
	}
	static class UJoinServer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJoinServer_C>();
	}
};
static_assert(alignof(UJoinServer_C) == 0x000008, "Wrong alignment on UJoinServer_C");
static_assert(sizeof(UJoinServer_C) == 0x000480, "Wrong size on UJoinServer_C");
static_assert(offsetof(UJoinServer_C, UberGraphFrame) == 0x000400, "Member 'UJoinServer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, BuildWatermark) == 0x000408, "Member 'UJoinServer_C::BuildWatermark' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, MainContentStack) == 0x000410, "Member 'UJoinServer_C::MainContentStack' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, ManualStart) == 0x000418, "Member 'UJoinServer_C::ManualStart' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, TutorialCanceledConfirmActions) == 0x000420, "Member 'UJoinServer_C::TutorialCanceledConfirmActions' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, NoneAction) == 0x000430, "Member 'UJoinServer_C::NoneAction' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, SoundPromptTutorial) == 0x000438, "Member 'UJoinServer_C::SoundPromptTutorial' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, MatchmakingAttempts) == 0x000440, "Member 'UJoinServer_C::MatchmakingAttempts' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, TutorialMatchmakingStarted) == 0x000444, "Member 'UJoinServer_C::TutorialMatchmakingStarted' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, ProgressWidget) == 0x000448, "Member 'UJoinServer_C::ProgressWidget' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, TutorialWindow) == 0x000450, "Member 'UJoinServer_C::TutorialWindow' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, AbandonSession) == 0x000458, "Member 'UJoinServer_C::AbandonSession' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, MenuWidget) == 0x000460, "Member 'UJoinServer_C::MenuWidget' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, MaxMatchmakingAttempts) == 0x000468, "Member 'UJoinServer_C::MaxMatchmakingAttempts' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, RejoinWindow) == 0x000470, "Member 'UJoinServer_C::RejoinWindow' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, RejoinAttemptCount) == 0x000478, "Member 'UJoinServer_C::RejoinAttemptCount' has a wrong offset!");

}

