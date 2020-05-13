#ifndef PREDMET_HPP_INCLUDED
#define PREDMET_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>

#include"proveraznanja.hpp"

class Predmet
{
private:
    string naziv;
    vector<ProveraZnanja> ProvereZnanje;
public:
    Predmet(string n)
    {
        naziv=n;
    }

};

#endif // PREDMET_HPP_INCLUDED
