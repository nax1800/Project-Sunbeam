#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPawn_Ninja

#include "Basic.hpp"

#include "PlayerPawn_Ninja_classes.hpp"
#include "PlayerPawn_Ninja_parameters.hpp"


namespace SDK
{

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ExecuteUbergraph_PlayerPawn_Ninja
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Ninja_C::ExecuteUbergraph_PlayerPawn_Ninja(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "ExecuteUbergraph_PlayerPawn_Ninja");

	Params::PlayerPawn_Ninja_C_ExecuteUbergraph_PlayerPawn_Ninja Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonStart
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AoeCloudTimeToLive                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MontageLength                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Ninja_C::TailOfDragonStart(float AoeCloudTimeToLive, float MontageLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "TailOfDragonStart");

	Params::PlayerPawn_Ninja_C_TailOfDragonStart Parms{};

	Parms.AoeCloudTimeToLive = AoeCloudTimeToLive;
	Parms.MontageLength = MontageLength;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonEnd
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::TailOfDragonEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "TailOfDragonEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnTeleportedClient
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::OnTeleportedClient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "OnTeleportedClient");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.StopEmittingNewSplines
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::StopEmittingNewSplines()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "StopEmittingNewSplines");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.Assassination.ActiveFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (Parm, ContainsInstancedReference)

void APlayerPawn_Ninja_C::GameplayCue_Ninja_Assassination_ActiveFX(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "GameplayCue.Ninja.Assassination.ActiveFX");

	Params::PlayerPawn_Ninja_C_GameplayCue_Ninja_Assassination_ActiveFX Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.MantisLeap.ActivationFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (Parm, ContainsInstancedReference)

void APlayerPawn_Ninja_C::GameplayCue_Ninja_MantisLeap_ActivationFX(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "GameplayCue.Ninja.MantisLeap.ActivationFX");

	Params::PlayerPawn_Ninja_C_GameplayCue_Ninja_MantisLeap_ActivationFX Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnLanded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APlayerPawn_Ninja_C::OnLanded(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "OnLanded");

	Params::PlayerPawn_Ninja_C_OnLanded Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.SmokeBomb.ImpactFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (Parm, ContainsInstancedReference)

void APlayerPawn_Ninja_C::GameplayCue_Ninja_SmokeBomb_ImpactFX(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "GameplayCue.Ninja.SmokeBomb.ImpactFX");

	Params::PlayerPawn_Ninja_C_GameplayCue_Ninja_SmokeBomb_ImpactFX Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Gameplaycue.Ninja.MantisLeap.MantisStrikeFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (Parm, ContainsInstancedReference)

void APlayerPawn_Ninja_C::Gameplaycue_Ninja_MantisLeap_MantisStrikeFX(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "Gameplaycue.Ninja.MantisLeap.MantisStrikeFX");

	Params::PlayerPawn_Ninja_C_Gameplaycue_Ninja_MantisLeap_MantisStrikeFX Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetPiercingForFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewPierceValue                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Ninja_C::SetPiercingForFX(bool NewPierceValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "SetPiercingForFX");

	Params::PlayerPawn_Ninja_C_SetPiercingForFX Parms{};

	Parms.NewPierceValue = NewPierceValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.NinjaStarTrails_Off
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::NinjaStarTrails_Off()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "NinjaStarTrails_Off");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.NinjaStarTrails_On
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::NinjaStarTrails_On()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "NinjaStarTrails_On");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetMenuScreenClassName
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::SetMenuScreenClassName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "SetMenuScreenClassName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (Parm, ContainsInstancedReference)

void APlayerPawn_Ninja_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	Params::PlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2 Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (Parm, ContainsInstancedReference)

void APlayerPawn_Ninja_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	Params::PlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1 Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnCharacterPartsReinitialized
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Ninja_C::OnCharacterPartsReinitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "OnCharacterPartsReinitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Toggle Shadow Stance
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::Toggle_Shadow_Stance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "Toggle Shadow Stance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Ninja_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.DragonSlashActivatedOrDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active_                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Ninja_C::DragonSlashActivatedOrDeactivated(bool Active_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "DragonSlashActivatedOrDeactivated");

	Params::PlayerPawn_Ninja_C_DragonSlashActivatedOrDeactivated Parms{};

	Parms.Active_ = Active_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UpdateWeaponShadowStance
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::UpdateWeaponShadowStance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "UpdateWeaponShadowStance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnWeaponEquipped
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortWeapon*                      NewWeapon                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                      PrevWeapon                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Ninja_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "OnWeaponEquipped");

	Params::PlayerPawn_Ninja_C_OnWeaponEquipped Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.DimMak.ActiveFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (Parm, ContainsInstancedReference)

