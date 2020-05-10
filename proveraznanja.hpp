#ifndef PROVERAZNANJA_HPP_INCLUDED
#define PROVERAZNANJA_HPP_INCLUDED
using namespace std;
#include <string>

#include"ocena.hpp"

class ProveraZnanja
{
protected:
    string vrstaProvere;//iz odgovaranja,pismenog...
    Ocena oc;
public:
    ProveraZnanja(string vp,string datum,int vrednost):oc(datum,vrednost)
    {
        vrstaProvere=vp;
    }
    string getVrstaProvere()const
    {
        return vrstaProvere;
    }
    string getDatum()const
    {
        return oc.getDatum();
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
        cout<<"iz "<<vrstaProvere<<"."<<endl;
    }

};

#endif // PROVERAZNANJA_HPP_INCLUDED
