//El programa va recogiendo valores hasta que sea menor que 0 e indica cual es el mayor introducido (uso del esquema for)
#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;

int main() {
    int mayor,numero;
    cout<<"Introduce valores y pulse Intro. El programa seguira pidiendo valores hasta que el valor introducido sea menor que 0: "<<endl;
    cin>>numero;
    for(mayor=numero; numero>=0;    ) { //El bucle se ira repitiendo mientras que el numero recogido sea positivo
        cin>>numero;
        if(numero>mayor) { //Si el nuevo numero es mayor a algunos de los anteriores introducidos, se guardara en la variable mayor y sera el que se imprime por pantalla.
            mayor=numero;
        }
    }
    cout<<"El mayor valor introducido es: "<<mayor<<endl;
    system("pause");

}