#ifndef BALIK_H
#define BALIK_H

#include <vector>
#include "../karty/karta.h"

using namespace std;

class balik
{
    public:
        balik();
        virtual ~balik();
        void pridejKartu(karta* k);
        karta* lizniKartu();
        vector<karta*> odkryjVrchniKartu(int n=1);
        vector<karta*> odkryjSpodniKartu(int n=1);
        void zamichejSe();
        int pocetKaret ();

    protected:
        vector<karta*> m_karty;

    private:
};

#endif // BALIK_H
