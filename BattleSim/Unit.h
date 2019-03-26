#pragma once

#include <pch.h>
#include <list>
#include <string.h>
#include <Army.h>

using namespace std;
using namespace Windows::Foundation::Numerics;

namespace BattleSim {
	//enum unitstatus
	//{
	//	ready,
	//	engaged,
	//	destroyed
	//};

	class Unit
	{
	protected:
		Army* army;
		string name = "Basic Unit";
		float2 position = float2(0.0, 0.0);
		float speed = 1.0;
		float range = 1.0;
		unsigned size = 100;
		unsigned damage = 1;
		unsigned defence = 1;

	public:
		Unit();
		Unit(Army &army, string name, float2 position, unsigned size);
		virtual ~Unit() = 0;
		virtual void attack(Unit& enemy) = 0;
		virtual void defend(unsigned damage) = 0;
		virtual void move(float2 position) = 0;
		virtual Unit* getClosestEnemyUnit();
		virtual bool isUnitInRange(Unit& unit);
		float getDistance(float2 position);

		Army* getArmy();
		string getName();
		float2 getPosition();
		float getSpeed();
		virtual float getRange();
		unsigned getSize();
		unsigned getDamage();
		unsigned getDefence();
		
	};
}
