#pragma once
#include "Unit.h"

namespace BattleSim {
	class CavalryUnit : public Unit
	{
	protected:
		float chargeRange = 2;

	public:
		CavalryUnit();
		CavalryUnit(Army &army, string name, Position position, unsigned size);
		~CavalryUnit();

		virtual void attack(Unit& enemy);
		virtual void defend(unsigned damage);
		virtual void move(Position position);
		bool isUnitInChargeRange(Unit &unit);

		void charge(Unit& enemy);
		virtual float getRange();
	};

}