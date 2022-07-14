#pragma once
#include "SpecimenList.h"
#include <string>

class Simulation 
{ 
public:
	SpecimenList Specimens;
	void SetParams(); //float M,float B
	void Save(std::string save);
	void DisplayState();
};