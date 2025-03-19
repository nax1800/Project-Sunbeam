#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MovieSceneTracks_structs.hpp"
#include "Slate_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum UMG.ESlateVisibility
// NumValues: 0x0006
enum class ESlateVisibility : uint8
{
	Visible                                  = 0,
	Collapsed                                = 1,
	Hidden                                   = 2,
	HitTestInvisible                         = 3,
	SelfHitTestInvisible                     = 4,
	ESlateVisibility_MAX                     = 5,
};

// Enum UMG.EVirtualKeyboardType
// NumValues: 0x0007
enum class EVirtualKeyboardType : uint8
{
	Default                                  = 0,
	Number                                   = 1,
	Web                                      = 2,
	Email                                    = 3,
	Password                                 = 4,
	AlphaNumeric                             = 5,
	EVirtualKeyboardType_MAX                 = 6,
};

// Enum UMG.EDragPivot
// NumValues: 0x000B
enum class EDragPivot : uint8
{
	MouseDown                                = 0,
	TopLeft                                  = 1,
	TopCenter                                = 2,
	TopRight                                 = 3,
	CenterLeft                               = 4,
	CenterCenter                             = 5,
	CenterRight                              = 6,
	BottomLeft                               = 7,
	BottomCenter                             = 8,
	BottomRight                              = 9,
	EDragPivot_MAX                           = 10,
};

// Enum UMG.ESlateSizeRule
// NumValues: 0x0003
enum class ESlateSizeRule : uint8
{
	Automatic                                = 0,
	Fill                                     = 1,
	ESlateSizeRule_MAX                       = 2,
};

// Enum UMG.EWidgetDesignFlags
// NumValues: 0x0005
enum class EWidgetDesignFlags : uint8
{
	None                                     = 0,
	Designing                                = 1,
	ShowOutline                              = 2,
	ExecutePreConstruct                      = 4,
	EWidgetDesignFlags_MAX                   = 5,
};

// Enum UMG.EBindingKind
// NumValues: 0x0003
enum class EBindingKind : uint8
{
	Function                                 = 0,
	Property                                 = 1,
	EBindingKind_MAX                         = 2,
};

// Enum UMG.EDesignPreviewSizeMode
// NumValues: 0x0006
enum class EDesignPreviewSizeMode : uint8
{
	FillScreen                               = 0,
	Custom                                   = 1,
	CustomOnScreen                           = 2,
	Desired                                  = 3,
	DesiredOnScreen                          = 4,
	EDesignPreviewSizeMode_MAX               = 5,
};

// Enum UMG.EUMGSequencePlayMode
// NumValues: 0x0004
enum class EUMGSequencePlayMode : uint8
{
	Forward                                  = 0,
	Reverse                                  = 1,
	PingPong                                 = 2,
	EUMGSequencePlayMode_MAX                 = 3,
};

// Enum UMG.EWidgetGeometryMode
// NumValues: 0x0003
enum class EWidgetGeometryMode : uint8
{
	Plane                                    = 0,
	Cylinder                                 = 1,
	EWidgetGeometryMode_MAX                  = 2,
};

// Enum UMG.EWidgetBlendMode
// NumValues: 0x0004
enum class EWidgetBlendMode : uint8
{
	Opaque                                   = 0,
	Masked                                   = 1,
	Transparent                              = 2,
	EWidgetBlendMode_MAX                     = 3,
};

// Enum UMG.EWidgetSpace
// NumValues: 0x0003
enum class EWidgetSpace : uint8
{
	World                                    = 0,
	Screen                                   = 1,
	EWidgetSpace_MAX                         = 2,
};

// Enum UMG.EWidgetInteractionSource
// NumValues: 0x0005
enum class EWidgetInteractionSource : uint8
{
	World                                    = 0,
	Mouse                                    = 1,
	CenterScreen                             = 2,
	Custom                                   = 3,
	EWidgetInteractionSource_MAX             = 4,
};

