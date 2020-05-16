#ifndef RAZREDNI_HPP_INCLUDED
#define RAZREDNI_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>

#include"profesor.hpp"
#include"razred.hpp"

class Razredni:public Profesor
{
private:
    Razred rz;
public:
    Razredni(int gs,string ime,string prezime,int godine,string naziv,string brR):Profesor(gs,ime,prezime,godine,naziv),rz(brR)
    {

    }
    void predstaviSe()
    {
        Osoba::predstaviSe();
        cout<<"I ja sam RAZREDNI"<<endl;
    }


};

#endif // RAZREDNI_HPP_INCLUDED
