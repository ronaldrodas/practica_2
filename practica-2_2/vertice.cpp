#include<iostream>
#include "vertice.h"

using namespace std;

double const pi=3.14159;

double Vertice::getX()
{
    return x;
}

double Vertice::getY()
{
    return y;
}

double Vertice::distanciaAlOrigen()
{
        return sqrt(x * x + y * y);
}

double Vertice::calcularDistancia(Vertice otroVertice)
{
        double x1 = x - otroVertice.getX();
        double y1 = y - otroVertice.getY();
        return sqrt(x1 * x1 + y1 * y1);
}


Circulo::Circulo()
{

}

void Circulo::calcular(){
    cout << "Ingrese la longitud del radio en cm: ";
    cin >> radio;
    area = pi*radio*radio;
    perimetro = 2*3.1415*radio;
    cout << "El area del circulo es: " << area<<" centimetros cuadrados"<<endl;
    cout << "El perimetro del circulo es: " << perimetro<<" cm"<<endl;
}

Triangulo::Triangulo()
{

}

void Triangulo::calcular(){
    cout << "Ingresar base del Triangulo: ";
    cin >> B;
    cout << "\n" << endl;
    cout << "Ingresar la Altura del Triangulo: ";
    cin >> A;
    area = (A*B) / 2;
    cout << "El area del triangulo es: "<<area<<" centimetros cuadrados "<<endl;
    H = sqrt((pow(A, 2)) + (pow(B, 2)));
    perimetro = B + A + H;
    cout << "El perimetro del triangulo es: "<<perimetro<<"cm"<<endl;
}

Rectangulo::Rectangulo()
{

}

void Rectangulo::calcular(){
    cout<<"Ingresa largo: ";
    cin>>largo;
    cout<<"Ingresa ancho: ";
    cin>>ancho;
    area=largo*ancho;
    cout << "El area del triangulo es: "<<area<<" centimetros cuadrados "<<endl;
    perimetro=2*(largo+ancho);
    cout << "El perimetro del triangulo es: "<<perimetro<<"cm"<<endl;
}

Pentagono::Pentagono()
{

}

void Pentagono::calcular(){
    cout<<"Ingresa un lado: ";
    cin>>lado;
    cout<<"Ingresa la apotema: ";
    cin>>apotema;
    perimetro=lado*5;
    cout << "El perimetro del triangulo es: "<<perimetro<<"cm"<<endl;
    area=(perimetro*apotema)/2;
    cout << "El area del triangulo es: "<<area<<" centimetros cuadrados "<<endl;
}

Hexagono::Hexagono()
{

}

void Hexagono::calcular()
{
    cout<<"Ingresa un lado: ";
    cin>>lado;
    cout<<"Ingresa la apotema: ";
    cin>>apotema;
    perimetro=lado*6;
    cout << "El perimetro del triangulo es: "<<perimetro<<"cm"<<endl;
    area=(perimetro*apotema)/2;
    cout << "El area del triangulo es: "<<area<<" centimetros cuadrados "<<endl;
}

