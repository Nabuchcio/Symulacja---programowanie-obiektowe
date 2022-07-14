#pragma once
#include "Specimen.h"
class GreenSpecimen : public Specimen
{
public:
	int Color=2;
	float DeathChance = 0.15;
	float BreedChance = 0.15;
	float MutationChance = 0.1;
	float BornChance = 0.2;

	bool IsAgressive=false;
	void UpdateState();
	void UpdateStateAgr();
};