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
    vector<ProveraZnanja> ProvereZnanja;
public:
    Predmet(string n)
    {
        naziv=n;
    }
    int getVrednost()const
    {
        return ProvereZnanja.getVrednost;
    }

};

#endif // PREDMET_HPP_INCLUDED
