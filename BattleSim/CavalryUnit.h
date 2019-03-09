#pragma once
#include "Unit.h"

namespace BattleSim {
	class CavalryUnit :
		public Unit
	{
	public:
		CavalryUnit();
		CavalryUnit(string name, float2 position, unsigned size);
		~CavalryUnit();
		void attack(BattleSim::Unit* enemy);
		void defend(unsigned damage);
		void move(float2 position);
	};

}