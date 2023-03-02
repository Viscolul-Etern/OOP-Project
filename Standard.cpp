#include "Standard.h"

Standard::Standard(int id, int km, bool dis, int a, string trans)
{
    ID = id;
    nr_km = km;
    diesel = dis;
    an = a;
    transmisie = trans;
}

float Standard::polita_basic()
{
    int add = 0;
    if(diesel == true) add = add + 500;
    if(nr_km > 200000) add += 500;

    time_t now = time(0);

    tm *ltm = localtime(&now);

    int vechime = 1900 + ltm->tm_year - an;

    return vechime * 100 + add;
}

float Standard::polita_discout()
{
    int a = this->polita_basic();
    return a - 0.05 * a;
}