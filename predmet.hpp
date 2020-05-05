#ifndef PREDMET_HPP_INCLUDED
#define PREDMET_HPP_INCLUDED
using namespace std;
#include <string>

#include"profesor.hpp"
#include"ucenik.hpp"

class Predmet
{
private:
    string naziv;
    Ucenik uc;//niz
public:
    Predmet(string n,string ime,string prezime,int godine,string vrstapr,string datumpr,int vrednostpr,string datumiz,int tipiz,string razlogiz):uc(ime,prezime,godine,vrstapr,datumpr,vrednostpr,datumiz,tipiz,razlogiz)
    {
        naziv=n;
    }

};

#endif // PREDMET_HPP_INCLUDED
