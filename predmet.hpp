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
    Predmet()
    {
        naziv="programiranje";
    }
    Predmet(string n)
    {
        naziv=n;
    }
    int getVrednost(int i)const
    {
        return ProvereZnanja.at(i).getVrednost();
    }
    string getNaziv()const
    {
        return naziv;
    }
    void ZakaziProveruPr(ProveraZnanja pz1)
    {
        ProvereZnanja.push_back(pz1);
    }
    void IspisP()
    {
        cout<<"Ime predmeta je "<<naziv<<endl;
    }

};

#endif // PREDMET_HPP_INCLUDED

