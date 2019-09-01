#pragma once

#include "NewPage.g.h"

namespace winrt::WarGames::implementation
{
    struct NewPage : NewPageT<NewPage>
    {
        NewPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::WarGames::factory_implementation
{
    struct NewPage : NewPageT<NewPage, implementation::NewPage>
    {
    };
}
