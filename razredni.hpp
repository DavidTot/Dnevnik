#ifndef RAZREDNI_HPP_INCLUDED
#define RAZREDNI_HPP_INCLUDED
using namespace std;
#include <string>

#include"profesor.hpp"
#include"razred.hpp"

class Razredni:public Profesor
{
private:
    Razred A;
public:
    Razredni(const Profesor& p,int brRazreda,string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost):A(int brRazreda,string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost)
    {

    }


};

#endif // RAZREDNI_HPP_INCLUDED
