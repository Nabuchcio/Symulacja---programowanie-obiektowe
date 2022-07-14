#include "RedSpecimen.h"

void RedSpecimen::KillStranger()
{
    cout << "(zabija random specimena)";
}

void RedSpecimen::UpdateState()
{

    int lucky = (DeathChance + BreedChance) * 100;
   // cout << "lucky: " << lucky << endl;


    int random = (rand() % lucky) + 1;      // losowanie szansy na rozmnozenie
   // cout << "random: " << random << endl;


    if (random >= DeathChance * 100)
    {
        DeathChance + 0.05;     //dodaje mu wieksza szanse na smierc, bo jest "starszy"
        cout << "rozmnazaj-kopia"; 
    }

    else
    {
         lucky = KillChance *100;
             random = (rand() % 100) + 1;      // losowanie szansy na zabicie randomowego specimen
 //            cout << random << " " << lucky << endl;
            if (random <= lucky)
            {
                KillStranger();                                             // uruchomienie funckji kill stranger
            }

            cout << "smierc";
    }
        
}