void APlayerPawn_Ninja_C::GameplayCue_Ninja_DimMak_ActiveFX(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "GameplayCue.Ninja.DimMak.ActiveFX");

	Params::PlayerPawn_Ninja_C_GameplayCue_Ninja_DimMak_ActiveFX Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Ninja.ShadowStance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (Parm, ContainsInstancedReference)

void APlayerPawn_Ninja_C::GameplayCue_Abilities_Activation_Ninja_ShadowStance(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "GameplayCue.Abilities.Activation.Ninja.ShadowStance");

	Params::PlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Ninja_ShadowStance Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Ninja_C::Animate_Ninja_ShadowStance_Dissolve__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "Animate Ninja ShadowStance Dissolve__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Ninja_C::Animate_Ninja_ShadowStance_Dissolve__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "Animate Ninja ShadowStance Dissolve__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.CreateAndAttachDuplicateEffectSkeletalMeshes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortCustomPartType                     BodyType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           DuplicatedSkeletalMeshComponent                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Material_to_Apply                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*> Empty_MID_Array                                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                                   TranslucentSortPriority                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Ninja_C::CreateAndAttachDuplicateEffectSkeletalMeshes(EFortCustomPartType BodyType, class USkeletalMeshComponent*& DuplicatedSkeletalMeshComponent, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>& Empty_MID_Array, int32 TranslucentSortPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "CreateAndAttachDuplicateEffectSkeletalMeshes");

	Params::PlayerPawn_Ninja_C_CreateAndAttachDuplicateEffectSkeletalMeshes Parms{};

	Parms.BodyType = BodyType;
	Parms.DuplicatedSkeletalMeshComponent = DuplicatedSkeletalMeshComponent;
	Parms.Material_to_Apply = Material_to_Apply;
	Parms.Empty_MID_Array = std::move(Empty_MID_Array);
	Parms.TranslucentSortPriority = TranslucentSortPriority;

	UObject::ProcessEvent(Func, &Parms);

	DuplicatedSkeletalMeshComponent = Parms.DuplicatedSkeletalMeshComponent;
	Empty_MID_Array = std::move(Parms.Empty_MID_Array);
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetupShadowMeshAssetsAndMaterials
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortCustomPartType                     PartType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           Shadow_Mesh_Component                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>       Character_Body_Part_MID_Array                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UMaterialInstanceDynamic*> Empty_Translucent_Shadow_Stance_Output_MID_Array       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                                    Set                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Ninja_C::SetupShadowMeshAssetsAndMaterials(EFortCustomPartType PartType, class USkeletalMeshComponent*& Shadow_Mesh_Component, TArray<class UMaterialInterface*>& Character_Body_Part_MID_Array, TArray<class UMaterialInstanceDynamic*>& Empty_Translucent_Shadow_Stance_Output_MID_Array, bool* Set)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Ninja_C", "SetupShadowMeshAssetsAndMaterials");

	Params::PlayerPawn_Ninja_C_SetupShadowMeshAssetsAndMaterials Parms{};

	Parms.PartType = PartType;
	Parms.Shadow_Mesh_Component = Shadow_Mesh_Component;
	Parms.Character_Body_Part_MID_Array = std::move(Character_Body_Part_MID_Array);
	Parms.Empty_Translucent_Shadow_Stance_Output_MID_Array = std::move(Empty_Translucent_Shadow_Stance_Output_MID_Array);

	UObject::ProcessEvent(Func, &Parms);

	Shadow_Mesh_Component = Parms.Shadow_Mesh_Component;
	Character_Body_Part_MID_Array = std::move(Parms.Character_Body_Part_MID_Array);
	Empty_Translucent_Shadow_Stance_Output_MID_Array = std::move(Parms.Empty_Translucent_Shadow_Stance_Output_MID_Array);

	if (Set != nullptr)
		*Set = Parms.Set;
}

}

