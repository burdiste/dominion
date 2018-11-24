#ifndef BODY_H
#define BODY_H

#include "karta.h"

class body : virtual public karta
{
    public:
        body();
        virtual ~body();
        int vratBodovaHodnota();

    protected:
        int mBodovaHodnota;

};

#endif // BODY_H
