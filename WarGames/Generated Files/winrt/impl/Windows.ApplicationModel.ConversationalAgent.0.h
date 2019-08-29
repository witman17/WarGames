// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190730.2

#ifndef WINRT_Windows_ApplicationModel_ConversationalAgent_0_H
#define WINRT_Windows_ApplicationModel_ConversationalAgent_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Media::Audio
{
    struct AudioDeviceInputNode;
    struct AudioGraph;
}
namespace winrt::Windows::ApplicationModel::ConversationalAgent
{
    enum class ConversationalAgentSessionUpdateResponse : int32_t
    {
        Success = 0,
        Failed = 1,
    };
    enum class ConversationalAgentState : int32_t
    {
        Inactive = 0,
        Detecting = 1,
        Listening = 2,
        Working = 3,
        Speaking = 4,
        ListeningAndSpeaking = 5,
    };
    enum class ConversationalAgentSystemStateChangeType : int32_t
    {
        UserAuthentication = 0,
        ScreenAvailability = 1,
        IndicatorLightAvailability = 2,
        VoiceActivationAvailability = 3,
    };
    struct IConversationalAgentSession;
    struct IConversationalAgentSessionInterruptedEventArgs;
    struct IConversationalAgentSessionStatics;
    struct IConversationalAgentSignal;
    struct IConversationalAgentSignalDetectedEventArgs;
    struct IConversationalAgentSystemStateChangedEventArgs;
    struct ConversationalAgentSession;
    struct ConversationalAgentSessionInterruptedEventArgs;
    struct ConversationalAgentSignal;
    struct ConversationalAgentSignalDetectedEventArgs;
    struct ConversationalAgentSystemStateChangedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionInterruptedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignal>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignalDetectedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionUpdateResponse>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangeType>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSession" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSessionInterruptedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSessionStatics" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSignal" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSignalDetectedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSystemStateChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSession" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionInterruptedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSessionInterruptedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignal>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSignal" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignalDetectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSignalDetectedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSystemStateChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionUpdateResponse>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSessionUpdateResponse" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentState>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentState" };
    };
    template <> struct name<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangeType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSystemStateChangeType" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>
    {
        static constexpr guid value{ 0xDAAAE09A,0xB7BA,0x57E5,{ 0xAD,0x13,0xDF,0x52,0x0F,0x9B,0x6F,0xA7 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs>
    {
        static constexpr guid value{ 0x9766591F,0xF63D,0x5D3E,{ 0x9B,0xF2,0xBD,0x07,0x60,0x55,0x26,0x86 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionStatics>
    {
        static constexpr guid value{ 0xA005166E,0xE954,0x576E,{ 0xBE,0x04,0x11,0xB8,0xED,0x10,0xF3,0x7B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal>
    {
        static constexpr guid value{ 0x20ED25F7,0xB120,0x51F2,{ 0x86,0x03,0x26,0x5D,0x6A,0x47,0xF2,0x32 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs>
    {
        static constexpr guid value{ 0x4D57EB8F,0xF88A,0x599B,{ 0x91,0xD3,0xD6,0x04,0x87,0x67,0x08,0xBC } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs>
    {
        static constexpr guid value{ 0x1C2C6E3E,0x2785,0x59A7,{ 0x8E,0x71,0x38,0xAD,0xEE,0xF7,0x99,0x28 } };
    };
    template <> struct default_interface<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession>
    {
        using type = Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession;
    };
    template <> struct default_interface<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionInterruptedEventArgs>
    {
        using type = Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignal>
    {
        using type = Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal;
    };
    template <> struct default_interface<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignalDetectedEventArgs>
    {
        using type = Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangedEventArgs>
    {
        using type = Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs;
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SessionInterrupted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SessionInterrupted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SignalDetected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SignalDetected(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SystemStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SystemStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_AgentState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Signal(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsIndicatorLightAvailable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsScreenAvailable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsUserAuthenticated(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsVoiceActivationAvailable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsInterruptible(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsInterrupted(bool*) noexcept = 0;
            virtual int32_t __stdcall RequestInterruptibleAsync(bool, void**) noexcept = 0;
            virtual int32_t __stdcall RequestInterruptible(bool, int32_t*) noexcept = 0;
            virtual int32_t __stdcall RequestAgentStateChangeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAgentStateChange(int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall RequestForegroundActivationAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestForegroundActivation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetAudioClientAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAudioClient(void**) noexcept = 0;
            virtual int32_t __stdcall CreateAudioDeviceInputNodeAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAudioDeviceInputNode(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAudioCaptureDeviceIdAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAudioCaptureDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall GetAudioRenderDeviceIdAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAudioRenderDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall GetSignalModelIdAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetSignalModelId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall SetSignalModelIdAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SetSignalModelId(uint32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall GetSupportedSignalModelIdsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetSupportedSignalModelIds(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentSessionAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentSessionSync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSignalVerificationRequired(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSignalVerificationRequired(bool) noexcept = 0;
            virtual int32_t __stdcall get_SignalId(void**) noexcept = 0;
            virtual int32_t __stdcall put_SignalId(void*) noexcept = 0;
            virtual int32_t __stdcall get_SignalName(void**) noexcept = 0;
            virtual int32_t __stdcall put_SignalName(void*) noexcept = 0;
            virtual int32_t __stdcall get_SignalContext(void**) noexcept = 0;
            virtual int32_t __stdcall put_SignalContext(void*) noexcept = 0;
            virtual int32_t __stdcall get_SignalStart(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_SignalStart(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_SignalEnd(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_SignalEnd(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SystemStateChangeType(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSession
    {
        auto SessionInterrupted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession, Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionInterruptedEventArgs> const& handler) const;
        using SessionInterrupted_revoker = impl::event_revoker<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession, &impl::abi_t<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>::remove_SessionInterrupted>;
        [[nodiscard]] SessionInterrupted_revoker SessionInterrupted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession, Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionInterruptedEventArgs> const& handler) const;
        auto SessionInterrupted(winrt::event_token const& token) const noexcept;
        auto SignalDetected(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession, Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignalDetectedEventArgs> const& handler) const;
        using SignalDetected_revoker = impl::event_revoker<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession, &impl::abi_t<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>::remove_SignalDetected>;
        [[nodiscard]] SignalDetected_revoker SignalDetected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession, Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignalDetectedEventArgs> const& handler) const;
        auto SignalDetected(winrt::event_token const& token) const noexcept;
        auto SystemStateChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession, Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangedEventArgs> const& handler) const;
        using SystemStateChanged_revoker = impl::event_revoker<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession, &impl::abi_t<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>::remove_SystemStateChanged>;
        [[nodiscard]] SystemStateChanged_revoker SystemStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession, Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangedEventArgs> const& handler) const;
        auto SystemStateChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto AgentState() const;
        [[nodiscard]] auto Signal() const;
        [[nodiscard]] auto IsIndicatorLightAvailable() const;
        [[nodiscard]] auto IsScreenAvailable() const;
        [[nodiscard]] auto IsUserAuthenticated() const;
        [[nodiscard]] auto IsVoiceActivationAvailable() const;
        [[nodiscard]] auto IsInterruptible() const;
        [[nodiscard]] auto IsInterrupted() const;
        auto RequestInterruptibleAsync(bool interruptible) const;
        auto RequestInterruptible(bool interruptible) const;
        auto RequestAgentStateChangeAsync(Windows::ApplicationModel::ConversationalAgent::ConversationalAgentState const& state) const;
        auto RequestAgentStateChange(Windows::ApplicationModel::ConversationalAgent::ConversationalAgentState const& state) const;
        auto RequestForegroundActivationAsync() const;
        auto RequestForegroundActivation() const;
        auto GetAudioClientAsync() const;
        auto GetAudioClient() const;
        auto CreateAudioDeviceInputNodeAsync(Windows::Media::Audio::AudioGraph const& graph) const;
        auto CreateAudioDeviceInputNode(Windows::Media::Audio::AudioGraph const& graph) const;
        auto GetAudioCaptureDeviceIdAsync() const;
        auto GetAudioCaptureDeviceId() const;
        auto GetAudioRenderDeviceIdAsync() const;
        auto GetAudioRenderDeviceId() const;
        auto GetSignalModelIdAsync() const;
        auto GetSignalModelId() const;
        auto SetSignalModelIdAsync(uint32_t signalModelId) const;
        auto SetSignalModelId(uint32_t signalModelId) const;
        auto GetSupportedSignalModelIdsAsync() const;
        auto GetSupportedSignalModelIds() const;
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSession<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSessionInterruptedEventArgs
    {
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSessionInterruptedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSessionStatics
    {
        auto GetCurrentSessionAsync() const;
        auto GetCurrentSessionSync() const;
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSessionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSignal
    {
        [[nodiscard]] auto IsSignalVerificationRequired() const;
        auto IsSignalVerificationRequired(bool value) const;
        [[nodiscard]] auto SignalId() const;
        auto SignalId(param::hstring const& value) const;
        [[nodiscard]] auto SignalName() const;
        auto SignalName(param::hstring const& value) const;
        [[nodiscard]] auto SignalContext() const;
        auto SignalContext(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto SignalStart() const;
        auto SignalStart(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto SignalEnd() const;
        auto SignalEnd(Windows::Foundation::TimeSpan const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSignal<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSignalDetectedEventArgs
    {
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSignalDetectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSystemStateChangedEventArgs
    {
        [[nodiscard]] auto SystemStateChangeType() const;
    };
    template <> struct consume<Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSystemStateChangedEventArgs<D>;
    };
}
#endif
