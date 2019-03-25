#pragma once
#include "Unit.h"

namespace BattleSim {
	class InfantryUnit : public Unit
	{
	public:
		InfantryUnit();
		InfantryUnit(Army &army, string name, float2 position, unsigned size);
		~InfantryUnit();
		void attack(Unit& enemy);
		void defend(unsigned damage);
		void move(float2 position);
	};
}
