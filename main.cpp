#include <iostream>
#include <fstream>

using namespace std;
#include"osoba.hpp"
#include"ucenik.hpp"
#include"profesor.hpp"
#include"direktor.hpp"
#include"ocena.hpp"
#include"izostanci.hpp"
#include"razred.hpp"
#include"razredni.hpp"
#include"predmet.hpp"
#include"smer.hpp"
#include"proveraznanja.hpp"
#include"Fajl.txt"
void IspisiFajl(string nazivFajla)
{
    string linija;
    ifstream fajl(nazivFajla);
    if(fajl.is_open())
    {
        while(getline(fajl,linija))
        {
            cout<<linija<<'\n';
        }
        fajl.close();
    }
    else
    {
        cout<<"Neuspesno otvaranje fajla.";
    }
}

int main()
{
    IspisiFajl(Fajl);





    Osoba o1("David","Tot",16);
    Izostanak i1("16.10.2020.",0,"pobegao");
    Ocena oc1("26.4.2020",5);
    ProveraZnanja pz1("pismeni zadatak",oc1.getDatum(),oc1.getVrednost());
    o1.predstaviSe();
    i1.PrikaziIzostanak();
    oc1.prikaziOcenu();
    cout<<endl<<endl;
    pz1.ispisiProveruZnanja();


    //metode:
    //profesor postaje razredni
    //Upisi ucenika u razred
    //Oceni,zakazi test
    //Ispisi ocene,izostanke
    //Funkcionalnost:
    //Stvaranje zakljucne ocene na osnovu svih ocena i izostanaka
    return 0;
}
