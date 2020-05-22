#ifndef OCENA_HPP_INCLUDED
#define OCENA_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>

class Ocena
{
protected:
    string datum;
    int vrednost;//od 1 do 5
public:
    Ocena()
    {
        datum="16.10.2020.";
        vrednost=5;
    }
    Ocena(string d,int v)
    {
        datum=d;
        vrednost=v;
    }
    string getDatum()const
    {
        return datum;
    }
    int getVrednost()const
    {
        return vrednost;
    }
    void setDatum(string d)
    {
        datum=d;
    }
    void setVrednost(int v)
    {
        vrednost=v;
    }
    void prikaziOcenu()
    {
        if(vrednost<1 || vrednost>5)
            cout<<"Greska"<<endl;
        else
            cout<<"Ocena "<<vrednost<<" "<<datum<<" "<<endl;
    }
    friend ostream& operator<<(ostream& izlaz,const Ocena& oc)
    {
        izlaz<<"Ispis Ocene:"<<endl;
        izlaz<<"Datum: "<<oc.datum<<endl;
        izlaz<<"Vrednost: "<<oc.vrednost<<endl<<endl;
        return izlaz;
    }
};

#endif // OCENA_HPP_INCLUDED
