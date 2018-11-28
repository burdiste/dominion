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
        string m_jmenoKarty;
        int    m_cenaKarty;
};

#endif // KARTA_H
