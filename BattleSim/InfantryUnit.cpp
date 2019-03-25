#include "pch.h"
#include "InfantryUnit.h"

namespace BattleSim {

	InfantryUnit::InfantryUnit():Unit()
	{
		this->name = "Basic Infantry Unit";
		this->damage = 2;
		this->speed = 1.5;
	}

	InfantryUnit::InfantryUnit(Army &army, string name, float2 position, unsigned size):Unit(army, name, position, size)
	{
		this->damage = 2;
		this->speed = 1.5;
	}

	InfantryUnit::~InfantryUnit()
	{
	}

	void InfantryUnit::move(float2 position) {

	}

	void InfantryUnit::attack(Unit& enemy) {

	}

	void InfantryUnit::defend(unsigned damage)
	{
	}
}