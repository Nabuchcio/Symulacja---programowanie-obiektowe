#include "YellowSpecimen.h"

void YellowSpecimen::CreateTwin()
{
    cout << "(Rodza sie blizniaki)";
}

void YellowSpecimen::UpdateState()
{
    int lucky = (DeathChance + BreedChance) * 100;
    //cout << "lucky: " << lucky << endl;


    int random = (rand() % lucky) + 1;      // losowanie szansy na rozmnozenie
    //cout << "random: " << random << endl;


    if (random >= DeathChance * 100)
    {
        DeathChance + 0.05;     //dodaje mu wieksza szanse na smierc, bo jest "starszy"
        
        lucky = TwinChance * 100;
        random = (rand() % 100) + 1;      // losowanie szansy na blizniaki

        if (random <= lucky)
        {
            CreateTwin();                                             // uruchomienie funckji 
        }
        else
        {
                cout << "rozmnazaj-kopia";
        }
        
    }

    else
    {
        cout << "smierc";
    }
}


