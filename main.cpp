#include <iostream>
#include "karta.h"
#include "penize.h"
#include "akce.h"
#include "body.h"
#include "medak.h"
#include "slechtici.h"

using namespace std;

int main()
{
    medak* MEDAK = new medak();
    slechtici* SLECHTICI = new slechtici();
    cout << "Karta je " << MEDAK->vrat_jmeno_karty() << endl;
    cout << "Karta je " << SLECHTICI->vrat_jmeno_karty() << endl;
    cout << "a davaji " << SLECHTICI->vrat_bodova_hodnota() << " bodu" << endl;
    cout << "a umi " << SLECHTICI->do_sth() << endl;
    return 0;
}
