#include "GreenSpecimen.h"


void GreenSpecimen::UpdateStateAgr()
{
    cout << "(zabija random specimena)" << endl;
}

void GreenSpecimen::UpdateState()
{
    if (IsAgressive == true)                    //jesli agresywny - zabija random specimena 
        UpdateStateAgr();

    int lucky = (DeathChance + BreedChance) * 100;
    //cout << "lucky: " << lucky << endl;

    int random = (rand() % lucky) + 1;      // losowanie szansy na rozmnozenie
    //cout << "random: " << random << endl;


    if (random >= DeathChance * 100)
    {
        DeathChance + 0.05;     //dodaje mu wieksza szanse na smierc, bo jest "starszy"
        cout << "rozmnazaj";

        lucky = MutationChance * 100;
        if (lucky >= (rand() % 100) + 1)  // losuje czy zmutuje
        {
            cout << "-mutacja zolta";

        }
        else
        { 
            if (IsAgressive == false)    
            {
                    if (50 >= (rand() % 100) + 1) //losowanie czy doda agresje
                                {
                                    IsAgressive = true;
                                    cout << "(dodaje agresje)";
                                }
            }
            
            cout << "-kopia";
        }
    }

    else
        cout << "smierc";
}


