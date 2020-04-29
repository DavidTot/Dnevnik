#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED

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
    void predstaviSe()
    {
        cout<<"Ja sam "<<ime<<" "<<prezime<<" i imam "<<godine<<" godina."<<endl;
    }
};


#endif // OSOBA_HPP_INCLUDED
