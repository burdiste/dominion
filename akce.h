#ifndef AKCE_H
#define AKCE_H
#include "karta.h"
#include <string>
using namespace std;

class akce : public karta
{
    public:
        akce();
        virtual ~akce();
        string do_sth();
    protected:
        string m_do_sth;
    private:
};

#endif // AKCE_H
