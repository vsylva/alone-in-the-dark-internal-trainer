#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Flow

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// Enum Flow.EFlowLogVerbosity
// NumValues: 0x0007
enum class EFlowLogVerbosity : uint8
{
	Error                                    = 0,
	Warning                                  = 1,
	Display                                  = 2,
	Log                                      = 3,
	Verbose                                  = 4,
	VeryVerbose                              = 5,
	EFlowLogVerbosity_MAX                    = 6,
};

// Enum Flow.EFlowOnScreenMessageType
// NumValues: 0x0003
enum class EFlowOnScreenMessageType : uint8
{
	Temporary                                = 0,
	Permanent                                = 1,
	EFlowOnScreenMessageType_MAX             = 2,
};

// Enum Flow.EFlowTagContainerMatchType
// NumValues: 0x0005
enum class EFlowTagContainerMatchType : uint8
{
	HasAny                                   = 0,
	HasAnyExact                              = 1,
	HasAll                                   = 2,
	HasAllExact                              = 3,
	EFlowTagContainerMatchType_MAX           = 4,
};

// Enum Flow.EFlowNetMode
// NumValues: 0x0006
enum class EFlowNetMode : uint8
{
	Any                                      = 0,
	Authority                                = 1,
	ClientOnly                               = 2,
	ServerOnly                               = 3,
	SinglePlayerOnly                         = 4,
	EFlowNetMode_MAX                         = 5,
};

// Enum Flow.EFlowFinishPolicy
// NumValues: 0x0003
enum class EFlowFinishPolicy : uint8
{
	Keep                                     = 0,
	Abort                                    = 1,
	EFlowFinishPolicy_MAX                    = 2,
};

// Enum Flow.EFlowNodeState
// NumValues: 0x0005
enum class EFlowNodeState : uint8
{
	NeverActivated                           = 0,
	Active                                   = 1,
	Completed                                = 2,
	Aborted                                  = 3,
	EFlowNodeState_MAX                       = 4,
};

