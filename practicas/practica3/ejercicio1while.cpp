//Se introduce 5 valores y el programa dice cual es el menor (uso del esquema while)
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int i,numero,menor;
    cout<<"Introduzca un numero y pulse Intro. El programa le dira cual es el menor de los 5 valores introducidos. "<<endl;
    cin>>numero;
    i=0;
    menor=numero;
    while (i<4) { //Mientras que el contador sea menor que 4, se ira ejecutando el while.
        cout<<"Introduce otro numero."<<endl;
        cin>>numero;
        if(numero<menor) {
            menor=numero;
        }
        i++;//Al final al contador se le suma 1 hasta llegar a 4 para detener el programa y dar el resultado final.
    }
    cout<<"El menor de los numeros introducidos es: "<<menor<<endl;
    system("pause");
}

