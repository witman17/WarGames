#pragma once
#include "UnitDecorator.h"

namespace BattleSim {
	class LightArmed :
		public UnitDecorator
	{
	public:
		LightArmed(Unit &unit);
		~LightArmed();
		void attack(Unit &enemy);
		void defend(unsigned damage);
		void move(float2 position);
	};
}
