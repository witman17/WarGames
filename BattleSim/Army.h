#pragma once

#include <list>
#include <string.h>
#include <Unit.h>

using namespace std;

namespace BattleSim 
{
	enum class armyState
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
		armyState currentState;

	public:
		Army();
		Army(string name, list<Army*> &enemies, list<Unit*> &units);
		~Army();
		string getName();
		armyState getState();
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