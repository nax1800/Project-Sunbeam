#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreItemCardFront

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function StoreItemCardFront.StoreItemCardFront_C.ExecuteUbergraph_StoreItemCardFront
// 0x0058 (0x0058 - 0x0000)
struct StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortStoreContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortStoreState                               K2Node_CustomEvent_NewStoreState;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCard                                  CallFunc_GetCard_ResultOut;                        // 0x0020(0x0018)(NoDestructor)
	bool                                          CallFunc_GetCard_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_InitObject;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreContext*                      CallFunc_GetContext_ReturnValue3;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CardFrontRevealComplete_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront) == 0x000008, "Wrong alignment on StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront");
static_assert(sizeof(StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront) == 0x000058, "Wrong size on StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront");
static_assert(offsetof(StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront, EntryPoint) == 0x000000, "Member 'StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront::EntryPoint' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront, CallFunc_GetContext_ReturnValue2) == 0x000010, "Member 'StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront, K2Node_CustomEvent_NewStoreState) == 0x000018, "Member 'StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront::K2Node_CustomEvent_NewStoreState' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront, CallFunc_GetCard_ResultOut) == 0x000020, "Member 'StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront::CallFunc_GetCard_ResultOut' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront, CallFunc_GetCard_ReturnValue) == 0x000038, "Member 'StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront::CallFunc_GetCard_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront, K2Node_SwitchEnum_CmpSuccess) == 0x000039, "Member 'StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront, K2Node_Event_InitObject) == 0x000040, "Member 'StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront::K2Node_Event_InitObject' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront, CallFunc_GetContext_ReturnValue3) == 0x000048, "Member 'StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront, CallFunc_CardFrontRevealComplete_ReturnValue) == 0x000050, "Member 'StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront::CallFunc_CardFrontRevealComplete_ReturnValue' has a wrong offset!");

// Function StoreItemCardFront.StoreItemCardFront_C.InitFromObject
// 0x0008 (0x0008 - 0x0000)
struct StoreItemCardFront_C_InitFromObject final
{
public:
	class UObject*                                InitObject;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StoreItemCardFront_C_InitFromObject) == 0x000008, "Wrong alignment on StoreItemCardFront_C_InitFromObject");
static_assert(sizeof(StoreItemCardFront_C_InitFromObject) == 0x000008, "Wrong size on StoreItemCardFront_C_InitFromObject");
static_assert(offsetof(StoreItemCardFront_C_InitFromObject, InitObject) == 0x000000, "Member 'StoreItemCardFront_C_InitFromObject::InitObject' has a wrong offset!");

// Function StoreItemCardFront.StoreItemCardFront_C.OnFortStoreStateChanged
// 0x0001 (0x0001 - 0x0000)
struct StoreItemCardFront_C_OnFortStoreStateChanged final
{
public:
	EFortStoreState                               NewStoreState;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StoreItemCardFront_C_OnFortStoreStateChanged) == 0x000001, "Wrong alignment on StoreItemCardFront_C_OnFortStoreStateChanged");
static_assert(sizeof(StoreItemCardFront_C_OnFortStoreStateChanged) == 0x000001, "Wrong size on StoreItemCardFront_C_OnFortStoreStateChanged");
static_assert(offsetof(StoreItemCardFront_C_OnFortStoreStateChanged, NewStoreState) == 0x000000, "Member 'StoreItemCardFront_C_OnFortStoreStateChanged::NewStoreState' has a wrong offset!");

