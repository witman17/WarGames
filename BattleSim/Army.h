#pragma once

#include <list>
#include <string.h>
#include <Unit.h>

using namespace std;

namespace BattleSim 
{
	enum class armyStatus
	{
			WARFARE,
			VICTORY,
			DEFEATED
	};

	class Army
	{
	protected:
		string name;
		list<Army*> enemies;
		list<Unit*> units;
		armyStatus status;

	public:
		Army();
		Army(string name, list<Army*> &enemies, list<Unit*> &units);
		~Army();
		string getName();
		armyStatus getStatus();
		list<Army*> getEnemies();
		list<Unit*> getUnits();
		void addUnit(Unit &unit);
		void removeUnit(unsigned index);
		void battle();

	protected:
		void moveUnsits();
		void encounterEnemyUnits();

	
	};

}