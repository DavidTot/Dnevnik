#ifndef PROFESOR_HPP_INCLUDED
#define PROFESOR_HPP_INCLUDED

#include"osoba.hpp"
#include"predmet.hpp"
#include"razred.hpp"

class Profesor:public Osoba
{
protected:
   Predmet A;
   Razred niz[];
public:
    Profesor(string i,string p,int g,string n,string vp,string datum,int vrednost):A(string i,string p,int g)//,niz(string n,string vp,string datum,int vrednost)
    {

    }
    ZakaziProveruZnanja()
    {
        ProveraZnanja Test1;
        //moze da se postavi u neki fajl kom ucenici imaju pristup
    }


};

#endif // PROFESOR_HPP_INCLUDED
