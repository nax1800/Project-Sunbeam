#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaRotator

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function AthenaRotator.AthenaRotator_C.ExecuteUbergraph_AthenaRotator
// 0x00A8 (0x00A8 - 0x0000)
struct AthenaRotator_C_ExecuteUbergraph_AthenaRotator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button2;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0020(0x0034)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;                 // 0x005C(0x001C)(NoDestructor)
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform2;                // 0x0078(0x001C)(NoDestructor)
	bool                                          CallFunc_IsInteractionEnabled_ReturnValue;         // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInteractionEnabled_ReturnValue2;        // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0097(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue2;              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator) == 0x000008, "Wrong alignment on AthenaRotator_C_ExecuteUbergraph_AthenaRotator");
static_assert(sizeof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator) == 0x0000A8, "Wrong size on AthenaRotator_C_ExecuteUbergraph_AthenaRotator");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, EntryPoint) == 0x000000, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, Temp_bool_Variable) == 0x000004, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, Temp_byte_Variable) == 0x000005, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, Temp_byte_Variable2) == 0x000006, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_ComponentBoundEvent_Button2) == 0x000008, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_ComponentBoundEvent_Button2' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_ComponentBoundEvent_Button) == 0x000010, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_Event_MyGeometry) == 0x000020, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_Event_InDeltaTime) == 0x000054, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_IsUsingGamepad_ReturnValue) == 0x000058, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_MakeStruct_WidgetTransform) == 0x00005C, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_MakeStruct_WidgetTransform' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_MakeStruct_WidgetTransform2) == 0x000078, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_MakeStruct_WidgetTransform2' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_IsInteractionEnabled_ReturnValue) == 0x000094, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_IsInteractionEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_Event_IsDesignTime) == 0x000095, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_IsInteractionEnabled_ReturnValue2) == 0x000096, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_IsInteractionEnabled_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_BooleanAND_ReturnValue) == 0x000097, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_GetContext_ReturnValue2) == 0x000098, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_IsUsingGamepad_ReturnValue2) == 0x0000A0, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_IsUsingGamepad_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_Not_PreBool_ReturnValue) == 0x0000A1, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_IsHovered_ReturnValue) == 0x0000A2, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_BooleanOR_ReturnValue) == 0x0000A3, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_Select_Default) == 0x0000A4, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_Select_Default' has a wrong offset!");

// Function AthenaRotator.AthenaRotator_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AthenaRotator_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaRotator_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaRotator_C_PreConstruct");
static_assert(sizeof(AthenaRotator_C_PreConstruct) == 0x000001, "Wrong size on AthenaRotator_C_PreConstruct");
static_assert(offsetof(AthenaRotator_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaRotator_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function AthenaRotator.AthenaRotator_C.Tick
// 0x0038 (0x0038 - 0x0000)
struct AthenaRotator_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0034)(Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0034(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaRotator_C_Tick) == 0x000004, "Wrong alignment on AthenaRotator_C_Tick");
static_assert(sizeof(AthenaRotator_C_Tick) == 0x000038, "Wrong size on AthenaRotator_C_Tick");
static_assert(offsetof(AthenaRotator_C_Tick, MyGeometry) == 0x000000, "Member 'AthenaRotator_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_Tick, InDeltaTime) == 0x000034, "Member 'AthenaRotator_C_Tick::InDeltaTime' has a wrong offset!");

// Function AthenaRotator.AthenaRotator_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function AthenaRotator.AthenaRotator_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function AthenaRotator.AthenaRotator_C.ChangeDirection
// 0x0002 (0x0002 - 0x0000)
struct AthenaRotator_C_ChangeDirection final
{
public:
	bool                                          bDirection;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInteractionEnabled_ReturnValue;         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaRotator_C_ChangeDirection) == 0x000001, "Wrong alignment on AthenaRotator_C_ChangeDirection");
static_assert(sizeof(AthenaRotator_C_ChangeDirection) == 0x000002, "Wrong size on AthenaRotator_C_ChangeDirection");
static_assert(offsetof(AthenaRotator_C_ChangeDirection, bDirection) == 0x000000, "Member 'AthenaRotator_C_ChangeDirection::bDirection' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ChangeDirection, CallFunc_IsInteractionEnabled_ReturnValue) == 0x000001, "Member 'AthenaRotator_C_ChangeDirection::CallFunc_IsInteractionEnabled_ReturnValue' has a wrong offset!");

}

