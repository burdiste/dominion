#include <iostream>
#include <vector>

#include "karty/karta.h"
#include "karty/karty.h"

using namespace std;

int main()
{
    vector<karta*> balik;
    balik.push_back( new medak() );
    balik.push_back( new stribrnak() );
    balik.push_back( new slechtici() );
    balik.push_back( new vevodstvi() );
    balik.push_back( new provincie() );

    for (auto it = balik.begin(); it!= balik.end(); it++ )
    {
        cout << "Karta: " << (*it)->vratJmenoKarty() << endl;
        cout << "  stoji " << (*it)->vratCenaKarty() << endl;

        if (auto karta = dynamic_cast<kartaPenez*>(*it) )
        {
            cout << "  dava " << karta->vratPocetPenez() << " penez na nakup" << endl;
        }

        if ( auto karta = dynamic_cast<kartaBodu*>(*it) )
        {
            cout << "  dava " << karta->vratBodovaHodnota() << " viteznych bodu" << endl;
        }

        if (auto karta = dynamic_cast<kartaAkce*>(*it) )
        {
            cout << "  zahrej kartu: ";
            karta->doSth();
        }

        delete (*it);
    }

    return 0;
}
