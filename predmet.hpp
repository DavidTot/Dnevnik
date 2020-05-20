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
    int getVrednost(int i)const
    {
        return ProvereZnanja[i].getVrednost();
    }
    void ZakaziProveru(ProveraZnanja pz1)
    {
        ProvereZnanja.push_back(pz1);
    }

};

#endif // PREDMET_HPP_INCLUDED
