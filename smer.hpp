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

};

#endif // SMER_HPP_INCLUDED
