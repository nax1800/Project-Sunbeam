#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_PlayerScoreBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Results_PlayerScoreBox.Results_PlayerScoreBox_C
// 0x0068 (0x02A0 - 0x0238)
class UResults_PlayerScoreBox_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Glare;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Spark;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Intro;                                        // 0x0250(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBackground;                                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextScore;                                         // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         CountInterpolationTime;                            // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Score;                                             // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValidScoreBox;                                  // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsBestScore;                                      // 0x0271(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_272[0x2];                                      // 0x0272(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PlayRate;                                          // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeBetweenIntroAndCount;                          // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TopScoreColor;                                     // 0x027C(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NormalScoreColor;                                  // 0x028C(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSkippingToEnd;                                    // 0x029C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Results_PlayerScoreBox(int32 EntryPoint);
	void BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, const bool HadCompleted);
	void Skipped_Count_Interpolation();
	void Count_Sequence();
	void BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Intro_Sequence();
	void PreConstruct(bool IsDesignTime);
	void Initialize(int32 Score_0, float PlayRate_0);
	void SetIsBestScore(bool bIsBestScore_0);
	void SetSkippingToEnd();
	void SetIsValidScoreBox(bool bIsValidScoreBox_0);
	void GetIsValidScoreBox(bool* bIsValidScoreBox_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Results_PlayerScoreBox_C">();
	}
	static class UResults_PlayerScoreBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResults_PlayerScoreBox_C>();
	}
};
static_assert(alignof(UResults_PlayerScoreBox_C) == 0x000008, "Wrong alignment on UResults_PlayerScoreBox_C");
static_assert(sizeof(UResults_PlayerScoreBox_C) == 0x0002A0, "Wrong size on UResults_PlayerScoreBox_C");
static_assert(offsetof(UResults_PlayerScoreBox_C, UberGraphFrame) == 0x000238, "Member 'UResults_PlayerScoreBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreBox_C, Anim_Glare) == 0x000240, "Member 'UResults_PlayerScoreBox_C::Anim_Glare' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreBox_C, Anim_Spark) == 0x000248, "Member 'UResults_PlayerScoreBox_C::Anim_Spark' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreBox_C, Anim_Intro) == 0x000250, "Member 'UResults_PlayerScoreBox_C::Anim_Intro' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreBox_C, ImageBackground) == 0x000258, "Member 'UResults_PlayerScoreBox_C::ImageBackground' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreBox_C, TextScore) == 0x000260, "Member 'UResults_PlayerScoreBox_C::TextScore' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreBox_C, CountInterpolationTime) == 0x000268, "Member 'UResults_PlayerScoreBox_C::CountInterpolationTime' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreBox_C, Score) == 0x00026C, "Member 'UResults_PlayerScoreBox_C::Score' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreBox_C, bIsValidScoreBox) == 0x000270, "Member 'UResults_PlayerScoreBox_C::bIsValidScoreBox' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreBox_C, bIsBestScore) == 0x000271, "Member 'UResults_PlayerScoreBox_C::bIsBestScore' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreBox_C, PlayRate) == 0x000274, "Member 'UResults_PlayerScoreBox_C::PlayRate' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreBox_C, TimeBetweenIntroAndCount) == 0x000278, "Member 'UResults_PlayerScoreBox_C::TimeBetweenIntroAndCount' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreBox_C, TopScoreColor) == 0x00027C, "Member 'UResults_PlayerScoreBox_C::TopScoreColor' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreBox_C, NormalScoreColor) == 0x00028C, "Member 'UResults_PlayerScoreBox_C::NormalScoreColor' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreBox_C, bSkippingToEnd) == 0x00029C, "Member 'UResults_PlayerScoreBox_C::bSkippingToEnd' has a wrong offset!");

}

