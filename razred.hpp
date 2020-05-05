#ifndef RAZRED_HPP_INCLUDED
#define RAZRED_HPP_INCLUDED
using namespace std;
#include <string>

#include"ucenik.hpp"

class Razred
{
private:
    int brojRazreda;
    Ucenik uc;//niz
public:
    Razred(int brR,string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost):uc(ime,prezime,godine,datumIz,tip,razlog,vrstaprovere,datumProv,vrednost)
    {
        brojRazreda=brR;
    }
};

#endif // RAZRED_HPP_INCLUDED