// ScriptStruct UMG.PropertyPathSegment
// 0x0020 (0x0020 - 0x0000)
struct FPropertyPathSegment final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ArrayIndex;                                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStruct*                                Struct;                                            // 0x0010(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UField*                                 Field;                                             // 0x0018(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FPropertyPathSegment) == 0x000008, "Wrong alignment on FPropertyPathSegment");
static_assert(sizeof(FPropertyPathSegment) == 0x000020, "Wrong size on FPropertyPathSegment");
static_assert(offsetof(FPropertyPathSegment, Name) == 0x000000, "Member 'FPropertyPathSegment::Name' has a wrong offset!");
static_assert(offsetof(FPropertyPathSegment, ArrayIndex) == 0x000008, "Member 'FPropertyPathSegment::ArrayIndex' has a wrong offset!");
static_assert(offsetof(FPropertyPathSegment, Struct) == 0x000010, "Member 'FPropertyPathSegment::Struct' has a wrong offset!");
static_assert(offsetof(FPropertyPathSegment, Field) == 0x000018, "Member 'FPropertyPathSegment::Field' has a wrong offset!");

// ScriptStruct UMG.WidgetTransform
// 0x001C (0x001C - 0x0000)
struct FWidgetTransform final
{
public:
	struct FVector2D                              Translation;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Scale;                                             // 0x0008(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Shear;                                             // 0x0010(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Angle;                                             // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWidgetTransform) == 0x000004, "Wrong alignment on FWidgetTransform");
static_assert(sizeof(FWidgetTransform) == 0x00001C, "Wrong size on FWidgetTransform");
static_assert(offsetof(FWidgetTransform, Translation) == 0x000000, "Member 'FWidgetTransform::Translation' has a wrong offset!");
static_assert(offsetof(FWidgetTransform, Scale) == 0x000008, "Member 'FWidgetTransform::Scale' has a wrong offset!");
static_assert(offsetof(FWidgetTransform, Shear) == 0x000010, "Member 'FWidgetTransform::Shear' has a wrong offset!");
static_assert(offsetof(FWidgetTransform, Angle) == 0x000018, "Member 'FWidgetTransform::Angle' has a wrong offset!");

// ScriptStruct UMG.EventReply
// 0x00B8 (0x00B8 - 0x0000)
struct alignas(0x08) FEventReply final
{
public:
	uint8                                         Pad_0[0xB8];                                       // 0x0000(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FEventReply) == 0x000008, "Wrong alignment on FEventReply");
static_assert(sizeof(FEventReply) == 0x0000B8, "Wrong size on FEventReply");

// ScriptStruct UMG.ShapedTextOptions
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x04) FShapedTextOptions final
{
public:
	uint8                                         bOverride_TextShapingMethod : 1;                   // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_TextFlowDirection : 1;                   // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	ETextShapingMethod                            TextShapingMethod;                                 // 0x0004(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextFlowDirection                            TextFlowDirection;                                 // 0x0005(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FShapedTextOptions) == 0x000004, "Wrong alignment on FShapedTextOptions");
static_assert(sizeof(FShapedTextOptions) == 0x000008, "Wrong size on FShapedTextOptions");
static_assert(offsetof(FShapedTextOptions, TextShapingMethod) == 0x000004, "Member 'FShapedTextOptions::TextShapingMethod' has a wrong offset!");
static_assert(offsetof(FShapedTextOptions, TextFlowDirection) == 0x000005, "Member 'FShapedTextOptions::TextFlowDirection' has a wrong offset!");

// ScriptStruct UMG.SlateMeshVertex
// 0x003C (0x003C - 0x0000)
struct FSlateMeshVertex final
{
public:
	struct FVector2D                              Position;                                          // 0x0000(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 Color;                                             // 0x0008(0x0004)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UV0;                                               // 0x000C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UV1;                                               // 0x0014(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UV2;                                               // 0x001C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UV3;                                               // 0x0024(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UV4;                                               // 0x002C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UV5;                                               // 0x0034(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSlateMeshVertex) == 0x000004, "Wrong alignment on FSlateMeshVertex");
static_assert(sizeof(FSlateMeshVertex) == 0x00003C, "Wrong size on FSlateMeshVertex");
static_assert(offsetof(FSlateMeshVertex, Position) == 0x000000, "Member 'FSlateMeshVertex::Position' has a wrong offset!");
static_assert(offsetof(FSlateMeshVertex, Color) == 0x000008, "Member 'FSlateMeshVertex::Color' has a wrong offset!");
static_assert(offsetof(FSlateMeshVertex, UV0) == 0x00000C, "Member 'FSlateMeshVertex::UV0' has a wrong offset!");
static_assert(offsetof(FSlateMeshVertex, UV1) == 0x000014, "Member 'FSlateMeshVertex::UV1' has a wrong offset!");
static_assert(offsetof(FSlateMeshVertex, UV2) == 0x00001C, "Member 'FSlateMeshVertex::UV2' has a wrong offset!");
static_assert(offsetof(FSlateMeshVertex, UV3) == 0x000024, "Member 'FSlateMeshVertex::UV3' has a wrong offset!");
static_assert(offsetof(FSlateMeshVertex, UV4) == 0x00002C, "Member 'FSlateMeshVertex::UV4' has a wrong offset!");
static_assert(offsetof(FSlateMeshVertex, UV5) == 0x000034, "Member 'FSlateMeshVertex::UV5' has a wrong offset!");

// ScriptStruct UMG.DynamicPropertyPath
// 0x0010 (0x0010 - 0x0000)
struct FDynamicPropertyPath final
{
public:
	TArray<struct FPropertyPathSegment>           Segments;                                          // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FDynamicPropertyPath) == 0x000008, "Wrong alignment on FDynamicPropertyPath");
static_assert(sizeof(FDynamicPropertyPath) == 0x000010, "Wrong size on FDynamicPropertyPath");
static_assert(offsetof(FDynamicPropertyPath, Segments) == 0x000000, "Member 'FDynamicPropertyPath::Segments' has a wrong offset!");

// ScriptStruct UMG.PaintContext
// 0x0030 (0x0030 - 0x0000)
struct alignas(0x08) FPaintContext final
{
public:
	uint8                                         Pad_0[0x30];                                       // 0x0000(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPaintContext) == 0x000008, "Wrong alignment on FPaintContext");
static_assert(sizeof(FPaintContext) == 0x000030, "Wrong size on FPaintContext");

// ScriptStruct UMG.NamedSlotBinding
// 0x0010 (0x0010 - 0x0000)
struct FNamedSlotBinding final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                Content;                                           // 0x0008(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNamedSlotBinding) == 0x000008, "Wrong alignment on FNamedSlotBinding");
static_assert(sizeof(FNamedSlotBinding) == 0x000010, "Wrong size on FNamedSlotBinding");
static_assert(offsetof(FNamedSlotBinding, Name) == 0x000000, "Member 'FNamedSlotBinding::Name' has a wrong offset!");
static_assert(offsetof(FNamedSlotBinding, Content) == 0x000008, "Member 'FNamedSlotBinding::Content' has a wrong offset!");

// ScriptStruct UMG.SlateChildSize
// 0x0008 (0x0008 - 0x0000)
struct FSlateChildSize final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESlateSizeRule                                SizeRule;                                          // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSlateChildSize) == 0x000004, "Wrong alignment on FSlateChildSize");
static_assert(sizeof(FSlateChildSize) == 0x000008, "Wrong size on FSlateChildSize");
static_assert(offsetof(FSlateChildSize, Value) == 0x000000, "Member 'FSlateChildSize::Value' has a wrong offset!");
static_assert(offsetof(FSlateChildSize, SizeRule) == 0x000004, "Member 'FSlateChildSize::SizeRule' has a wrong offset!");

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0038 (0x0038 - 0x0000)
struct FDelegateRuntimeBinding final
{
public:
	class FString                                 ObjectName;                                        // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PropertyName;                                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   FunctionName;                                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicPropertyPath                   SourcePath;                                        // 0x0020(0x0010)(NativeAccessSpecifierPublic)
	EBindingKind                                  Kind;                                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDelegateRuntimeBinding) == 0x000008, "Wrong alignment on FDelegateRuntimeBinding");
static_assert(sizeof(FDelegateRuntimeBinding) == 0x000038, "Wrong size on FDelegateRuntimeBinding");
static_assert(offsetof(FDelegateRuntimeBinding, ObjectName) == 0x000000, "Member 'FDelegateRuntimeBinding::ObjectName' has a wrong offset!");
static_assert(offsetof(FDelegateRuntimeBinding, PropertyName) == 0x000010, "Member 'FDelegateRuntimeBinding::PropertyName' has a wrong offset!");
static_assert(offsetof(FDelegateRuntimeBinding, FunctionName) == 0x000018, "Member 'FDelegateRuntimeBinding::FunctionName' has a wrong offset!");
static_assert(offsetof(FDelegateRuntimeBinding, SourcePath) == 0x000020, "Member 'FDelegateRuntimeBinding::SourcePath' has a wrong offset!");
static_assert(offsetof(FDelegateRuntimeBinding, Kind) == 0x000030, "Member 'FDelegateRuntimeBinding::Kind' has a wrong offset!");

// ScriptStruct UMG.AnchorData
// 0x0028 (0x0028 - 0x0000)
struct FAnchorData final
{
public:
	struct FMargin                                Offsets;                                           // 0x0000(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnchors                               Anchors;                                           // 0x0010(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                              Alignment;                                         // 0x0020(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAnchorData) == 0x000004, "Wrong alignment on FAnchorData");
static_assert(sizeof(FAnchorData) == 0x000028, "Wrong size on FAnchorData");
static_assert(offsetof(FAnchorData, Offsets) == 0x000000, "Member 'FAnchorData::Offsets' has a wrong offset!");
static_assert(offsetof(FAnchorData, Anchors) == 0x000010, "Member 'FAnchorData::Anchors' has a wrong offset!");
static_assert(offsetof(FAnchorData, Alignment) == 0x000020, "Member 'FAnchorData::Alignment' has a wrong offset!");

// ScriptStruct UMG.WidgetAnimationBinding
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FWidgetAnimationBinding final
{
public:
	class FName                                   WidgetName;                                        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SlotWidgetName;                                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  AnimationGuid;                                     // 0x0010(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsRootWidget;                                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWidgetAnimationBinding) == 0x000008, "Wrong alignment on FWidgetAnimationBinding");
static_assert(sizeof(FWidgetAnimationBinding) == 0x000028, "Wrong size on FWidgetAnimationBinding");
static_assert(offsetof(FWidgetAnimationBinding, WidgetName) == 0x000000, "Member 'FWidgetAnimationBinding::WidgetName' has a wrong offset!");
static_assert(offsetof(FWidgetAnimationBinding, SlotWidgetName) == 0x000008, "Member 'FWidgetAnimationBinding::SlotWidgetName' has a wrong offset!");
static_assert(offsetof(FWidgetAnimationBinding, AnimationGuid) == 0x000010, "Member 'FWidgetAnimationBinding::AnimationGuid' has a wrong offset!");
static_assert(offsetof(FWidgetAnimationBinding, bIsRootWidget) == 0x000020, "Member 'FWidgetAnimationBinding::bIsRootWidget' has a wrong offset!");

// ScriptStruct UMG.WidgetNavigationData
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FWidgetNavigationData final
{
public:
	EUINavigationRule                             Rule;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   WidgetToFocus;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWidget>                 Widget;                                            // 0x0010(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWidgetNavigationData) == 0x000008, "Wrong alignment on FWidgetNavigationData");
static_assert(sizeof(FWidgetNavigationData) == 0x000018, "Wrong size on FWidgetNavigationData");
static_assert(offsetof(FWidgetNavigationData, Rule) == 0x000000, "Member 'FWidgetNavigationData::Rule' has a wrong offset!");
static_assert(offsetof(FWidgetNavigationData, WidgetToFocus) == 0x000008, "Member 'FWidgetNavigationData::WidgetToFocus' has a wrong offset!");
static_assert(offsetof(FWidgetNavigationData, Widget) == 0x000010, "Member 'FWidgetNavigationData::Widget' has a wrong offset!");

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// 0x0330 (0x0348 - 0x0018)
struct FMovieScene2DTransformSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData         PropertyData;                                      // 0x0018(0x0020)(NativeAccessSpecifierPrivate)
	struct FRichCurve                             Translation[0x2];                                  // 0x0038(0x0070)(NativeAccessSpecifierPrivate)
	struct FRichCurve                             Rotation;                                          // 0x0118(0x0070)(NativeAccessSpecifierPrivate)
	struct FRichCurve                             Scale[0x2];                                        // 0x0188(0x0070)(NativeAccessSpecifierPrivate)
	struct FRichCurve                             Shear[0x2];                                        // 0x0268(0x0070)(NativeAccessSpecifierPrivate)
};
static_assert(alignof(FMovieScene2DTransformSectionTemplate) == 0x000008, "Wrong alignment on FMovieScene2DTransformSectionTemplate");
static_assert(sizeof(FMovieScene2DTransformSectionTemplate) == 0x000348, "Wrong size on FMovieScene2DTransformSectionTemplate");
static_assert(offsetof(FMovieScene2DTransformSectionTemplate, PropertyData) == 0x000018, "Member 'FMovieScene2DTransformSectionTemplate::PropertyData' has a wrong offset!");
static_assert(offsetof(FMovieScene2DTransformSectionTemplate, Translation) == 0x000038, "Member 'FMovieScene2DTransformSectionTemplate::Translation' has a wrong offset!");
static_assert(offsetof(FMovieScene2DTransformSectionTemplate, Rotation) == 0x000118, "Member 'FMovieScene2DTransformSectionTemplate::Rotation' has a wrong offset!");
static_assert(offsetof(FMovieScene2DTransformSectionTemplate, Scale) == 0x000188, "Member 'FMovieScene2DTransformSectionTemplate::Scale' has a wrong offset!");
static_assert(offsetof(FMovieScene2DTransformSectionTemplate, Shear) == 0x000268, "Member 'FMovieScene2DTransformSectionTemplate::Shear' has a wrong offset!");

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// 0x01E0 (0x01F8 - 0x0018)
struct FMovieSceneMarginSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData         PropertyData;                                      // 0x0018(0x0020)(NativeAccessSpecifierPrivate)
	struct FRichCurve                             TopCurve;                                          // 0x0038(0x0070)(NativeAccessSpecifierPrivate)
	struct FRichCurve                             LeftCurve;                                         // 0x00A8(0x0070)(NativeAccessSpecifierPrivate)
	struct FRichCurve                             RightCurve;                                        // 0x0118(0x0070)(NativeAccessSpecifierPrivate)
	struct FRichCurve                             BottomCurve;                                       // 0x0188(0x0070)(NativeAccessSpecifierPrivate)
};
static_assert(alignof(FMovieSceneMarginSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneMarginSectionTemplate");
static_assert(sizeof(FMovieSceneMarginSectionTemplate) == 0x0001F8, "Wrong size on FMovieSceneMarginSectionTemplate");
static_assert(offsetof(FMovieSceneMarginSectionTemplate, PropertyData) == 0x000018, "Member 'FMovieSceneMarginSectionTemplate::PropertyData' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarginSectionTemplate, TopCurve) == 0x000038, "Member 'FMovieSceneMarginSectionTemplate::TopCurve' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarginSectionTemplate, LeftCurve) == 0x0000A8, "Member 'FMovieSceneMarginSectionTemplate::LeftCurve' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarginSectionTemplate, RightCurve) == 0x000118, "Member 'FMovieSceneMarginSectionTemplate::RightCurve' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarginSectionTemplate, BottomCurve) == 0x000188, "Member 'FMovieSceneMarginSectionTemplate::BottomCurve' has a wrong offset!");

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// 0x0010 (0x0058 - 0x0048)
struct FMovieSceneWidgetMaterialSectionTemplate final : public FMovieSceneParameterSectionTemplate
{
public:
	TArray<class FName>                           BrushPropertyNamePath;                             // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FMovieSceneWidgetMaterialSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneWidgetMaterialSectionTemplate");
static_assert(sizeof(FMovieSceneWidgetMaterialSectionTemplate) == 0x000058, "Wrong size on FMovieSceneWidgetMaterialSectionTemplate");
static_assert(offsetof(FMovieSceneWidgetMaterialSectionTemplate, BrushPropertyNamePath) == 0x000048, "Member 'FMovieSceneWidgetMaterialSectionTemplate::BrushPropertyNamePath' has a wrong offset!");

}

