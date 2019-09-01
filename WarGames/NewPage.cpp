#include "pch.h"
#include "NewPage.h"
#if __has_include("NewPage.g.cpp")
#include "NewPage.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::WarGames::implementation
{
    NewPage::NewPage()
    {
        InitializeComponent();
    }

    int32_t NewPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void NewPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void NewPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}
