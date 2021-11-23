//El programa dice si el numero es par o no. Se utiliza una funcion.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
bool espar(int v) { //Declaramos la funcion booleana(true,false)
    bool res;
    if(v%2==0) { //Si el cociente del numero entre 2 es igual a 0,significa que es par.
        res=true;
    }
    else {
        res=false;
    }
    return res; // Retorno del resultado.
}

int main() {
    int n;
    cout<<"Introduzca un numero para ver si es par o no."<<endl;
    cin>>n;
    bool ep=espar(n); //La variable booleana ep se iguala a la funcion para el numero introducido y se ejecuta la funcion para el numero introducido
    if(ep==true) {
        cout<<"El  valor es par."<<endl;
    }
    else {
        cout<<"El valor es impar."<<endl;
    }
    system("pause");
}

