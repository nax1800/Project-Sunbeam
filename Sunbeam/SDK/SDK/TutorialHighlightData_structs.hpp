#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TutorialHighlightData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct TutorialHighlightData.TutorialHighlightData
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FTutorialHighlightData final
{
public:
	class FName                                   WidgetName_12_30ABB1A646D8ED824206A998D77E2265;    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowHighlight_14_0B07A3D24E1D6E27B678D78A737A8B5A; // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HighLightDelay_9_2AECA98A4FDAC2A16624EFAC3E01C581; // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FTutorialHighlightData) == 0x000008, "Wrong alignment on FTutorialHighlightData");
static_assert(sizeof(FTutorialHighlightData) == 0x000010, "Wrong size on FTutorialHighlightData");
static_assert(offsetof(FTutorialHighlightData, WidgetName_12_30ABB1A646D8ED824206A998D77E2265) == 0x000000, "Member 'FTutorialHighlightData::WidgetName_12_30ABB1A646D8ED824206A998D77E2265' has a wrong offset!");
static_assert(offsetof(FTutorialHighlightData, bShowHighlight_14_0B07A3D24E1D6E27B678D78A737A8B5A) == 0x000008, "Member 'FTutorialHighlightData::bShowHighlight_14_0B07A3D24E1D6E27B678D78A737A8B5A' has a wrong offset!");
static_assert(offsetof(FTutorialHighlightData, HighLightDelay_9_2AECA98A4FDAC2A16624EFAC3E01C581) == 0x00000C, "Member 'FTutorialHighlightData::HighLightDelay_9_2AECA98A4FDAC2A16624EFAC3E01C581' has a wrong offset!");

}

