//Calculo de los divisores de un numero introducido.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void divisores(int v) { //Se crea la funcion divisores con los calculos necesarios para calcular los divisores de un numero
    int a=v,cont;
    for(cont=1; cont<=a; cont++) {
        if (a%cont==0) {
            cout<<cont<<",";
        }
    }
}
int main(){
int n;
cout<<"Introduzca un numero."<<endl;
cin>>n;
cout<<"Los divisores de "<<n<<" son:"<<endl;
divisores(n); //Se ejecuta la funcion divisores para el valor n introducido
cout<<""<<endl;

    system("pause");
}

