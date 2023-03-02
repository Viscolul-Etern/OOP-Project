#pragma once
#include "Autoturism.h"

class Camion: public Autoturism
{
    int tonaj;

    public:
    Camion(int, int, bool, int, int);
    float polita_basic();
    float polita_discout();
};