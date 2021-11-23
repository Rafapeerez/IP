//Calcula la media de 4 cifras.
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double a;
    double b;
    double c;
    double d;
    float result; //El resultado es float para poder abarcar decimales.
    cout<<"Introduzca cuatro numeros para calcular la media, cada vez que inserte un valor pulse Intro."<<endl;
    cin>> a;
    cin>> b;
    cin>> c;
    cin>> d;
    result=(a+b+c+d)/4; //Operacion matematica.
    cout<<"La media de todos los valores introducidos es: "<<result<<endl;

    cin.ignore();
    cin.get();
}