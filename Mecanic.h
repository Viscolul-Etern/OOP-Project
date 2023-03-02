#pragma once
#include "Angajat.h"

class Mecanic: public Angajat 
{
    public:
    Mecanic();
    ~Mecanic();
    Mecanic(string , string , Data , Data );
    void afisare();
    float salariu();
    void editare_angajat();
   int getID();
};