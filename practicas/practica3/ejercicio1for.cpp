//Se introduce 5 valores y el programa dice cual es el menor (uso del esquema for)
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int i,numero,menor;
    cout<<"Introduzca un numero y pulse Intro. El programa le dira cual es el menor de los 5 valores introducidos."<<endl;
    cin>>numero;
    menor=numero;
    for (i=0; i<4; i++ ) { //Para i=0 mientras que i sea menor que 4 se le sumara a i 1.
        cout<<"Introduce otro numero."<<endl;
        cin>>numero;
        if(numero<menor) { //Si numero es mas pequeño que el anterior introducido, el numero introducido se vuelve a cambiar para pasar a ser el menor.
            menor=numero;
        }
    }
cout<<"El menor de los numeros introducidos es: "<<menor<<endl;
    system("pause");
}

