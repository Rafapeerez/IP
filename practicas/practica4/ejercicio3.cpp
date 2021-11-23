//Calculo del valor del factorial de un numero introducido.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
double factorial(int v) { // Creamos la funcion factorial con las operaciones necesarias para calcular el factorial de un numero
    double a,res=1;
    for(a=v;a>=1;a--) {
        res=res*a;
    }
    return res; //Retorno del resultado
}
int main() {
    int n;
    cout<<"Introduce un numero para calcular su factorial:"<<endl;
    cin>>n;
    cout<<"El resultado final es: "<<factorial(n)<<endl; // Se imprime por pantalla el resultado al ejecutar la funcion para un valor n introducido.
    system("pause");
}

