#include<iostream>
#include "vertice.h"

using namespace std;

int opc;

int main()
{
    do
    {
    cout << endl;
    cout << "           MENU DE OPCIONES       " << endl;
    cout << endl;
    cout << "1.- Area y perimetro del circulo" << endl;
    cout << "2.- Area y perimetro del Triangulo" << endl;
    cout << "3.- Area y perimetro del Rectangulo"<< endl;
    cout << "4.- Area y perimetro del Pentagono"<< endl;
    cout << "5.- Area y perimetro del Hexagono"<< endl;
    cout << "6.- Salir" << endl;
    cout << endl;
    cout << "Por favor ingrese una de las opciones, de 1 a 6: ";
    cin >> opc;
    switch(opc)
           {
    case 1:
         {
          Circulo t1;
          t1.calcular();
          break;
          }
    case 2:{
          Triangulo t1;
          t1.calcular();
          break;
          }
    case 3: {Rectangulo t1;
             t1.calcular();
             break;
              }
    case 4:{
        Pentagono t1;
        t1.calcular();
          break;
          }
    case 5:{
        Hexagono t1;
       t1.calcular();
          break;
          }
    case 6:cout<< endl;
        cout << "Fin del programa GRACIAS" << endl;
        cout<< endl;
        break;
    default: cout<< endl;
        cout << "Opcion desconocida! " << endl;
        break;
         }
       } while (opc != 6);
    return 0;
}

