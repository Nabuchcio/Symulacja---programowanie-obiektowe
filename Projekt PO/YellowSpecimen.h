#pragma once
#include "Specimen.h"

class YellowSpecimen : public Specimen
{
public:
	int Color=4;
	float DeathChance = 0.1;
	float BreedChance = 0.2;
	float BornChance = 0;

	float TwinChance=0.02;
	void UpdateState();
	void CreateTwin();
};