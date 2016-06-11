//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

using namespace concurrency;

namespace net { namespace allplay { namespace MediaPlayer {

ref class MediaPlayerConsumer;
ref class MediaItem;

public ref class MediaPlayerForcedPreviousResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static MediaPlayerForcedPreviousResult^ CreateSuccessResult()
    {
        auto result = ref new MediaPlayerForcedPreviousResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static MediaPlayerForcedPreviousResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerForcedPreviousResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
};

public ref class MediaPlayerGetPlayerInfoResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property Platform::String^ DisplayName
    {
        Platform::String^ get() { return m_interfaceMemberDisplayName; }
    internal:
        void set(_In_ Platform::String^ value) { m_interfaceMemberDisplayName = value; }
    }
    property Windows::Foundation::Collections::IVector<Platform::String^>^ Capabilities
    {
        Windows::Foundation::Collections::IVector<Platform::String^>^ get() { return m_interfaceMemberCapabilities; }
    internal:
        void set(_In_ Windows::Foundation::Collections::IVector<Platform::String^>^ value) { m_interfaceMemberCapabilities = value; }
    }
    property int32 MaximumVolume
    {
        int32 get() { return m_interfaceMemberMaximumVolume; }
    internal:
        void set(_In_ int32 value) { m_interfaceMemberMaximumVolume = value; }
    }
    property MediaPlayerZoneInfo^ ZoneInfo
    {
        MediaPlayerZoneInfo^ get() { return m_interfaceMemberZoneInfo; }
    internal:
        void set(_In_ MediaPlayerZoneInfo^ value) { m_interfaceMemberZoneInfo = value; }
    }
    
    static MediaPlayerGetPlayerInfoResult^ CreateSuccessResult(_In_ Platform::String^ interfaceMemberDisplayName, _In_ Windows::Foundation::Collections::IVector<Platform::String^>^ interfaceMemberCapabilities, _In_ int32 interfaceMemberMaximumVolume, _In_ MediaPlayerZoneInfo^ interfaceMemberZoneInfo)
    {
        auto result = ref new MediaPlayerGetPlayerInfoResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->DisplayName = interfaceMemberDisplayName;
        result->Capabilities = interfaceMemberCapabilities;
        result->MaximumVolume = interfaceMemberMaximumVolume;
        result->ZoneInfo = interfaceMemberZoneInfo;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static MediaPlayerGetPlayerInfoResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerGetPlayerInfoResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    Platform::String^ m_interfaceMemberDisplayName;
    Windows::Foundation::Collections::IVector<Platform::String^>^ m_interfaceMemberCapabilities;
    int32 m_interfaceMemberMaximumVolume;
    MediaPlayerZoneInfo^ m_interfaceMemberZoneInfo;
};

public ref class MediaPlayerGetPlaylistResult sealed
{
public:
	property int32 Status
	{
		int32 get() { return m_status; }
	internal:
		void set(_In_ int32 value) { m_status = value; }
	}

	property Windows::Foundation::Collections::IVector<net::allplay::MediaPlayer::MediaItem^>^ Items
	{
		Windows::Foundation::Collections::IVector<net::allplay::MediaPlayer::MediaItem^>^ get() { return m_interfaceMemberItems; }
	internal:
		void set(_In_ Windows::Foundation::Collections::IVector<net::allplay::MediaPlayer::MediaItem^>^ value) { m_interfaceMemberItems = value; }
	}
	property Platform::String^ ControllerType
	{
		Platform::String^ get() { return m_interfaceMemberControllerType; }
	internal:
		void set(_In_ Platform::String^ value) { m_interfaceMemberControllerType = value; }
	}
	property Platform::String^ PlaylistUserData
	{
		Platform::String^ get() { return m_interfaceMemberPlaylistUserData; }
	internal:
		void set(_In_ Platform::String^ value) { m_interfaceMemberPlaylistUserData = value; }
	}

	static MediaPlayerGetPlaylistResult^ CreateSuccessResult(_In_ Windows::Foundation::Collections::IVector<net::allplay::MediaPlayer::MediaItem^>^ items, _In_ Platform::String^ controllerType, _In_ Platform::String^ playlistUserData)
	{
		auto result = ref new MediaPlayerGetPlaylistResult();
		result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
		result->Items = items;
		result->ControllerType = controllerType;
		result->PlaylistUserData = playlistUserData;
		result->m_creationContext = Concurrency::task_continuation_context::use_current();
		return result;
	}

	static MediaPlayerGetPlaylistResult^ CreateFailureResult(_In_ int32 status)
	{
		auto result = ref new MediaPlayerGetPlaylistResult();
		result->Status = status;
		return result;
	}
internal:
	Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
	int32 m_status;
	Windows::Foundation::Collections::IVector<net::allplay::MediaPlayer::MediaItem^>^ m_interfaceMemberItems;
	Platform::String^ m_interfaceMemberControllerType;
	Platform::String^ m_interfaceMemberPlaylistUserData;
};

public ref class MediaPlayerGetPlaylistInfoResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property Platform::String^ ControllerType
    {
        Platform::String^ get() { return m_interfaceMemberControllerType; }
    internal:
        void set(_In_ Platform::String^ value) { m_interfaceMemberControllerType = value; }
    }
    property Platform::String^ PlaylistUserData
    {
        Platform::String^ get() { return m_interfaceMemberPlaylistUserData; }
    internal:
        void set(_In_ Platform::String^ value) { m_interfaceMemberPlaylistUserData = value; }
    }
    
