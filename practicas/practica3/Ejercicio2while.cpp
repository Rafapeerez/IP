//El programa va recogiendo valores hasta que sea menor que 0 e indica cual es el mayor introducido. (uso del esquema while)
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main() {
    int mayor,numero;
    cout<<"Introduce valores y pulse Intro. El programa seguira pidiendo valores hasta que el valor introducido sea menor que 0: "<<endl;
    cin>>numero;
    mayor=numero;
    while (numero>=0) { //Mientras el numero sea mayor o igual a 0 el programa pide un numero.
        cin>>numero;
        if (numero>mayor) { // Si el numero es mayor al mayor numero introducido se igualan y se cambia la variable.
            mayor=numero;
        }
    }
    cout<<"El mayor valor introducido es: "<<mayor<<endl;

    cin.get();
    cin.ignore();
}