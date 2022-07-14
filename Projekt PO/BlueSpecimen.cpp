#include "BlueSpecimen.h"

using namespace std;


void BlueSpecimen::UpdateState()
{   
    int lucky = (DeathChance + BreedChance) * 100;
   
    int random=(rand() % lucky)+1;      // losowanie szansy na rozmnozenie

    if (random >= DeathChance*100)
    { 
        DeathChance + 0.05;     //dodaje mu wieksza szanse na smierc, bo jest "starszy"
        cout << "rozmnazaj";    
            
        lucky = MutationChance * 100;
        if (lucky >= (rand() % 100) + 1)  // losuje mutacje
        {
            random = (rand() % 2) + 2;
            if (random == 2)
            {
                cout << "-mutacja zielona" ;    //Mutacja Zielona                
            }
            else
            {
                cout << "-mutacja czerwona" ;         //Mutacja czerwona
            }
        }
        else
        {
            cout << "-kopia";  
        }
    }
       
    else
        cout << "smierc";
    
}
