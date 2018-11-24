#include "slechtici.h"

#include <iostream>

using namespace std;

slechtici::slechtici()
{
    //ctor
    m_jmeno_karty = "slechtici";
    m_cena_karty = 6;
    m_bodova_hodnota = 2;
}

slechtici::~slechtici()
{
    //dtor
}

void slechtici::do_sth()
{
  cout << "+3 karty, nebo +2 akce" << endl;
}
