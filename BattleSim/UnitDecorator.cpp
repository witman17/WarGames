#include "pch.h"
#include "UnitDecorator.h"

namespace BattleSim {

	UnitDecorator::UnitDecorator(Unit &unit)
	{
		this->unit = &unit;
	}
}