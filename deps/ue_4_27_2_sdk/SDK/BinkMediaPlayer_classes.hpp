#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BinkMediaPlayer

#include "Basic.hpp"

#include "BinkMediaPlayer_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class BinkMediaPlayer.BinkFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBinkFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void Bink_DrawOverlays();
	static struct FTimespan BinkLoadingMovie_GetDuration();
	static struct FTimespan BinkLoadingMovie_GetTime();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BinkFunctionLibrary">();
	}
	static class UBinkFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBinkFunctionLibrary>();
	}
};
static_assert(alignof(UBinkFunctionLibrary) == 0x000008, "Wrong alignment on UBinkFunctionLibrary");
static_assert(sizeof(UBinkFunctionLibrary) == 0x000028, "Wrong size on UBinkFunctionLibrary");

// Class BinkMediaPlayer.BinkMediaPlayer
// 0x00D0 (0x00F8 - 0x0028)
class UBinkMediaPlayer final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnMediaClosed;                                     // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnMediaOpened;                                     // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnMediaReachedEnd;                                 // 0x0050(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPlaybackSuspended;                               // 0x0060(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Looping : 1;                                       // 0x0070(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         StartImmediately : 1;                              // 0x0070(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         DelayedOpen : 1;                                   // 0x0070(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              BinkDestinationUpperLeft;                          // 0x0074(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              BinkDestinationLowerRight;                         // 0x007C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 URL;                                               // 0x0088(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBinkMediaPlayerBinkBufferModes               BinkBufferMode;                                    // 0x0098(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBinkMediaPlayerBinkSoundTrack                BinkSoundTrack;                                    // 0x0099(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9A[0x2];                                       // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BinkSoundTrackStart;                               // 0x009C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBinkMediaPlayerBinkDrawStyle                 BinkDrawStyle;                                     // 0x00A0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BinkLayerDepth;                                    // 0x00A4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A8[0x50];                                      // 0x00A8(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CloseUrl();
	void Draw(class UTexture* Texture, bool Tonemap, int32 Out_nits, float Alpha, bool Srgb_decode, bool Hdr);
	void InitializePlayer();
	bool OpenUrl(const class FString& NewUrl);
	bool Pause();
	bool Play();
	bool Rewind();
	bool Seek(const struct FTimespan& InTime);
	bool SetLooping(bool InLooping);
	bool SetRate(float Rate);
	void SetVolume(float Rate);
	void Stop();

	bool CanPause() const;
	bool CanPlay() const;
	struct FTimespan GetDuration() const;
	float GetRate() const;
	struct FTimespan GetTime() const;
	class FString GetUrl() const;
	bool IsInitialized() const;
	bool IsLooping() const;
	bool IsPaused() const;
	bool IsPlaying() const;
	bool IsSeeking() const;
	bool IsStopped() const;
	bool SupportsRate(float Rate, bool Unthinned) const;
	bool SupportsScrubbing() const;
	bool SupportsSeeking() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BinkMediaPlayer">();
	}
	static class UBinkMediaPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBinkMediaPlayer>();
	}
};
static_assert(alignof(UBinkMediaPlayer) == 0x000008, "Wrong alignment on UBinkMediaPlayer");
static_assert(sizeof(UBinkMediaPlayer) == 0x0000F8, "Wrong size on UBinkMediaPlayer");
static_assert(offsetof(UBinkMediaPlayer, OnMediaClosed) == 0x000030, "Member 'UBinkMediaPlayer::OnMediaClosed' has a wrong offset!");
static_assert(offsetof(UBinkMediaPlayer, OnMediaOpened) == 0x000040, "Member 'UBinkMediaPlayer::OnMediaOpened' has a wrong offset!");
static_assert(offsetof(UBinkMediaPlayer, OnMediaReachedEnd) == 0x000050, "Member 'UBinkMediaPlayer::OnMediaReachedEnd' has a wrong offset!");
static_assert(offsetof(UBinkMediaPlayer, OnPlaybackSuspended) == 0x000060, "Member 'UBinkMediaPlayer::OnPlaybackSuspended' has a wrong offset!");
static_assert(offsetof(UBinkMediaPlayer, BinkDestinationUpperLeft) == 0x000074, "Member 'UBinkMediaPlayer::BinkDestinationUpperLeft' has a wrong offset!");
static_assert(offsetof(UBinkMediaPlayer, BinkDestinationLowerRight) == 0x00007C, "Member 'UBinkMediaPlayer::BinkDestinationLowerRight' has a wrong offset!");
static_assert(offsetof(UBinkMediaPlayer, URL) == 0x000088, "Member 'UBinkMediaPlayer::URL' has a wrong offset!");
static_assert(offsetof(UBinkMediaPlayer, BinkBufferMode) == 0x000098, "Member 'UBinkMediaPlayer::BinkBufferMode' has a wrong offset!");
static_assert(offsetof(UBinkMediaPlayer, BinkSoundTrack) == 0x000099, "Member 'UBinkMediaPlayer::BinkSoundTrack' has a wrong offset!");
static_assert(offsetof(UBinkMediaPlayer, BinkSoundTrackStart) == 0x00009C, "Member 'UBinkMediaPlayer::BinkSoundTrackStart' has a wrong offset!");
static_assert(offsetof(UBinkMediaPlayer, BinkDrawStyle) == 0x0000A0, "Member 'UBinkMediaPlayer::BinkDrawStyle' has a wrong offset!");
static_assert(offsetof(UBinkMediaPlayer, BinkLayerDepth) == 0x0000A4, "Member 'UBinkMediaPlayer::BinkLayerDepth' has a wrong offset!");

