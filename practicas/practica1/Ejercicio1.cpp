//Practica del area de un circulo.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    double radio;//Creacion variable.
    double result;
    cout<<"Introduzca el valor del radio de la circunferencia y pulse Intro:  "<<endl;
    cin>>radio;
    result=3.1415*radio*radio; //Formula del area: Pi por radio al cuadrado.
    cout<<"El area es:  "<<result<<endl;
    cin.ignore(); //borra los datos que hay en el buffer de entrada.
    cin.get(); // espera a pulsar un boton.

   
}

