#ifndef DIREKTOR_HPP_INCLUDED
#define DIREKTOR_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>

#include"profesor.hpp"

class Direktor:public Profesor
{
private:
    string imeSkole;
public:
   Direktor(string is,int gs,string ime,string prezime,int godine,string naziv):Profesor(gs,ime,prezime,godine,naziv)
   {
       imeSkole=is;
   }
   void predstaviSe()
    {
        Osoba::predstaviSe();
        cout<<"I ja sam DIREKTOR"<<endl;
    }
};

#endif // DIREKTOR_HPP_INCLUDED
