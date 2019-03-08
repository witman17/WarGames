#pragma once

#include <pch.h>
#include <list>
#include <string.h>

using namespace std;
using namespace Windows::Foundation::Numerics;

namespace BattleSim {
	class Unit
	{
	protected:
		string name;
		float2 position;
		float speed;
		float range;
		unsigned size;
		unsigned damage;
		unsigned defence;

	public:
		Unit();
		virtual ~Unit() = 0;
		virtual void attack(BattleSim::Unit* enemy) = 0;
		virtual void defend(unsigned damage) = 0;
		virtual void move(float2 position) = 0;

		string getName();
		float2 getPosition();
		float getSpeed();
		float getRange();
		unsigned getSize();
		unsigned getDamage();
		unsigned getDefence();
		
	};
}
