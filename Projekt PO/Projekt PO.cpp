
#include "BlueSpecimen.h"
#include "RedSpecimen.h"
#include "GreenSpecimen.h"
#include "YellowSpecimen.h"
#include "Specimen.h"
#include "Simulation.h"
#include "SpecimenList.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	srand(time(NULL));
	
	Simulation sim;
	sim.SetParams();

	cout << "wyjscie";
	

	/* 
	 
	// KOD PONIZEJ SLUZY DO TESTOWANIA CZY DZIALA DRZEWKO WYBOROW WSROD SPECIMENOW 


	BlueSpecimen b[5];
	
	for (unsigned i = 0; i < 5; i++)
	{
		cout << "Blue specimen nr. " << i << endl;
			b[i].UpdateState();
			cout << endl;
	}
	cout <<"\n---------------------------\n";

	RedSpecimen r[5];

	for (unsigned i = 0; i < 5; i++)
	{
		cout << "Red specimen nr. " << i << endl;
		r[i].UpdateState();
		cout << endl;
	}

	cout << "\n---------------------------\n";

	YellowSpecimen y[5];

	for (unsigned i = 0; i < 5; i++)
	{
		cout << "Yellow specimen nr. " << i << endl;
		y[i].UpdateState();
		cout << endl;
	}
	
	cout << "\n---------------------------\n";

	GreenSpecimen g[5];

	for (unsigned i = 0; i < 5; i++)
	{
		cout << "Green specimen nr. " << i << endl;
		g[i].UpdateState();
		cout << endl;
	}
	
	for (unsigned i = 0; i < 5; i++)                                  // sprawdza czy agresja zapisała sie dla specimenow
	{
		cout << "Green specimen nr. " << i << endl;
		cout << g[i].IsAgressive;
		cout << endl;
	}
	
	*/
	return 0;
}
