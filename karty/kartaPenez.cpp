#include "kartaPenez.h"

int kartaPenez::vratPocetPenez()
{
    return m_pocetPenez;
}

medak::medak()
{
    m_cenaKarty = 0;
    m_jmenoKarty = "medak";
    m_pocetPenez = 1;
}

stribrnak::stribrnak()
{
    m_cenaKarty = 3;
    m_jmenoKarty = "stribrnak";
    m_pocetPenez = 2;
}

zlatak::zlatak()
{
    m_cenaKarty = 6;
    m_jmenoKarty = "zlatak";
    m_pocetPenez = 3;
}
