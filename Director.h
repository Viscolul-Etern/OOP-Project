#pragma once
#include "Angajat.h"

class Director: public Angajat
{

    public:
    Director();
    ~Director(); 
    Director(string , string , Data , Data );
    void afisare();
    float salariu();
    void editare_angajat();
    int getID();
    
};