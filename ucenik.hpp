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
    //ProveraZnanja pz;//niz
    //Izostanak iz;//niz
public:
    Ucenik(string i,string pr,int god):Osoba(i,pr,god)
    {

    }


};


#endif // UCENIK_HPP_INCLUDED
