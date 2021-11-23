//Te pide valores y calcula la media hasta que un valor introducido sea mayor o igual que 0.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int n=0;
    float suma=0;
    float d;
    float media;
    cout<<"Introduzca numeros y pulse Intro.Cuando quiera finalizar inserte un numero menor o igual a 0."<<endl;
    do { //El programa pide numeros hasta que se introduzca un valor negativo.
        cin>>d;
        if (d>=0) {
            suma=suma+d;
            n=n+1;
        }
    } while (d>=0);
    media=suma/n;
    cout<<"La media es: "<<media<<endl;
    system("pause");
}

