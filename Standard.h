#pragma once
#include "Autoturism.h"

using namespace std;

class Standard: public Autoturism
{
    string transmisie;

    public:
    Standard(int , int , bool, int, string);
    float polita_basic();
    float polita_discout();
};