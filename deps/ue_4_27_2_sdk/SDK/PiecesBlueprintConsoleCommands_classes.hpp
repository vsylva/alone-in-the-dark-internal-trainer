#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiecesBlueprintConsoleCommands

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class PiecesBlueprintConsoleCommands.ConsoleCommands
// 0x0000 (0x00B8 - 0x00B8)
class UConsoleCommands : public UActorComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConsoleCommands">();
	}
	static class UConsoleCommands* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsoleCommands>();
	}
};
static_assert(alignof(UConsoleCommands) == 0x000008, "Wrong alignment on UConsoleCommands");
static_assert(sizeof(UConsoleCommands) == 0x0000B8, "Wrong size on UConsoleCommands");

// Class PiecesBlueprintConsoleCommands.ConsoleCommandsManager
// 0x0038 (0x00F0 - 0x00B8)
class UConsoleCommandsManager final : public UActorComponent
{
public:
	TArray<TSoftClassPtr<class UClass>>           ConsoleCommandClasses;                             // 0x00B8(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnConsoleCommandsLoaded;                           // 0x00C8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         bConsoleCommandsLoaded : 1;                        // 0x00D8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UConsoleCommands*>               ConsoleCommandsObjects;                            // 0x00E0(0x0010)(ExportObject, Net, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConsoleCommandsManager">();
	}
	static class UConsoleCommandsManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsoleCommandsManager>();
	}
};
static_assert(alignof(UConsoleCommandsManager) == 0x000008, "Wrong alignment on UConsoleCommandsManager");
static_assert(sizeof(UConsoleCommandsManager) == 0x0000F0, "Wrong size on UConsoleCommandsManager");
static_assert(offsetof(UConsoleCommandsManager, ConsoleCommandClasses) == 0x0000B8, "Member 'UConsoleCommandsManager::ConsoleCommandClasses' has a wrong offset!");
static_assert(offsetof(UConsoleCommandsManager, OnConsoleCommandsLoaded) == 0x0000C8, "Member 'UConsoleCommandsManager::OnConsoleCommandsLoaded' has a wrong offset!");
static_assert(offsetof(UConsoleCommandsManager, ConsoleCommandsObjects) == 0x0000E0, "Member 'UConsoleCommandsManager::ConsoleCommandsObjects' has a wrong offset!");

}
