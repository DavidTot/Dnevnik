#ifndef PREDMET_HPP_INCLUDED
#define PREDMET_HPP_INCLUDED

#include"proveraznanja.hpp"
#include"profesor.hpp"
#include"ucenik.hpp"

class Predmet:public ProveraZnanja , public Profesor , public Ucenik
{
private:
    string naziv;
public:

};

#endif // PREDMET_HPP_INCLUDED
