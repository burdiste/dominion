#ifndef KARTA_H
#define KARTA_H
#include <string>
using namespace std;

class karta
{
    public:
        karta();
        karta(int cenaKarty, string jmenoKarty);
        virtual ~karta();

        string vratJmenoKarty();
        int vratCenaKarty();
    protected:
        string mJmenoKarty;
        int    mCenaKarty;
};

#endif // KARTA_H
