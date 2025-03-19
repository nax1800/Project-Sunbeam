#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBoostRow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass XpBoostRow.XpBoostRow_C
// 0x0060 (0x0290 - 0x0230)
class UXpBoostRow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       Boost;                                             // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BoostIcon;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      GiveXPButton;                                      // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                        PlayerBanner;                                      // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PlayerName;                                        // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsBoosted;                                         // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsPlayer;                                          // 0x0261(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HasPartyMember;                                    // 0x0262(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_263[0x5];                                      // 0x0263(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   Give_Boost_Clicked;                                // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FUniqueNetIdRepl                       Player_Id;                                         // 0x0278(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Give_Boost_Clicked__DelegateSignature(const struct FUniqueNetIdRepl& Player_to_Boost);
	void ExecuteUbergraph_XpBoostRow(int32 EntryPoint);
	void BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnMCPRequestComplete_59B43F5044B96A114CC64595A3818F3C();
	void DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0(EFortDialogResult Result, class FName ResultName);
	void DialogResult_9BF60C804C82DAA0C1A2839132130883(EFortDialogResult Result, class FName ResultName);
	void OnMCPRequestComplete_13866D8D449A2AA167E306B6A172BD62();
	void Update_Party_Member(bool Row_Has_Party_Member, const struct FFortTeamMemberInfo& Party_Members_Info);
	void Center_On_Row();
	void Update_Boost_Material();
	void HasBoost(class UFortAccountItemDefinition* AccountItemDef, bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"XpBoostRow_C">();
	}
	static class UXpBoostRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpBoostRow_C>();
	}
};
static_assert(alignof(UXpBoostRow_C) == 0x000008, "Wrong alignment on UXpBoostRow_C");
static_assert(sizeof(UXpBoostRow_C) == 0x000290, "Wrong size on UXpBoostRow_C");
static_assert(offsetof(UXpBoostRow_C, UberGraphFrame) == 0x000230, "Member 'UXpBoostRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UXpBoostRow_C, Boost) == 0x000238, "Member 'UXpBoostRow_C::Boost' has a wrong offset!");
static_assert(offsetof(UXpBoostRow_C, BoostIcon) == 0x000240, "Member 'UXpBoostRow_C::BoostIcon' has a wrong offset!");
static_assert(offsetof(UXpBoostRow_C, GiveXPButton) == 0x000248, "Member 'UXpBoostRow_C::GiveXPButton' has a wrong offset!");
static_assert(offsetof(UXpBoostRow_C, PlayerBanner) == 0x000250, "Member 'UXpBoostRow_C::PlayerBanner' has a wrong offset!");
static_assert(offsetof(UXpBoostRow_C, PlayerName) == 0x000258, "Member 'UXpBoostRow_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UXpBoostRow_C, IsBoosted) == 0x000260, "Member 'UXpBoostRow_C::IsBoosted' has a wrong offset!");
static_assert(offsetof(UXpBoostRow_C, IsPlayer) == 0x000261, "Member 'UXpBoostRow_C::IsPlayer' has a wrong offset!");
static_assert(offsetof(UXpBoostRow_C, HasPartyMember) == 0x000262, "Member 'UXpBoostRow_C::HasPartyMember' has a wrong offset!");
static_assert(offsetof(UXpBoostRow_C, Give_Boost_Clicked) == 0x000268, "Member 'UXpBoostRow_C::Give_Boost_Clicked' has a wrong offset!");
static_assert(offsetof(UXpBoostRow_C, Player_Id) == 0x000278, "Member 'UXpBoostRow_C::Player_Id' has a wrong offset!");

}

