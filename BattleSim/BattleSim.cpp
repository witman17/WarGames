#include "pch.h"
#include "BattleSim.h"

namespace BattleSim {

    BattleSim::BattleSim()
	{
	}

	BattleSim::~BattleSim()
	{
	}

	list<Army*> BattleSim::getArmies()
	{
		return this->armies;
	}

	list<Unit*> BattleSim::getUnits()
	{
		return this->units;
	}

	void BattleSim::runSimulationStep()
	{
	}
}