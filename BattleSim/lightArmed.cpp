#include "pch.h"
#include "lightArmed.h"


namespace BattleSim {
	BattleSim::lightArmed::lightArmed(Unit * unit) :UnitDecorator(unit)
	{
	}

	BattleSim::lightArmed::~lightArmed()
	{
	}

	void BattleSim::lightArmed::attack(BattleSim::Unit * enemy)
	{
	}

	void BattleSim::lightArmed::defend(unsigned damage)
	{
	}

	void BattleSim::lightArmed::move(float2 position)
	{
	}
}