#ifndef KARTA_H
#define KARTA_H
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class karta
{
    public:
        karta();
        karta(int cenaKarty, string jmenoKarty);
        virtual ~karta();

        static void vyhodnotKarty(vector<karta*> karty);

        string vratJmenoKarty();
        int vratCenaKarty();
    protected:
        string m_jmenoKarty;
        int    m_cenaKarty;
};

#endif // KARTA_H
