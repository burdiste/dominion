#ifndef PENIZE_H
#define PENIZE_H
#include "karta.h"


class penize : public karta
{
    public:
        penize();
        virtual ~penize();
        int vrat_pocet_penez();

    protected:
        int m_pocet_penez;
    private:
};

#endif // PENIZE_H
