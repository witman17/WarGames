#pragma once

#include <pch.h>
#include <list>
#include <string.h>
#include <random>
#include <Position.h>

using namespace std;

namespace BattleSim {

	class Army;
	//enum unitstatus
	//{
	//	ready,
	//	engaged,
	//	destroyed
	//};

	class Unit
	{
	protected:
		default_random_engine generator;
		Army *army = nullptr;
		string name = "Basic Unit";
		Position position = Position(0.0, 0.0);
		float speed = 1.0;
		float range = 1.0;
		int size = 100;
		unsigned damage = 1;
		unsigned defence = 1;

	public:
		Unit();
		Unit(Army &army, string name, Position position, unsigned size);
		virtual ~Unit() = 0;
		virtual void attack(Unit& enemy) = 0;
		virtual void defend(unsigned damage) = 0;
		virtual void move(Position position);
		virtual Unit* getClosestEnemyUnit();
		virtual bool isUnitInRange(Unit& unit);

		Army* getArmy();
		string getName();
		Position getPosition();
		float getSpeed();
		virtual float getRange();
		unsigned getSize();
		unsigned getDamage();
		unsigned getDefence();
		
	};
}