// Class BinkMediaPlayer.BinkMediaTexture
// 0x0030 (0x01B0 - 0x0180)
class UBinkMediaTexture final : public UTexture
{
public:
	ETextureAddress                               AddressX;                                          // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressY;                                          // 0x0179(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17A[0x6];                                      // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBinkMediaPlayer*                       MediaPlayer;                                       // 0x0180(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPixelFormat                                  PixelFormat;                                       // 0x0188(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Tonemap;                                           // 0x0189(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18A[0x2];                                      // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OutputNits;                                        // 0x018C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Alpha;                                             // 0x0190(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DecodeSRGB;                                        // 0x0194(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_195[0x1B];                                     // 0x0195(0x001B)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Clear();
	void SetMediaPlayer(class UBinkMediaPlayer* InMediaPlayer);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BinkMediaTexture">();
	}
	static class UBinkMediaTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBinkMediaTexture>();
	}
};
static_assert(alignof(UBinkMediaTexture) == 0x000010, "Wrong alignment on UBinkMediaTexture");
static_assert(sizeof(UBinkMediaTexture) == 0x0001B0, "Wrong size on UBinkMediaTexture");
static_assert(offsetof(UBinkMediaTexture, AddressX) == 0x000178, "Member 'UBinkMediaTexture::AddressX' has a wrong offset!");
static_assert(offsetof(UBinkMediaTexture, AddressY) == 0x000179, "Member 'UBinkMediaTexture::AddressY' has a wrong offset!");
static_assert(offsetof(UBinkMediaTexture, MediaPlayer) == 0x000180, "Member 'UBinkMediaTexture::MediaPlayer' has a wrong offset!");
static_assert(offsetof(UBinkMediaTexture, PixelFormat) == 0x000188, "Member 'UBinkMediaTexture::PixelFormat' has a wrong offset!");
static_assert(offsetof(UBinkMediaTexture, Tonemap) == 0x000189, "Member 'UBinkMediaTexture::Tonemap' has a wrong offset!");
static_assert(offsetof(UBinkMediaTexture, OutputNits) == 0x00018C, "Member 'UBinkMediaTexture::OutputNits' has a wrong offset!");
static_assert(offsetof(UBinkMediaTexture, Alpha) == 0x000190, "Member 'UBinkMediaTexture::Alpha' has a wrong offset!");
static_assert(offsetof(UBinkMediaTexture, DecodeSRGB) == 0x000194, "Member 'UBinkMediaTexture::DecodeSRGB' has a wrong offset!");

// Class BinkMediaPlayer.BinkMoviePlayerSettings
// 0x0020 (0x0048 - 0x0028)
class UBinkMoviePlayerSettings final : public UObject
{
public:
	EBinkMoviePlayerBinkBufferModes               BinkBufferMode;                                    // 0x0028(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBinkMoviePlayerBinkSoundTrack                BinkSoundTrack;                                    // 0x0029(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BinkSoundTrackStart;                               // 0x002C(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              BinkDestinationUpperLeft;                          // 0x0030(0x0008)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              BinkDestinationLowerRight;                         // 0x0038(0x0008)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPixelFormat                                  BinkPixelFormat;                                   // 0x0040(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BinkMoviePlayerSettings">();
	}
	static class UBinkMoviePlayerSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBinkMoviePlayerSettings>();
	}
};
static_assert(alignof(UBinkMoviePlayerSettings) == 0x000008, "Wrong alignment on UBinkMoviePlayerSettings");
static_assert(sizeof(UBinkMoviePlayerSettings) == 0x000048, "Wrong size on UBinkMoviePlayerSettings");
static_assert(offsetof(UBinkMoviePlayerSettings, BinkBufferMode) == 0x000028, "Member 'UBinkMoviePlayerSettings::BinkBufferMode' has a wrong offset!");
static_assert(offsetof(UBinkMoviePlayerSettings, BinkSoundTrack) == 0x000029, "Member 'UBinkMoviePlayerSettings::BinkSoundTrack' has a wrong offset!");
static_assert(offsetof(UBinkMoviePlayerSettings, BinkSoundTrackStart) == 0x00002C, "Member 'UBinkMoviePlayerSettings::BinkSoundTrackStart' has a wrong offset!");
static_assert(offsetof(UBinkMoviePlayerSettings, BinkDestinationUpperLeft) == 0x000030, "Member 'UBinkMoviePlayerSettings::BinkDestinationUpperLeft' has a wrong offset!");
static_assert(offsetof(UBinkMoviePlayerSettings, BinkDestinationLowerRight) == 0x000038, "Member 'UBinkMoviePlayerSettings::BinkDestinationLowerRight' has a wrong offset!");
static_assert(offsetof(UBinkMoviePlayerSettings, BinkPixelFormat) == 0x000040, "Member 'UBinkMoviePlayerSettings::BinkPixelFormat' has a wrong offset!");

}
