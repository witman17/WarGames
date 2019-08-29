// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190730.2

#ifndef WINRT_Windows_Devices_PointOfService_Provider_1_H
#define WINRT_Windows_Devices_PointOfService_Provider_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.PointOfService.Provider.0.h"
namespace winrt::Windows::Devices::PointOfService::Provider
{
    struct __declspec(empty_bases) IBarcodeScannerDisableScannerRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerDisableScannerRequest>
    {
        IBarcodeScannerDisableScannerRequest(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerDisableScannerRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerDisableScannerRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerDisableScannerRequestEventArgs>
    {
        IBarcodeScannerDisableScannerRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerDisableScannerRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerEnableScannerRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerEnableScannerRequest>
    {
        IBarcodeScannerEnableScannerRequest(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerEnableScannerRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerEnableScannerRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerEnableScannerRequestEventArgs>
    {
        IBarcodeScannerEnableScannerRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerEnableScannerRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerGetSymbologyAttributesRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerGetSymbologyAttributesRequest>
    {
        IBarcodeScannerGetSymbologyAttributesRequest(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerGetSymbologyAttributesRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerGetSymbologyAttributesRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerGetSymbologyAttributesRequestEventArgs>
    {
        IBarcodeScannerGetSymbologyAttributesRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerGetSymbologyAttributesRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerHideVideoPreviewRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerHideVideoPreviewRequest>
    {
        IBarcodeScannerHideVideoPreviewRequest(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerHideVideoPreviewRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerHideVideoPreviewRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerHideVideoPreviewRequestEventArgs>
    {
        IBarcodeScannerHideVideoPreviewRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerHideVideoPreviewRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerProviderConnection :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerProviderConnection>,
        impl::require<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection, Windows::Foundation::IClosable>
    {
        IBarcodeScannerProviderConnection(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerProviderConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerProviderTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerProviderTriggerDetails>
    {
        IBarcodeScannerProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerProviderTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerSetActiveSymbologiesRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerSetActiveSymbologiesRequest>
    {
        IBarcodeScannerSetActiveSymbologiesRequest(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerSetActiveSymbologiesRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerSetActiveSymbologiesRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerSetActiveSymbologiesRequestEventArgs>
    {
        IBarcodeScannerSetActiveSymbologiesRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerSetActiveSymbologiesRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerSetSymbologyAttributesRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerSetSymbologyAttributesRequest>
    {
        IBarcodeScannerSetSymbologyAttributesRequest(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerSetSymbologyAttributesRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerSetSymbologyAttributesRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerSetSymbologyAttributesRequestEventArgs>
    {
        IBarcodeScannerSetSymbologyAttributesRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerSetSymbologyAttributesRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerStartSoftwareTriggerRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerStartSoftwareTriggerRequest>
    {
        IBarcodeScannerStartSoftwareTriggerRequest(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerStartSoftwareTriggerRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerStartSoftwareTriggerRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerStartSoftwareTriggerRequestEventArgs>
    {
        IBarcodeScannerStartSoftwareTriggerRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerStartSoftwareTriggerRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerStopSoftwareTriggerRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerStopSoftwareTriggerRequest>
    {
        IBarcodeScannerStopSoftwareTriggerRequest(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerStopSoftwareTriggerRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerStopSoftwareTriggerRequestEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerStopSoftwareTriggerRequestEventArgs>
    {
        IBarcodeScannerStopSoftwareTriggerRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerStopSoftwareTriggerRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeSymbologyAttributesBuilder :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeSymbologyAttributesBuilder>
    {
        IBarcodeSymbologyAttributesBuilder(std::nullptr_t = nullptr) noexcept {}
        IBarcodeSymbologyAttributesBuilder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif