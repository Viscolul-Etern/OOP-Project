#include <iostream>
#include <string>

using namespace std;

class Data{

    int zi, luna, an;

    public:
    Data()
    {
        zi = 1;
        luna = 1;
        an = 1;
    }
    
    Data(int zi, int luna, int an)
    {
        this->zi = zi;
        this->an = an;
        this->luna = luna;
    }

    friend ostream & operator <<( ostream &dev, const Data &d)
    {
        dev<<d.zi<<"."<<d.luna<<"."<<d.an<<endl;
        return dev;
    } 

    friend istream & operator >>(istream &dev, Data &d)
    {
        dev>>d.zi;
        dev>>d.luna;
        dev>>d.an;

        return dev;
    }

    int getAn()
    {
        return an;
    }

    int getLuna()
    {
        return luna;
    }

    int getZi()
    {
        return zi;
    }
};