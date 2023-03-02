#pragma once
#include "Angajat.h"

class Asistent: public Angajat
{
    public:
    Asistent();
    Asistent(string, string, Data, Data);
    ~Asistent(); 
    void afisare();
    void editare_angajat();
    int getID();
    float salariu();
};