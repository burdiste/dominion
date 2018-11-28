#ifndef AKCE_H
#define AKCE_H

#include "karta.h"

class kartaAkci : virtual public karta
{
    public:
        kartaAkci(){}
        virtual ~kartaAkci(){}

        virtual void doSth() = 0;

};

#endif // AKCE_H
