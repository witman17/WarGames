#include "pch.h"
#include "InfantryUnit.h"

namespace BattleSim {

	InfantryUnit::InfantryUnit():Unit()
	{
		this->name = "Basic Infantry Unit";
		this->damage = 2;
		this->speed = 1.5;
	}

	InfantryUnit::InfantryUnit(string name, float2 position, unsigned size):InfantryUnit()
	{
		this->name = name;
		this->position = position;
		this->size = size;
	}

	InfantryUnit::~InfantryUnit()
	{
	}

	void InfantryUnit::move(float2 position) {

	}

	void InfantryUnit::attack(Unit* enemy) {

	}

	void InfantryUnit::defend(unsigned damage)
	{
	}
}