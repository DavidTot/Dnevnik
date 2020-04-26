#ifndef OCENA_HPP_INCLUDED
#define OCENA_HPP_INCLUDED

class Ocena
{
protected:
    string datum;
    int vrednost;//od 1 do 5
public:
    Ocena(string d,int v)
    {
        datum=d;
        vrednost=v;
    }
    Ocena()
    {
        datum="Prazno";
        vrednost=1;
    }
    string getDatum()const
    {
        return datum;
    }
    int getVrednost()const
    {
        return vrednost;
    }
    void setDatum(string d)
    {
        datum=d;
    }
    void setVrednost(int v)
    {
        vrednost=v;
    }
    void prikaziOcenu()
    {
        if(vrednost<1 || vrednost>5)
            cout<<"Greska"<<endl;
        else
            cout<<"Ocena "<<vrednost<<" "<<datum<<" "<<endl;
    }
};

#endif // OCENA_HPP_INCLUDED
