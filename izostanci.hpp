#ifndef IZOSTANCI_HPP_INCLUDED
#define IZOSTANCI_HPP_INCLUDED

class Izostanci
{
private:
    string datum;
    int tip;//moze biti opravdan i neopravdan
    string razlog;
public:
    Izostanci(string d,int t,string r)
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

};

#endif // IZOSTANCI_HPP_INCLUDED
