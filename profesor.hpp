#ifndef PROFESOR_HPP_INCLUDED
#define PROFESOR_HPP_INCLUDED

#include"osoba.hpp"
#include"predmet.hpp"

class Profesor:public Osoba
{
protected:
   Predmet A;
   Razred niz[];
public:




    friend class Direktor;
    friend class Razredni;


};

#endif // PROFESOR_HPP_INCLUDED
