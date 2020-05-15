#ifndef UCENIK_HPP_INCLUDED
#define UCENIK_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>

#include"osoba.hpp"
#include"izostanci.hpp"
#include"proveraznanja.hpp"
#include"predmet.hpp"

class Ucenik:public Osoba
{
protected:
    vector<ProveraZnanja> ProvereZnanja;
    vector<Izostanak> Izostanci;
    static int BrojUcenika;
public:
    Ucenik(string i,string pr,int god):Osoba(i,pr,god)
    {

    }
    double ProsecnaOcenaIz(Predmet pr)
    {
        int zbir=0;
        int i;
        for(auto i=begin();i<end();i++)
        {
            zbir=pr.ProvereZnanja[i]+zbir;
        }
        return zbir/i;
    }



};



#endif // UCENIK_HPP_INCLUDED
