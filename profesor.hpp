#ifndef PROFESOR_HPP_INCLUDED
#define PROFESOR_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>

#include"osoba.hpp"
#include"predmet.hpp"
#include"razred.hpp"

class Profesor:public Osoba
{
protected:
    int godineStaza;
    Predmet pr;
    vector<Razred> Razredi;
public:
    Profesor()
    {
        godineStaza=10;
        godine=30;
        ime="Nikola";
        prezime="Novakovic";
    }
    Profesor(int gs,string ime,string prezime,int godine,string naziv):Osoba(ime,prezime,godine),pr(naziv)
    {
        godineStaza=gs;
    }
    void predstaviSe()
    {
        Osoba::predstaviSe();
        cout<<"Ja sam PROFESOR i predajem vec "<<godineStaza<<" godine."<<endl<<endl;
    }



};

#endif // PROFESOR_HPP_INCLUDED
