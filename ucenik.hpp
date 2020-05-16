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
    static int BrojUcenika;//U celoj skoli
public:
    Ucenik(string i,string pr,int god):Osoba(i,pr,god)
    {

    }
    double ProsecnaOcenaIz(Predmet pr)
    {
        int zbir=0;
        unsigned long long int i;
        for(i=0;i<ProvereZnanja.size();i++)
        {
            zbir=pr.getVrednost(i)+zbir;
        }
        return zbir/i;
    }
    void predstaviSe()
    {
        Osoba::predstaviSe();
        cout<<"I ja sam UCENIK"<<endl<<endl;
    }



};
int Ucenik::BrojUcenika=0;


#endif // UCENIK_HPP_INCLUDED
