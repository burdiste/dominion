#include "karta.h"
#include "karty.h"
#include <vector>

//poznamka

karta::karta()
{
    //ctor
}

karta::~karta()
{
    //dtor
}

int karta::vratCenaKarty()
{
    return m_cenaKarty;
}

string karta::vratJmenoKarty()
{
    return m_jmenoKarty;
}

void karta::vyhodnotKarty(vector<karta*> karty)
{
        for (auto it = karty.begin(); it!= karty.end(); it++ )
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

        if (auto karta = dynamic_cast<kartaAkci*>(*it) )
        {
            cout << "  zahrej kartu: " << endl;
            karta->doSth();
        }
    }
}
