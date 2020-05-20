#include <iostream>
#include <fstream>
#include <vector>
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
    IspisiFajl("Fajl.txt");
    Osoba o1("David","Tot",16);
    Izostanak iz1("16.10.2020.",0,"pobegao");
    Ocena oc1("26.4.2020",5);
    ProveraZnanja proz1("pismeni zadatak",oc1.getDatum(),oc1.getVrednost());
    o1.predstaviSe();
    iz1.PrikaziIzostanak();
    proz1.ispisiProveruZnanja();
    oc1.prikaziOcenu();
    cout<<endl<<endl;
    cout<<o1;
    cout<<iz1;
    cout<<oc1;
    Profesor prof1(2,"Davor","Kumozec",27,"Diskretna Matematika");
    prof1.predstaviSe();
    Ucenik uc1("David","Tot",16);
    uc1.predstaviSe();
    Ucenik uc2("Marko","Markovic",16);
    Ucenik uc3("Milos","Milosevic",16);


    Razred rz1("2-6");
    rz1.DodajUcenika(uc1);
    rz1.DodajUcenika(uc2);
    rz1.DodajUcenika(uc3);
    rz1.IspisRazreda(rz1);

    Predmet pr1("Programiranje");
    Predmet pr2("Matematika");
    Predmet pr3("Srpski");
    ProveraZnanja pz1("Kontrolni","12.3.2020",5);
    ProveraZnanja pz2("Odgovaranje","17.2.2020",4);
    ProveraZnanja pz3("Aktivnost","16.5.2020",5);

    pr1.ZakaziProveruPr(pz1);
    pr1.ZakaziProveruPr(pz2);
    pr1.ZakaziProveruPr(pz3);

    uc1.ZakaziProveruUc(pz1);//Dodavanje za ucenika?
    uc1.ZakaziProveruUc(pz2);
    uc1.ZakaziProveruUc(pz3);
    double ocena;
    ocena=uc1.ProsecnaOcenaIz(pr1);
    cout<<ocena;

    //metode:
    //profesor postaje razredni
    //Upisi ucenika u razred
    //Oceni,zakazi test
    //Ispisi ocene,izostanke
    //Funkcionalnost:
    //Stvaranje zakljucne ocene na osnovu svih ocena i izostanaka
    return 0;
}

