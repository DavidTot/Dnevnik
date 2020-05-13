#ifndef UCENIK_HPP_INCLUDED
#define UCENIK_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>

#include"osoba.hpp"
#include"izostanci.hpp"
#include"proveraznanja.hpp"

class Ucenik:public Osoba
{
protected:
    vector<ProveraZnanja> ProvereZnanja;
    vector<Izostanak> Izostanci;
public:
    Ucenik(string i,string pr,int god):Osoba(i,pr,god)
    {

    }
    //virtual int BrojIzostanaka


};


#endif // UCENIK_HPP_INCLUDED
