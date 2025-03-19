#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestUpdateEntry

#include "Basic.hpp"

#include "QuestUpdateEntry_classes.hpp"
#include "QuestUpdateEntry_parameters.hpp"


namespace SDK
{

// Function QuestUpdateEntry.QuestUpdateEntry_C.AllQuestUpdatesFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestUpdateEntry_C*              UpdateWidget                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestUpdateEntry_C::AllQuestUpdatesFinished__DelegateSignature(class UQuestUpdateEntry_C* UpdateWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "AllQuestUpdatesFinished__DelegateSignature");

	Params::QuestUpdateEntry_C_AllQuestUpdatesFinished__DelegateSignature Parms{};

	Parms.UpdateWidget = UpdateWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.ExecuteUbergraph_QuestUpdateEntry
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestUpdateEntry_C::ExecuteUbergraph_QuestUpdateEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "ExecuteUbergraph_QuestUpdateEntry");

	Params::QuestUpdateEntry_C_ExecuteUbergraph_QuestUpdateEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestUpdateEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestUpdateEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "Tick");

	Params::QuestUpdateEntry_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.OnReceiveQuestUpdate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicQuestUpdateInfo          QuestUpdateInfo                                        (Parm, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestUpdateEntry_C::OnReceiveQuestUpdate(const struct FDynamicQuestUpdateInfo& QuestUpdateInfo, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "OnReceiveQuestUpdate");

	Params::QuestUpdateEntry_C_OnReceiveQuestUpdate Parms{};

	Parms.QuestUpdateInfo = std::move(QuestUpdateInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.CanAddUpdate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDynamicQuestUpdateInfo          UpdateToAdd                                            (Parm, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestUpdateEntry_C::CanAddUpdate(const struct FDynamicQuestUpdateInfo& UpdateToAdd, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "CanAddUpdate");

	Params::QuestUpdateEntry_C_CanAddUpdate Parms{};

	Parms.UpdateToAdd = std::move(UpdateToAdd);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.OnAppearAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestUpdateEntry_C::OnAppearAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "OnAppearAnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.TryStartUpdates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestUpdateEntry_C::TryStartUpdates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "TryStartUpdates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.CanStartUpdate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   UpdateIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestUpdateEntry_C::CanStartUpdate(int32 UpdateIndex, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "CanStartUpdate");

	Params::QuestUpdateEntry_C_CanStartUpdate Parms{};

	Parms.UpdateIndex = UpdateIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.HasUpdateFinished
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDynamicQuestUpdateInfo          Update                                                 (Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestUpdateEntry_C::HasUpdateFinished(struct FDynamicQuestUpdateInfo& Update, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "HasUpdateFinished");

	Params::QuestUpdateEntry_C_HasUpdateFinished Parms{};

	Parms.Update = std::move(Update);

	UObject::ProcessEvent(Func, &Parms);

	Update = std::move(Parms.Update);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.OnUpdateFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestUpdateEntry_C::OnUpdateFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "OnUpdateFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.HasUpdateStarted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDynamicQuestUpdateInfo          Update                                                 (Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestUpdateEntry_C::HasUpdateStarted(struct FDynamicQuestUpdateInfo& Update, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "HasUpdateStarted");

	Params::QuestUpdateEntry_C_HasUpdateStarted Parms{};

	Parms.Update = std::move(Update);

	UObject::ProcessEvent(Func, &Parms);

	Update = std::move(Parms.Update);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.GetObjectiveWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo*          QuestObjective                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestObjectiveEntry_C*           ObjectiveWidget                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestUpdateEntry_C::GetObjectiveWidget(class UFortQuestObjectiveInfo* QuestObjective, class UQuestObjectiveEntry_C** ObjectiveWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "GetObjectiveWidget");

	Params::QuestUpdateEntry_C_GetObjectiveWidget Parms{};

	Parms.QuestObjective = QuestObjective;

	UObject::ProcessEvent(Func, &Parms);

	if (ObjectiveWidget != nullptr)
		*ObjectiveWidget = Parms.ObjectiveWidget;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.IsUpdateActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDynamicQuestUpdateInfo          Update                                                 (Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestUpdateEntry_C::IsUpdateActive(struct FDynamicQuestUpdateInfo& Update, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "IsUpdateActive");

	Params::QuestUpdateEntry_C_IsUpdateActive Parms{};

	Parms.Update = std::move(Update);

	UObject::ProcessEvent(Func, &Parms);

	Update = std::move(Parms.Update);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.HaveAllUpdatesFinished
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestUpdateEntry_C::HaveAllUpdatesFinished(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "HaveAllUpdatesFinished");

	Params::QuestUpdateEntry_C_HaveAllUpdatesFinished Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.OnPostUpdatesDelayFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestUpdateEntry_C::OnPostUpdatesDelayFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "OnPostUpdatesDelayFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.OnDisappearAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestUpdateEntry_C::OnDisappearAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "OnDisappearAnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.CreateObjectiveEntryWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo*          Objective                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LastAchievedCount                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestUpdateEntry_C::CreateObjectiveEntryWidget(class UFortQuestObjectiveInfo* Objective, int32 LastAchievedCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "CreateObjectiveEntryWidget");

	Params::QuestUpdateEntry_C_CreateObjectiveEntryWidget Parms{};

	Parms.Objective = Objective;
	Parms.LastAchievedCount = LastAchievedCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.GetNumDisplayedObjectives
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   NumObjectives                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestUpdateEntry_C::GetNumDisplayedObjectives(int32* NumObjectives)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestUpdateEntry_C", "GetNumDisplayedObjectives");

	Params::QuestUpdateEntry_C_GetNumDisplayedObjectives Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NumObjectives != nullptr)
		*NumObjectives = Parms.NumObjectives;
}

}

