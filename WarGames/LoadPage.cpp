#include "pch.h"
#include "LoadPage.h"
#if __has_include("LoadPage.g.cpp")
#include "LoadPage.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::WarGames::implementation
{
    LoadPage::LoadPage()
    {
        InitializeComponent();
    }

    int32_t LoadPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void LoadPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void LoadPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}
