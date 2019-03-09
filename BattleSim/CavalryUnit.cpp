#include "pch.h"
#include "CavalryUnit.h"

namespace BattleSim {

	CavalryUnit::CavalryUnit():Unit()
	{
		this->name = "Basic Cavalry Unit";
		this->damage = 2;
		this->range = 1.5;
		this->speed = 2.5;
	}

	CavalryUnit::CavalryUnit(string name, float2 position, unsigned size):CavalryUnit()
	{
		this->name = name;
		this->position = position;
		this->size = size;
	}

	CavalryUnit::~CavalryUnit()
	{

	}

	void CavalryUnit::attack(BattleSim::Unit * enemy)
	{
	}

	void CavalryUnit::defend(unsigned damage)
	{
	}

	void CavalryUnit::move(float2 position)
	{
	}

}