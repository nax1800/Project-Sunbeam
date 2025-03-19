#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLobbyPlayerPanelDetails

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C
// 0x01B0 (0x03E8 - 0x0238)
class UAthenaLobbyPlayerPanelDetails_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UPlayerBanner_C*                        PlayerBanner;                                      // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextInviteSent;                                    // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPlayerName;                                    // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    TeamMemberInfo;                                    // 0x0258(0x0190)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_AthenaLobbyPlayerPanelDetails(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Refresh();
	void RefreshPlayerName();
	void RefreshPendingInvite();
	void IsInvitationPending(bool* bIsInvitationPending);
	void Initialize();
	void OnPartyInvitesCountChanged(int32 InvitesCount);
	void OnActiveFriendsCountUpdated(int32 ActiveFriendsCount);
	void InitializeContextEvents();
	void SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo_0);
	void RefreshBanner();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLobbyPlayerPanelDetails_C">();
	}
	static class UAthenaLobbyPlayerPanelDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLobbyPlayerPanelDetails_C>();
	}
};
static_assert(alignof(UAthenaLobbyPlayerPanelDetails_C) == 0x000008, "Wrong alignment on UAthenaLobbyPlayerPanelDetails_C");
static_assert(sizeof(UAthenaLobbyPlayerPanelDetails_C) == 0x0003E8, "Wrong size on UAthenaLobbyPlayerPanelDetails_C");
static_assert(offsetof(UAthenaLobbyPlayerPanelDetails_C, UberGraphFrame) == 0x000238, "Member 'UAthenaLobbyPlayerPanelDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanelDetails_C, PlayerBanner) == 0x000240, "Member 'UAthenaLobbyPlayerPanelDetails_C::PlayerBanner' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanelDetails_C, TextInviteSent) == 0x000248, "Member 'UAthenaLobbyPlayerPanelDetails_C::TextInviteSent' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanelDetails_C, TextPlayerName) == 0x000250, "Member 'UAthenaLobbyPlayerPanelDetails_C::TextPlayerName' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanelDetails_C, TeamMemberInfo) == 0x000258, "Member 'UAthenaLobbyPlayerPanelDetails_C::TeamMemberInfo' has a wrong offset!");

}

