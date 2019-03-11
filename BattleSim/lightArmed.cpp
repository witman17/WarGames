#include "pch.h"
#include "lightArmed.h"


namespace BattleSim {
	BattleSim::LightArmed::LightArmed(Unit * unit) :UnitDecorator(unit)
	{
	}

	BattleSim::LightArmed::~LightArmed()
	{
	}

	void BattleSim::LightArmed::attack(BattleSim::Unit * enemy)
	{
	}

	void BattleSim::LightArmed::defend(unsigned damage)
	{
	}

	void BattleSim::LightArmed::move(float2 position)
	{
	}
}