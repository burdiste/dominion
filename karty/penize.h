#ifndef PENIZE_H
#define PENIZE_H
#include "karta.h"


class penize : public karta
{
    public:
        penize();
        virtual ~penize();
        int vratPocetPenez();

    protected:
        int mPocetPenez;
    private:
};

#endif // PENIZE_H
