#ifndef IZOSTANCI_HPP_INCLUDED
#define IZOSTANCI_HPP_INCLUDED
using namespace std;
#include <string>
#include <vector>

class Izostanak
{
protected:
    string datum;
    int tip;//moze biti opravdan i neopravdan
    string razlog;
public:
    Izostanak(string d,int t,string r)
    {
        datum=d;
        tip=t;
        razlog=r;
    }
    string getDatum()const
    {
        return datum;
    }
    int getTip()const
    {
        return tip;
    }
    string getRazlog()const
    {
        return razlog;
    }
    void setDatum(string d)
    {
        datum=d;
    }
    void setTip(int t)
    {
        tip=t;
    }
    void setRazlog(string r)
    {
        razlog=r;
    }
    void PrikaziIzostanak()
    {
        if(tip==0)
            cout<<"Neopravdani izostanak sa casa "<<datum<<" jer je ucenik "<<razlog<<"."<<endl;
        else
            cout<<"Opravdani izostanak sa casa "<<datum<<" jer je ucenik "<<razlog<<"."<<endl;
    }
    friend ostream& operator<<(ostream& izlaz,const Izostanak& iz)
    {
        izlaz<<"Ispis Izostanka:"<<endl;
        izlaz<<"Datum: "<<iz.datum<<endl;
        if(iz.tip==0)
        izlaz<<"Tip: Neopravdani"<<endl;
        else
        izlaz<<"Tip: Opravdani"<<endl;
        izlaz<<"Razlog: "<<iz.razlog<<endl<<endl;
        return izlaz;
    }
};

#endif // IZOSTANCI_HPP_INCLUDED