    static MediaPlayerGetPlaylistInfoResult^ CreateSuccessResult(_In_ Platform::String^ interfaceMemberControllerType, _In_ Platform::String^ interfaceMemberPlaylistUserData)
    {
        auto result = ref new MediaPlayerGetPlaylistInfoResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->ControllerType = interfaceMemberControllerType;
        result->PlaylistUserData = interfaceMemberPlaylistUserData;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static MediaPlayerGetPlaylistInfoResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerGetPlaylistInfoResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    Platform::String^ m_interfaceMemberControllerType;
    Platform::String^ m_interfaceMemberPlaylistUserData;
};

public ref class MediaPlayerNextResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static MediaPlayerNextResult^ CreateSuccessResult()
    {
        auto result = ref new MediaPlayerNextResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static MediaPlayerNextResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerNextResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
};

public ref class MediaPlayerPauseResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static MediaPlayerPauseResult^ CreateSuccessResult()
    {
        auto result = ref new MediaPlayerPauseResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static MediaPlayerPauseResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerPauseResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
};

public ref class MediaPlayerPlayResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static MediaPlayerPlayResult^ CreateSuccessResult()
    {
        auto result = ref new MediaPlayerPlayResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static MediaPlayerPlayResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerPlayResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
};

public ref class MediaPlayerPreviousResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static MediaPlayerPreviousResult^ CreateSuccessResult()
    {
        auto result = ref new MediaPlayerPreviousResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static MediaPlayerPreviousResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerPreviousResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
};

public ref class MediaPlayerResumeResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static MediaPlayerResumeResult^ CreateSuccessResult()
    {
        auto result = ref new MediaPlayerResumeResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static MediaPlayerResumeResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerResumeResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
};

public ref class MediaPlayerSetPositionResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static MediaPlayerSetPositionResult^ CreateSuccessResult()
    {
        auto result = ref new MediaPlayerSetPositionResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static MediaPlayerSetPositionResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerSetPositionResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
};

public ref class MediaPlayerStopResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static MediaPlayerStopResult^ CreateSuccessResult()
    {
        auto result = ref new MediaPlayerStopResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static MediaPlayerStopResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerStopResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
};

public ref class MediaPlayerUpdatePlaylistResult sealed
{
public:
	property int32 Status
	{
		int32 get() { return m_status; }
	internal:
		void set(_In_ int32 value) { m_status = value; }
	}


	static MediaPlayerUpdatePlaylistResult^ CreateSuccessResult()
	{
		auto result = ref new MediaPlayerUpdatePlaylistResult();
		result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
		result->m_creationContext = Concurrency::task_continuation_context::use_current();
		return result;
	}

	static MediaPlayerUpdatePlaylistResult^ CreateFailureResult(_In_ int32 status)
	{
		auto result = ref new MediaPlayerUpdatePlaylistResult();
		result->Status = status;
		return result;
	}
internal:
	Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
	int32 m_status;
};

public ref class MediaPlayerJoinSessionResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property MediaPlayerConsumer^ Consumer
    {
        MediaPlayerConsumer^ get() { return m_consumer; }
    internal:
        void set(_In_ MediaPlayerConsumer^ value) { m_consumer = value; }
    };

private:
    int32 m_status;
    MediaPlayerConsumer^ m_consumer;
};

public ref class MediaPlayerGetEnabledControlsResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property Windows::Foundation::Collections::IMap<Platform::String^,bool>^ EnabledControls
    {
        Windows::Foundation::Collections::IMap<Platform::String^,bool>^ get() { return m_value; }
    internal:
        void set(_In_ Windows::Foundation::Collections::IMap<Platform::String^,bool>^ value) { m_value = value; }
    }

