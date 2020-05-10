#ifndef RAZRED_HPP_INCLUDED
#define RAZRED_HPP_INCLUDED
using namespace std;
#include <string>

#include"ucenik.hpp"

class Razred
{
private:
    int brojRazreda;
    static int brojUcenika;
    //Ucenik uc;//niz
public:
    Razred(int brR)
    {
        brojRazreda=brR;
    }
};
int Razred::brojUcenika=0;

#endif // RAZRED_HPP_INCLUDED
