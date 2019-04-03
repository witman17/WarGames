#include "pch.h"
#include "heavyArmed.h"

using namespace Windows::Foundation::Numerics;

namespace BattleSim {
	HeavyArmed::HeavyArmed(Unit &unit):UnitDecorator(unit)
	{
	}

	HeavyArmed::~HeavyArmed()
	{

	}

	void HeavyArmed::attack(Unit &enemy)
	{

	}

	void HeavyArmed::defend(unsigned damage)
	{
	}

	void HeavyArmed::move(Position position)
	{

	}
}