// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190730.2

void* winrt_make_WarGames_MainPage()
{
    return winrt::detach_abi(winrt::make<winrt::WarGames::factory_implementation::MainPage>());
}
namespace winrt::WarGames
{
    MainPage::MainPage() :
        MainPage(make<WarGames::implementation::MainPage>())
    {
    }
}
