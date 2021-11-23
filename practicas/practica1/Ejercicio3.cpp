//Hallar la raiz cuadrada de un numero positivo.
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include<cmath>//Importante esto para poder habilitar las opciones matematicas.
using namespace std;

int main() {
    double x;//Creacion de variables
    double raiz;
    cout<<"Introduzca un numero y pulse Intro:  "<<endl;
    cin>>x;
    if (x>0) {
        raiz=sqrt(x);//Operacion de la raiz.
        cout<<"El valor es: "<<raiz<<endl;
    }
    else if (x<0) { //Si el numero es negativo da error.
        cout<<"No se puede calcular la raiz."<<endl;
    }
    cin.ignore();
    system("pause");
}

