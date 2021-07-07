#include "balik.h"
#include <stdlib.h>

balik::balik()
{
    //ctor
}

balik::~balik()
{
    //dtor mel by mazat karty
    for (auto it = m_karty.begin(); it!= m_karty.end(); it++ )
    {
         delete (*it);
    }
}

void balik::pridejKartu(karta* k)
{
    if (k != nullptr)
        m_karty.push_back(k);
}

karta* balik::lizniKartu()
{
    if (!m_karty.empty())
    {
        karta* liznice = *(m_karty.begin());
        m_karty.erase(m_karty.begin());
        return liznice;
    }
    else
        return nullptr;
}

vector<karta*> balik::odkryjVrchniKartu(int n/* =1 */)
{
    if (n > pocetKaret())
        n = pocetKaret();
    vector<karta*> odkrytice;
    for (int i = 0; i < n; i++)
    {
       karta* pomocnaOdkrytice = *(m_karty.begin()+i);
       odkrytice.push_back(pomocnaOdkrytice);
    }
     return odkrytice;
}

vector<karta*> balik:: odkryjSpodniKartu(int n/* =1 */)
{
    if (n > pocetKaret())
        n = pocetKaret();
    vector<karta*> odkrytice;
    for (int i = 1; i <= n; i++) /*zaciname od 1, nebot vector.end() ukazuje za posledni prvek */
    {
        karta* pomocnaOdkrytnice = *(m_karty.end()-i);
        odkrytice.push_back(pomocnaOdkrytnice);
    }
    return odkrytice;
}

void balik::zamichejSe()
{
    vector<karta*> pomocny;
    do
    {
        int r = rand()%(m_karty.size());
        pomocny.push_back(m_karty[r]);
        m_karty.erase(m_karty.begin()+r);
    } while (!m_karty.empty() );
    m_karty = pomocny;
}

int balik::pocetKaret()
{
    return (int)m_karty.size();
}
