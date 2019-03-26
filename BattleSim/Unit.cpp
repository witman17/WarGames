#include "pch.h"
#include "Unit.h"

#include "Math.h"
#include "BattleSim.h"

#include <limits>

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


void Unit::move(float2 position)
{

}

Unit* Unit::getClosestEnemyUnit()
{
	Unit *closestUnit = nullptr;
	float closestDistance = numeric_limits<float>::infinity();
	float distance;

	set<Unit*> units = BattleSim::getInstance().getActiveUnits();
	for (set<Unit*>::iterator iter = units.begin(); iter != units.end(); iter++) {
		Unit *enemy = *iter;
		if (enemy != nullptr) {
			if (enemy->army != this->army) {
				distance = this->getDistance(enemy->position);
				if (distance < closestDistance) {
					closestDistance = distance;
					closestUnit = enemy;
				}
			}
		}
	}
	return closestUnit;
}

bool Unit::isUnitInRange(Unit &unit)
{
	if (getDistance(unit.position) <= getRange()) {
		return true;
	}

	return false;
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
