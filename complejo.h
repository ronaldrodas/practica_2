#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>

using namespace std;


class Complejo
{
private:
      double real_part;
      double img_part;
      int expo;
      public:
         Complejo();
         ~Complejo();
         Complejo(double _real_part,double _img_part);         
         Complejo(const Complejo&);
         Complejo operator + (const Complejo& c)const;
         Complejo operator - (const Complejo& c)const;
         Complejo operator * (const Complejo& c)const;
         Complejo operator / (const Complejo& c)const;
         Complejo conjugado();
         double modulo();
         Complejo absoluto();
         Complejo potencia();
         Complejo raizcu();
         friend ostream & operator << (ostream &out, const Complejo &c);
         friend istream & operator >> (istream &in,  Complejo &c);
         void exponente();
};

#endif // COMPLEJO_H
