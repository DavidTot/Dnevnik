#ifndef PREDMET_HPP_INCLUDED
#define PREDMET_HPP_INCLUDED

#include"proveraznanja.hpp"
#include"profesor.hpp"
#include"ucenik.hpp"

class Predmet
{
private:
    string naziv;
    ProveraZnanja niz[];
public:
    Predmet(string n,string vp,string datum,int vrednost):niz(vrstaProvere,datum,vrednost)
    {
        naziv=n;
    }
    friend class Smer;
    friend class Profesor;
};

#endif // PREDMET_HPP_INCLUDED
