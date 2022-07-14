#include "Simulation.h"
#include "BlueSpecimen.h"
#include "RedSpecimen.h"
#include "GreenSpecimen.h"
#include "YellowSpecimen.h"

void Simulation::SetParams()
{
	
	int n,m=0;
	float pom;
	menu:
	cout << "\n DLA JAKIEGO KOLORU CHCESZ \nUSTAWIC PARAMETRY SYMULACJI?" << endl;
	cout << "---------------------------" << endl;
	cout << "1. Niebieski" << endl;
	cout << "2. Zielony" << endl;
	cout << "3. Czerwony" << endl;
	cout << "4. Zolty" << endl;

	cout << "0.wyjscie" << endl;
	cin >> n;
	switch (n)
	{
	case 1: //trzeba jakos dodac te pierwsze specimeny danych kolorow do vectora zeby pozostale specimeny mogly pobierac z nich dane
	{	
		BlueSpecimen firstblue;
		mutacja:
		
		cout << "Podaj szanse mutacji (1-100%): ";
			cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto mutacja;
		}
		else
		{
			firstblue.MutationChance = pom / 100;
			cout << "---------------------------" << endl;
		}
			
		rozmnozenie:

		cout << "Podaj szanse rozmnozenia (1-100%): ";
		cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto rozmnozenie;
		}
		else
		{
			firstblue.BreedChance = pom / 100;
			cout << "---------------------------" << endl;
		}

		urodzenie:

		cout << "(Zalecana wartosc to 100%)";
		cout << "Podaj szanse urodzenie (1-100%): " << endl;
		cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto urodzenie;
		}
		else
		{
			firstblue.BornChance = pom / 100;
			cout << "---------------------------" << endl;
		}

		smierc:

		cout << "Podaj szanse na smierc (1-100%): " << endl;
		cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto smierc;
		}
		else
		{
			firstblue.DeathChance = pom / 100;
			cout << "---------------------------" << endl;
		}

		cout << "\nPodales nastepujace wartosci: " << endl;
		cout << "---------------------------" << endl;
		cout << "Szansa na mutacje: " << firstblue.MutationChance*100 <<"%" << endl;
		cout << "Szansa na rozmnozenie: " << firstblue.BreedChance*100 << "%" <<endl;
		cout << "Szansa na urodzenie: " << firstblue.BornChance*100 << "%" <<endl;
		cout << "Szansa na smierc: " << firstblue.DeathChance*100 << "%" <<endl;


		break;
	}

	case 2:
	{
		GreenSpecimen firstgreen;
	mutacja1:

		cout << "Podaj szanse mutacji (1-100%): ";
		cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto mutacja1;
		}
		else
		{
			firstgreen.MutationChance = pom / 100;
			cout << "---------------------------" << endl;
		}

	rozmnozenie1:

		cout << "Podaj szanse rozmnozenia (1-100%): ";
		cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto rozmnozenie1;
		}
		else
		{
			firstgreen.BreedChance = pom / 100;
			cout << "---------------------------" << endl;
		}

	urodzenie1:

		cout << "Podaj szanse urodzenie (1-100%): " << endl;
		cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto urodzenie1;
		}
		else
		{
			firstgreen.BornChance = pom / 100;
			cout << "---------------------------" << endl;
		}

	smierc1:

		cout << "Podaj szanse na smierc (1-100%): " << endl;
		cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto smierc1;
		}
		else
		{
			firstgreen.DeathChance = pom / 100;
			cout << "---------------------------" << endl;
		}

		cout << "\nPodales nastepujace wartosci: " << endl;
		cout << "---------------------------" << endl;
		cout << "Szansa na mutacje: " << firstgreen.MutationChance * 100 << "%" << endl;
		cout << "Szansa na rozmnozenie: " << firstgreen.BreedChance * 100 << "%" << endl;
		cout << "Szansa na urodzenie: " << firstgreen.BornChance * 100 << "%" << endl;
		cout << "Szansa na smierc: " << firstgreen.DeathChance * 100 << "%" << endl;

		firstgreen.IsAgressive = false;


		break;
	}

	case 3:
	{
		RedSpecimen firstred;
	mutacja2:

		cout << "Podaj zabicia innego specimena (1-100%): ";
		cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto mutacja2;
		}
		else
		{
			firstred.KillChance = pom / 100;
			cout << "---------------------------" << endl;
		}

	rozmnozenie2:

		cout << "Podaj szanse rozmnozenia (1-100%): ";
		cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto rozmnozenie2;
		}
		else
		{
			firstred.BreedChance = pom / 100;
			cout << "---------------------------" << endl;
		}

	urodzenie2:

		cout << "Podaj szanse urodzenie (1-100%): " << endl;
		cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto urodzenie2;
		}
		else
		{
			firstred.BornChance = pom / 100;
			cout << "---------------------------" << endl;
		}

	smierc2:

		cout << "Podaj szanse na smierc (1-100%): " << endl;
		cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto smierc2;
		}
		else
		{
			firstred.DeathChance = pom / 100;
			cout << "---------------------------" << endl;
		}

		cout << "\nPodales nastepujace wartosci: " << endl;
		cout << "---------------------------" << endl;
		cout << "Szansa na mutacje: " << firstred.KillChance * 100 << "%" << endl;
		cout << "Szansa na rozmnozenie: " << firstred.BreedChance * 100 << "%" << endl;
		cout << "Szansa na urodzenie: " << firstred.BornChance * 100 << "%" << endl;
		cout << "Szansa na smierc: " << firstred.DeathChance * 100 << "%" << endl;

		break;
	}

	case 4:
	{
		YellowSpecimen firstyellow;
	mutacja3:

		cout << "Podaj szanse na blizniaki (1-100%): ";
		cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto mutacja3;
		}
		else
		{
			firstyellow.TwinChance = pom / 100;
			cout << "---------------------------" << endl;
		}

	rozmnozenie3:

		cout << "Podaj szanse rozmnozenia (1-100%): ";
		cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto rozmnozenie3;
		}
		else
		{
			firstyellow.BreedChance = pom / 100;
			cout << "---------------------------" << endl;
		}

	urodzenie3:

		cout << "Podaj szanse urodzenie (1-100%): " << endl;
		cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto urodzenie3;
		}
		else
		{
			firstyellow.BornChance = pom / 100;
			cout << "---------------------------" << endl;
		}

	smierc3:

		cout << "Podaj szanse na smierc (1-100%): " << endl;
		cin >> pom;
		if (pom > 100 || pom < 1)
		{
			cout << "Wpisz poprawna wartosc np. 23 " << endl;
			goto smierc3;
		}
		else
		{
			firstyellow.DeathChance = pom / 100;
			cout << "---------------------------" << endl;
		}

		cout << "\nPodales nastepujace wartosci: " << endl;
		cout << "---------------------------" << endl;
		cout << "Szansa na blizniaki: " << firstyellow.TwinChance * 100 << "%" << endl;
		cout << "Szansa na rozmnozenie: " << firstyellow.BreedChance * 100 << "%" << endl;
		cout << "Szansa na urodzenie: " << firstyellow.BornChance * 100 << "%" << endl;
		cout << "Szansa na smierc: " << firstyellow.DeathChance * 100 << "%" << endl;

		break;
	}

	case 0:
	{
		m = 1;
		break;
	}

	default: cout << "Nie ma takiej opcji w menu" << endl;
		break;

	}
	if (m == 0)
	goto menu;
	

}

void Simulation::Save(std::string save)
{
}

void Simulation::DisplayState()
{
}
