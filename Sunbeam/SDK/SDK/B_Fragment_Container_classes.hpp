#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Fragment_Container

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_OutlanderFragmentTypes_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Fragment_Container.B_Fragment_Container_C
// 0x0360 (0x1320 - 0x0FC0)
class AB_Fragment_Container_C final : public ABuildingSMActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0FC0(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_LightOn;                                         // 0x0FC8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Orb_Mesh;                                          // 0x0FD0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_ResOut;                                          // 0x0FD8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Orb_PickupEffect;                                // 0x0FE0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      BlockingCollision;                                 // 0x0FE8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Container_SK;                                      // 0x0FF0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        RotationRoot;                                      // 0x0FF8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        VerticalMovement;                                  // 0x1000(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Awaken_Collision;                                  // 0x1008(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       MiniMapCollision;                                  // 0x1010(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                  MiniMapLoc;                                        // 0x1018(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         VerticalMovementTimeline_Z_Offset_E77B23F44312E9BD5DA6EF9ACE127DE4; // 0x1020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            VerticalMovementTimeline__Direction_E77B23F44312E9BD5DA6EF9ACE127DE4; // 0x1024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1025[0x3];                                     // 0x1025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     VerticalMovementTimeline;                          // 0x1028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_HasFragmentAbility;                             // 0x1030(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_LlamaFragment;                                  // 0x1050(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	struct FGameplayTagContainer                  TC_ChargeFragmentTag;                              // 0x1070(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_LlamaFragmentTag;                               // 0x1090(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           Event_FragmentCollected;                           // 0x10B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     SentFragment;                                      // 0x10B8(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_OutlanderFragmentTypes                      FragmentType;                                      // 0x1160(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1161[0x3];                                     // 0x1161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ChargeFragmentColor;                               // 0x1164(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LlamaFragmentColor;                                // 0x1174(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1184[0x4];                                     // 0x1184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAmmoItemDefinition*                FragmentAmmoData;                                  // 0x1188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Current_Outlander;                                 // 0x1190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        InteractingPlayerPawn;                             // 0x1198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_Outlander_LlamaFragment;                        // 0x11A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_ClearFragmentCooldown;                          // 0x11A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_Outlander_FragmentTeamSpeedBost;                // 0x11B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 FortPawnFilter;                                    // 0x11B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LlamaFragmentPercent;                              // 0x11C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotateToPlayerSpeed;                               // 0x11C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastInteractStartTime;                             // 0x11C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayedDestroyTime;                                // 0x11CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfTimeToPingMap;                             // 0x11D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfMapPings;                                  // 0x11D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAnyOutlanderStillAround;                         // 0x11D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanInteract;                                       // 0x11D9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                          IsAwake;                                           // 0x11DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasLoot;                                           // 0x11DB(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOpen;                                            // 0x11DC(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          bIsUP;                                             // 0x11DD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOn;                                              // 0x11DE(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_11DF[0x1];                                     // 0x11DF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Container_Base_Mat;                                // 0x11E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Container_Screen_mat;                              // 0x11E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Container_Light_mat;                               // 0x11F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Orb_Mat;                                           // 0x11F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Orb_Turn_On_Sound;                                 // 0x1200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Orb_Hello_Sound;                                   // 0x1208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Orb_Hover_Sound;                                   // 0x1210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Orb_Goodbye_Sound;                                 // 0x1218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Orb_Thanks_Sound;                                  // 0x1220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   InteractLlamaFragment;                             // 0x1228(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   InteractChargeFragment;                            // 0x1240(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   InteractNonOutlander;                              // 0x1258(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PickupLlamaFragment;                               // 0x1270(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PickupChargeFragment;                              // 0x1288(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAudioComponent*                        OrbAudioComponent;                                 // 0x12A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOrbTaken;                                        // 0x12A8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_12A9[0x7];                                     // 0x12A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   FailedOutlanderOnlyOneLlama;                       // 0x12B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FailedOutlanderMaxFragHeldDefault;                 // 0x12C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FailedOutlanderActivatedButDoesNotYetPossessFragmentAbility; // 0x12E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FailedNonOutlanderActivated;                       // 0x12F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UForceFeedbackEffect*                   FF_Interact;                                       // 0x1310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   FFInteractSoft;                                    // 0x1318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Fragment_Container(int32 EntryPoint);
	void SoftFeedback();
	void MultiFeedback();
	void BlueprintOnBeginInteract();
	void Reset_Activation();
	void StartHide();
	void ShowOnMiniMap();
	void MoveDown();
	void PowerDown();
	void MoveUp();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ActivateFX();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void VerticalMovementTimeline__down__EventFunc();
	void VerticalMovementTimeline__Up__EventFunc();
	void VerticalMovementTimeline__UpdateFunc();
	void VerticalMovementTimeline__FinishedFunc();
	void UserConstructionScript();
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn);
	void OnRep_BuffType();
	void DelayedDestroy();
	void OnRep_IsOpen();
	void UpdateShouldTick();
	void SetAwake(bool NewAwake);
	void SetOutlander(class AActor* NewOutlander);
	void OnRep_IsOn();
	void OnRep_IsOrbTaken();
	void ForceFeedbackInteract(bool Soft);

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn) const;
	class FText BlueprintGetFailedInteractionString(const class AFortPawn* InteractingPawn) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Fragment_Container_C">();
	}
	static class AB_Fragment_Container_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Fragment_Container_C>();
	}
};
static_assert(alignof(AB_Fragment_Container_C) == 0x000010, "Wrong alignment on AB_Fragment_Container_C");
static_assert(sizeof(AB_Fragment_Container_C) == 0x001320, "Wrong size on AB_Fragment_Container_C");
static_assert(offsetof(AB_Fragment_Container_C, UberGraphFrame) == 0x000FC0, "Member 'AB_Fragment_Container_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, P_LightOn) == 0x000FC8, "Member 'AB_Fragment_Container_C::P_LightOn' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Orb_Mesh) == 0x000FD0, "Member 'AB_Fragment_Container_C::Orb_Mesh' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, P_ResOut) == 0x000FD8, "Member 'AB_Fragment_Container_C::P_ResOut' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, P_Orb_PickupEffect) == 0x000FE0, "Member 'AB_Fragment_Container_C::P_Orb_PickupEffect' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, BlockingCollision) == 0x000FE8, "Member 'AB_Fragment_Container_C::BlockingCollision' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Container_SK) == 0x000FF0, "Member 'AB_Fragment_Container_C::Container_SK' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, RotationRoot) == 0x000FF8, "Member 'AB_Fragment_Container_C::RotationRoot' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, VerticalMovement) == 0x001000, "Member 'AB_Fragment_Container_C::VerticalMovement' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Awaken_Collision) == 0x001008, "Member 'AB_Fragment_Container_C::Awaken_Collision' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, MiniMapCollision) == 0x001010, "Member 'AB_Fragment_Container_C::MiniMapCollision' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, MiniMapLoc) == 0x001018, "Member 'AB_Fragment_Container_C::MiniMapLoc' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, VerticalMovementTimeline_Z_Offset_E77B23F44312E9BD5DA6EF9ACE127DE4) == 0x001020, "Member 'AB_Fragment_Container_C::VerticalMovementTimeline_Z_Offset_E77B23F44312E9BD5DA6EF9ACE127DE4' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, VerticalMovementTimeline__Direction_E77B23F44312E9BD5DA6EF9ACE127DE4) == 0x001024, "Member 'AB_Fragment_Container_C::VerticalMovementTimeline__Direction_E77B23F44312E9BD5DA6EF9ACE127DE4' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, VerticalMovementTimeline) == 0x001028, "Member 'AB_Fragment_Container_C::VerticalMovementTimeline' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, TC_HasFragmentAbility) == 0x001030, "Member 'AB_Fragment_Container_C::TC_HasFragmentAbility' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, TC_LlamaFragment) == 0x001050, "Member 'AB_Fragment_Container_C::TC_LlamaFragment' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, TC_ChargeFragmentTag) == 0x001070, "Member 'AB_Fragment_Container_C::TC_ChargeFragmentTag' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, TC_LlamaFragmentTag) == 0x001090, "Member 'AB_Fragment_Container_C::TC_LlamaFragmentTag' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Event_FragmentCollected) == 0x0010B0, "Member 'AB_Fragment_Container_C::Event_FragmentCollected' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, SentFragment) == 0x0010B8, "Member 'AB_Fragment_Container_C::SentFragment' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FragmentType) == 0x001160, "Member 'AB_Fragment_Container_C::FragmentType' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, ChargeFragmentColor) == 0x001164, "Member 'AB_Fragment_Container_C::ChargeFragmentColor' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, LlamaFragmentColor) == 0x001174, "Member 'AB_Fragment_Container_C::LlamaFragmentColor' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FragmentAmmoData) == 0x001188, "Member 'AB_Fragment_Container_C::FragmentAmmoData' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Current_Outlander) == 0x001190, "Member 'AB_Fragment_Container_C::Current_Outlander' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, InteractingPlayerPawn) == 0x001198, "Member 'AB_Fragment_Container_C::InteractingPlayerPawn' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, GE_Outlander_LlamaFragment) == 0x0011A0, "Member 'AB_Fragment_Container_C::GE_Outlander_LlamaFragment' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, GE_ClearFragmentCooldown) == 0x0011A8, "Member 'AB_Fragment_Container_C::GE_ClearFragmentCooldown' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, GE_Outlander_FragmentTeamSpeedBost) == 0x0011B0, "Member 'AB_Fragment_Container_C::GE_Outlander_FragmentTeamSpeedBost' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FortPawnFilter) == 0x0011B8, "Member 'AB_Fragment_Container_C::FortPawnFilter' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, LlamaFragmentPercent) == 0x0011C0, "Member 'AB_Fragment_Container_C::LlamaFragmentPercent' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, RotateToPlayerSpeed) == 0x0011C4, "Member 'AB_Fragment_Container_C::RotateToPlayerSpeed' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, LastInteractStartTime) == 0x0011C8, "Member 'AB_Fragment_Container_C::LastInteractStartTime' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, DelayedDestroyTime) == 0x0011CC, "Member 'AB_Fragment_Container_C::DelayedDestroyTime' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, NumberOfTimeToPingMap) == 0x0011D0, "Member 'AB_Fragment_Container_C::NumberOfTimeToPingMap' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, NumberOfMapPings) == 0x0011D4, "Member 'AB_Fragment_Container_C::NumberOfMapPings' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, IsAnyOutlanderStillAround) == 0x0011D8, "Member 'AB_Fragment_Container_C::IsAnyOutlanderStillAround' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, CanInteract) == 0x0011D9, "Member 'AB_Fragment_Container_C::CanInteract' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, IsAwake) == 0x0011DA, "Member 'AB_Fragment_Container_C::IsAwake' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, HasLoot) == 0x0011DB, "Member 'AB_Fragment_Container_C::HasLoot' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, IsOpen) == 0x0011DC, "Member 'AB_Fragment_Container_C::IsOpen' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, bIsUP) == 0x0011DD, "Member 'AB_Fragment_Container_C::bIsUP' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, IsOn) == 0x0011DE, "Member 'AB_Fragment_Container_C::IsOn' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Container_Base_Mat) == 0x0011E0, "Member 'AB_Fragment_Container_C::Container_Base_Mat' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Container_Screen_mat) == 0x0011E8, "Member 'AB_Fragment_Container_C::Container_Screen_mat' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Container_Light_mat) == 0x0011F0, "Member 'AB_Fragment_Container_C::Container_Light_mat' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Orb_Mat) == 0x0011F8, "Member 'AB_Fragment_Container_C::Orb_Mat' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Orb_Turn_On_Sound) == 0x001200, "Member 'AB_Fragment_Container_C::Orb_Turn_On_Sound' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Orb_Hello_Sound) == 0x001208, "Member 'AB_Fragment_Container_C::Orb_Hello_Sound' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Orb_Hover_Sound) == 0x001210, "Member 'AB_Fragment_Container_C::Orb_Hover_Sound' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Orb_Goodbye_Sound) == 0x001218, "Member 'AB_Fragment_Container_C::Orb_Goodbye_Sound' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Orb_Thanks_Sound) == 0x001220, "Member 'AB_Fragment_Container_C::Orb_Thanks_Sound' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, InteractLlamaFragment) == 0x001228, "Member 'AB_Fragment_Container_C::InteractLlamaFragment' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, InteractChargeFragment) == 0x001240, "Member 'AB_Fragment_Container_C::InteractChargeFragment' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, InteractNonOutlander) == 0x001258, "Member 'AB_Fragment_Container_C::InteractNonOutlander' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, PickupLlamaFragment) == 0x001270, "Member 'AB_Fragment_Container_C::PickupLlamaFragment' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, PickupChargeFragment) == 0x001288, "Member 'AB_Fragment_Container_C::PickupChargeFragment' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, OrbAudioComponent) == 0x0012A0, "Member 'AB_Fragment_Container_C::OrbAudioComponent' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, IsOrbTaken) == 0x0012A8, "Member 'AB_Fragment_Container_C::IsOrbTaken' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FailedOutlanderOnlyOneLlama) == 0x0012B0, "Member 'AB_Fragment_Container_C::FailedOutlanderOnlyOneLlama' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FailedOutlanderMaxFragHeldDefault) == 0x0012C8, "Member 'AB_Fragment_Container_C::FailedOutlanderMaxFragHeldDefault' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FailedOutlanderActivatedButDoesNotYetPossessFragmentAbility) == 0x0012E0, "Member 'AB_Fragment_Container_C::FailedOutlanderActivatedButDoesNotYetPossessFragmentAbility' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FailedNonOutlanderActivated) == 0x0012F8, "Member 'AB_Fragment_Container_C::FailedNonOutlanderActivated' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FF_Interact) == 0x001310, "Member 'AB_Fragment_Container_C::FF_Interact' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FFInteractSoft) == 0x001318, "Member 'AB_Fragment_Container_C::FFInteractSoft' has a wrong offset!");

}

