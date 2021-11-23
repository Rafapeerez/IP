//El programa va pidiendo numeros hasta que la media de todos los introducidos sea 30.
#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;

int main() {
    double media,numero,suma,i;
    i=1;
    do {
        cout<<"Introduzca un numero."<<endl;
        cin>>numero;
        suma=suma+numero;
        media=suma/i;
        i++;
    } while (media<30) ; // Mientras que la media sea menor a 30, se introduce un numero nuevo, se le suma el anterior introducido y se divide por el contador que es el total de numeros introducidos.
    cout<<"La media de todos los numeros introducidos es igual o mayor a 30."<<endl; //Cuando la media supere o iguale a 30, se imprime por pantalla el texto y no se introducen mas numeros.

    cin.get();
    cin.ignore();
}