// Function StoreItemCardFront.StoreItemCardFront_C.Initialize_Card
// 0x0020 (0x0020 - 0x0000)
struct StoreItemCardFront_C_Initialize_Card final
{
public:
	struct FCard                                  InCard;                                            // 0x0000(0x0018)(Parm, NoDestructor)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StoreItemCardFront_C_Initialize_Card) == 0x000008, "Wrong alignment on StoreItemCardFront_C_Initialize_Card");
static_assert(sizeof(StoreItemCardFront_C_Initialize_Card) == 0x000020, "Wrong size on StoreItemCardFront_C_Initialize_Card");
static_assert(offsetof(StoreItemCardFront_C_Initialize_Card, InCard) == 0x000000, "Member 'StoreItemCardFront_C_Initialize_Card::InCard' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Initialize_Card, CallFunc_GetRarity_ReturnValue) == 0x000018, "Member 'StoreItemCardFront_C_Initialize_Card::CallFunc_GetRarity_ReturnValue' has a wrong offset!");

// Function StoreItemCardFront.StoreItemCardFront_C.Draw_Card
// 0x0100 (0x0100 - 0x0000)
struct StoreItemCardFront_C_Draw_Card final
{
public:
	struct FFortRarityItemData                    RarityData;                                        // 0x0000(0x0080)(Edit)
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0080(0x0080)()
};
static_assert(alignof(StoreItemCardFront_C_Draw_Card) == 0x000008, "Wrong alignment on StoreItemCardFront_C_Draw_Card");
static_assert(sizeof(StoreItemCardFront_C_Draw_Card) == 0x000100, "Wrong size on StoreItemCardFront_C_Draw_Card");
static_assert(offsetof(StoreItemCardFront_C_Draw_Card, RarityData) == 0x000000, "Member 'StoreItemCardFront_C_Draw_Card::RarityData' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Draw_Card, CallFunc_BPGetRarityData_ReturnValue) == 0x000080, "Member 'StoreItemCardFront_C_Draw_Card::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");

// Function StoreItemCardFront.StoreItemCardFront_C.Get Card Name Text
// 0x0380 (0x0380 - 0x0000)
struct StoreItemCardFront_C_Get_Card_Name_Text final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   Temp_text_Variable;                                // 0x0018(0x0018)()
	class FText                                   Temp_text_Variable2;                               // 0x0030(0x0018)()
	class FText                                   Temp_text_Variable3;                               // 0x0048(0x0018)()
	class FText                                   Temp_text_Variable4;                               // 0x0060(0x0018)()
	class FText                                   Temp_text_Variable5;                               // 0x0078(0x0018)()
	class FText                                   Temp_text_Variable6;                               // 0x0090(0x0018)()
	class FText                                   Temp_text_Variable7;                               // 0x00A8(0x0018)()
	class FText                                   Temp_text_Variable8;                               // 0x00C0(0x0018)()
	class FText                                   Temp_text_Variable9;                               // 0x00D8(0x0018)()
	class FText                                   Temp_text_Variable10;                              // 0x00F0(0x0018)()
	class FText                                   Temp_text_Variable11;                              // 0x0108(0x0018)()
	class FText                                   Temp_text_Variable12;                              // 0x0120(0x0018)()
	class FText                                   Temp_text_Variable13;                              // 0x0138(0x0018)()
	class FText                                   Temp_text_Variable14;                              // 0x0150(0x0018)()
	class FText                                   Temp_text_Variable15;                              // 0x0168(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortInventoryFilter                          Temp_byte_Variable;                                // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_182[0x6];                                      // 0x0182(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetEmptyText_ReturnValue;                 // 0x0188(0x0018)()
	class FText                                   CallFunc_GetTertiaryCategory_ItemCategoryText;     // 0x01A0(0x0018)()
	struct FSlateBrush                            CallFunc_GetTertiaryCategory_ItemCategoryBrush;    // 0x01B8(0x0090)()
	bool                                          CallFunc_GetTertiaryCategory_ReturnValue;          // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_249[0x7];                                      // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0250(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0268(0x0040)(HasGetValueTypeHash)
	EFortInventoryFilter                          CallFunc_GetFilterCategory_ReturnValue;            // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x02B0(0x0018)()
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C9[0x7];                                      // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x02D0(0x0018)()
	class FText                                   CallFunc_TextTrimPrecedingAndTrailing_ReturnValue; // 0x02E8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x0300(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0340(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0350(0x0018)()
	class FText                                   K2Node_Select2_Default;                            // 0x0368(0x0018)()
};
static_assert(alignof(StoreItemCardFront_C_Get_Card_Name_Text) == 0x000008, "Wrong alignment on StoreItemCardFront_C_Get_Card_Name_Text");
static_assert(sizeof(StoreItemCardFront_C_Get_Card_Name_Text) == 0x000380, "Wrong size on StoreItemCardFront_C_Get_Card_Name_Text");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, ReturnValue) == 0x000000, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_text_Variable) == 0x000018, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_text_Variable2) == 0x000030, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_text_Variable2' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_text_Variable3) == 0x000048, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_text_Variable3' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_text_Variable4) == 0x000060, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_text_Variable4' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_text_Variable5) == 0x000078, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_text_Variable5' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_text_Variable6) == 0x000090, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_text_Variable6' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_text_Variable7) == 0x0000A8, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_text_Variable7' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_text_Variable8) == 0x0000C0, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_text_Variable8' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_text_Variable9) == 0x0000D8, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_text_Variable9' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_text_Variable10) == 0x0000F0, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_text_Variable10' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_text_Variable11) == 0x000108, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_text_Variable11' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_text_Variable12) == 0x000120, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_text_Variable12' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_text_Variable13) == 0x000138, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_text_Variable13' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_text_Variable14) == 0x000150, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_text_Variable14' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_text_Variable15) == 0x000168, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_text_Variable15' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_bool_Variable) == 0x000180, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, Temp_byte_Variable) == 0x000181, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, CallFunc_GetEmptyText_ReturnValue) == 0x000188, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, CallFunc_GetTertiaryCategory_ItemCategoryText) == 0x0001A0, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::CallFunc_GetTertiaryCategory_ItemCategoryText' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, CallFunc_GetTertiaryCategory_ItemCategoryBrush) == 0x0001B8, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::CallFunc_GetTertiaryCategory_ItemCategoryBrush' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, CallFunc_GetTertiaryCategory_ReturnValue) == 0x000248, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::CallFunc_GetTertiaryCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, CallFunc_Conv_StringToText_ReturnValue) == 0x000250, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, K2Node_MakeStruct_FormatArgumentData) == 0x000268, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, CallFunc_GetFilterCategory_ReturnValue) == 0x0002A8, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::CallFunc_GetFilterCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, CallFunc_GetDisplayName_ReturnValue) == 0x0002B0, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, CallFunc_EqualEqual_TextText_ReturnValue) == 0x0002C8, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, K2Node_Select_Default) == 0x0002D0, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, CallFunc_TextTrimPrecedingAndTrailing_ReturnValue) == 0x0002E8, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::CallFunc_TextTrimPrecedingAndTrailing_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, K2Node_MakeStruct_FormatArgumentData2) == 0x000300, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, K2Node_MakeArray_Array) == 0x000340, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, CallFunc_Format_ReturnValue) == 0x000350, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Card_Name_Text, K2Node_Select2_Default) == 0x000368, "Member 'StoreItemCardFront_C_Get_Card_Name_Text::K2Node_Select2_Default' has a wrong offset!");