// ScriptStruct Flow.NotifyTagReplication
// 0x0010 (0x0010 - 0x0000)
struct FNotifyTagReplication final
{
public:
	struct FGameplayTag                           ActorTag;                                          // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           NotifyTag;                                         // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNotifyTagReplication) == 0x000004, "Wrong alignment on FNotifyTagReplication");
static_assert(sizeof(FNotifyTagReplication) == 0x000010, "Wrong size on FNotifyTagReplication");
static_assert(offsetof(FNotifyTagReplication, ActorTag) == 0x000000, "Member 'FNotifyTagReplication::ActorTag' has a wrong offset!");
static_assert(offsetof(FNotifyTagReplication, NotifyTag) == 0x000008, "Member 'FNotifyTagReplication::NotifyTag' has a wrong offset!");

// ScriptStruct Flow.ConnectedPin
// 0x0018 (0x0018 - 0x0000)
struct FConnectedPin final
{
public:
	struct FGuid                                  NodeGuid;                                          // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PinName;                                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FConnectedPin) == 0x000004, "Wrong alignment on FConnectedPin");
static_assert(sizeof(FConnectedPin) == 0x000018, "Wrong size on FConnectedPin");
static_assert(offsetof(FConnectedPin, NodeGuid) == 0x000000, "Member 'FConnectedPin::NodeGuid' has a wrong offset!");
static_assert(offsetof(FConnectedPin, PinName) == 0x000010, "Member 'FConnectedPin::PinName' has a wrong offset!");

// ScriptStruct Flow.FlowPin
// 0x0018 (0x0018 - 0x0000)
struct FFlowPin final
{
public:
	class FName                                   PinName;                                           // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PinToolTip;                                        // 0x0008(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFlowPin) == 0x000008, "Wrong alignment on FFlowPin");
static_assert(sizeof(FFlowPin) == 0x000018, "Wrong size on FFlowPin");
static_assert(offsetof(FFlowPin, PinName) == 0x000000, "Member 'FFlowPin::PinName' has a wrong offset!");
static_assert(offsetof(FFlowPin, PinToolTip) == 0x000008, "Member 'FFlowPin::PinToolTip' has a wrong offset!");

// ScriptStruct Flow.FlowComponentSaveData
// 0x0030 (0x0030 - 0x0000)
struct FFlowComponentSaveData final
{
public:
	class FString                                 WorldName;                                         // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ActorInstanceName;                                 // 0x0010(0x0010)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 ComponentData;                                     // 0x0020(0x0010)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFlowComponentSaveData) == 0x000008, "Wrong alignment on FFlowComponentSaveData");
static_assert(sizeof(FFlowComponentSaveData) == 0x000030, "Wrong size on FFlowComponentSaveData");
static_assert(offsetof(FFlowComponentSaveData, WorldName) == 0x000000, "Member 'FFlowComponentSaveData::WorldName' has a wrong offset!");
static_assert(offsetof(FFlowComponentSaveData, ActorInstanceName) == 0x000010, "Member 'FFlowComponentSaveData::ActorInstanceName' has a wrong offset!");
static_assert(offsetof(FFlowComponentSaveData, ComponentData) == 0x000020, "Member 'FFlowComponentSaveData::ComponentData' has a wrong offset!");

// ScriptStruct Flow.FlowNodeSaveData
// 0x0020 (0x0020 - 0x0000)
struct FFlowNodeSaveData final
{
public:
	struct FGuid                                  NodeGuid;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 NodeData;                                          // 0x0010(0x0010)(Edit, ZeroConstructor, EditConst, SaveGame, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFlowNodeSaveData) == 0x000008, "Wrong alignment on FFlowNodeSaveData");
static_assert(sizeof(FFlowNodeSaveData) == 0x000020, "Wrong size on FFlowNodeSaveData");
static_assert(offsetof(FFlowNodeSaveData, NodeGuid) == 0x000000, "Member 'FFlowNodeSaveData::NodeGuid' has a wrong offset!");
static_assert(offsetof(FFlowNodeSaveData, NodeData) == 0x000010, "Member 'FFlowNodeSaveData::NodeData' has a wrong offset!");

// ScriptStruct Flow.FlowAssetSaveData
// 0x0040 (0x0040 - 0x0000)
struct FFlowAssetSaveData final
{
public:
	class FString                                 WorldName;                                         // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InstanceName;                                      // 0x0010(0x0010)(Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 AssetData;                                         // 0x0020(0x0010)(Edit, ZeroConstructor, EditConst, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FFlowNodeSaveData>              NodeRecords;                                       // 0x0030(0x0010)(Edit, ZeroConstructor, EditConst, SaveGame, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFlowAssetSaveData) == 0x000008, "Wrong alignment on FFlowAssetSaveData");
static_assert(sizeof(FFlowAssetSaveData) == 0x000040, "Wrong size on FFlowAssetSaveData");
static_assert(offsetof(FFlowAssetSaveData, WorldName) == 0x000000, "Member 'FFlowAssetSaveData::WorldName' has a wrong offset!");
static_assert(offsetof(FFlowAssetSaveData, InstanceName) == 0x000010, "Member 'FFlowAssetSaveData::InstanceName' has a wrong offset!");
static_assert(offsetof(FFlowAssetSaveData, AssetData) == 0x000020, "Member 'FFlowAssetSaveData::AssetData' has a wrong offset!");
static_assert(offsetof(FFlowAssetSaveData, NodeRecords) == 0x000030, "Member 'FFlowAssetSaveData::NodeRecords' has a wrong offset!");

// ScriptStruct Flow.MovieSceneFlowTemplateBase
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneFlowTemplateBase : public FMovieSceneEvalTemplate
{
public:
	uint8                                         bFireEventsWhenForwards : 1;                       // 0x0020(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bFireEventsWhenBackwards : 1;                      // 0x0020(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneFlowTemplateBase) == 0x000008, "Wrong alignment on FMovieSceneFlowTemplateBase");
static_assert(sizeof(FMovieSceneFlowTemplateBase) == 0x000028, "Wrong size on FMovieSceneFlowTemplateBase");

// ScriptStruct Flow.MovieSceneFlowRepeaterTemplate
// 0x0010 (0x0038 - 0x0028)
struct FMovieSceneFlowRepeaterTemplate final : public FMovieSceneFlowTemplateBase
{
public:
	class FString                                 EventName;                                         // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneFlowRepeaterTemplate) == 0x000008, "Wrong alignment on FMovieSceneFlowRepeaterTemplate");
static_assert(sizeof(FMovieSceneFlowRepeaterTemplate) == 0x000038, "Wrong size on FMovieSceneFlowRepeaterTemplate");
static_assert(offsetof(FMovieSceneFlowRepeaterTemplate, EventName) == 0x000028, "Member 'FMovieSceneFlowRepeaterTemplate::EventName' has a wrong offset!");

// ScriptStruct Flow.MovieSceneFlowTriggerTemplate
// 0x0020 (0x0048 - 0x0028)
struct FMovieSceneFlowTriggerTemplate final : public FMovieSceneFlowTemplateBase
{
public:
	TArray<struct FFrameNumber>                   EventTimes;                                        // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                         EventNames;                                        // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneFlowTriggerTemplate) == 0x000008, "Wrong alignment on FMovieSceneFlowTriggerTemplate");
static_assert(sizeof(FMovieSceneFlowTriggerTemplate) == 0x000048, "Wrong size on FMovieSceneFlowTriggerTemplate");
static_assert(offsetof(FMovieSceneFlowTriggerTemplate, EventTimes) == 0x000028, "Member 'FMovieSceneFlowTriggerTemplate::EventTimes' has a wrong offset!");
static_assert(offsetof(FMovieSceneFlowTriggerTemplate, EventNames) == 0x000038, "Member 'FMovieSceneFlowTriggerTemplate::EventNames' has a wrong offset!");

}
