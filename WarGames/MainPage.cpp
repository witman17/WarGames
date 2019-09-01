#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

#include "AboutPage.h"
#include "LoadPage.h"
#include "NewPage.h"
#include "StatsPage.h"


using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::WarGames::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

}


void winrt::WarGames::implementation::MainPage::New_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{
	this->Frame().Navigate(xaml_typename<WarGames::NewPage>());
}


void winrt::WarGames::implementation::MainPage::Load_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{
	this->Frame().Navigate(xaml_typename<WarGames::LoadPage>());
}


void winrt::WarGames::implementation::MainPage::Stats_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{
	this->Frame().Navigate(xaml_typename<WarGames::StatsPage>());
}


void winrt::WarGames::implementation::MainPage::About_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{
	this->Frame().Navigate(xaml_typename<WarGames::AboutPage>());
}
