#include "slechtici.h"

#include <iostream>

using namespace std;

slechtici::slechtici()
{
    //ctor
    m_jmenoKarty = "slechtici";
    m_cenaKarty = 6;
    m_bodovaHodnota = 2;
}

slechtici::~slechtici()
{
    //dtor
}

void slechtici::doSth()
{
  cout << "+3 karty, nebo +2 akce" << endl;
}
