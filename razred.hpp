#ifndef RAZRED_HPP_INCLUDED
#define RAZRED_HPP_INCLUDED

#include"ucenik.hpp"
#include"smer.hpp"

class Razred
{
private:
    int brojRazreda;
    Ucenik niz[];
public:
    Razred(int brRazreda,string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost)//:niz(string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost)
    {
        brojRazreda=brRazreda;
    }
    UpisiUcenika()
    {
        Ucenik Novi;
        niz[n+1]=Novi;//n je duzina niza
    }
};

#endif // RAZRED_HPP_INCLUDED
