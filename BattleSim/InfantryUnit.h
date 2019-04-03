#pragma once
#include "Unit.h"

namespace BattleSim {
	class InfantryUnit : public Unit
	{
	protected:
		normal_distribution<double> attackDistribution = normal_distribution<>(5.0, 2.5);
		chi_squared_distribution<double> defendDistribution = chi_squared_distribution<>(2.0);
	public:
		InfantryUnit();
		InfantryUnit(Army &army, string name, Position position, unsigned size);
		~InfantryUnit();
		void attack(Unit& enemy);
		void defend(unsigned damage);
		void move(Position position);
	};
}
