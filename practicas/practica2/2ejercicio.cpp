//Se metera un valor y el programa le sumara los valores precedidos hasta llegar al 0.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    unsigned int numero;
    cout<<"Introduzca un numero y pulse Intro: "<<endl;
    cin>>numero;
    int resultado=0;
    do { //Hacer la suma del numero anterior y restarle 1 al numero,
        resultado=resultado+numero;
        numero=numero-1;
    } while (numero>0); // mientras que el numero sea mayor que 0.
    cout<<"El resultado final es "<<resultado<<endl;

    system("pause");
}