    static MediaPlayerGetEnabledControlsResult^ CreateSuccessResult(_In_ Windows::Foundation::Collections::IMap<Platform::String^,bool>^ value)
    {
        auto result = ref new MediaPlayerGetEnabledControlsResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->EnabledControls = value;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }

    static MediaPlayerGetEnabledControlsResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerGetEnabledControlsResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    Windows::Foundation::Collections::IMap<Platform::String^,bool>^ m_value;
};

public ref class MediaPlayerGetInterruptibleResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property bool Interruptible
    {
        bool get() { return m_value; }
    internal:
        void set(_In_ bool value) { m_value = value; }
    }

    static MediaPlayerGetInterruptibleResult^ CreateSuccessResult(_In_ bool value)
    {
        auto result = ref new MediaPlayerGetInterruptibleResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->Interruptible = value;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }

    static MediaPlayerGetInterruptibleResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerGetInterruptibleResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    bool m_value;
};

public ref class MediaPlayerGetLoopModeResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property Platform::String^ LoopMode
    {
        Platform::String^ get() { return m_value; }
    internal:
        void set(_In_ Platform::String^ value) { m_value = value; }
    }

    static MediaPlayerGetLoopModeResult^ CreateSuccessResult(_In_ Platform::String^ value)
    {
        auto result = ref new MediaPlayerGetLoopModeResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->LoopMode = value;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }

    static MediaPlayerGetLoopModeResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerGetLoopModeResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    Platform::String^ m_value;
};

public ref class MediaPlayerSetLoopModeResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    static MediaPlayerSetLoopModeResult^ CreateSuccessResult()
    {
        auto result = ref new MediaPlayerSetLoopModeResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }

    static MediaPlayerSetLoopModeResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerSetLoopModeResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
};

public ref class MediaPlayerGetPlayStateResult sealed
{
public:
	property int32 Status
	{
		int32 get() { return m_status; }
	internal:
		void set(_In_ int32 value) { m_status = value; }
	}

    property MediaPlayerPlayState^ PlayState
	{
        MediaPlayerPlayState^ get() { return m_value; }
	internal:
        void set(_In_ MediaPlayerPlayState^ value) { m_value = value; }
	}

    static MediaPlayerGetPlayStateResult^ CreateSuccessResult(_In_ MediaPlayerPlayState^ value)
	{
		auto result = ref new MediaPlayerGetPlayStateResult();
		result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
		result->PlayState = value;
		result->m_creationContext = Concurrency::task_continuation_context::use_current();
		return result;
	}

	static MediaPlayerGetPlayStateResult^ CreateFailureResult(_In_ int32 status)
	{
		auto result = ref new MediaPlayerGetPlayStateResult();
		result->Status = status;
		return result;
	}
internal:
	Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
	int32 m_status;
    MediaPlayerPlayState^ m_value;
};


public ref class MediaPlayerGetShuffleModeResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property Platform::String^ ShuffleMode
    {
        Platform::String^ get() { return m_value; }
    internal:
        void set(_In_ Platform::String^ value) { m_value = value; }
    }

    static MediaPlayerGetShuffleModeResult^ CreateSuccessResult(_In_ Platform::String^ value)
    {
        auto result = ref new MediaPlayerGetShuffleModeResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->ShuffleMode = value;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }

    static MediaPlayerGetShuffleModeResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerGetShuffleModeResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    Platform::String^ m_value;
};

public ref class MediaPlayerSetShuffleModeResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    static MediaPlayerSetShuffleModeResult^ CreateSuccessResult()
    {
        auto result = ref new MediaPlayerSetShuffleModeResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }

    static MediaPlayerSetShuffleModeResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerSetShuffleModeResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
};

public ref class MediaPlayerGetVersionResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property uint16 Version
    {
        uint16 get() { return m_value; }
    internal:
        void set(_In_ uint16 value) { m_value = value; }
    }

    static MediaPlayerGetVersionResult^ CreateSuccessResult(_In_ uint16 value)
    {
        auto result = ref new MediaPlayerGetVersionResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->Version = value;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }

    static MediaPlayerGetVersionResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new MediaPlayerGetVersionResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    uint16 m_value;
};

} } } 
