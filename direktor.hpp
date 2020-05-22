#ifndef DIREKTOR_HPP_INCLUDED
#define DIREKTOR_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>

#include"profesor.hpp"

class Direktor:public Profesor
{
private:
    string imeSkole;
public:
    Direktor()
    {
        imeSkole="Jovan_Jovanovic_Zmaj";
        godineStaza=10;
        ime="Radivoje";
        prezime="";
        godine=40;
    }
    Direktor(string imeskole,int godines,string ime,string prezime,int godine,string naziv):Profesor(godines,ime,prezime,godine,naziv)
    {
        imeSkole=imeskole;
    }
    void predstaviSe()
    {
        Osoba::predstaviSe();
        cout<<"I ja sam DIREKTOR"<<endl;
    }
};

#endif // DIREKTOR_HPP_INCLUDED
