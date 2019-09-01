#include "pch.h"
#include "StatsPage.h"
#if __has_include("StatsPage.g.cpp")
#include "StatsPage.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::WarGames::implementation
{
    StatsPage::StatsPage()
    {
        InitializeComponent();
    }

    int32_t StatsPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void StatsPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void StatsPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}
