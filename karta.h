#ifndef KARTA_H
#define KARTA_H
#include <string>
using namespace std;

class karta
{
    public:
        karta();
        karta(int m_cena_karty, string m_jmeno_karty);
        virtual ~karta();
        string vrat_jmeno_karty();
        int vrat_cena_karty();
    protected:
        string m_jmeno_karty;
        int m_cena_karty;
    private:
};

#endif // KARTA_H
