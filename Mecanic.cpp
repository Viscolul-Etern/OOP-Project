#include "Mecanic.h"

Mecanic::Mecanic()
{

        ID = ++(Angajat::index);
        nume = "Nume";
        prenume = "Prenume";
        data_nasterii = Data();
        data_angajarii = Data();
        coeficient = 1.5;

}

Mecanic::Mecanic(string nume, string prenume, Data data_nasterii, Data data_angajarii)
{
    ID = ++(Angajat::index);
        this->nume = nume;
        this->prenume = prenume;
        this->data_nasterii = data_nasterii;
        this->data_angajarii = data_angajarii;
        coeficient = 1.5;
}

Mecanic::~Mecanic()
{
    ID = -1;
}

void Mecanic::afisare()
{
        cout<<"ID:"<<ID<<endl;
        cout<<"Nume: "<<nume<<" "<<prenume<<endl;
        cout<<"Data nasterii: "<<data_nasterii<<endl;
        cout<<"Data angajarii: "<<data_angajarii<<endl;
        cout<<"Coeficient: "<<coeficient<<endl<<endl;
}

float Mecanic::salariu()
{
   time_t now = time(0);

    tm *ltm = localtime(&now);
    int vechime = 1900 + ltm->tm_year - data_angajarii.getAn();

    if(1 + ltm->tm_mon < data_angajarii.getLuna() || ltm->tm_mday < data_angajarii.getZi())
        vechime --;

    return coeficient * vechime * 1000;
}

void Mecanic::editare_angajat()
{
    cout<<"Introduceti noile date:"<<endl;
    string aux;
    cout<<"Nume:";
    cin>>aux;
    nume = aux;
    cout<<"Prenume:";
    cin>>aux;
    prenume = aux;
    cout<<"Data angajarii:";
    cin>>data_angajarii;
    cout<<"Data nasterii:";
    cin>>data_nasterii;   
}

int Mecanic::getID()
{
    return ID;
}