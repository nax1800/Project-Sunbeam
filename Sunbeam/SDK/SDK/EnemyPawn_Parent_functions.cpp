#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnemyPawn_Parent

#include "Basic.hpp"

#include "EnemyPawn_Parent_classes.hpp"
#include "EnemyPawn_Parent_parameters.hpp"


namespace SDK
{

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ExecuteUbergraph_EnemyPawn_Parent
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::ExecuteUbergraph_EnemyPawn_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "ExecuteUbergraph_EnemyPawn_Parent");

	Params::EnemyPawn_Parent_C_ExecuteUbergraph_EnemyPawn_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnCheatUpdateSpecialEventGE
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bShouldUseSpecialEventGE                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::OnCheatUpdateSpecialEventGE(bool bShouldUseSpecialEventGE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "OnCheatUpdateSpecialEventGE");

	Params::EnemyPawn_Parent_C_OnCheatUpdateSpecialEventGE Parms{};

	Parms.bShouldUseSpecialEventGE = bShouldUseSpecialEventGE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delay_Amount                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::RestorePreviousMaterialDelay(float Delay_Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "RestorePreviousMaterialDelay");

	Params::EnemyPawn_Parent_C_RestorePreviousMaterialDelay Parms{};

	Parms.Delay_Amount = Delay_Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelayCompleted
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::RestorePreviousMaterialDelayCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "RestorePreviousMaterialDelayCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnEndSleepEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_C::OnEndSleepEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "OnEndSleepEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnBeginSleepEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_C::OnBeginSleepEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "OnBeginSleepEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::AdditiveHitReactDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "AdditiveHitReactDelay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (Parm)

void AEnemyPawn_Parent_C::OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "OnDamagePlayEffects");

	Params::EnemyPawn_Parent_C_OnDamagePlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PawnUniqueIDSet
// (Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_C::PawnUniqueIDSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "PawnUniqueIDSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnStartedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_C::OnStartedEncounterSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "OnStartedEncounterSpawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnFinishedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_C::OnFinishedEncounterSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "OnFinishedEncounterSpawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DebugEnemySpawnIn
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::DebugEnemySpawnIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "DebugEnemySpawnIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DespawnEnemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          RiftLocationWS                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::DespawnEnemy(const struct FVector& RiftLocationWS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "DespawnEnemy");

	Params::EnemyPawn_Parent_C_DespawnEnemy Parms{};

	Parms.RiftLocationWS = std::move(RiftLocationWS);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PostSpawnIn
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::PostSpawnIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "PostSpawnIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.BeginDeathFX
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::BeginDeathFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "BeginDeathFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (Parm)

