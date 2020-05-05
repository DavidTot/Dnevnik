#ifndef SMER_HPP_INCLUDED
#define SMER_HPP_INCLUDED
using namespace std;
#include <string>

#include"razred.hpp"
#include"predmet.hpp"

class Smer
{
private:
    string naziv;
    //Razred rz;//niz
    //Predmet pr;//niz
public:
    Smer(string n)
    {
        naziv=n;
    }

};

#endif // SMER_HPP_INCLUDED
