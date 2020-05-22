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
Osoba StvoriOsobu()
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
    return Osoba1;
}
Ucenik StvoriUcenika()
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
    return Ucenik1;
}
Profesor StvoriProfesora()
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
    return Profesor1;
}
Izostanak StvoriIzostanak()
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
    return Izostanak1;
}
Ocena StvoriOcenu()
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
    return Ocena1;
}
ProveraZnanja StvoriProveruZnanja()
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
    return ProveraZnanja1;
}
Predmet StvoriPredmet()
{
    system("cls");
    string naziv;
    cout<<"Unesi naziv Predmeta:";
    cin>>naziv;
    Predmet Predmet1(naziv);
    cout<<"Stvoren je predmet,ispisi ga:";
    cout<<naziv;
    return Predmet1;
}
Razred StvoriRazred()
{
    system("cls");
    string imerazreda;
    cout<<"Unesi ime Razreda:";
    cin>>imerazreda;
    Razred Razred1(imerazreda);
    cout<<"Stvoren je razred,prikazi ga:";
    cout<<imerazreda;
    return Razred1;
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
    vector<Osoba> Osobe1;
    vector<Ucenik> Ucenici1;
    vector<Profesor> Profesori1;
    vector<Izostanak> Izostanci1;
    vector<Ocena> Ocene1;
    vector<ProveraZnanja> ProvereZnanja1;
    vector<Predmet> Predmeti1;
    vector<Razred> Razredi1;
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
        cout<<"Unesi 8 za stvaranje razreda"<<endl;
        cout<<"Unesi 9 za dodavanje ucenika u razred"<<endl;
        cout<<"Unesi 10 za ispis ucenika razreda"<<endl;
        cout<<"Unesi 11 za pretragu ucenika u razredu"<<endl;
        cout<<"Unesi 12 za zakazivanje provere znanja uceniku"<<endl;
        cout<<"Unesi 13 za dodavanje izostanka uceniku"<<endl;
        cout<<"Unesi 14 za dodavanje predmeta uceniku"<<endl;
        cout<<"Unesi 15 za izracunavanje ocene iz predmeta"<<endl;
        cout<<"Unesi 16 za izracunavanje ocene iz vladanja"<<endl;
        cout<<"Unesi 17 za izracunavanje proseka ucenika"<<endl;
        cout<<"Unesi 18 za ispis svih osoba"<<endl;
        cout<<"Unesi 19 za ispis svih ucenika"<<endl;
        cout<<"Unesi 20 za ispis svih profesora"<<endl;
        cout<<"Unesi 21 za ispis svih izostanaka"<<endl;
        cout<<"Unesi 22 za ispis svih ocena"<<endl;
        cout<<"Unesi 23 za ispis svih provera znanja"<<endl;
        cout<<"Unesi 24 za ispis svih predmeta"<<endl;
        cout<<"Unesi 25 za ispis svih razreda"<<endl;
        cout<<"Unesi 26 za ispis svih objekata"<<endl;
        cout<<"Za izlazak unesi 0"<<endl;
        cin>>x;


        if(x==0)
        {
            cout<<"**********IZLAZAK IZ PROGRAMA**********";
            uslov=0;
        }
        if(x==1)
        {
            int brojO;
            cout<<"Koliko osoba zelite da stvorite:";
            cin>>brojO;
            for(int i=0; i<brojO; i++)
            {
                Osobe1.push_back(StvoriOsobu());
                Sleep(3000);
            }
        }
        if(x==2)
        {
            int brojU;
            cout<<"Koliko ucenika zelite da stvorite:";
            cin>>brojU;
            for(int i=0; i<brojU; i++)
            {
                Ucenici1.push_back(StvoriUcenika());
                Sleep(3000);
            }

        }
        if(x==3)
        {
            int brojP;
            cout<<"Koliko profesora zelite da stvorite:";
            cin>>brojP;
            for(int i=0; i<brojP; i++)
            {
                Profesori1.push_back(StvoriProfesora());
                Sleep(3000);
            }
        }
        if(x==4)
        {
            int brojI;
            cout<<"Koliko izostnaka zelite da stvorite:";
            cin>>brojI;
            for(int i=0; i<brojI; i++)
            {
                Izostanci1.push_back(StvoriIzostanak());
                Sleep(3000);
            }
        }
        if(x==5)
        {
            int brojO;
            cout<<"Koliko ocena zelite da stvorite:";
            cin>>brojO;
            for(int i=0; i<brojO; i++)
            {
                Ocene1.push_back(StvoriOcenu());
                Sleep(3000);
            }
        }
        if(x==6)
        {
            int brojPz;
            cout<<"Koliko provera znanja zelite da stvorite:";
            cin>>brojPz;
            for(int i=0; i<brojPz; i++)
            {
                ProvereZnanja1.push_back(StvoriProveruZnanja());
                Sleep(3000);
            }
        }
        if(x==7)
        {
            int brojPr;

            cout<<"Koliko predmeta zelite da stvorite:";
            cin>>brojPr;
            for(int i=0; i<brojPr; i++)
            {
                Predmeti1.push_back(StvoriPredmet());
                Sleep(3000);
            }
        }
        if(x==8)
        {
            int brojR;
            cout<<"Koliko razreda zelite da stvorite:";
            cin>>brojR;
            for(int i=0; i<brojR; i++)
            {
                Razredi1.push_back(StvoriRazred());
                Sleep(3000);
            }
        }
        if(x==9)
        {
            system("cls");
            string ime,prezime,imeR;
            cout<<"Unesi ime i prezime ucenika kojeg zelis da dodas:"<<endl;
            cout<<"Ime:";
            cin>>ime;
            cout<<"Prezime";
            cin>>prezime;
            cout<<"Unesi ime razreda:";
            cin>>imeR;
            Ucenik uc("d","d",1);
            for(int i=0; i<Ucenici1.size(); i++)
            {
                if(Ucenici1.at(i).getIme()==ime)
                {
                    uc=Ucenici1.at(i);
                }
            }
            for(int j=0; j<Razredi1.size(); j++)
            {
                if(Razredi1.at(j).getIme()==imeR)
                {
                    Razredi1.at(j).DodajUcenika(uc);
                }
            }
        }
        if(x==10)
        {
            system("cls");
            string imeR;
            cout<<"Unesi ime razreda:";
            cin>>imeR;
            Razred rz("a");
            for(int i=0; i<Razredi1.size(); i++)
            {
                if(Razredi1.at(i).getIme()==imeR)
                {
                    rz=Razredi1.at(i);
                }
            }
            rz.IspisRazreda(rz);
        }
        if(x==11)
        {
            system("cls");
            string imeR,ime;
            cout<<"Unesi ime razreda:";
            cin>>imeR;
            cout<<"Unesi ime ucenika:";
            cin>>ime;
            Razred rz("s");
            Ucenik uc("i","p",1);
            for(int i=0; i<Razredi1.size(); i++)
            {
                if(Razredi1.at(i).getIme()==imeR)
                {
                    rz=Razredi1.at(i);
                }
            }
            for(int i=0; i<Ucenici1.size(); i++)
            {
                if(Ucenici1.at(i).getIme()==ime)
                {
                    uc=Ucenici1.at(i);
                }
            }
            rz.DaLiIdeURazred(uc);

        }
        if(x==12)
        {
            system("cls");
            string ime,datum;
            cout<<"Unesi ucenika:";
            cin>>ime;
            cout<<"Unesi datum provere znanja:";
            cin>>datum;
            ProveraZnanja pz("m","m","m",1);
            for(int i=0; i<ProvereZnanja1.size(); i++)
            {
                if(ProvereZnanja1.at(i).getDatum()==datum)
                {
                    pz=ProvereZnanja1.at(i);
                }
            }
            for(int j=0; j<Ucenici1.size(); j++)
            {
                if(Ucenici1.at(j).getIme()==ime)
                {
                    Ucenici1.at(j).ZakaziProveruUc(pz);
                }
            }

        }
        if(x==13)
        {
            system("cls");
            string ime,datum;
            cout<<"Unesi ucenika:";
            cin>>ime;
            cout<<"Unesi datum izostanka:";
            cin>>datum;
            Izostanak iz("m",1,"m");
            for(int i=0; i<Izostanci1.size(); i++)
            {
                if(Izostanci1.at(i).getDatum()==datum)
                {
                    iz=Izostanci1.at(i);
                }
            }
            for(int j=0; j<Ucenici1.size(); j++)
            {
                if(Ucenici1.at(j).getIme()==ime)
                {
                    Ucenici1.at(j).dodajIzostanak(iz);
                }
            }

        }
        if(x==14)
        {
            system("cls");
            string ime,naziv;
            cout<<"Unesi ucenika:";
            cin>>ime;
            cout<<"Unesi naziv predmeta:";
            cin>>naziv;
            Predmet pr("a");
            for(int i=0; i<Predmeti1.size(); i++)
            {
                if(Predmeti1.at(i).getNaziv()==naziv)
                {
                    pr=Predmeti1.at(i);
                }
            }
            for(int j=0; j<Ucenici1.size(); j++)
            {
                if(Ucenici1.at(j).getIme()==ime)
                {
                    Ucenici1.at(j).DodajPredmet(pr);
                }
            }

        }
        if(x==15)
        {
            system("cls");
            string naziv,ime;
            cout<<"Unesi naziv predmeta:";
            cin>>naziv;
            cout<<"Unesi ime ucenika:";
            cin>>ime;
            double prosecna;
            Ucenik uc("d","d",1);
            for(int i=0; i<Ucenici1.size(); i++)
            {
                if(Ucenici1.at(i).getIme()==ime)
                {
                    uc=Ucenici1.at(i);
                }
            }
            for(int j=0; j<Predmeti1.size(); j++)
            {
                if(Predmeti1.at(j).getNaziv()==naziv)
                {

                    prosecna=uc.ProsecnaOcenaIz(Predmeti1.at(j));
                }
            }
            cout<<"Prosek ucenika iz "<<naziv<<" je "<<prosecna;
        }
        if(x==16)
        {
            system("cls");
            string ime;
            cout<<"Unesi ime ucenika:";
            cin>>ime;
            int prosecna;
            Ucenik uc("d","d",1);
            for(int i=0; i<Ucenici1.size(); i++)
            {
                if(Ucenici1.at(i).getIme()==ime)
                {
                    uc=Ucenici1.at(i);
                }
            }
            prosecna=uc.OcenaIzVladanja();
            cout<<"Ocena iz vladanja je "<<prosecna;
        }
        if(x==17)
        {
            system("cls");
            string ime;
            cout<<"Unesi ime ucenika:";
            cin>>ime;
            int prosecna;
            Ucenik uc("d","d",1);
            for(int i=0; i<Ucenici1.size(); i++)
            {
                if(Ucenici1.at(i).getIme()==ime)
                {
                    uc=Ucenici1.at(i);
                }
            }
            prosecna=uc.Funkcionalnost(uc);
            cout<<"Zakljucna ocena ucenika je "<<prosecna;

        }
        if(x==18)
        {
            system("cls");
            cout<<"OSOBE:"<<endl;
            for(int i=0; i<Osobe1.size(); i++)
            {
                Osobe1.at(i).predstaviSe();
            }
        }
        if(x==19)
        {
            system("cls");
            cout<<"UCENICI:"<<endl;
            for(int i=0; i<Ucenici1.size(); i++)
            {
                Ucenici1.at(i).predstaviSe();
            }
        }
        if(x==20)
        {
            system("cls");
            cout<<"PROFESORI:"<<endl;
            for(int i=0; i<Profesori1.size(); i++)
            {
                Profesori1.at(i).predstaviSe();
            }
        }
        if(x==21)
        {
            system("cls");
            cout<<"IZOSTANCI:"<<endl;
            for(int i=0; i<Izostanci1.size(); i++)
            {
                Izostanci1.at(i).PrikaziIzostanak();
            }
        }
        if(x==22)
        {
            system("cls");
            cout<<"OCENE:"<<endl;
            for(int i=0; i<Ocene1.size(); i++)
            {
                Ocene1.at(i).prikaziOcenu();
            }
        }
        if(x==23)
        {
            system("cls");
            cout<<"PROVERE ZNANJA:"<<endl;
            for(int i=0; i<ProvereZnanja1.size(); i++)
            {
                ProvereZnanja1.at(i).ispisiProveruZnanja();
            }
        }
        if(x==24)
        {
            system("cls");
            cout<<"PREDMETI:"<<endl;
            for(int i=0; i<Predmeti1.size(); i++)
            {
                Predmeti1.at(i).IspisP();
            }
        }
        if(x==25)
        {
            system("cls");
            cout<<"RAZREDI:"<<endl;
            for(int i=0; i<Razredi1.size(); i++)
            {
                Razredi1.at(i).IspisR();
            }
        }
        if(x==26)
        {
            system("cls");
            cout<<"OBJEKTI:"<<endl;
            cout<<"Osobe:"<<endl;
            for(int i=0; i<Osobe1.size(); i++)
            {
                Osobe1.at(i).predstaviSe();
            }
            cout<<"Ucenici:"<<endl;
            for(int i=0; i<Ucenici1.size(); i++)
            {
                Ucenici1.at(i).predstaviSe();
            }
            cout<<"Profesori:"<<endl;
            for(int i=0; i<Profesori1.size(); i++)
            {
                Profesori1.at(i).predstaviSe();
            }
            cout<<"Izostanci:"<<endl;
            for(int i=0; i<Izostanci1.size(); i++)
            {
                Izostanci1.at(i).PrikaziIzostanak();
            }
            cout<<"Ocene:"<<endl;
            for(int i=0; i<Ocene1.size(); i++)
            {
                Ocene1.at(i).prikaziOcenu();
            }
            cout<<"Provere znanja:"<<endl;
            for(int i=0; i<ProvereZnanja1.size(); i++)
            {
                ProvereZnanja1.at(i).ispisiProveruZnanja();
            }
            cout<<"Predmeti:"<<endl;
            for(int i=0; i<Predmeti1.size(); i++)
            {
                Predmeti1.at(i).IspisP();
            }
            cout<<"Razredi:"<<endl<<endl;
            for(int i=0; i<Razredi1.size(); i++)
            {
                Razredi1.at(i).IspisR();
            }
        }


        Sleep(5000);
    }
    while(uslov!=0);
    return 0;
}

