#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontEndRewards_ChoiceRewards

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C
// 0x00D8 (0x0338 - 0x0260)
class UFrontEndRewards_ChoiceRewards_C final : public UFortRewardNotificationSubWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimFadeOut;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimFadeIn;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderConfirmationDim;                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonNo;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonYes;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelCardList;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_0;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayMain;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxCanvasSize;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextDescriptionHeader;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextDescriptionSummary;                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxConfirmation;                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxDescription;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         CardPadding;                                       // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class URewards_ItemCard_C*>            CardList;                                          // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         CardSelectionIndex;                                // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleDuration;                                     // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnRewardSelected;                                  // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         CardSidePadding;                                   // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HighlightedScale;                                  // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NormalScale;                                       // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BackgroundScale;                                   // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NormalShadowDepth;                                 // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BackgroundShadowDepth;                             // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HighlightedShadowDepth;                            // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31C[0x4];                                      // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    InspectAction;                                     // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          bCardSelectionDisabled;                            // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnRewardSelected__DelegateSignature(int32 Index_0, class UFortItem* Item);
	void ExecuteUbergraph_FrontEndRewards_ChoiceRewards(int32 EntryPoint);
	void OnPrimaryAction();
	void CustomEvent_1();
	void CustomEvent_0();
	void OnDeactivated();
	void OnActivated();
	void OnNavigationRight();
	void OnNavigationLeft();
	void Construct();
	void TransitionOutBegin();
	void TransitionInBegin();
	void BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void AdjustCardPositions();
	void InitDesignView();
	void SetCardSelected(class URewards_ItemCard_C* Card);
	void SelectCard(int32 NewSelection);
	void SelectNextCard();
	void SelectPreviousCard();
	void HandleCardClicked(class URewards_ItemCard_C* ItemCard);
	void SetSelectedItemDescription();
	void SetCanvasSize();
	void ConfirmChoice();
	void ShowConfirmation();
	void HideConfirmation();
	void PopulateFromCardList(TArray<class URewards_ItemCard_C*>& Cards);
	void Reset();
	void HandleTransitionInComplete();
	void HandleInspectAction(bool* Committed);
	void AddInputActions();
	void HandleResizeFinished(class URewards_ItemCard_C* Card);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontEndRewards_ChoiceRewards_C">();
	}
	static class UFrontEndRewards_ChoiceRewards_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrontEndRewards_ChoiceRewards_C>();
	}
};
static_assert(alignof(UFrontEndRewards_ChoiceRewards_C) == 0x000008, "Wrong alignment on UFrontEndRewards_ChoiceRewards_C");
static_assert(sizeof(UFrontEndRewards_ChoiceRewards_C) == 0x000338, "Wrong size on UFrontEndRewards_ChoiceRewards_C");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, UberGraphFrame) == 0x000260, "Member 'UFrontEndRewards_ChoiceRewards_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, AnimFadeOut) == 0x000268, "Member 'UFrontEndRewards_ChoiceRewards_C::AnimFadeOut' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, AnimFadeIn) == 0x000270, "Member 'UFrontEndRewards_ChoiceRewards_C::AnimFadeIn' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, BorderConfirmationDim) == 0x000278, "Member 'UFrontEndRewards_ChoiceRewards_C::BorderConfirmationDim' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, ButtonNo) == 0x000280, "Member 'UFrontEndRewards_ChoiceRewards_C::ButtonNo' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, ButtonYes) == 0x000288, "Member 'UFrontEndRewards_ChoiceRewards_C::ButtonYes' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, CanvasPanelCardList) == 0x000290, "Member 'UFrontEndRewards_ChoiceRewards_C::CanvasPanelCardList' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, CommonBorder_0) == 0x000298, "Member 'UFrontEndRewards_ChoiceRewards_C::CommonBorder_0' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, OverlayMain) == 0x0002A0, "Member 'UFrontEndRewards_ChoiceRewards_C::OverlayMain' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, SizeBoxCanvasSize) == 0x0002A8, "Member 'UFrontEndRewards_ChoiceRewards_C::SizeBoxCanvasSize' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, TextDescriptionHeader) == 0x0002B0, "Member 'UFrontEndRewards_ChoiceRewards_C::TextDescriptionHeader' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, TextDescriptionSummary) == 0x0002B8, "Member 'UFrontEndRewards_ChoiceRewards_C::TextDescriptionSummary' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, VerticalBoxConfirmation) == 0x0002C0, "Member 'UFrontEndRewards_ChoiceRewards_C::VerticalBoxConfirmation' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, VerticalBoxDescription) == 0x0002C8, "Member 'UFrontEndRewards_ChoiceRewards_C::VerticalBoxDescription' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, CardPadding) == 0x0002D0, "Member 'UFrontEndRewards_ChoiceRewards_C::CardPadding' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, CardList) == 0x0002D8, "Member 'UFrontEndRewards_ChoiceRewards_C::CardList' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, CardSelectionIndex) == 0x0002E8, "Member 'UFrontEndRewards_ChoiceRewards_C::CardSelectionIndex' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, ScaleDuration) == 0x0002EC, "Member 'UFrontEndRewards_ChoiceRewards_C::ScaleDuration' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, OnRewardSelected) == 0x0002F0, "Member 'UFrontEndRewards_ChoiceRewards_C::OnRewardSelected' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, CardSidePadding) == 0x000300, "Member 'UFrontEndRewards_ChoiceRewards_C::CardSidePadding' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, HighlightedScale) == 0x000304, "Member 'UFrontEndRewards_ChoiceRewards_C::HighlightedScale' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, NormalScale) == 0x000308, "Member 'UFrontEndRewards_ChoiceRewards_C::NormalScale' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, BackgroundScale) == 0x00030C, "Member 'UFrontEndRewards_ChoiceRewards_C::BackgroundScale' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, NormalShadowDepth) == 0x000310, "Member 'UFrontEndRewards_ChoiceRewards_C::NormalShadowDepth' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, BackgroundShadowDepth) == 0x000314, "Member 'UFrontEndRewards_ChoiceRewards_C::BackgroundShadowDepth' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, HighlightedShadowDepth) == 0x000318, "Member 'UFrontEndRewards_ChoiceRewards_C::HighlightedShadowDepth' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, InspectAction) == 0x000320, "Member 'UFrontEndRewards_ChoiceRewards_C::InspectAction' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_ChoiceRewards_C, bCardSelectionDisabled) == 0x000330, "Member 'UFrontEndRewards_ChoiceRewards_C::bCardSelectionDisabled' has a wrong offset!");

}

