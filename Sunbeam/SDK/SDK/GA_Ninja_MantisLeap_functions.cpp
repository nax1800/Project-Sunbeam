#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ninja_MantisLeap

#include "Basic.hpp"

#include "GA_Ninja_MantisLeap_classes.hpp"
#include "GA_Ninja_MantisLeap_parameters.hpp"


namespace SDK
{

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.ExecuteUbergraph_GA_Ninja_MantisLeap
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Ninja_MantisLeap_C::ExecuteUbergraph_GA_Ninja_MantisLeap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_MantisLeap_C", "ExecuteUbergraph_GA_Ninja_MantisLeap");

	Params::GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.Leapt
// (BlueprintCallable, BlueprintEvent)

void UGA_Ninja_MantisLeap_C::Leapt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_MantisLeap_C", "Leapt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.OnPawnLanded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGA_Ninja_MantisLeap_C::OnPawnLanded(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_MantisLeap_C", "OnPawnLanded");

	Params::GA_Ninja_MantisLeap_C_OnPawnLanded Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, Parm, OutParm, ReferenceParm)

void UGA_Ninja_MantisLeap_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_MantisLeap_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Ninja_MantisLeap_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.Targeted_023C704A4687994EABB842B14222FB9B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Ninja_MantisLeap_C::Targeted_023C704A4687994EABB842B14222FB9B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_MantisLeap_C", "Targeted_023C704A4687994EABB842B14222FB9B");

	Params::GA_Ninja_MantisLeap_C_Targeted_023C704A4687994EABB842B14222FB9B Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.Cancelled_023C704A4687994EABB842B14222FB9B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Ninja_MantisLeap_C::Cancelled_023C704A4687994EABB842B14222FB9B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_MantisLeap_C", "Cancelled_023C704A4687994EABB842B14222FB9B");

	Params::GA_Ninja_MantisLeap_C_Cancelled_023C704A4687994EABB842B14222FB9B Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (Parm, ContainsInstancedReference)
// struct FGameplayEventData               Payload                                                (Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Ninja_MantisLeap_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_MantisLeap_C", "K2_ShouldAbilityRespondToEvent");

	Params::GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.SetJumpHeight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_Ninja_C*              Ninja_Pawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*                  Ninja_Pawn_Out                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Jump_Height                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Ninja_MantisLeap_C::SetJumpHeight(class APlayerPawn_Ninja_C* Ninja_Pawn, class AFortPlayerPawn** Ninja_Pawn_Out, struct FVector* Jump_Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_MantisLeap_C", "SetJumpHeight");

	Params::GA_Ninja_MantisLeap_C_SetJumpHeight Parms{};

	Parms.Ninja_Pawn = Ninja_Pawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Ninja_Pawn_Out != nullptr)
		*Ninja_Pawn_Out = Parms.Ninja_Pawn_Out;

	if (Jump_Height != nullptr)
		*Jump_Height = std::move(Parms.Jump_Height);
}


// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          AbilitySystem                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Ninja_MantisLeap_C::SetupAbility(class UAbilitySystemComponent* AbilitySystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_MantisLeap_C", "SetupAbility");

	Params::GA_Ninja_MantisLeap_C_SetupAbility Parms{};

	Parms.AbilitySystem = AbilitySystem;

	UObject::ProcessEvent(Func, &Parms);
}

}

