#include "pch.h"
#include "CavalryUnit.h"

#include "BattleSim.h"

namespace BattleSim {

	CavalryUnit::CavalryUnit():Unit()
	{
		this->name = "Basic Cavalry Unit";
		this->damage = 2;
		this->range = 1.5;
		this->speed = 2.5;
	}

	CavalryUnit::CavalryUnit(Army &army, string name, float2 position, unsigned size):Unit(army, name, position, size)
	{
		this->damage = 2;
		this->range = 1.5;
		this->speed = 2.5;
	}

	CavalryUnit::~CavalryUnit()
	{

	}

	void CavalryUnit::attack(Unit &enemy)
	{
		if (this->getDistance(enemy.getPosition()) > range) {
			charge(enemy);
		}
		else
		{
			//TODO normal attack
		}
	}

	void CavalryUnit::defend(unsigned damage)
	{

	}

	void CavalryUnit::move(float2 position)
	{

	}

	Unit * CavalryUnit::getEnemyUnitInRange()
	{
		set<Unit*> units = BattleSim::getInstance().getActiveUnits();
		for (set<Unit*>::iterator iter = units.begin(); iter != units.end(); iter++) {
			Unit *unit = *iter;
			if (unit != nullptr) {
				if (unit->getArmy() != this->army) {
					if (this->getDistance(unit->getPosition()) <= this->chargeRange) {
						return unit;
					}
				}
			}
		}
		return nullptr;
	}

	void CavalryUnit::charge(Unit & enemy)
	{

	}

}