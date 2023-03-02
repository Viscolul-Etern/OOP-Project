#pragma once
#include "Data.h"
#include <ctime>
#include <string.h>

class Angajat{

    protected:
    int ID;
    string nume, prenume;
    Data data_nasterii, data_angajarii;
    float coeficient;
    static int index;

    public:
    virtual void afisare(){};
    virtual ~Angajat() = default;
    virtual void editare_angajat(){};
    virtual float salariu() = 0;
    virtual int getID() = 0;

};