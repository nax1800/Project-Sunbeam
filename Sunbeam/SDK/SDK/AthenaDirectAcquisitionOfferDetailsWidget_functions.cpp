#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionOfferDetailsWidget

#include "Basic.hpp"

#include "AthenaDirectAcquisitionOfferDetailsWidget_classes.hpp"
#include "AthenaDirectAcquisitionOfferDetailsWidget_parameters.hpp"


namespace SDK
{

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget");

	Params::AthenaDirectAcquisitionOfferDetailsWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::AthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnOfferSet
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::OnOfferSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "OnOfferSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateFromOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::UpdateFromOffer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "UpdateFromOffer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PassThrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::HandleBack(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "HandleBack");

	Params::AthenaDirectAcquisitionOfferDetailsWidget_C_HandleBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PopDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::PopDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "PopDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupPrice
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PriceIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*                PurchaseButton                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          PriceContainer                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       NormalPriceText                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          SalePriceContainer                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       SalePriceText                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                           CurrencyImage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::SetupPrice(const int32 PriceIndex, class UIconTextButton_C* PurchaseButton, class UWidget* PriceContainer, class UTextBlock* NormalPriceText, class UWidget* SalePriceContainer, class UTextBlock* SalePriceText, class UImage* CurrencyImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "SetupPrice");

	Params::AthenaDirectAcquisitionOfferDetailsWidget_C_SetupPrice Parms{};

	Parms.PriceIndex = PriceIndex;
	Parms.PurchaseButton = PurchaseButton;
	Parms.PriceContainer = PriceContainer;
	Parms.NormalPriceText = NormalPriceText;
	Parms.SalePriceContainer = SalePriceContainer;
	Parms.SalePriceText = SalePriceText;
	Parms.CurrencyImage = CurrencyImage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandlePurchaseOfferComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::HandlePurchaseOfferComplete(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "HandlePurchaseOfferComplete");

	Params::AthenaDirectAcquisitionOfferDetailsWidget_C_HandlePurchaseOfferComplete Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.AttemptPurchase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PriceIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::AttemptPurchase(const int32 PriceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "AttemptPurchase");

	Params::AthenaDirectAcquisitionOfferDetailsWidget_C_AttemptPurchase Parms{};

	Parms.PriceIndex = PriceIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

