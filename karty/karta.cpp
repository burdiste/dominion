#include "karta.h"

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
