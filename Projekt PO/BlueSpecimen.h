#pragma once
#include "Specimen.h"


class BlueSpecimen : public Specimen
{
public:

	int Color=1;
	float DeathChance=0.1;
	float BreedChance=0.15;
	float MutationChance = 0.05;
	float BornChance=1;

	void UpdateState();
};
