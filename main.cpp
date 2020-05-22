#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>
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
void StvoriOsobu()
{
    system("cls");
    string ime,prezime;
    int godine;
    cout<<"Unesi ime Osobe:";
    cin>>ime;
    cout<<"Unesi prezime Osobe:";
    cin>>prezime;
    cout<<"Unesi godine Osobe:";
    cin>>godine;
    Osoba Osoba1(ime,prezime,godine);
    cout<<"Stvorena je osoba,predstavi se:";
    Osoba1.predstaviSe();
}
void StvoriUcenika()
{
    system("cls");
    string ime,prezime;
    int godine;
    cout<<"Unesi ime Ucenika:";
    cin>>ime;
    cout<<"Unesi prezime Ucenika:";
    cin>>prezime;
    cout<<"Unesi godine Ucenika:";
    cin>>godine;
    Ucenik Ucenik1(ime,prezime,godine);
    cout<<"Stvoren je ucenik,predstavi se:";
    Ucenik1.predstaviSe();
}
void StvoriProfesora()
{
    system("cls");
    string ime,prezime,predmet;
    int godine,godinestaza;
    cout<<"Unesi ime Profesora:";
    cin>>ime;
    cout<<"Unesi prezime Profesora:";
    cin>>prezime;
    cout<<"Unesi godine Profesora:";
    cin>>godine;
    cout<<"Unesi godine staza Profesora:";
    cin>>godinestaza;
    cout<<"Unesi predmet koji predaje Profesor:";
    cin>>predmet;
    Profesor Profesor1(godinestaza,ime,prezime,godine,predmet);
    cout<<"Stvoren je profesor,predstavi se:";
    Profesor1.predstaviSe();
}
void StvoriIzostanak()
{
    system("cls");
    string datum,razlog;
    int tip;
    cout<<"Unesi datum Izostanka:";
    cin>>datum;
    cout<<"Unesi tip Izostanka(opravdan-1,neopravdan-0):";
    cin>>tip;
    cout<<"Unesi razlog Izostanka:";
    cin>>razlog;
    Izostanak Izostanak1(datum,tip,razlog);
    cout<<"Stvoren je izostanak,ispisi ga:";
    Izostanak1.PrikaziIzostanak();
}
void StvoriOcenu()
{
    system("cls");
    string datum;
    int vrednost;
    cout<<"Unesi datum Ocene:";
    cin>>datum;
    cout<<"Unesi vrednost Ocene(Od 1 do 5):";
    cin>>vrednost;
    Ocena Ocena1(datum,vrednost);
    cout<<"Stvorena je ocena,ispisi je:";
    Ocena1.prikaziOcenu();
}
void StvoriProveruZnanja()
{
    system("cls");
            string predmet,vrstaprovere,datum;
            int vrednost;
            cout<<"Unesi datum Provere znanja:";
            cin>>datum;
            cout<<"Unesi vrednost Provere znanja(Od 1 do 5):";
            cin>>vrednost;
            cout<<"Unesi predmet za Proveru znanja:";
            cin>>predmet;
            cout<<"Unesi vrstu Provere znanja:";
            cin>>vrstaprovere;
            ProveraZnanja ProveraZnanja1(predmet,vrstaprovere,datum,vrednost);
            cout<<"Stvorena je provera znanja,ispisi je:";
            ProveraZnanja1.ispisiProveruZnanja();
}
void StvoriPredmet()
{
    system("cls");
            string naziv;
            cout<<"Unesi naziv Predmeta:";
            cin>>naziv;
            Predmet Predmet1(naziv);
            cout<<"Stvoren je predmet,ispisi ga:";
            cout<<naziv;
}
void StvoriRazred()
{
    system("cls");
            string imerazreda;
            cout<<"Unesi ime Razreda:";
            cin>>imerazreda;
            Razred Razred1(imerazreda);
            cout<<"Stvoren je razred,prikazi ga:";
            cout<<imerazreda;
}

int main()
{
    /*IspisiFajl("Fajl.txt");
    Osoba o1("David","Tot",16);
    Izostanak izz1("16.10.2020.",0,"pobegao");
    Ocena oc1("26.4.2020",5);
    ProveraZnanja proz1("Matematika","pismeni zadatak",oc1.getDatum(),oc1.getVrednost());
    o1.predstaviSe();
    izz1.PrikaziIzostanak();
    proz1.ispisiProveruZnanja();
    oc1.prikaziOcenu();
    cout<<endl<<endl;
    cout<<o1;
    cout<<izz1;
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
    Izostanak iz1("16.5.2020",0,"Pobegao");
    Izostanak iz2("12.3.2020",1,"Slavio slavu");
    Izostanak iz3("16.5.2020",0,"Zakasnio");
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

    uc1.dodajIzostanak(iz1);
    uc1.dodajIzostanak(iz2);
    uc1.dodajIzostanak(iz3);

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

    cout<<endl<<endl<<endl<<endl;
    */
    int uslov=1,x;
    do
    {
        system("cls");
        cout<<"**********MENI**********"<<endl;
        cout<<"Unesi 1 za stvaranje osobe"<<endl;
        cout<<"Unesi 2 za stvaranje ucenika"<<endl;
        cout<<"Unesi 3 za stvaranje profesora"<<endl;
        cout<<"Unesi 4 za stvaranje izostanka"<<endl;
        cout<<"Unesi 5 za stvaranje ocene"<<endl;
        cout<<"Unesi 6 za stvaranje provere znanja"<<endl;
        cout<<"Unesi 7 za stvaranje predmeta"<<endl;
        cout<<"Unesi 8 za stvaranje razred"<<endl;
        cout<<"Unesi 9 za dodavanje ucenika u razred"<<endl;
        cout<<"Unesi 10 za ispis ucenika razreda"<<endl;
        cout<<"Za izlazak unesi 0"<<endl;
        cin>>x;
        if(x==0)
        {
            cout<<"**********IZLAZAK IZ PROGRAMA**********";
            uslov=0;
        }
        if(x==1)
        {
            StvoriOsobu();
        }
        if(x==2)
        {
            StvoriUcenika();
        }
        if(x==3)
        {
            StvoriProfesora();
        }
        if(x==4)
        {
            StvoriIzostanak();
        }
        if(x==5)
        {
            StvoriOcenu();
        }
        if(x==6)
        {
            StvoriProveruZnanja();
        }
        if(x==7)
        {
            StvoriPredmet();
        }
        if(x==8)
        {
            StvoriRazred();
        }
        if(x==9)
        {
            system("cls");
            cout<<"Unesi ucenika kojeg zelis da upises u razred:";
            //cin>>Ucenik1;
            Ucenik Ucenik1("Marko","Markovic",17);
            Razred Razred1("2-6");
            Razred1.DodajUcenika(Ucenik1);
            cout<<"Ucenik ";
            Ucenik1.predstaviSe();
            cout<<" je upisan u 2-6";
        }
        if(x==10)
        {
            system("cls");
            cout<<"Unesi razred:";
            //cin>>Razred1;
            Razred Razred1("2-6");
            Razred1.IspisRazreda(Razred1);
        }



        Sleep(5000);
    }
    while(uslov!=0);
    return 0;
}

