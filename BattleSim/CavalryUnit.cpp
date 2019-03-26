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
		if (isUnitInChargeRange(enemy)) {
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

	bool CavalryUnit::isUnitInChargeRange(Unit &unit)
	{
		float distance = getDistance(unit.getPosition());
		if (distance > range && distance <= chargeRange) {
			return true;
		}

		return false;
	}

	void CavalryUnit::charge(Unit &enemy)
	{

	}

	float CavalryUnit::getRange()
	{
		return chargeRange;
	}

}