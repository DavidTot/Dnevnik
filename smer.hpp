#ifndef SMER_HPP_INCLUDED
#define SMER_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>

#include"razred.hpp"
#include"predmet.hpp"

class Smer
{
private:
    string naziv;
    vector<Razred> Razredi;
    vector<Predmet> Predmeti;
public:
    Smer(string n)
    {
        naziv=n;
    }
    void DodajRazred(Razred rz)
    {
        Razredi.push_back(rz);
    }
    void DodajPredmet(Predmet pr)
    {
        Predmeti.push_back(pr);
    }

};

#endif // SMER_HPP_INCLUDED
