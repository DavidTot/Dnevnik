#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED

class Osoba
{
private:
    string ime;
    string prezime;
    int godine;
public:
    void predstaviSe()
    {
        cout<<"Ja sam "<<ime<<" "<<prezime<<" i imam "<<godine<<" godina.";
    }
    Osoba(string i="",string p="",int g=0)
    {
     ime=i;
     prezime=p;
     godine=g;
    }
};


#endif // OSOBA_HPP_INCLUDED
