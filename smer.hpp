#ifndef SMER_HPP_INCLUDED
#define SMER_HPP_INCLUDED

#include"razred.hpp"
#include"predmet.hpp"

class Smer
{
private:
    string naziv;
    Razred niz1[];
    Predmet niz2[];
public:
    Smer(string naziv,string n,string vp,string datum,int vrednost,int brRazreda,string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost):niz2(string n,string vp,string datum,int vrednost),niz1(int brRazreda,string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost)
    {
        naziv=naziv;
    }

};

#endif // SMER_HPP_INCLUDED
