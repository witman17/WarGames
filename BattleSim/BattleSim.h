#pragma once
#include <list>
#include <Army.h>
#include <Unit.h>

using namespace std;

namespace BattleSim {
	class BattleSim
	{
	private:
		list<Army*> armies;
		list<Unit*> units;
	public:
		BattleSim();
		~BattleSim();

		list<Army*> getArmies();
		list<Unit*> getUnits();
		void runSimulationStep();
	

	};

}