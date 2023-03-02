#pragma once
#include <iostream>
#include <vector>
#include "Asistent.h"
#include "Mecanic.h"
#include "Director.h"

void stergere_angajat(vector <Angajat*> &v, int id)
{
  v.erase(v.begin() + id - 1);
}

void adaugare_angajat(vector<Angajat*>& v)
{
    int n , k = 0;   
    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout<<"Ce tip de angajat?"<<endl<<"1.Director"<<endl<<"2.Mecanic"<<endl<<"3.Asistent"<<endl<<endl;
    cin>>n;
     string aux1, aux2;
    cout<<"Nume:";
    cin>>aux1;

    while(aux1.size() > 29 || aux1.empty())
    {
      cout<<"Nume invalid, reintroduceti."<<endl<<"Nume:";
      cin>>aux1;
    }

    cout<<endl<<"Prenume:";
    cin>>aux2;

    while(aux2.size() > 29 || aux2.empty())
    {
      cout<<"Prenume invalid, reintroduceti."<<endl<<"Prenume:";
      cin>>aux2;
    }

    cout<<endl;

    Data d1,d2;
    cout<<"Data nasterii:";
    cin>>d1;

    if(1900 + ltm->tm_year - d1.getAn() < 18)
    {
      cout<<"Nu are 18 ani!"<<endl;
      k = 1;
    }
    if(1900 + ltm->tm_year - d1.getAn() == 18)
      if(1 + ltm->tm_mon < d1.getLuna())
      {
        cout<<"Nu are 18 ani!"<<endl;
        k = 1;
      }
      else if(1 + ltm->tm_mon == d1.getLuna())
        if(ltm->tm_mday < d1.getZi())
        {
          cout<<"Nu are 18 ani"<<endl;
          k = 1;
        }
  if(k == 0)
  {
    cout<<"Data angajarii:";
    cin>>d2;

    if(1900 + ltm->tm_year < d2.getAn())
    {
      cout<<"Data din viitor"<<endl;
      k = 1;
    }
    if(1900 + ltm->tm_year == d2.getAn())
    {
      if(1 + ltm->tm_mon < d2.getLuna())
      {
        cout<<"Data din viitor"<<endl;
        k = 1;
      }
      else if(1 + ltm->tm_mon == d2.getLuna())
          if(ltm->tm_mday < d2.getZi())
          {
             cout<<"Data din viitor"<<endl;
             k = 1;
          }
    }
    if(k == 1) cout<<"Probleme la date!";
    }

    if(n == 1)
      v.push_back(new Director(aux1, aux2, d1, d2));
    
    if(n == 2)
      v.push_back(new Mecanic(aux1, aux2, d1, d2));

    if(n == 3)
      v.push_back(new Asistent(aux1, aux2, d1, d2));
  
}