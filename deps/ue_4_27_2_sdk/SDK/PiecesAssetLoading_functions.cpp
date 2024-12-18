#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesAssetLoading

#include "Basic.hpp"

#include "PiecesAssetLoading_classes.hpp"
#include "PiecesAssetLoading_parameters.hpp"


namespace SDK
{

// Function PiecesAssetLoading.PiecesAssetLoadingBFL.LoadAssets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<TSoftObjectPtr<class UObject>>   AssetsToLoad                                           (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
// bool                                    BlockUntilComplete                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Priority                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UPiecesAssetLoadingBFL::LoadAssets(const TArray<TSoftObjectPtr<class UObject>>& AssetsToLoad, bool BlockUntilComplete, int32 Priority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PiecesAssetLoadingBFL", "LoadAssets");

	Params::PiecesAssetLoadingBFL_LoadAssets Parms{};

	Parms.AssetsToLoad = std::move(AssetsToLoad);
	Parms.BlockUntilComplete = BlockUntilComplete;
	Parms.Priority = Priority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PiecesAssetLoading.PiecesAssetLoadingBFL.LoadAssetsWithCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<TSoftObjectPtr<class UObject>>   AssetsToLoad                                           (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
// bool                                    BlockUntilComplete                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Priority                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(TArray<class UObject*>& LoadedAssets)>LoadCompleteDelegate                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UPiecesAssetLoadingBFL::LoadAssetsWithCallback(const TArray<TSoftObjectPtr<class UObject>>& AssetsToLoad, bool BlockUntilComplete, int32 Priority, TDelegate<void(TArray<class UObject*>& LoadedAssets)> LoadCompleteDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PiecesAssetLoadingBFL", "LoadAssetsWithCallback");

	Params::PiecesAssetLoadingBFL_LoadAssetsWithCallback Parms{};

	Parms.AssetsToLoad = std::move(AssetsToLoad);
	Parms.BlockUntilComplete = BlockUntilComplete;
	Parms.Priority = Priority;
	Parms.LoadCompleteDelegate = LoadCompleteDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PiecesAssetLoading.PiecesAssetLoadingBFL.LoadClasses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<TSoftClassPtr<class UClass>>     AssetsToLoad                                           (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
// bool                                    BlockUntilComplete                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Priority                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UClass*>                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UClass*> UPiecesAssetLoadingBFL::LoadClasses(const TArray<TSoftClassPtr<class UClass>>& AssetsToLoad, bool BlockUntilComplete, int32 Priority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PiecesAssetLoadingBFL", "LoadClasses");

	Params::PiecesAssetLoadingBFL_LoadClasses Parms{};

	Parms.AssetsToLoad = std::move(AssetsToLoad);
	Parms.BlockUntilComplete = BlockUntilComplete;
	Parms.Priority = Priority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PiecesAssetLoading.PiecesAssetLoadingBFL.LoadClassesWithCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<TSoftClassPtr<class UClass>>     AssetsToLoad                                           (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
// bool                                    BlockUntilComplete                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Priority                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(TArray<class UClass*>& LoadedAssets)>LoadCompleteDelegate                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UPiecesAssetLoadingBFL::LoadClassesWithCallback(const TArray<TSoftClassPtr<class UClass>>& AssetsToLoad, bool BlockUntilComplete, int32 Priority, TDelegate<void(TArray<class UClass*>& LoadedAssets)> LoadCompleteDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PiecesAssetLoadingBFL", "LoadClassesWithCallback");

	Params::PiecesAssetLoadingBFL_LoadClassesWithCallback Parms{};

	Parms.AssetsToLoad = std::move(AssetsToLoad);
	Parms.BlockUntilComplete = BlockUntilComplete;
	Parms.Priority = Priority;
	Parms.LoadCompleteDelegate = LoadCompleteDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// DelegateFunction PiecesAssetLoading.PiecesAssetLoadingBFL.OnAssetsLoaded__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<class UObject*>                  LoadedAssets                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UPiecesAssetLoadingBFL::OnAssetsLoaded__DelegateSignature(const TArray<class UObject*>& LoadedAssets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiecesAssetLoadingBFL", "OnAssetsLoaded__DelegateSignature");

	Params::PiecesAssetLoadingBFL_OnAssetsLoaded__DelegateSignature Parms{};

	Parms.LoadedAssets = std::move(LoadedAssets);

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PiecesAssetLoading.PiecesAssetLoadingBFL.OnClassesLoaded__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<class UClass*>                   LoadedAssets                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UPiecesAssetLoadingBFL::OnClassesLoaded__DelegateSignature(const TArray<class UClass*>& LoadedAssets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PiecesAssetLoadingBFL", "OnClassesLoaded__DelegateSignature");

	Params::PiecesAssetLoadingBFL_OnClassesLoaded__DelegateSignature Parms{};

	Parms.LoadedAssets = std::move(LoadedAssets);

	UObject::ProcessEvent(Func, &Parms);
}

}

