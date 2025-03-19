#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HordeWaveAlertWidget

#include "Basic.hpp"

#include "HordeWaveAlertWidget_classes.hpp"
#include "HordeWaveAlertWidget_parameters.hpp"


namespace SDK
{

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.ExecuteUbergraph_HordeWaveAlertWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHordeWaveAlertWidget_C::ExecuteUbergraph_HordeWaveAlertWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HordeWaveAlertWidget_C", "ExecuteUbergraph_HordeWaveAlertWidget");

	Params::HordeWaveAlertWidget_C_ExecuteUbergraph_HordeWaveAlertWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAppearanceDisappearanceAnimComplete_Quick
// (BlueprintCallable, BlueprintEvent)

void UHordeWaveAlertWidget_C::OnAppearanceDisappearanceAnimComplete_Quick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnAppearanceDisappearanceAnimComplete_Quick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnModifierDisappearanceAnimComplete
// (BlueprintCallable, BlueprintEvent)

void UHordeWaveAlertWidget_C::OnModifierDisappearanceAnimComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnModifierDisappearanceAnimComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAppearanceDisappearanceAnimComplete
// (BlueprintCallable, BlueprintEvent)

void UHordeWaveAlertWidget_C::OnAppearanceDisappearanceAnimComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnAppearanceDisappearanceAnimComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAllModifiersPresented
// (BlueprintCallable, BlueprintEvent)

void UHordeWaveAlertWidget_C::OnAllModifiersPresented()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnAllModifiersPresented");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnModifierAppearanceAnimComplete
// (BlueprintCallable, BlueprintEvent)

void UHordeWaveAlertWidget_C::OnModifierAppearanceAnimComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnModifierAppearanceAnimComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHordeWaveAlertWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HordeWaveAlertWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveModifiersAdded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*>Modifiers                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHordeWaveAlertWidget_C::OnWaveModifiersAdded(const TArray<class UFortGameplayModifierItemDefinition*>& Modifiers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnWaveModifiersAdded");

	Params::HordeWaveAlertWidget_C_OnWaveModifiersAdded Parms{};

	Parms.Modifiers = std::move(Modifiers);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnHordeTierInitialized_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>Items                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHordeWaveAlertWidget_C::OnHordeTierInitialized_Event_0(const TArray<struct FFortItemInstanceQuantityPair>& Items)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnHordeTierInitialized_Event_0");

	Params::HordeWaveAlertWidget_C_OnHordeTierInitialized_Event_0 Parms{};

	Parms.Items = std::move(Items);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveCompleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Wave                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHordeWaveAlertWidget_C::OnWaveCompleted(const int32 Wave, const TArray<struct FFortItemInstanceQuantityPair>& Rewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnWaveCompleted");

	Params::HordeWaveAlertWidget_C_OnWaveCompleted Parms{};

	Parms.Wave = Wave;
	Parms.Rewards = std::move(Rewards);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveStarted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             LevelText                                              (ConstParm, Parm, OutParm, ReferenceParm)
// int32                                   Level                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             WaveText_0                                             (ConstParm, Parm, OutParm, ReferenceParm)
// int32                                   WaveNum                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHordeWaveAlertWidget_C::OnWaveStarted(const class FText& LevelText, int32 Level, const class FText& WaveText_0, int32 WaveNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HordeWaveAlertWidget_C", "OnWaveStarted");

	Params::HordeWaveAlertWidget_C_OnWaveStarted Parms{};

	Parms.LevelText = std::move(LevelText);
	Parms.Level = Level;
	Parms.WaveText_0 = std::move(WaveText_0);
	Parms.WaveNum = WaveNum;

	UObject::ProcessEvent(Func, &Parms);
}

}

