#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_PlayerScoreRow

#include "Basic.hpp"

#include "Results_PlayerScoreRow_classes.hpp"
#include "Results_PlayerScoreRow_parameters.hpp"


namespace SDK
{

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.ExecuteUbergraph_Results_PlayerScoreRow
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_PlayerScoreRow_C::ExecuteUbergraph_Results_PlayerScoreRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_PlayerScoreRow_C", "ExecuteUbergraph_Results_PlayerScoreRow");

	Params::Results_PlayerScoreRow_C_ExecuteUbergraph_Results_PlayerScoreRow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_PlayerScoreRow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_PlayerScoreRow_C", "PreConstruct");

	Params::Results_PlayerScoreRow_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Manual Pre Construct
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsDesignTime                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_PlayerScoreRow_C::Manual_Pre_Construct(bool bIsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_PlayerScoreRow_C", "Manual Pre Construct");

	Params::Results_PlayerScoreRow_C_Manual_Pre_Construct Parms{};

	Parms.bIsDesignTime = bIsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*               ScoreReport                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ScoreReportIndex                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_PlayerScoreRow_C::Initialize(class UFortUIScoreReport* ScoreReport, int32 ScoreReportIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_PlayerScoreRow_C", "Initialize");

	Params::Results_PlayerScoreRow_C_Initialize Parms{};

	Parms.ScoreReport = ScoreReport;
	Parms.ScoreReportIndex = ScoreReportIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeBackground
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_PlayerScoreRow_C::InitializeBackground()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_PlayerScoreRow_C", "InitializeBackground");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeScores
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*               InScoreReport                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InScoreReportIndex                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_PlayerScoreRow_C::InitializeScores(class UFortUIScoreReport* InScoreReport, int32 InScoreReportIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_PlayerScoreRow_C", "InitializeScores");

	Params::Results_PlayerScoreRow_C_InitializeScores Parms{};

	Parms.InScoreReport = InScoreReport;
	Parms.InScoreReportIndex = InScoreReportIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializePlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*               ScoreReport                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ScoreReportReferece                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_PlayerScoreRow_C::InitializePlayerName(class UFortUIScoreReport* ScoreReport, int32 ScoreReportReferece)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_PlayerScoreRow_C", "InitializePlayerName");

	Params::Results_PlayerScoreRow_C_InitializePlayerName Parms{};

	Parms.ScoreReport = ScoreReport;
	Parms.ScoreReportReferece = ScoreReportReferece;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeHomeBasePower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 PlayerID                                               (Parm, HasGetValueTypeHash)

void UResults_PlayerScoreRow_C::InitializeHomeBasePower(const struct FUniqueNetIdRepl& PlayerID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_PlayerScoreRow_C", "InitializeHomeBasePower");

	Params::Results_PlayerScoreRow_C_InitializeHomeBasePower Parms{};

	Parms.PlayerID = std::move(PlayerID);

	UObject::ProcessEvent(Func, &Parms);
}

}

