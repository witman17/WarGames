#include "pch.h"
#include "lightArmed.h"

using namespace Windows::Foundation::Numerics;

namespace BattleSim {
	LightArmed::LightArmed(Unit &unit) :UnitDecorator(unit)
	{
	}

	LightArmed::~LightArmed()
	{
	}

	void LightArmed::attack(Unit &enemy)
	{

	}

	void LightArmed::defend(unsigned damage)
	{

	}

	void LightArmed::move(Position position)
	{

	}
}