#include <iostream>
#include <vector>

#include "karty/karta.h"
#include "karty/penize.h"
#include "karty/akce.h"
#include "karty/body.h"
#include "karty/medak.h"
#include "karty/stribrnak.h"
#include "karty/zlatak.h"
#include "karty/slechtici.h"
#include "karty/vevodstvi.h"
#include "karty/provincie.h"

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
      cout << "Karta: " << (*it)->vrat_jmeno_karty() << endl;
      cout << "  stoji " << (*it)->vrat_cena_karty() << endl;

      if (auto kartaPenez = dynamic_cast<penize*>(*it) )
      {
        cout << "  dava " << kartaPenez->vrat_pocet_penez() << " penez na nakup" << endl;
      }

      if ( auto kartaBodu = dynamic_cast<body*>(*it) )
      {
        cout << "  dava " << kartaBodu->vrat_bodova_hodnota() << " viteznych bodu" << endl;
      }

      if (auto kartaAkce = dynamic_cast<akce*>(*it) )
      {
        cout << "  zahrej kartu: ";
          kartaAkce->do_sth();
      }

      delete (*it);
    }

    return 0;
}
