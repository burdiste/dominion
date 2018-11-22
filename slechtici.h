#ifndef SLECHTICI_H
#define SLECHTICI_H
#include "body.h"
#include "akce.h"


class slechtici : public body, public akce
{
    public:
        slechtici(int m_cena_karty, string m_jmeno_karty) : karta(m_cena_karty, m_jmeno_karty);
        virtual ~slechtici();

    protected:

    private:
};

#endif // SLECHTICI_H
