// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190730.2

#ifndef WINRT_Windows_Services_Cortana_H
#define WINRT_Windows_Services_Cortana_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190730.2"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Services.Cortana.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::IsSupported() const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->IsSupported(&result));
        return result;
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::ArePermissionsGrantedAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const
    {
        void* getGrantedPermissionsOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->ArePermissionsGrantedAsync(*(void**)(&permissions), &getGrantedPermissionsOperation));
        return Windows::Foundation::IAsyncOperation<bool>{ getGrantedPermissionsOperation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::GrantPermissionsAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const
    {
        void* grantOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->GrantPermissionsAsync(*(void**)(&permissions), &grantOperation));
        return Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult>{ grantOperation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::RevokePermissionsAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const
    {
        void* revokeOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->RevokePermissionsAsync(*(void**)(&permissions), &revokeOperation));
        return Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult>{ revokeOperation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaPermissionsManagerStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaPermissionsManagerStatics)->GetDefault(&result));
        return Windows::Services::Cortana::CortanaPermissionsManager{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaSettings<D>::HasUserConsentToVoiceActivation() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaSettings)->get_HasUserConsentToVoiceActivation(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaSettings<D>::IsVoiceActivationEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaSettings)->get_IsVoiceActivationEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaSettings<D>::IsVoiceActivationEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaSettings)->put_IsVoiceActivationEnabled(value));
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaSettingsStatics<D>::IsSupported() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaSettingsStatics)->IsSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Services_Cortana_ICortanaSettingsStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Services::Cortana::ICortanaSettingsStatics)->GetDefault(&result));
        return Windows::Services::Cortana::CortanaSettings{ result, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Services::Cortana::ICortanaPermissionsManager> : produce_base<D, Windows::Services::Cortana::ICortanaPermissionsManager>
    {
        int32_t __stdcall IsSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ArePermissionsGrantedAsync(void* permissions, void** getGrantedPermissionsOperation) noexcept final try
        {
            clear_abi(getGrantedPermissionsOperation);
            typename D::abi_guard guard(this->shim());
            *getGrantedPermissionsOperation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ArePermissionsGrantedAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Cortana::CortanaPermission> const*>(&permissions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GrantPermissionsAsync(void* permissions, void** grantOperation) noexcept final try
        {
            clear_abi(grantOperation);
            typename D::abi_guard guard(this->shim());
            *grantOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult>>(this->shim().GrantPermissionsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Cortana::CortanaPermission> const*>(&permissions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RevokePermissionsAsync(void* permissions, void** revokeOperation) noexcept final try
        {
            clear_abi(revokeOperation);
            typename D::abi_guard guard(this->shim());
            *revokeOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult>>(this->shim().RevokePermissionsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Cortana::CortanaPermission> const*>(&permissions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Services::Cortana::ICortanaPermissionsManagerStatics> : produce_base<D, Windows::Services::Cortana::ICortanaPermissionsManagerStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Services::Cortana::CortanaPermissionsManager>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Services::Cortana::ICortanaSettings> : produce_base<D, Windows::Services::Cortana::ICortanaSettings>
    {
        int32_t __stdcall get_HasUserConsentToVoiceActivation(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasUserConsentToVoiceActivation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsVoiceActivationEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsVoiceActivationEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsVoiceActivationEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsVoiceActivationEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Services::Cortana::ICortanaSettingsStatics> : produce_base<D, Windows::Services::Cortana::ICortanaSettingsStatics>
    {
        int32_t __stdcall IsSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Services::Cortana::CortanaSettings>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Services::Cortana
{
    inline auto CortanaPermissionsManager::GetDefault()
    {
        return impl::call_factory<CortanaPermissionsManager, Windows::Services::Cortana::ICortanaPermissionsManagerStatics>([&](auto&& f) { return f.GetDefault(); });
    }
    inline auto CortanaSettings::IsSupported()
    {
        return impl::call_factory<CortanaSettings, Windows::Services::Cortana::ICortanaSettingsStatics>([&](auto&& f) { return f.IsSupported(); });
    }
    inline auto CortanaSettings::GetDefault()
    {
        return impl::call_factory<CortanaSettings, Windows::Services::Cortana::ICortanaSettingsStatics>([&](auto&& f) { return f.GetDefault(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Services::Cortana::ICortanaPermissionsManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::Cortana::ICortanaPermissionsManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::Cortana::ICortanaSettings> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::Cortana::ICortanaSettingsStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::Cortana::CortanaPermissionsManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::Cortana::CortanaSettings> : winrt::impl::hash_base {};
}
#endif
