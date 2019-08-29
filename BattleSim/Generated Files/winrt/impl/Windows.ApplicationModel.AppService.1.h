// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190730.2

#ifndef WINRT_Windows_ApplicationModel_AppService_1_H
#define WINRT_Windows_ApplicationModel_AppService_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.ApplicationModel.AppService.0.h"
namespace winrt::Windows::ApplicationModel::AppService
{
    struct __declspec(empty_bases) IAppServiceCatalogStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppServiceCatalogStatics>
    {
        IAppServiceCatalogStatics(std::nullptr_t = nullptr) noexcept {}
        IAppServiceCatalogStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppServiceClosedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppServiceClosedEventArgs>
    {
        IAppServiceClosedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppServiceClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppServiceConnection :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppServiceConnection>,
        impl::require<Windows::ApplicationModel::AppService::IAppServiceConnection, Windows::Foundation::IClosable>
    {
        IAppServiceConnection(std::nullptr_t = nullptr) noexcept {}
        IAppServiceConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppServiceConnection2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppServiceConnection2>
    {
        IAppServiceConnection2(std::nullptr_t = nullptr) noexcept {}
        IAppServiceConnection2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppServiceDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppServiceDeferral>
    {
        IAppServiceDeferral(std::nullptr_t = nullptr) noexcept {}
        IAppServiceDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppServiceRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppServiceRequest>
    {
        IAppServiceRequest(std::nullptr_t = nullptr) noexcept {}
        IAppServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppServiceRequestReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppServiceRequestReceivedEventArgs>
    {
        IAppServiceRequestReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppServiceRequestReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppServiceResponse :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppServiceResponse>
    {
        IAppServiceResponse(std::nullptr_t = nullptr) noexcept {}
        IAppServiceResponse(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppServiceTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppServiceTriggerDetails>
    {
        IAppServiceTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IAppServiceTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppServiceTriggerDetails2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppServiceTriggerDetails2>
    {
        IAppServiceTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
        IAppServiceTriggerDetails2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppServiceTriggerDetails3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppServiceTriggerDetails3>
    {
        IAppServiceTriggerDetails3(std::nullptr_t = nullptr) noexcept {}
        IAppServiceTriggerDetails3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif