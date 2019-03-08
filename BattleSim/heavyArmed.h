#pragma once
#include "UnitDecorator.h"

namespace BattleSim {
	class heavyArmed :
		public UnitDecorator
	{
	public:
		heavyArmed(Unit * unit);
		~heavyArmed();
		void attack(Unit* enemy);
		void defend(unsigned damage);
		void move(float2 position);

	};
}
