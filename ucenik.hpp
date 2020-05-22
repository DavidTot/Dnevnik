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
    void dodajIzostanak(Izostanak iz1)
    {
        Izostanci.push_back(iz1);
    }
    double ProsecnaOcenaIz(Predmet pr)
    {
        double zbir=0;
        unsigned long long int i,broj=0;
        //cout<<"Pre fora: zbir="<<zbir<<endl;
        for(i=0; i<ProvereZnanja.size(); i++)
        {
            //cout<<"Pre ifa: zbir="<<zbir<<endl;
            if ((ProvereZnanja.at(i)).getNazivPredmeta()==pr.getNaziv())
            {
                //cout<<"U ifu1: zbir="<<zbir<<endl;
                zbir=ProvereZnanja.at(i).getVrednost()+zbir;
                broj++;
                //cout<<"U ifu2: zbir="<<zbir<<endl;
            }
            //cout<<"Posle ifa: zbir="<<zbir<<endl;
        }
        //cout<<"Pre returna: zbir="<<zbir<<endl;
        cout<<"Prosecna ocena iz "<<pr.getNaziv()<<" je "<<zbir/broj<<endl;
        return zbir/broj;
    }
    void predstaviSe()
    {
        Osoba::predstaviSe();
        cout<<"I ja sam UCENIK"<<endl<<endl;
    }
    int OcenaIzVladanja()
    {
        int ocena;
        int ni=0;//neopravdani izostanci
        unsigned long long int i;
        for(i=0;i<Izostanci.size();i++)
        {
            if(Izostanci.at(i).getTip()==0)
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
    double Funkcionalnost(Ucenik uc1)
    {
        unsigned long long int i;
        int ocena,broj=0;
        double oc,zbir=0;
        for(i=0;i<Predmeti.size();i++,broj++)
        {
            oc=uc1.ProsecnaOcenaIz(Predmeti[i]);
            ocena=round(oc);
            zbir=zbir+ocena;
        }
        int vladanje=uc1.OcenaIzVladanja();
        cout<<"Prosecna ocena iz Vladanja je "<<vladanje<<endl;
        cout<<"PROSEK UCENIKA JE: "<<(zbir+vladanje)/(broj+1);
        double prosecna=(zbir+vladanje)/(broj+1);
        int zaokruzeno=round(prosecna);
        if(zaokruzeno==1){cout<<"-NEDOVOLJAN"<<endl;}
        if(zaokruzeno==2){cout<<"-DOVOLJAN"<<endl;}
        if(zaokruzeno==3){cout<<"-DOBAR"<<endl;}
        if(zaokruzeno==4){cout<<"-VRLO DOBAR"<<endl;}
        if(zaokruzeno==5){cout<<"-ODLICAN"<<endl;}
        ofstream Fajl2;
        Fajl2.open("Fajl2.txt");
        Fajl2<<"Prosek ucenika je:"<<prosecna;
        if(zaokruzeno==1){Fajl2<<"-NEDOVOLJAN"<<endl;}
        if(zaokruzeno==2){Fajl2<<"-DOVOLJAN"<<endl;}
        if(zaokruzeno==3){Fajl2<<"-DOBAR"<<endl;}
        if(zaokruzeno==4){Fajl2<<"-VRLO DOBAR"<<endl;}
        if(zaokruzeno==5){Fajl2<<"-ODLICAN"<<endl;}
        Fajl2.close();
        return prosecna;
    }


};
int Ucenik::BrojUcenika=0;


#endif // UCENIK_HPP_INCLUDED

