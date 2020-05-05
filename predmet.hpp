#ifndef PREDMET_HPP_INCLUDED
#define PREDMET_HPP_INCLUDED
using namespace std;
#include <string>

#include"proveraznanja.hpp"

class Predmet
{
private:
    string naziv;
    ProveraZnanja pz;
public:
    Predmet(string n,string vp,string datum,int vrednost):pz(vp,datum,vrednost)
    {
        naziv=n;
    }

};

#endif // PREDMET_HPP_INCLUDED
