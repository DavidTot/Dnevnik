#ifndef UCENIK_HPP_INCLUDED
#define UCENIK_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>
#include <math.h>
#include <ctgmath>

#include"osoba.hpp"
#include"izostanci.hpp"
#include"proveraznanja.hpp"
#include"predmet.hpp"

class Ucenik:public Osoba
{
protected:
    vector<Izostanak> Izostanci;
    vector<Predmet> Predmeti;
    static int BrojUcenika;//U celoj skoli
public:
    Ucenik(string i,string pr,int god):Osoba(i,pr,god)
    {

    }
    double ProsecnaOcenaIz(Predmet pr)
    {
        double zbir=0;
        unsigned long long int i;
        for(i=0; i<Predmeti.size(); i++)
        {
            zbir=pr.getVrednost(i)+zbir;
        }
        return zbir/i;
    }
    int OcenaIzVladanja()
    {
        int ocena;
        int ni=0;//neopravdani izostanci
        unsigned long long int i;
        for(i=0;i<Izostanci.size();i++)
        {
            if(Izostanci[i].getTip()==0)
            {
                ni=ni+1;
            }
        }
        if(ni>=20){return ocena=1;}
        if(ni>=15){return ocena=2;}
        if(ni>=10){return ocena=3;}
        if(ni>=5){return ocena=4;}
        return ocena=5;
    }
    void predstaviSe()
    {
        Osoba::predstaviSe();
        cout<<"I ja sam UCENIK"<<endl<<endl;
    }
    double Funkcionalnost(Ucenik uc1)
    {
        unsigned long long int i;
        int zbir=0,ocena;
        double oc;
        for(i=0;i<Predmeti.size();i++)
        {
            oc=uc1.ProsecnaOcenaIz(Predmeti[i]);
            ocena=round(oc);
            zbir=zbir+ocena;
        }
        int vladanje=uc1.OcenaIzVladanja();
        double prosecna=zbir+vladanje/(Predmeti.size()+1);
        cout<<"Ucenik "<<" ima prosek: "<<prosecna<<endl;
        return prosecna;
    }

};
int Ucenik::BrojUcenika=0;


#endif // UCENIK_HPP_INCLUDED
