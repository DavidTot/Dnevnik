#ifndef PROVERAZNANJA_HPP_INCLUDED
#define PROVERAZNANJA_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>

#include"ocena.hpp"

class ProveraZnanja
{
protected:
    string vrstaProvere;//iz odgovaranja,pismenog...
    Ocena oc;
    string predmet;
public:
    ProveraZnanja(string pred,string vp,string datum,int vrednost):oc(datum,vrednost)
    {
        vrstaProvere=vp;
        predmet=pred;
    }
    string getVrstaProvere()const
    {
        return vrstaProvere;
    }
    string getDatum()const
    {
        return oc.getDatum();
    }
    string getNazivPredmeta()const
    {
        return predmet;
    }
    int getVrednost()const
    {
        return oc.getVrednost();
    }
    void setVrstaProvere(string vp)
    {
        vrstaProvere=vp;
    }
    void setDatum(string d)
    {
        oc.setDatum(d);
    }
    void setVrednost(int v)
    {
        oc.setVrednost(v);
    }

    void ispisiProveruZnanja()
    {
        oc.prikaziOcenu();
        cout<<"iz "<<vrstaProvere<<" iz "<<predmet<<endl;
    }

};

#endif // PROVERAZNANJA_HPP_INCLUDED
