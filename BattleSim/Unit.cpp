#include "pch.h"
#include "Unit.h"

using namespace BattleSim;

Unit::Unit()
{
}


Unit::~Unit()
{
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
