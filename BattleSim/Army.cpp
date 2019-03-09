#include "pch.h"
#include "Army.h"

using namespace std;

namespace BattleSim {
	Army::Army()
	{

	}

	BattleSim::Army::Army(string name, list<Army*>& enemies, list<Unit*>& units)
	{

	}


	Army::~Army()
	{

	}

	string BattleSim::Army::getName()
	{
		return string();
	}

	void Army::battle() {
		moveUnsits();
		encounterEnemyUnits();
	}

	void Army::moveUnsits()
	{

	}

	void Army::encounterEnemyUnits() {

	}

	BattleSim::armyStatus Army::getState() {
		return currentStatus;
	}

	list<Army*> Army::getEnemies() {
		return enemies;
	}

	list<Unit*> Army::getUnits() {
		return units;
	}

	void BattleSim::Army::addUnit(Unit & unit)
	{
	}

	void BattleSim::Army::removeUnit(unsigned index)
	{
	}
}