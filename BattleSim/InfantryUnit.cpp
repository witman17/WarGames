#include "pch.h"
#include "InfantryUnit.h"
#include "BattleSim.h"

using namespace Windows::Foundation::Numerics;

namespace BattleSim {

	InfantryUnit::InfantryUnit():Unit()
	{
		this->name = "Basic Infantry Unit";
		this->damage = 2;
		this->speed = 1.5;
	}

	InfantryUnit::InfantryUnit(Army &army, string name, Position position, unsigned size):Unit(army, name, position, size)
	{
		this->damage = 2;
		this->speed = 1.5;
	}

	InfantryUnit::~InfantryUnit()
	{
	}

	void InfantryUnit::move(Position position){
		Unit::move(position);
	}

	void InfantryUnit::attack(Unit& enemy) {
		double sizeBonus = size * attackDistribution(generator) / 100.0;
		unsigned damage = this->damage + sizeBonus + attackDistribution(generator);
		enemy.defend(damage);
	}

	void InfantryUnit::defend(unsigned damage)
	{
		double sizeBonus = size * defendDistribution(generator) / 100.0;
		size -= damage - defence - sizeBonus + defendDistribution(generator);
		if (size <= 0){
			BattleSim::getInstance().setUnitDestroyed(this);
			size = 0;
		}
	}
}