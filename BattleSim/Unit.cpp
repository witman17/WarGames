#include "pch.h"
#include "Unit.h"

#include "Math.h"
#include "BattleSim.h"

#include <limits>

using namespace BattleSim;
using namespace Windows::Foundation::Numerics;

Unit::Unit()
{
}

Unit::Unit(Army &army, string name, Position position, unsigned size)
{
	this->army = &army;
	this->name = name;
	this->position = position;
	this->size = size;
}

Unit::~Unit()
{
}


void Unit::move(Position position)
{
	float length;
	Position dPosition = Position(position.getX() - this->position.getX(), position.getY() - this->position.getY());
	length = sqrtf(dPosition.getX() * dPosition.getX() + dPosition.getY() * dPosition.getY());
	dPosition.setX(dPosition.getX() / length);
	dPosition.setY(dPosition.getY() / length);
	dPosition.setX(dPosition.getX() * this->speed);
	dPosition.setY(dPosition.getY() * this->speed);
	this->position.setX(this->position.getX() + dPosition.getX());
	this->position.setY(this->position.getY() + dPosition.getY());
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
				distance = this->position.getDistance(enemy->position);
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
	if (this->position.getDistance(unit.position) <= getRange()) {
		return true;
	}

	return false;
}

Army* Unit::getArmy()
{
	return this->army;
}

string Unit::getName()
{
	return this->name;
}

Position Unit::getPosition()
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
