//
// MainPage.xaml.cpp
// Implementacja klasy MainPage.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include "HomePage.xaml.h"
#include "BattleSimulation.xaml.h"

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


//Szablon elementu Pusta strona jest udokumentowany na stronie https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x415

MainPage::MainPage()
{
	InitializeComponent();
}




void WarGames::MainPage::nvTopLevelNav_Loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	for (auto&& item: nvTopLevelNav->MenuItems)
	{
		NavigationViewItem^ nvItem = dynamic_cast<NavigationViewItem^> (static_cast<Object^>(item));
		if (nvItem->Tag->ToString() == "Home_Page") {
			nvTopLevelNav->SelectedItem = item;
			break;
		} 

	}
	
	contentFrame->Navigate(TypeName(HomePage::typeid));
}


void WarGames::MainPage::nvTopLevelNav_SelectionChanged(Windows::UI::Xaml::Controls::NavigationView^ sender, Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs^ args)
{
	//TODO dalej ze strony: https://blogs.msdn.microsoft.com/appconsult/2018/05/06/using-the-navigationview-in-your-uwp-applications/
}


void WarGames::MainPage::nvTopLevelNav_ItemInvoked(Windows::UI::Xaml::Controls::NavigationView^ sender, Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs^ args)
{
	TextBlock^ test = dynamic_cast<TextBlock^>(args->InvokedItem);
	if (test->Tag->ToString() == "Battle_Simulation") {
		contentFrame->Navigate(TypeName(BattleSimulation::typeid));
	}
	
}