// Function StoreItemCardFront.StoreItemCardFront_C.Get Type Text
// 0x01D8 (0x01D8 - 0x0000)
struct StoreItemCardFront_C_Get_Type_Text final
{
public:
	class FText                                   OutText;                                           // 0x0000(0x0018)(Parm, OutParm)
	EFortInventoryFilter                          Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable2;                               // 0x0038(0x0018)()
	class FText                                   Temp_text_Variable3;                               // 0x0050(0x0018)()
	class FText                                   Temp_text_Variable4;                               // 0x0068(0x0018)()
	class FText                                   Temp_text_Variable5;                               // 0x0080(0x0018)()
	class FText                                   Temp_text_Variable6;                               // 0x0098(0x0018)()
	class FText                                   Temp_text_Variable7;                               // 0x00B0(0x0018)()
	class FText                                   Temp_text_Variable8;                               // 0x00C8(0x0018)()
	class FText                                   Temp_text_Variable9;                               // 0x00E0(0x0018)()
	class FText                                   Temp_text_Variable10;                              // 0x00F8(0x0018)()
	class FText                                   Temp_text_Variable11;                              // 0x0110(0x0018)()
	class FText                                   Temp_text_Variable12;                              // 0x0128(0x0018)()
	class FText                                   Temp_text_Variable13;                              // 0x0140(0x0018)()
	class FText                                   Temp_text_Variable14;                              // 0x0158(0x0018)()
	class FText                                   Temp_text_Variable15;                              // 0x0170(0x0018)()
	class FText                                   Temp_text_Variable16;                              // 0x0188(0x0018)()
	class FText                                   Temp_text_Variable17;                              // 0x01A0(0x0018)()
	EFortInventoryFilter                          CallFunc_GetFilterCategory_ReturnValue;            // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x01C0(0x0018)()
};
static_assert(alignof(StoreItemCardFront_C_Get_Type_Text) == 0x000008, "Wrong alignment on StoreItemCardFront_C_Get_Type_Text");
static_assert(sizeof(StoreItemCardFront_C_Get_Type_Text) == 0x0001D8, "Wrong size on StoreItemCardFront_C_Get_Type_Text");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, OutText) == 0x000000, "Member 'StoreItemCardFront_C_Get_Type_Text::OutText' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_byte_Variable) == 0x000018, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable) == 0x000020, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable2) == 0x000038, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable2' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable3) == 0x000050, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable3' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable4) == 0x000068, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable4' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable5) == 0x000080, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable5' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable6) == 0x000098, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable6' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable7) == 0x0000B0, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable7' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable8) == 0x0000C8, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable8' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable9) == 0x0000E0, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable9' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable10) == 0x0000F8, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable10' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable11) == 0x000110, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable11' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable12) == 0x000128, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable12' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable13) == 0x000140, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable13' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable14) == 0x000158, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable14' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable15) == 0x000170, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable15' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable16) == 0x000188, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable16' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, Temp_text_Variable17) == 0x0001A0, "Member 'StoreItemCardFront_C_Get_Type_Text::Temp_text_Variable17' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, CallFunc_GetFilterCategory_ReturnValue) == 0x0001B8, "Member 'StoreItemCardFront_C_Get_Type_Text::CallFunc_GetFilterCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreItemCardFront_C_Get_Type_Text, K2Node_Select_Default) == 0x0001C0, "Member 'StoreItemCardFront_C_Get_Type_Text::K2Node_Select_Default' has a wrong offset!");

}

