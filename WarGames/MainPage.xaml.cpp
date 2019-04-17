//
// MainPage.xaml.cpp
// Implementacja klasy MainPage.
//

#include "pch.h"
#include "MainPage.xaml.h"
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


//Szablon elementu Pusta strona jest udokumentowany na stronie https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x415

MainPage::MainPage()
{
	InitializeComponent();

}


void WarGames::MainPage::Test_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	BattleSim::BattleSim &sim = BattleSim::BattleSim::getInstance();
	BattleSim::Army army_1 = BattleSim::Army("ARMY 1");
	BattleSim::Army army_2 = BattleSim::Army("ARMY 2");
	BattleSim::Unit &unit_1 = BattleSim::CavalryUnit(army_1, "CAV Unit One", BattleSim::Position(1.0, 2.0), 250);
	BattleSim::Unit &unit_2 = BattleSim::InfantryUnit(army_1, "Unit Two", BattleSim::Position(1.0, -2.0), 250);
	BattleSim::Unit &unit_3 = BattleSim::CavalryUnit(army_2, "CAV Unit Three", BattleSim::Position(50.0, 2.0), 250);
	BattleSim::Unit &unit_4 = BattleSim::InfantryUnit(army_2, "Unit Four", BattleSim::Position(50.0, -4.0), 250);
	army_1.addUnit(unit_1);
	army_1.addUnit(unit_2);
	army_2.addUnit(unit_3);
	army_2.addUnit(unit_4);
	sim.registerArmy(army_1);
	sim.registerArmy(army_2);
	sim.registerUnit(unit_1);
	sim.registerUnit(unit_2);
	sim.registerUnit(unit_3);
	sim.registerUnit(unit_4);
	while (!sim.endCondition())
	{
		sim.runSimulationStep();
	}

	return;
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
	if (test == nullptr) {	}
	else if (test->Tag->ToString() == "Home_Page") {
		contentFrame->Navigate(TypeName(HomePage::typeid));
	}
	else if (test->Tag->ToString() == "Battle_Simulation") {
		contentFrame->Navigate(TypeName(NewPage::typeid));
	}
	else if (test->Tag->ToString() == "Load_Page") {
		contentFrame->Navigate(TypeName(LoadPage::typeid));
	}
	else if (test->Tag->ToString() == "About_Page") {
		contentFrame->Navigate(TypeName(AboutPage::typeid));
	}
}
