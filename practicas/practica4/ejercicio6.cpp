//Calcula la combinacion de un numero sobre otro.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int factorial(int v) { //Se crea una primera funcion que calcula el factorial de un numero.
    int i,factorial=1;
    for(i=1; i<=v; i++) {
        factorial=factorial*i;
    }
    return factorial;
}
double combinaciones(int n, int k) { //La segunda funcion lo que va a hacer es llamar para ejecutarse la anterior funcion para los valores n y k introducidos.
    return factorial(n)/(factorial(k)*factorial(n-k)); //Retorno del resultado 
}

int main() {
    int n,k;
    cout<<"Introduzca primero el numero de los n elementos y pulse Intro. Despues introduzca el numero de subconjuntos k. "<<endl;
    cin>>n;
    cin>>k;
    cout<<"El resultado final es: "<<combinaciones(n,k)<<endl; //Se ejecuta la funcion para hacer la operacion e imprimirla por pantalla
    system("pause");
}

