#include "pch.h"
#include "Army.h"

#include "Unit.h"

using namespace std;

namespace BattleSim {
	Army::Army()
	{

	}

	Army::Army(string name)
	{
		this->name = name;
	}

	Army::~Army()
	{

	}

	string Army::getName()
	{
		return this->name;
	}

	void Army::setName(string name)
	{
		this->name = name;
	}

	void Army::battle() 
	{
		if (units.size() == 0) {
			status = ArmyStatus::DEFEATED;
		}

		if (status != ArmyStatus::WARFARE) {
			return;
		}

		for (set<Unit*>::iterator it = units.begin(); it != units.end(); it++) {
			Unit *unit = *it;
			Unit *enemy = unit->getClosestEnemyUnit();
			if (unit->isUnitInRange(*enemy)) {
				unit->attack(*enemy);
			}
			else {
				unit->move(enemy->getPosition());
			}
		}
	}

	ArmyStatus Army::getStatus() {
		return status;
	}

	void Army::setStatus(ArmyStatus status)
	{
		this->status = status;
	}

	set<Army*> Army::getEnemies() {
		return this->enemies;
	}

	void Army::setEnemies(set<Army*> &enemies)
	{
		this->enemies = enemies;
	}

	set<Unit*> Army::getUnits() {
		return this->units;
	}

	void Army::addUnit(Unit &unit)
	{
		this->units.insert(&unit);
	}

	void Army::removeUnit(Unit &unit)
	{
		this->units.erase(&unit);
	}

}