#include "pch.h"
#include "Unit.h"

#include "Math.h"
#include "BattleSim.h"

using namespace BattleSim;

Unit::Unit()
{
}

Unit::Unit(Army &army, string name, float2 position, unsigned size)
{
	this->army = &army;
	this->name = name;
	this->position = position;
	this->size = size;
}

Unit::~Unit()
{
}


Unit* Unit::getEnemyUnitInRange()
{
	set<Unit*> units = BattleSim::getInstance().getActiveUnits();
	for (set<Unit*>::iterator iter = units.begin(); iter != units.end(); iter++) {
		Unit *unit = *iter;
		if (unit != nullptr) {
			if (unit->army != this->army) {
				if (this->getDistance(unit->position) <= this->range) {
					return unit;
				}
			}
		}
	}
	return nullptr;
}

float Unit::getDistance(float2 position)
{
	return sqrtf(powf(position.x - this->position.x, 2.0) + powf(position.y - this->position.y, 2.0));
}

Army* Unit::getArmy()
{
	return this->army;
}

string Unit::getName()
{
	return this->name;
}

float2 Unit::getPosition()
{
	return position;
}

float Unit::getSpeed()
{
	return this->speed;
}

float Unit::getRange()
{
	return this->range;
}

unsigned Unit::getSize()
{
	return this->size;
}

unsigned Unit::getDamage()
{
	return this->damage;
}

unsigned Unit::getDefence()
{
	return this->defence;
}
