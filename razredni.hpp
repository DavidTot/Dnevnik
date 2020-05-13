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
    Razredni(int gs,string ime,string prezime,int godine,string naziv,int brR):Profesor(gs,ime,prezime,godine,naziv),rz(brR)
    {

    }


};

#endif // RAZREDNI_HPP_INCLUDED
