#ifndef UCENIK_HPP_INCLUDED
#define UCENIK_HPP_INCLUDED

#include"osoba.hpp"
#include"izostanci.hpp"
#include"proveraznanja.hpp"

class Ucenik:public Osoba
{
protected:
    ProveraZnanja pz;
    Izostanak niz[];
public:
    Ucenik(string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost):pz(string vrstaprovere,string datumProv,vrednost),niz(string datumIz,int tip,string razlog),Osoba(string ime,string prezime,int godine)
    {

    }



};


#endif // UCENIK_HPP_INCLUDED
