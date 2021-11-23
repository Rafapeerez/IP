//El programa rellena los elementos del vector mediante el teclado y los imprime por pantalla.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
void lee(float v[],int n) { // Esta funcion recoge los numeros para completar el vector.
    int a;
    for(int cont=0; cont<n; cont++) {
        cout<<"Introduce un valor para v["<<cont<<"]"<<endl;
        cin>>a;
        v[cont]=a;
    }
}

void imprime(float v[],int n) { // Esta función imprime los valores del vector por pantalla.
    for (int cont=0; cont<n; cont++) {
        cout<<"Los valores del vector son: "<<v[cont]<<endl;
    }
}

int main() {
    int n;
    cout<<"Introduzca el numero de elementos que desee que tenga el vector y pulse Intro."<<endl;
    cin>>n;
    float v[n]; //Crea un vector de n elementos, siendo n un valor que nosotros introducimos. 
    lee(v,n); //Llama a la funcin lee.
    imprime(v,n); //Llama a la funcion imprime y ocurre lo que hay en dicha funcion. 
    system("pause");
}

