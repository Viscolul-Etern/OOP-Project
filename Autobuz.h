#pragma once
#include "Autoturism.h"

class Autobuz: public Autoturism
{
    int nr_locuri;

    public:
    Autobuz(int , int , bool, int, int);
    float polita_basic();
    float polita_discout();
};