#pragma once
#include "UnitDecorator.h"

namespace BattleSim {
	class HeavyArmed :
		public UnitDecorator
	{
	public:
		HeavyArmed(Unit &unit);
		~HeavyArmed();
		void attack(Unit &enemy);
		void defend(unsigned damage);
		void move(float2 position);

	};
}
