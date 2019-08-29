// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190730.2

#ifndef WINRT_Windows_Perception_H
#define WINRT_Windows_Perception_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190730.2"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Perception.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Perception_IPerceptionTimestamp<D>::TargetTime() const
    {
        Windows::Foundation::DateTime value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Perception::IPerceptionTimestamp)->get_TargetTime(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Perception_IPerceptionTimestamp<D>::PredictionAmount() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Perception::IPerceptionTimestamp)->get_PredictionAmount(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Perception_IPerceptionTimestampHelperStatics<D>::FromHistoricalTargetTime(Windows::Foundation::DateTime const& targetTime) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Perception::IPerceptionTimestampHelperStatics)->FromHistoricalTargetTime(impl::bind_in(targetTime), &value));
        return Windows::Perception::PerceptionTimestamp{ value, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Perception::IPerceptionTimestamp> : produce_base<D, Windows::Perception::IPerceptionTimestamp>
    {
        int32_t __stdcall get_TargetTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().TargetTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PredictionAmount(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().PredictionAmount());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Perception::IPerceptionTimestampHelperStatics> : produce_base<D, Windows::Perception::IPerceptionTimestampHelperStatics>
    {
        int32_t __stdcall FromHistoricalTargetTime(int64_t targetTime, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Perception::PerceptionTimestamp>(this->shim().FromHistoricalTargetTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&targetTime)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Perception
{
    inline auto PerceptionTimestampHelper::FromHistoricalTargetTime(Windows::Foundation::DateTime const& targetTime)
    {
        return impl::call_factory<PerceptionTimestampHelper, Windows::Perception::IPerceptionTimestampHelperStatics>([&](auto&& f) { return f.FromHistoricalTargetTime(targetTime); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Perception::IPerceptionTimestamp> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Perception::IPerceptionTimestampHelperStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Perception::PerceptionTimestamp> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Perception::PerceptionTimestampHelper> : winrt::impl::hash_base {};
}
#endif
