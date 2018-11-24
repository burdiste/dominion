#ifndef KARTA_H
#define KARTA_H
#include <string>
using namespace std;

class karta
{
    public:
        karta();
        karta(int cena_karty, string jmeno_karty);
        virtual ~karta();

        string vrat_jmeno_karty();
        int vrat_cena_karty();
    protected:
        string m_jmeno_karty;
        int    m_cena_karty;
};

#endif // KARTA_H
