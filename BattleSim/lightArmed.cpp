#include "pch.h"
#include "lightArmed.h"


namespace BattleSim {
	LightArmed::LightArmed(Unit &unit) :UnitDecorator(unit)
	{
	}

	LightArmed::~LightArmed()
	{
	}

	void LightArmed::attack(BattleSim::Unit &enemy)
	{
	}

	void LightArmed::defend(unsigned damage)
	{
	}

	void LightArmed::move(float2 position)
	{
	}
}