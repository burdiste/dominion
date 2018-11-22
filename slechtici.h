#ifndef SLECHTICI_H
#define SLECHTICI_H

#include "body.h"
#include "akce.h"


class slechtici : public body, public akce
{
    public:
        slechtici();
        virtual ~slechtici();

        virtual void do_sth();

    protected:

    private:
};

#endif // SLECHTICI_H
