#pragma once
#include "SpecimenList.h"


class Specimen
{
	SpecimenList Specimens;
	float DeathChance;
	float BreedChance;
	float MutationChance;
	float BornChance;
	virtual void UpdateState() = 0;
};
