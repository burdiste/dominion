#include "slechtici.h"

#include <iostream>

using namespace std;

slechtici::slechtici()
{
    //ctor
    mJmenoKarty = "slechtici";
    mCenaKarty = 6;
    mBodovaHodnota = 2;
}

slechtici::~slechtici()
{
    //dtor
}

void slechtici::doSth()
{
  cout << "+3 karty, nebo +2 akce" << endl;
}
