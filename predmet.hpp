#ifndef PREDMET_HPP_INCLUDED
#define PREDMET_HPP_INCLUDED

#include"proveraznanja.hpp"
#include"profesor.hpp"
#include"ucenik.hpp"

class Predmet:public Ucenik
{
private:
    string naziv;
    ProveraZnanja A;
public:

};

#endif // PREDMET_HPP_INCLUDED
