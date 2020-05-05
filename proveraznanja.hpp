#ifndef PROVERAZNANJA_HPP_INCLUDED
#define PROVERAZNANJA_HPP_INCLUDED
using namespace std;
#include <string>

#include"ocena.hpp"

class ProveraZnanja
{
protected:
    string vrstaProvere;//iz odgovaranja,pismenog...
    Ocena o;
public:
    ProveraZnanja(string vp,string datum,int vrednost):o(datum,vrednost)
    {
        vrstaProvere=vp;
    }
    string getVrstaProvere()const
    {
        return vrstaProvere;
    }
    string getDatum()const
    {
        return o.getDatum();
    }
    int getVrednost()const
    {
        return o.getVrednost();
    }
    void setVrstaProvere(string vp)
    {
        vrstaProvere=vp;
    }
    void setDatum(string d)
    {
        o.setDatum(d);
    }
    void setVrednost(int v)
    {
        o.setVrednost(v);
    }

    void ispisiProveruZnanja()
    {
        o.prikaziOcenu();
        cout<<"iz "<<vrstaProvere<<"."<<endl;
    }
};

#endif // PROVERAZNANJA_HPP_INCLUDED
