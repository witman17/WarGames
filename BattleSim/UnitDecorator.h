#pragma once

#include "Unit.h"

namespace BattleSim {
	class UnitDecorator :
		public Unit
	{
	protected:
		Unit *unit;
	public:
		UnitDecorator(Unit &unit);
		virtual ~UnitDecorator() = 0;
		virtual void attack(Unit& enemy) = 0;
		virtual void defend(unsigned damage) = 0;
		virtual void move(float2 position) = 0;
	};
}
