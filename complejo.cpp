#include "complejo.h"
#include <iostream>
#include <cmath>

using namespace std;

    Complejo::Complejo()
    {
       real_part=0.0;
       img_part=0.0;
    }

    Complejo::Complejo(double r, double i)
    {
       real_part=r;
       img_part=i;
    }


    Complejo Complejo::operator+(const Complejo& c)const
    {      
        return Complejo (real_part + c.real_part, img_part + c.img_part);
    }

    Complejo Complejo::operator-(const Complejo& c)const
    {     
        return Complejo (real_part - c.real_part, img_part - c.img_part);
    }

    Complejo Complejo::operator*(const Complejo& c)const
    {     
        return Complejo (real_part * c.real_part - img_part*c.img_part, img_part * c.real_part + real_part*c.img_part);
    }

    Complejo Complejo::operator/(const Complejo& c)const
    {
       double re=c.real_part*c.real_part + c.img_part*c.img_part;      
       return Complejo ((real_part*c.real_part + img_part*c.img_part)/re, (img_part*c.real_part - real_part*c.img_part)/re);
    }

    Complejo Complejo::conjugado(){
        return Complejo(real_part,-img_part);
    }

    void Complejo::exponente()
    {
        int ex;
        cout<<"Ingrese el exponente:";
        cin>>ex;
        expo=ex;
    }

    Complejo Complejo::potencia()
    {
        real_part=pow(real_part,expo);
        img_part=pow(img_part,expo);
        return Complejo(real_part,img_part);
    }

    Complejo Complejo::raizcu()
    {
        real_part=sqrt(real_part);
        img_part=sqrt(img_part);
        return Complejo(real_part,img_part);
    }

    double Complejo::modulo()
    {
        return sqrt(real_part*real_part+img_part*img_part);
    }

    Complejo Complejo::absoluto()
    {
       real_part=abs(real_part);
       img_part=abs(img_part);
       return Complejo(real_part,img_part);;
    }

    ostream & operator << (ostream &out, const Complejo &c)
    {
        out << c.real_part;
        out << "+i" << c.img_part << endl;
        return out;
    }

    istream & operator >> (istream &in,  Complejo &c)
    {
        cout << "Por favor ingrese la parte real: ";
        in >> c.real_part;
        cout << "Por favor ingrese la parte imaginaria: ";
        in >> c.img_part;
        return in;
    }

    Complejo::~Complejo()
    {
        cout<<"Complejo destruido!"<<endl;
    }
