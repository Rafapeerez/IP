//El programa cuenta el numero de divisores de un numero introducido.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int Ndivisores(int v) { //Se crea la funcion Ndivisores que lo que hace es contar el numero de divisores que tiene un numero introducido.
    int cont=0;
    for (int a=v; a>0; a--) {
        if(v%a==0) {
            cont++;
        }
    }
    return cont;//Retorno del resultado
}
int main() {
    int numero;
    cout<<"Introduce un numero para saber el numero de divisores que tiene."<<endl;
    cin>>numero;
    cout<<"El numero "<<numero<<" tiene "<< Ndivisores(numero)<<" divisores."<<endl; // Se ejecuta la funcion y se imprime por pantalla el resultado de las operaciones de la funcion, siendo este resultado el numero de divisores del numero introducido

    system("pause");
}

