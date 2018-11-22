#include "karta.h"

karta::karta()
{
    //ctor
}

karta::~karta()
{
    //dtor
}

int karta::vrat_cena_karty()
{
    return m_cena_karty;
}

string karta::vrat_jmeno_karty()
{
    return m_jmeno_karty;
}
