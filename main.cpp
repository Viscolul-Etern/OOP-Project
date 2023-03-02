#include "Asistent.h"
#include "Mecanic.h"
#include "Director.h"
#include "Camion.h"
#include "Autobuz.h"
#include "Standard.h"
#include <vector>
#include <stdlib.h>
#include "functii_externe.h"

int Angajat::index = 0;

int main()
{
    vector <Angajat*> v;
    int n, m;

    cout<<"Alegeti o actiune asupra angajatilor:"<<endl<<"1.Adaugare angajati"<<endl;
    cout<<"2.Afisare angajati"<<endl<<"3.Stergere angajat"<<endl<<"4.Editare angajat"<<endl<<"5.Calculare salariu";
    cout<<endl<<"6.Nu mai vriau nimic"<<endl;
    cin>>m;
  while(m != 6)
  {
    if(m == 1)
    {
    cout<<"Doriti sa introduceti angajati?"<<endl<<"1.Da"<<endl<<"2.Nu"<<endl;
    cin>>n;
    
    while(n == 1)
    {
      adaugare_angajat(v);
      cout<<"Mai introduceti?"<<endl<<"1.Da"<<endl<<"2.Nu"<<endl;
      cin>>n;
    }
    }
    if(m == 2)
    {
    for(int i = 0; i < v.size(); i++)
          v[i]->afisare();
    }
  
  if(m == 3)
  {
    cout<<"Datele carui angajat vreti sa le stergeti(dupa ID)?"<<endl<<"ID:";
    int id;
    cin>>id;
    if(id != v[id-1]->getID())
    {
      cout<<"Nu exista";
    }
    else{
      stergere_angajat(v, id);
    }
  }

  if(m == 4)
  {
    cout<<"Datele carui angajat vreti sa le editati(dupa ID)?"<<endl<<"ID:";
    int id;
    cin>>id;
    if(id != v[id-1]->getID())
    {
      cout<<"Nu exista";
    }
    else{
      v[id-1]->editare_angajat();
    }
  }
  
  if(m == 5)
  {
    cout<<"Salariul carui angajat vreti sa il aflati(dupa ID)?"<<endl<<"ID:";
    int id;
    cin>>id;
    if(id != v[id-1]->getID())
    {
      cout<<"Nu exista";
    }
    else{
      cout<<"Salariu: "<<v[id-1]->salariu()<<endl;
    }
  }

  cout<<"Alegeti o actiune asupra angajatilor:"<<endl<<"1.Adaugare angajati"<<endl;
  cout<<"2.Afisare angajati"<<endl<<"3.Stergere angajat"<<endl<<"4.Editare angajat"<<endl<<"5.Calculare salariu";
  cout<<endl<<"6.Nu mai vriau nimic"<<endl;

    cin>>m;
  }

  system("cls");

  Standard ma(1, 200001, true, 2002, "Manuala");

  cout<<ma.polita_basic();
  cout<<endl;
  cout<<ma.polita_discout();

  Autobuz a(1, 2000001, true, 2002, 64);

  cout<<endl<<a.polita_basic()<<endl<<a.polita_discout();

  Camion c(1, 800001, true, 2002, 30);

  cout<<endl<<c.polita_basic()<<endl<<c.polita_discout();
      
    return 0;
}