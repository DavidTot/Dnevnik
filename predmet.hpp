#ifndef PREDMET_HPP_INCLUDED
#define PREDMET_HPP_INCLUDED

#include"proveraznanja.hpp"
#include"profesor.hpp"
#include"ucenik.hpp"

class Predmet
{
private:
    string naziv;
    ProveraZnanja niz1[];
    Ucenik niz2[];
    Izostanci niz3[]
public:
    Predmet(string n,string vp,string datum,int vrednost,string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost,string d,int t,string r):niz1(string vp,string datum,int vrednost),niz2(string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost),niz3(string d,int t,string r)
    {
        naziv=n;
    }
    void IspisiOcene(Ucenik X)
    {
        for(int i=0;i<n;i++)
        if(X.getPrezime()==niz2[i].getPrezime() && X.getIme()==niz2[i].getIme())
        {
            cout<<"Ucenik "<<X.getIme()<<" "<<X.getPrezime()<<" ima sledece ocene iz "<<naziv<<":"<<endl;
            for(int j=0;j<m;j++)
            {
                cout<<"Datum:"<<niz1[j].getDatum()<<"   "<<"Ocena:"<<niz1[j].getVrednost()<<"   "<<"Vrsta provere:"<<niz1[j].getVrstaProvere()<<endl;
            }

        }
    }
    void IspisiIzostanke(Ucenik X)
    {
        for(int k=0;k<n;k++)
        if(X.getPrezime()==niz2[k].getPrezime() && X.getIme()==niz2[k].getIme())
        {
            cout<<"Ucenik "<<X.getIme()<<" "<<X.getPrezime()<<" ima sledece izostanke iz "<<naziv<<":"<<endl;
            for(int b=0;b<c;b++)
            {
                cout<<"Datum:"<<niz3[b].getDatum()<<"   "<<"Tip:"<<niz3[b].getTip()<<"   "<<"Razlog:"<<niz3[b].getRazlog()<<endl;
            }
        }
    }
};

#endif // PREDMET_HPP_INCLUDED
