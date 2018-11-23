#include <iostream>
#include <vector>

#include "karta.h"

#include "penize.h"
#include "akce.h"
#include "body.h"

#include "medak.h"
#include "slechtici.h"

using namespace std;

int main()
{
    vector<karta*> balik;
    balik.push_back( new medak() );
    balik.push_back( new slechtici());

    for (auto it = balik.begin(); it!= balik.end(); it++ )
    {
      cout << "Karta: " << (*it)->vrat_jmeno_karty() << endl;

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
