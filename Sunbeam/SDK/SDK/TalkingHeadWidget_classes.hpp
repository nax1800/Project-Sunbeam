#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TalkingHeadWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TalkingHeadWidget.TalkingHeadWidget_C
// 0x0028 (0x0288 - 0x0260)
class UTalkingHeadWidget_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 TalkingHeadIcon;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextName;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextSubtitles;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxRoot;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TalkingHeadWidget(int32 EntryPoint);
	void Construct();
	void SetTalkingHeadImage(class UTexture2D* Icon);
	void SetTalkingHeadName(const class FText& Title);
	void SetTalkingHeadSubtitle(const class FText& Subtitle);
	void HandleTalkingHeadBegin(class UTexture2D* Image, const class FText& Title, const class FText& Subtitle, EFortAnnouncementDisplayPreference DisplayPreference);
	void HandleTalkingHeadEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TalkingHeadWidget_C">();
	}
	static class UTalkingHeadWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTalkingHeadWidget_C>();
	}
};
static_assert(alignof(UTalkingHeadWidget_C) == 0x000008, "Wrong alignment on UTalkingHeadWidget_C");
static_assert(sizeof(UTalkingHeadWidget_C) == 0x000288, "Wrong size on UTalkingHeadWidget_C");
static_assert(offsetof(UTalkingHeadWidget_C, UberGraphFrame) == 0x000260, "Member 'UTalkingHeadWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTalkingHeadWidget_C, TalkingHeadIcon) == 0x000268, "Member 'UTalkingHeadWidget_C::TalkingHeadIcon' has a wrong offset!");
static_assert(offsetof(UTalkingHeadWidget_C, TextName) == 0x000270, "Member 'UTalkingHeadWidget_C::TextName' has a wrong offset!");
static_assert(offsetof(UTalkingHeadWidget_C, TextSubtitles) == 0x000278, "Member 'UTalkingHeadWidget_C::TextSubtitles' has a wrong offset!");
static_assert(offsetof(UTalkingHeadWidget_C, VerticalBoxRoot) == 0x000280, "Member 'UTalkingHeadWidget_C::VerticalBoxRoot' has a wrong offset!");

}

