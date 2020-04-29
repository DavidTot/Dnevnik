#ifndef RAZREDNI_HPP_INCLUDED
#define RAZREDNI_HPP_INCLUDED

#include"profesor.hpp"
#include"razred.hpp"

class Razredni:public Profesor
{
private:
    Razred A;
public:
    Razredni(string i,string p,int g,string n,string vp,string datum,int vrednost,):Profesor(string i,string p,int g,string n,string vp,string datum,int vrednost,int brRazreda,string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost),A(int brRazreda,string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost)
    {

    }


};

#endif // RAZREDNI_HPP_INCLUDED
