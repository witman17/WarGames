#pragma once

#include "StatsPage.g.h"

namespace winrt::WarGames::implementation
{
    struct StatsPage : StatsPageT<StatsPage>
    {
        StatsPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::WarGames::factory_implementation
{
    struct StatsPage : StatsPageT<StatsPage, implementation::StatsPage>
    {
    };
}
