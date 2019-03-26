#pragma once

#include <set>
#include <string.h>

using namespace std;

namespace BattleSim 
{
	class Unit;

	enum class ArmyStatus
	{
			WARFARE,
			VICTORY,
			DEFEATED
	};

	class Army
	{
	protected:
		string name;
		set<Army*> enemies;
		set<Unit*> units;
		ArmyStatus status;

	public:
		Army();
		~Army();
		string getName();
		ArmyStatus getStatus();
		set<Army*>& getEnemies();
		void setEnemies(set<Army*> &enemies);
		set<Unit*>& getUnits();
		void addUnit(Unit &unit);
		void removeUnit(Unit &unit);
		void battle();
	
	};

}