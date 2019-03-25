#pragma once
#include "Unit.h"

namespace BattleSim {
	class CavalryUnit : public Unit
	{
	protected:
		float chargeRange = 2;

	public:
		CavalryUnit();
		CavalryUnit(Army &army, string name, float2 position, unsigned size);
		~CavalryUnit();

		void attack(Unit& enemy);
		void defend(unsigned damage);
		void move(float2 position);
		Unit* getEnemyUnitInRange();

		void charge(Unit& enemy);
	};

}