#pragma once
#include "UnitDecorator.h"
namespace BattleSim {
	class lightArmed :
		public UnitDecorator
	{
	public:
		lightArmed(Unit *unit);
		~lightArmed();
		void attack(BattleSim::Unit* enemy);
		void defend(unsigned damage);
		void move(float2 position);
	};
}