void AEnemyPawn_Parent_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "OnDeathPlayEffects");

	Params::EnemyPawn_Parent_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEnemyPawn_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__Spawn__EventFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::EnemySpawnInTL__Spawn__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "EnemySpawnInTL__Spawn__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__UpdateFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::EnemySpawnInTL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "EnemySpawnInTL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__FinishedFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::EnemySpawnInTL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "EnemySpawnInTL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__UpdateFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::Enemy_Spawn_Out_TL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "Enemy Spawn Out TL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__FinishedFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::Enemy_Spawn_Out_TL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "Enemy Spawn Out TL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeathMaterialParamsTL__UpdateFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::DeathMaterialParamsTL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "DeathMaterialParamsTL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeathMaterialParamsTL__FinishedFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::DeathMaterialParamsTL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "DeathMaterialParamsTL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemyDeathVisuals
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HQ                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::EnemyDeathVisuals(bool* HQ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "EnemyDeathVisuals");

	Params::EnemyPawn_Parent_C_EnemyDeathVisuals Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HQ != nullptr)
		*HQ = Parms.HQ;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopMaterialTimeline
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::StopMaterialTimeline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "StopMaterialTimeline");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopDeathFX
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::StopDeathFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "StopDeathFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PickColorFromAnArrayOfColors
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FLinearColor>             ArrayOfColors                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLinearColor                     Color                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::PickColorFromAnArrayOfColors(TArray<struct FLinearColor>& ArrayOfColors, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "PickColorFromAnArrayOfColors");

	Params::EnemyPawn_Parent_C_PickColorFromAnArrayOfColors Parms{};

	Parms.ArrayOfColors = std::move(ArrayOfColors);

	UObject::ProcessEvent(Func, &Parms);

	ArrayOfColors = std::move(Parms.ArrayOfColors);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetVectorParameterOnAllCharacterMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Parameter_Name                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Linear_Color                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::SetVectorParameterOnAllCharacterMIDs(class FName Parameter_Name, const struct FLinearColor& Linear_Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "SetVectorParameterOnAllCharacterMIDs");

	Params::EnemyPawn_Parent_C_SetVectorParameterOnAllCharacterMIDs Parms{};

	Parms.Parameter_Name = Parameter_Name;
	Parms.Linear_Color = std::move(Linear_Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetScalarParameterOnAllCharacterMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Parameter_Name                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Scalar_Value                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::SetScalarParameterOnAllCharacterMIDs(class FName Parameter_Name, float Scalar_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "SetScalarParameterOnAllCharacterMIDs");

	Params::EnemyPawn_Parent_C_SetScalarParameterOnAllCharacterMIDs Parms{};

	Parms.Parameter_Name = Parameter_Name;
	Parms.Scalar_Value = Scalar_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetActiveParticlesOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Reset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::SetActiveParticlesOnCharacterMesh(bool Active, bool Reset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "SetActiveParticlesOnCharacterMesh");

	Params::EnemyPawn_Parent_C_SetActiveParticlesOnCharacterMesh Parms{};

	Parms.Active = Active;
	Parms.Reset = Reset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PlayAdditiveHitReacts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Hit_Direction                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     Anim_Montage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "PlayAdditiveHitReacts");

	Params::EnemyPawn_Parent_C_PlayAdditiveHitReacts Parms{};

	Parms.Hit_Direction = std::move(Hit_Direction);
	Parms.Anim_Montage = Anim_Montage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverrideMaterialAndCopyParametersOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterial*                        New_Material_To_Apply                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::OverrideMaterialAndCopyParametersOnCharacterMesh(class UMaterial* New_Material_To_Apply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "OverrideMaterialAndCopyParametersOnCharacterMesh");

	Params::EnemyPawn_Parent_C_OverrideMaterialAndCopyParametersOnCharacterMesh Parms{};

	Parms.New_Material_To_Apply = New_Material_To_Apply;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DestroyAwokenSkeletalMesh
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::DestroyAwokenSkeletalMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "DestroyAwokenSkeletalMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverridePhysicalMaterialOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*                Physical_Material_Override                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::OverridePhysicalMaterialOnCharacterMesh(class UPhysicalMaterial* Physical_Material_Override)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "OverridePhysicalMaterialOnCharacterMesh");

	Params::EnemyPawn_Parent_C_OverridePhysicalMaterialOnCharacterMesh Parms{};

	Parms.Physical_Material_Override = Physical_Material_Override;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnParticleSystemOnCharacterMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*                  ParticleSystemTemplate                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*         ParticleSystemComponentReferenceVar                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AttachPointName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (Parm, IsPlainOldData, NoDestructor)
