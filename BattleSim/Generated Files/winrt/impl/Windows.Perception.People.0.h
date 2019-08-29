// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190730.2

#ifndef WINRT_Windows_Perception_People_0_H
#define WINRT_Windows_Perception_People_0_H
namespace winrt::Windows::Foundation::Numerics
{
}
namespace winrt::Windows::Perception::People
{
    struct IHeadPose;
    struct HeadPose;
}
namespace winrt::impl
{
    template <> struct category<Windows::Perception::People::IHeadPose>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Perception::People::HeadPose>
    {
        using type = class_category;
    };
    template <> struct name<Windows::Perception::People::IHeadPose>
    {
        static constexpr auto & value{ L"Windows.Perception.People.IHeadPose" };
    };
    template <> struct name<Windows::Perception::People::HeadPose>
    {
        static constexpr auto & value{ L"Windows.Perception.People.HeadPose" };
    };
    template <> struct guid_storage<Windows::Perception::People::IHeadPose>
    {
        static constexpr guid value{ 0x7F5AC5A5,0x49DB,0x379F,{ 0x94,0x29,0x32,0xA2,0xFA,0xF3,0x4F,0xA6 } };
    };
    template <> struct default_interface<Windows::Perception::People::HeadPose>
    {
        using type = Windows::Perception::People::IHeadPose;
    };
    template <> struct abi<Windows::Perception::People::IHeadPose>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_ForwardDirection(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_UpDirection(Windows::Foundation::Numerics::float3*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Perception_People_IHeadPose
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto ForwardDirection() const;
        [[nodiscard]] auto UpDirection() const;
    };
    template <> struct consume<Windows::Perception::People::IHeadPose>
    {
        template <typename D> using type = consume_Windows_Perception_People_IHeadPose<D>;
    };
}
#endif