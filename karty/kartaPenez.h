#ifndef PENIZE_H
#define PENIZE_H
#include "karta.h"


class kartaPenez : public karta
{
    public:
        kartaPenez(){}
        virtual ~kartaPenez(){}
        int vratPocetPenez();

    protected:
        int m_pocetPenez;
    private:
};

class medak : public kartaPenez
{
    public:
        medak();
        virtual ~medak(){};
};

class stribrnak : public kartaPenez
{
    public:
        stribrnak();
        virtual ~stribrnak(){};
};

class zlatak : public kartaPenez
{
    public:
        zlatak();
        virtual ~zlatak(){};
};
#endif // PENIZE_H
