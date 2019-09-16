#ifndef VERTICE_H
#define VERTICE_H

#include<iostream>
#include<cmath>

using namespace std;

class Vertice
{
    double x,y;
    friend class ConstructorFigura;
    friend class Circulo;
public:
    Vertice(double _x,double _y):x(_x),y(_y){}
    Vertice(const Vertice&);
    double getX();
    double getY();
    double valorcoordenadas(double,double)const;
    double distanciaAlOrigen();
    double calcularDistancia(Vertice otroVertice);
};

class Circulo
{   double x,y;
    Circulo(double _x,double _y):x(_x),y(_y){}
    Circulo(const Circulo&) = delete;
    double area, perimetro, radio;
public:
    Circulo();
    void calcular();
};

class Triangulo
{   double x,y,x2,y2,x3,y3;
    double A, B, area, H, perimetro;
    Triangulo(double _x,double _y,double _x2,double _y2,double _x3,double _y3):x(_x),y(_y),x2(_x2),y2(_y2),x3(_x3),y3(_y3){}
    friend class ConstructorFigura;
public:
    Triangulo();
    void calcular();
    static Triangulo makeC(double x,double y,double x2,double y2,double x3,double y3) {
        return Triangulo(x,y,x2,y2,x3,y3);
   }
};

class Rectangulo
{
    Rectangulo(double x1,double y1, double x2,double y2, double x3,double y3, double x4,double y4);
    Rectangulo(const Rectangulo&) = delete;
    float largo, area, perimetro,ancho;
public:

    Rectangulo();
    void calcular();
};

class Pentagono
{
    Pentagono(double x,double y);
    Pentagono(const Pentagono&) = delete;
float lado, area, perimetro,apotema;
public:
    Pentagono();
    void calcular();
};

class Hexagono
{
    Hexagono(double x,double y);
    Hexagono(const Hexagono&) = delete;
    float lado, area, perimetro,apotema;
    public:
    Hexagono();
    void calcular();
};

class ConstructorFigura
{ static int cuentaFiguras;
 public:
     ConstructorFigura();
      static Circulo Builder(double _x,double _y);
      static Triangulo Builder(double x,double y,double x2,double y2,double x3,double y3);
};

#endif // VERTICE_H
