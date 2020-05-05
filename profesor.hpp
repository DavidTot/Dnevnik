#ifndef PROFESOR_HPP_INCLUDED
#define PROFESOR_HPP_INCLUDED
using namespace std;
#include <string>

#include"osoba.hpp"
#include"predmet.hpp"
#include"razred.hpp"

class Profesor:public Osoba
{
protected:
    int godineStaza;
    Predmet pr;
    //Razred rz;//niz
public:
    Profesor(int gs,string ime,string prezime,int godine,string naziv,string vrstaprovere,string datum,int vrednost):Osoba(ime,prezime,godine),pr(naziv,vrstaprovere,datum,vrednost)
    {
        godineStaza=gs;
    }
    /*void PostaviRazrednog(Profesor A)
    {
        if(godineStaza>=5)
        {
            Razredni(string i,string p,int g,string n,string vp,string datum,int vrednost,int brRazreda,string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost,int godineStaza,int brRazreda,string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost):Profesor(string i,string p,int g,string n,string vp,string datum,int vrednost,int brRazreda,string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost,int godineStaza),A(int brRazreda,string ime,string prezime,int godine,string datumIz,int tip,string razlog,string vrstaprovere,string datumProv,int vrednost)
                cout<<"Profesor "<<A.getIme()<<" "<<A.getPrezime()<<" je postao razredni"<<endl;
            }
            else
        {
            cout<<"Profesor "<<A.getIme()<<" "<<A.getPrezime()<<" nije postao razredni usled manjka radnog staza"<<endl;
            cout<<"Fali mu jos "<<5-A.godineStaza<<" da bi mogao da postane razredni"<<endl;
        }
    }
    */


};

#endif // PROFESOR_HPP_INCLUDED
