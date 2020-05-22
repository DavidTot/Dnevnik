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
    ProveraZnanja proz1("Matematika","pismeni zadatak",oc1.getDatum(),oc1.getVrednost());
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
    ProveraZnanja pz1("Programiranje","Kontrolni","12.3.2020",4);
    ProveraZnanja pz2("Programiranje","Odgovaranje","17.2.2020",4);
    ProveraZnanja pz3("Programiranje","Aktivnost","16.5.2020",5);
    ProveraZnanja pz4("Matematika","Kontrolni","12.3.2020",3);
    ProveraZnanja pz5("Matematika","Odgovaranje","17.2.2020",5);
    ProveraZnanja pz6("Matematika","Aktivnost","16.5.2020",5);
    ProveraZnanja pz7("Srpski","Kontrolni","12.3.2020",3);
    ProveraZnanja pz8("Srpski","Odgovaranje","17.2.2020",4);
    ProveraZnanja pz9("Srpski","Aktivnost","16.5.2020",1);

    uc1.DodajPredmet(pr1);
    uc1.DodajPredmet(pr2);
    uc1.DodajPredmet(pr3);

    uc1.ZakaziProveruUc(pz1);
    uc1.ZakaziProveruUc(pz2);
    uc1.ZakaziProveruUc(pz3);
    uc1.ZakaziProveruUc(pz4);
    uc1.ZakaziProveruUc(pz5);
    uc1.ZakaziProveruUc(pz6);
    uc1.ZakaziProveruUc(pz7);
    uc1.ZakaziProveruUc(pz8);
    uc1.ZakaziProveruUc(pz9);

    double ocena1,ocena2,ocena3,prosek;
    //ocena1=uc1.ProsecnaOcenaIz(pr1);
    //ocena2=uc1.ProsecnaOcenaIz(pr2);
    //ocena3=uc1.ProsecnaOcenaIz(pr3);
    prosek=uc1.Funkcionalnost(uc1);
    //metode:
    //profesor postaje razredni
    //Upisi ucenika u razred
    //Oceni,zakazi test
    //Ispisi ocene,izostanke
    //Funkcionalnost:
    //Stvaranje zakljucne ocene na osnovu svih ocena i izostanaka
    return 0;
}

