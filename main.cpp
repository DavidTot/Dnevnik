#include <iostream>

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

int main()
{
    Osoba o1("David","Tot",16);
    Izostanci i1("16.10.2020.",0,"pobegao");
    Ocena oc1("26.4.2020",5);
    ProveraZnanja pz1("pismeni zadatak",oc1.datum,oc1.vrednost);
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
