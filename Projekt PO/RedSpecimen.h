#pragma once
#include "Specimen.h"


class RedSpecimen : public Specimen
{
public:
	int Color=3;
	float KillChance=0.02;
	float DeathChance = 0.05;
	float BreedChance = 0.07;
	float BornChance = 1;

	void UpdateState();
	void KillStranger();
};