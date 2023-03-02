#include "Autobuz.h"

Autobuz::Autobuz(int id, int km, bool dis, int a, int nr_l)
{
    ID = id;
    nr_km = km;
    diesel = dis;
    an = a;
    nr_locuri = nr_l;
}

float Autobuz::polita_basic()
{
    int add = 0;
    if(diesel == true) add = add + 1000;
    if(nr_km > 200000) add += 1000;
        else if(nr_km > 100000) add += 500;

    time_t now = time(0);

    tm *ltm = localtime(&now);

    int vechime = 1900 + ltm->tm_year - an;

    return vechime * 200 + add;
}

float Autobuz::polita_discout()
{
    int a = this->polita_basic();
    return a - 0.1 * a;
}