// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190730.2

#ifndef WINRT_Windows_Foundation_Numerics_0_H
#define WINRT_Windows_Foundation_Numerics_0_H
namespace winrt::Windows::Foundation::Numerics
{
    struct Rational;
}
namespace winrt::impl
{
    template <> struct category<Windows::Foundation::Numerics::Rational>
    {
        using type = struct_category<uint32_t, uint32_t>;
    };
    template <> struct name<Windows::Foundation::Numerics::Rational>
    {
        static constexpr auto & value{ L"Windows.Foundation.Numerics.Rational" };
    };
    struct struct_Windows_Foundation_Numerics_Rational
    {
        uint32_t Numerator;
        uint32_t Denominator;
    };
    template <> struct abi<Windows::Foundation::Numerics::Rational>
    {
        using type = struct_Windows_Foundation_Numerics_Rational;
    };
}
#endif
