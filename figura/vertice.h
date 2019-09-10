#ifndef VERTICE_H
#define VERTICE_H

#include<iostream>
#include<cmath>

using namespace std;

class Vertice
{
    double x,y;
    friend class ConstructorFigura;
public:
    Vertice(double _x,double _y):x(_x),y(_y){}
    Vertice(const Vertice&);
    double valorcoordenadas(double,double)const;

};

class Circulo
{
    Circulo(double _x,double _y);
    Circulo(const Circulo&) = delete;
    double area, perimetro, radio;
public:
    Circulo();
    void calcular();
};

class Triangulo
{
    double A, B, area, H, perimetro;
    Triangulo(double x,double y);
    Triangulo(const Triangulo&) = delete;
public:
    Triangulo();
    void calcular();
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

class ConstructorFigura:public Vertice
{
 public:
    static void builder(double x,double y);
};

#endif // VERTICE_H
