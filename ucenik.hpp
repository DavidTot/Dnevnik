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
    vector<ProveraZnanja> ProvereZnanja;
    vector<Predmet> Predmeti;
    static int BrojUcenika;//U celoj skoli
public:
    Ucenik(string i,string pr,int god):Osoba(i,pr,god)
    {

    }
    void ZakaziProveruUc(ProveraZnanja pz1)
    {
        ProvereZnanja.push_back(pz1);
    }
    void DodajPredmet(Predmet pr1)
    {
        Predmeti.push_back(pr1);
    }
    double ProsecnaOcenaIz(Predmet pr)
    {
        double zbir=0;
        unsigned long long int i,broj;
        for(i=0; i<ProvereZnanja.size(); i++,broj++)
        {
            if ((ProvereZnanja.at(i)).getNazivPredmeta()==pr.getNaziv())
            {
                zbir=ProvereZnanja.at(i).getVrednost()+zbir;
            }
        }
        return zbir/broj;
    }

    /*int OcenaIzVladanja()
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
    }*/
    void predstaviSe()
    {
        Osoba::predstaviSe();
        cout<<"I ja sam UCENIK"<<endl<<endl;
    }
    double Funkcionalnost(Ucenik uc1)
    {
        unsigned long long int i;
        int zbir=0,ocena,broj;
        double oc;
        for(i=0;i<Predmeti.size();i++,broj++)
        {
            oc=uc1.ProsecnaOcenaIz(Predmeti[i]);
            ocena=round(oc);
            zbir=zbir+ocena;
        }
        //int vladanje=uc1.OcenaIzVladanja();
        //double prosecna=zbir+vladanje/(broj+1);
        double prosecna=zbir/broj;
        cout<<"Ucenik ima prosek: "<<prosecna<<endl;
        ofstream Fajl2;
        Fajl2.open("Fajl2.txt");
        Fajl2<<"Prosek ucenika je:"<<prosecna;
        Fajl2.close();
        return prosecna;
    }

};
int Ucenik::BrojUcenika=0;


#endif // UCENIK_HPP_INCLUDED

