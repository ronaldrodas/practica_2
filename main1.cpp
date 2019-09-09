
#include"complejo.h"
#include<iostream>

using namespace std;

int main()
{int opc;
    do
    {
    cout << endl;
    cout << "           MENU DE OPCIONES       " << endl;
    cout << endl;
    cout << "1.- Sumar dos numeros complejos" << endl;
    cout << "2.- Restar dos numeros complejos" << endl;
    cout << "3.- Multiplicar dos numeros complejos"<< endl;
    cout << "4.- Dividir dos numeros complejos"<< endl;
    cout << "5.- Conjugado de un numero complejo" << endl;
    cout << "6.- Modulo de un numero complejo" << endl;
    cout << "7.- Valor absoluto de un numero complejo" << endl;
    cout << "8.- Potencia de un numero complejo" << endl;
    cout << "9.- Raiz cuadrada de un numero complejo" << endl;
    cout << "10.- Salir" << endl;
    cout << endl;
    cout << "Por favor ingrese una de las opciones, de 1 a 10: ";
    cin >> opc;
    switch(opc)
           {
    case 1:{
        Complejo c1;
        cin >> c1;
        Complejo c2;
        cin >> c2;
        Complejo objetoComplejo;
        objetoComplejo=c1+c2;
        cout<< endl;
        cout << "La suma de los numeros complejos es: "<<objetoComplejo<<endl;
        break;}
     case 2: {Complejo c1;
        cin >> c1;
        Complejo c2;
        cin >> c2;
        Complejo objetoComplejo;
        objetoComplejo=c1-c2;
        cout<< endl;
        cout << "La resta de los numeros complejos es: "<<objetoComplejo<<endl;
          break;}
     case 3:{  Complejo c1;
        cin >> c1;
        Complejo c2;
        cin >> c2;
        Complejo objetoComplejo;
        objetoComplejo=c1*c2;
        cout<< endl;
        cout << "La multiplicacion de los numeros complejos es: "<<objetoComplejo<<endl;
        break;}
     case 4: {Complejo c1;
         cin >> c1;
         Complejo c2;
         cin >> c2;
         Complejo objetoComplejo;
         objetoComplejo=c1/c2;
         cout<< endl;
         cout << "La division de los numeros complejos es: "<<objetoComplejo<<endl;
         break;}
    case 5: {Complejo c1;
        cin >> c1;
        cout<< endl;
        cout << "El conjugado del numero complejo es: "<<c1.conjugado()<<endl;
        break;}
    case 6: {Complejo c1;
        cin >> c1;
        cout<< endl;
        cout << "El modulo del numero complejo es: "<<c1.modulo()<<endl;
        break;}
    case 7: {Complejo c1;
        cin >> c1;
        cout<< endl;
        cout << "El valor absoluto del numero complejo es: "<<c1.absoluto()<<endl;
        break;}
    case 8: {Complejo c1;
        cin >> c1;
        c1.exponente();
        cout<< endl;
        cout << "La potencia del numero complejo es: "<<c1.potencia()<<endl;
        break;}
    case 9: {Complejo c1;
        cin >> c1;
        cout<< endl;
        cout << "La raiz cuadrada del numero complejo es: "<<c1.raizcu()<<endl;
        break;}
    case 10:cout<< endl;
        cout << "Fin del programa GRACIAS" << endl;
        cout<< endl;
        break;
    default: cout<< endl;
        cout << "Opcion desconocida! " << endl;
        break;
   }
} while (opc != 10);
    return 0;
}




