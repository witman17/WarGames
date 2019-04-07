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
			double sizeBonus = size * attackDistribution(generator) / 100.0;
			unsigned damage = this->damage + sizeBonus + attackDistribution(generator);
			enemy.defend(damage);
		}
	}

	void CavalryUnit::defend(unsigned damage)
	{
		double sizeBonus = size * defendDistribution(generator) / 100.0;
		size -= damage - defence - sizeBonus + defendDistribution(generator);
		if (size <= 0) {
			BattleSim::getInstance().setUnitDestroyed(this);
			size = 0;
		}
	}

	void CavalryUnit::move(Position position)
	{
		Unit::move(position);
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
		double distanceBonus = this->position.getDistance(enemy.getPosition()) * chargeDistribution(generator);
		double sizeBonus = size * chargeDistribution(generator) / 100.0;
		unsigned damage = this->damage + sizeBonus + distanceBonus + chargeDistribution(generator);
		Unit::move(enemy.getPosition());
		enemy.defend(damage);
	}

	float CavalryUnit::getRange()
	{
		return chargeRange;
	}

}