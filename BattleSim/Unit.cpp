#include "pch.h"
#include "Unit.h"

using namespace BattleSim;

Unit::Unit()
{
	this->name = "Basic Unit";
	this->damage = 1;
	this->defence = 1;
	this->position = float2(0.0, 0.0);
	this->range = 1.0;
	this->size = 100;
	this->speed = 1.0;
}

Unit::Unit(string name, float2 position, unsigned size):Unit()
{
	this->name = name;
	this->position = position;
	this->size = size;
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
