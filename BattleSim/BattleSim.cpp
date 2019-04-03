#include "pch.h"
#include "BattleSim.h"
#include <set>
#include <string>
#include <iostream>

namespace BattleSim {

    BattleSim::BattleSim(){}

	BattleSim & BattleSim::getInstance()
	{
		static BattleSim instance;
		return instance;
	}

	void BattleSim::setUnitDestroyed(Unit * unit)
	{
		activeUnits.erase(unit);
		destroyedUnits.insert(unit);
	}

	void BattleSim::registerArmy(Army & army)
	{
		armies.insert(&army);
	}

	void BattleSim::registerUnit(Unit & unit)
	{
		activeUnits.insert(&unit);
	}

	BattleSim::~BattleSim()
	{
	}

	set<Army*> BattleSim::getArmies()
	{
		return this->armies;
	}

	set<Unit*> BattleSim::getActiveUnits()
	{
		return this->activeUnits;
	}

	void BattleSim::runSimulationStep()
	{
		for (set<Army*>::iterator iter = armies.begin(); iter != armies.end(); iter++)
		{
			Army *a = *iter;
			if (a != nullptr)
			{
				a->battle();
			}
		}
	}
}	