// TArray<struct FParticleSysParam>        InstanceParameters                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                                    AutoActivate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    AutoDestroy                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    AbsoluteLocation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    AbsoluteRotation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    AbsoluteScale                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*         PSComponentReference                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::SpawnParticleSystemOnCharacterMesh(class UParticleSystem* ParticleSystemTemplate, class UParticleSystemComponent* ParticleSystemComponentReferenceVar, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TArray<struct FParticleSysParam>& InstanceParameters, bool AutoActivate, bool AutoDestroy, bool AbsoluteLocation, bool AbsoluteRotation, bool AbsoluteScale, class UParticleSystemComponent** PSComponentReference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "SpawnParticleSystemOnCharacterMesh");

	Params::EnemyPawn_Parent_C_SpawnParticleSystemOnCharacterMesh Parms{};

	Parms.ParticleSystemTemplate = ParticleSystemTemplate;
	Parms.ParticleSystemComponentReferenceVar = ParticleSystemComponentReferenceVar;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.InstanceParameters = std::move(InstanceParameters);
	Parms.AutoActivate = AutoActivate;
	Parms.AutoDestroy = AutoDestroy;
	Parms.AbsoluteLocation = AbsoluteLocation;
	Parms.AbsoluteRotation = AbsoluteRotation;
	Parms.AbsoluteScale = AbsoluteScale;

	UObject::ProcessEvent(Func, &Parms);

	InstanceParameters = std::move(Parms.InstanceParameters);

	if (PSComponentReference != nullptr)
		*PSComponentReference = Parms.PSComponentReference;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterFresnelGlowColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Inner_Color                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Outer_Color                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::SetCharacterFresnelGlowColors(const struct FLinearColor& Inner_Color, const struct FLinearColor& Outer_Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "SetCharacterFresnelGlowColors");

	Params::EnemyPawn_Parent_C_SetCharacterFresnelGlowColors Parms{};

	Parms.Inner_Color = std::move(Inner_Color);
	Parms.Outer_Color = std::move(Outer_Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterEyeColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Eye_Color_Inner                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Eye_Color_Outer                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::SetCharacterEyeColors(const struct FLinearColor& Eye_Color_Inner, const struct FLinearColor& Eye_Color_Outer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "SetCharacterEyeColors");

	Params::EnemyPawn_Parent_C_SetCharacterEyeColors Parms{};

	Parms.Eye_Color_Inner = std::move(Eye_Color_Inner);
	Parms.Eye_Color_Outer = std::move(Eye_Color_Outer);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.CharacterSpawnInSafetyCheck
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::CharacterSpawnInSafetyCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "CharacterSpawnInSafetyCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delay_in_Seconds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::RestorePreviousMaterialOnCharacterMesh(float Delay_in_Seconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "RestorePreviousMaterialOnCharacterMesh");

	Params::EnemyPawn_Parent_C_RestorePreviousMaterialOnCharacterMesh Parms{};

	Parms.Delay_in_Seconds = Delay_in_Seconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnMeshAttachedToCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                      Static_Mesh                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Socket_Name                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Relative_Transform                                     (Parm, IsPlainOldData, NoDestructor)
// bool                                    Absolute_Location                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Absolute_Rotation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Absolute_Scale                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*             Static_Mesh_Component_Reference                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::SpawnMeshAttachedToCharacter(class UStaticMesh* Static_Mesh, class FName Socket_Name, const struct FTransform& Relative_Transform, bool Absolute_Location, bool Absolute_Rotation, bool Absolute_Scale, class UStaticMeshComponent** Static_Mesh_Component_Reference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "SpawnMeshAttachedToCharacter");

	Params::EnemyPawn_Parent_C_SpawnMeshAttachedToCharacter Parms{};

	Parms.Static_Mesh = Static_Mesh;
	Parms.Socket_Name = Socket_Name;
	Parms.Relative_Transform = std::move(Relative_Transform);
	Parms.Absolute_Location = Absolute_Location;
	Parms.Absolute_Rotation = Absolute_Rotation;
	Parms.Absolute_Scale = Absolute_Scale;

	UObject::ProcessEvent(Func, &Parms);

	if (Static_Mesh_Component_Reference != nullptr)
		*Static_Mesh_Component_Reference = Parms.Static_Mesh_Component_Reference;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpecialEventHalloweenPumpkinHeadHusk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ApplyPumpkinHeadMesh                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    DebugApplicationOrRemoval_                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::SpecialEventHalloweenPumpkinHeadHusk(bool ApplyPumpkinHeadMesh, bool DebugApplicationOrRemoval_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "SpecialEventHalloweenPumpkinHeadHusk");

	Params::EnemyPawn_Parent_C_SpecialEventHalloweenPumpkinHeadHusk Parms{};

	Parms.ApplyPumpkinHeadMesh = ApplyPumpkinHeadMesh;
	Parms.DebugApplicationOrRemoval_ = DebugApplicationOrRemoval_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnRep_SpecialEventHalloweenPumpkinHeadApplied
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::OnRep_SpecialEventHalloweenPumpkinHeadApplied()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "OnRep_SpecialEventHalloweenPumpkinHeadApplied");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Orphaned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOrphaned                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                        AttachedPawn                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Parent_C", "Orphaned");

	Params::EnemyPawn_Parent_C_Orphaned Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOrphaned != nullptr)
		*IsOrphaned = Parms.IsOrphaned;

	if (AttachedPawn != nullptr)
		*AttachedPawn = Parms.AttachedPawn;
}

}

