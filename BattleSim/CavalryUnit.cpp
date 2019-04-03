#include "pch.h"
#include "CavalryUnit.h"

#include "BattleSim.h"

using namespace Windows::Foundation::Numerics;

namespace BattleSim {

	CavalryUnit::CavalryUnit():Unit()
	{
		this->name = "Basic Cavalry Unit";
		this->damage = 2;
		this->range = 1.5;
		this->speed = 2.5;
	}

	CavalryUnit::CavalryUnit(Army &army, string name, Position position, unsigned size):Unit(army, name, position, size)
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

	void CavalryUnit::move(Position position)
	{

	}

	bool CavalryUnit::isUnitInChargeRange(Unit &unit)
	{
		float distance = this->position.getDistance(unit.getPosition());
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