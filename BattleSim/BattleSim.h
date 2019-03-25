#pragma once
#include <set>
#include <list>
#include <Army.h>
#include <Unit.h>

using namespace std;

namespace BattleSim {
	class BattleSim
	{
	private:
		set<Army*> armies;
		set<Unit*> activeUnits;
		set<Unit*> destroyedUnits;

		BattleSim();

	public:
		~BattleSim();
		BattleSim(BattleSim const&) = delete;
		void operator=(BattleSim const&) = delete;
		static BattleSim& getInstance();

		set<Army*> getArmies();
		set<Unit*> getActiveUnits();
		void runSimulationStep();

	};

}