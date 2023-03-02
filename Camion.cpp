#include "Camion.h"

Camion::Camion(int id, int km, bool dis, int a, int tona)
{
    ID = id;
    nr_km = km;
    diesel = dis;
    an = a;
    tonaj = tona;
}

float Camion::polita_basic()
{
    int add = 0;
    if(nr_km > 800000) add += 700;

    time_t now = time(0);

    tm *ltm = localtime(&now);

    int vechime = 1900 + ltm->tm_year - an;

    return vechime * 300 + add;
}

float Camion::polita_discout()
{
    int a = this->polita_basic();

    return a - 0.15 * a;
}