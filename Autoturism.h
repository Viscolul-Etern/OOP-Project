#pragma once
#include <string>
#include <iostream>

class Autoturism
{
    protected:
    int ID;
    int nr_km;
    bool diesel;
    int an;

    public:
    virtual float polita_basic() = 0;
    virtual float polita_discout() = 0;
};