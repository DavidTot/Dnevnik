#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>

class Osoba
{
protected:
    string ime;
    string prezime;
    int godine;
public:
    Osoba(string i,string p,int g)
    {
        ime=i;
        prezime=p;
        godine=g;
    }
    string getIme()const
    {
        return ime;
    }
    string getPrezime()const
    {
        return prezime;
    }
    int getGodine()const
    {
        return godine;
    }
    void setIme(string i)
    {
        ime=i;
    }
    void setPrezime(string p)
    {
        prezime=p;
    }
    void setGodine(int g)
    {
        godine=g;
    }
    virtual void predstaviSe()
    {
        cout<<"Ja sam "<<ime<<" "<<prezime<<" i imam "<<godine<<" godina."<<endl;
    }
    friend ostream& operator<<(ostream& izlaz,const Osoba& o)
    {
        izlaz<<"Ispis Osobe:"<<endl;
        izlaz<<"Ime: "<<o.ime<<endl;
        izlaz<<"Prezime: "<<o.prezime<<endl;
        izlaz<<"Godine: "<<o.godine<<endl<<endl;
        return izlaz;
    }
};


#endif // OSOBA_HPP_INCLUDED
