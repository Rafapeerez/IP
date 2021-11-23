//Se intercambian los valores de las variables de tal modo que el valor introducido en a es el menor de los dos.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int a,b,aux; //Creamos las dos variables para introducir los valores y una tercera que servira de "puente para intercambiar los valores de variable.
    cout<<"Introduce dos numeros y pulse Intro:"<<endl;
    cin>>a>>b;
    cout<<"a=";
    cout<<a<<"  b=";
    cout<<b<<endl;

    if (a>b) { //Si es a mayor que b:
        cout<<"Al ser mayor A que B, se cambian."<<endl;
        aux=a; //El valor de a se pasa a la variable auxiliar.
        a=b;
        b=aux;
    }

    else if (a>b); { // Si a no es mayor que b:
        cout<<"a=";
        cout<<a<<"  b=";
        cout<<b<<endl;
    } // Al no ser a mayor que b, se quedan iguales.

    cin.ignore();
    cin.get();
}

