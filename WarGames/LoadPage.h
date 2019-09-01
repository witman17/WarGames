#pragma once

#include "LoadPage.g.h"

namespace winrt::WarGames::implementation
{
    struct LoadPage : LoadPageT<LoadPage>
    {
        LoadPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::WarGames::factory_implementation
{
    struct LoadPage : LoadPageT<LoadPage, implementation::LoadPage>
    {
    };
}
