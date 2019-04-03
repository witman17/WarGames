#include "pch.h"
#include "Position.h"
#include "Math.h"

namespace BattleSim {

	Position::Position()
	{
	}

	Position::Position(float x, float y)
	{
		this->x = x;
		this->y = y;
	}


	Position::~Position()
	{
	}
	float Position::getDistance(Position position)
	{
		return sqrtf(powf(position.getX() - this->getX(), 2.0) + powf(position.getY() - this->getY(), 2.0));
	}
	float Position::getX()
	{
		return x;
	}
	float Position::getY()
	{
		return y;
	}
	float Position::setX(float x)
	{ 
		return this->x = x;
	}
	float Position::setY(float y)
	{
		return this->y = y;
	}
}