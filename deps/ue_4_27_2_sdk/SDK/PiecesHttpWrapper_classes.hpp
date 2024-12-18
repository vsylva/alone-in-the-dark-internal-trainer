#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesHttpWrapper

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class PiecesHttpWrapper.PiecesHttpWrapperFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPiecesHttpWrapperFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void Request(const class FString& URL, const class FString& Verb, const TMap<class FString, class FString>& Headers, const class FString& Body, float Timeout, const TDelegate<void(int32 Status, const class FString& Body)>& OnDone);

	void HttpRequestCompleteDelegate__DelegateSignature(int32 Status, const class FString& Body);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PiecesHttpWrapperFunctionLibrary">();
	}
	static class UPiecesHttpWrapperFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPiecesHttpWrapperFunctionLibrary>();
	}
};
static_assert(alignof(UPiecesHttpWrapperFunctionLibrary) == 0x000008, "Wrong alignment on UPiecesHttpWrapperFunctionLibrary");
static_assert(sizeof(UPiecesHttpWrapperFunctionLibrary) == 0x000028, "Wrong size on UPiecesHttpWrapperFunctionLibrary");

}

