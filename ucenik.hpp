#ifndef UCENIK_HPP_INCLUDED
#define UCENIK_HPP_INCLUDED
using namespace std;
#include <string>

#include"osoba.hpp"
#include"izostanci.hpp"
#include"proveraznanja.hpp"

class Ucenik:public Osoba
{
protected:
    ProveraZnanja pz;//niz
    Izostanak iz;//niz
public:
    Ucenik(string i,string pr,int god,string vp,string datum,int vrednost,string d,int t,string r):Osoba(i,pr,god),pz(vp,datum,vrednost),iz(d,t,r)
    {

    }


};


#endif // UCENIK_HPP_INCLUDED
