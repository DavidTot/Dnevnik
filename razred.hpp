#ifndef RAZRED_HPP_INCLUDED
#define RAZRED_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>

#include"ucenik.hpp"
#include"proveraznanja.hpp"

class Razred
{
private:
    string imeRazreda;
    int brojUcenika=0;
    vector<Ucenik> Ucenici;
public:
    Razred(string imR)
    {
        imeRazreda=imR;
    }
    void DodajUcenika(Ucenik Uc)
    {
        Ucenici.push_back(Uc);
        brojUcenika=brojUcenika+1;
    }
    void IspisRazreda(Razred rz)
    {
        unsigned long long int i;
        cout<<"Mi smo ucenici "<<imeRazreda<<":"<<endl;
        for(i=0; i<Ucenici.size(); i++)
        {
            Ucenici[i].predstaviSe();
        }
    }

};

#endif // RAZRED_HPP_INCLUDED
