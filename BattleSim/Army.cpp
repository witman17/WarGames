#include "pch.h"
#include "Army.h"

using namespace std;

namespace BattleSim {
	Army::Army()
	{

	}

	Army::~Army()
	{

	}

	string Army::getName()
	{
		return this->name;
	}

	void Army::battle() 
	{
		
	}

	ArmyStatus Army::getStatus() {
		return status;
	}

	set<Army*> Army::getEnemies() {
		return enemies;
	}

	void Army::setEnemies(set<Army*> enemies)
	{
		this->enemies = enemies;
	}

	set<Unit*> Army::getUnits() {
		return units;
	}

	void Army::addUnit(Unit &unit)
	{
		this->units.insert(&unit);
	}

}