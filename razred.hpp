#ifndef RAZRED_HPP_INCLUDED
#define RAZRED_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>

#include"ucenik.hpp"

class Razred
{
private:
    int imeRazreda;
    int brojUcenika;
    vector<Ucenik> Ucenici;
public:
    Razred(int imR,int brojUcenika=0)
    {
        imeRazreda=imR;
    }
    DodajUcenika(int imeRazreda,Ucenik Uc)
    {

    }

};

#endif // RAZRED_HPP_INCLUDED
