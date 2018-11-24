#ifndef AKCE_H
#define AKCE_H

#include "karta.h"

using namespace std;

class akce : virtual public karta
{
    public:
        akce();
        virtual ~akce();

        virtual void doSth() = 0;

};

#endif // AKCE_H
