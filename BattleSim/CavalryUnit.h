#pragma once
#include "Unit.h"

namespace BattleSim {
	class CavalryUnit : public Unit
	{
	protected:
		float chargeRange = 2;
		normal_distribution<double> attackDistribution = normal_distribution<>(5.0, 2.5);
		gamma_distribution<double> chargeDistribution = gamma_distribution<>(5.0, 2.5);
		chi_squared_distribution<double> defendDistribution = chi_squared_distribution<>(1.5);
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