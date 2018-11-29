#ifndef SLECHTICI_H
#define SLECHTICI_H

#include "kartaBodu.h"
#include "kartaAkci.h"


class slechtici : public kartaBodu, public kartaAkci
{
    public:
        slechtici();
        virtual ~slechtici();

        virtual void doSth();

};

#endif // SLECHTICI_H
