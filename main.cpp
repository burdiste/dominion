#include <iostream>
#include <vector>

#include "karty/karta.h"
#include "karty/karty.h"
#include "baliky/balik.h"

using namespace std;

int main()
{
    // vytvor balik
    balik* dobiraci = new balik();
    dobiraci->pridejKartu( new medak() );
    dobiraci->pridejKartu( new stribrnak() );
    dobiraci->pridejKartu( new slechtici() );
    dobiraci->pridejKartu( new vevodstvi() );
    dobiraci->pridejKartu( new provincie() );

    cout << "Vytvoreny balik: " << endl;
    vector<karta*> odkrytnice1 = dobiraci->odkryjVrchniKartu(dobiraci->pocetKaret());
    karta::vyhodnotKarty(odkrytnice1);

    cout << endl << "MMMMMicham se" << endl;
    dobiraci->zamichejSe();

    //vyliz neco z baliku
    cout << endl << "Liznice: " << endl;
    vector<karta*> ruka;
    for (int i = 0; i < 2; i++)
    {
        ruka.push_back(dobiraci->lizniKartu());
    }
    karta::vyhodnotKarty(ruka);

    //zbytek karet v baliku odkryj
    cout << endl << "Odkrytnice: " << endl;
    vector<karta*> odkrytnice = dobiraci->odkryjVrchniKartu(dobiraci->pocetKaret());
    karta::vyhodnotKarty(odkrytnice);


    for (int i = 0; i < ruka.size(); i++)
        {
            delete ruka[i];
        }
    delete dobiraci;
    return 0;
}
