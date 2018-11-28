#ifndef BODY_H
#define BODY_H

#include "karta.h"

class kartaBodu : virtual public karta
{
    public:
        kartaBodu(){}
        virtual ~kartaBodu(){}
        int vratBodovaHodnota(){return m_bodovaHodnota;}

    protected:
        int m_bodovaHodnota;

};

class statek : public kartaBodu
{
    public:
        statek();
        virtual ~statek(){}
};

class vevodstvi : public kartaBodu
{
    public:
        vevodstvi();
        virtual ~vevodstvi(){}
};

class provincie : public kartaBodu
{
    public:
        provincie();
        virtual ~provincie(){}
};


#endif // BODY_H
