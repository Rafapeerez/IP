//En este programa pasamos a radianes los angulos.
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include<cmath>
using namespace std;

int main() {
    double grados;//Creacion de variables.
    double radianes;
    cout<<"Introduzca el valor del angulo en grados:  "<<endl;
    cin>>grados;
    radianes=(grados*(2*3.1415))/360;//Formula para pasar de grados a radianes mediante factores de conversion.
    cout<<grados<< " grados en radianes son: "<<radianes;//Imprime por pantalla el resultado.
    cout<<" radianes"<<endl;
    system("pause");
}

