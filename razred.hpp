#ifndef RAZRED_HPP_INCLUDED
#define RAZRED_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>

#include"ucenik.hpp"
#include"proveraznanja.hpp"

class Razred
{
protected:
    string imeRazreda;
    int brojUcenika=0;
    vector<Ucenik> Ucenici;
public:
    Razred()
    {
        imeRazreda="2-6";
    }
    Razred(string imR)
    {
        imeRazreda=imR;
    }
    string getIme()const
    {
        return imeRazreda;
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
            Ucenici.at(i).predstaviSe();
        }
    }
    void IspisR()
    {
        cout<<"Ime razreda je "<<imeRazreda<<endl;
    }
    void DaLiIdeURazred(Ucenik uc1)//pretraga vectora
    {
        unsigned long long int i;
        for(i=0;i<Ucenici.size();i++)
        {
            if(Ucenici[i].getIme()==uc1.getIme() && Ucenici[i].getPrezime()==uc1.getPrezime())
            {
                cout<<"Ucenik ide u razred "<<imeRazreda<<"."<<endl;
                return;
            }
        }
        cout<<"Ucenik ne ide u razred "<<imeRazreda<<"."<<endl;

    }

};

#endif // RAZRED_HPP_INCLUDED
