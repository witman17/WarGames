//
// MainPage.xaml.cpp
// Implementacja klasy MainPage.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include "BattleSim.h"
#include "InfantryUnit.h"
#include "CavalryUnit.h"

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
