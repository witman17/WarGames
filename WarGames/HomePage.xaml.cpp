//
// HomePage.xaml.cpp
// Implementacja klasy HomePage
//

#include "pch.h"
#include "HomePage.xaml.h"
#include "NewPage.xaml.h"
#include "LoadPage.xaml.h"
#include "AboutPage.xaml.h"

using namespace WarGames;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::UI::Xaml::Interop;

//Szablon elementu Pusta strona jest udokumentowany na stronie https://go.microsoft.com/fwlink/?LinkId=234238

HomePage::HomePage()
{
	InitializeComponent();
}


void WarGames::HomePage::New_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(TypeName(NewPage::typeid));
}


void WarGames::HomePage::Load_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(TypeName(LoadPage::typeid));
}


void WarGames::HomePage::Stats_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//this->Frame->Navigate(TypeName(NewPage::typeid));
}


void WarGames::HomePage::About_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->Frame->Navigate(TypeName(AboutPage::typeid));
}
