//Divisores de un numero introducido en orden ascendente (uso del esquema for)
#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Introduce un numero y pulse Intro para saber sus divisores: "<<endl;
    cin>>a;
    cout<<"Los divisores de "<<a<<" son:"<<endl;
    for (b=1; b<=a; b++) { //Comenzamos con el divisor en 1, el esquema se ejecuta mientras que el divisor sea menor o igual al dividendo y al final se le suma 1 al divisor para que sea de forma ascendente.
        if(a%b==0) { //Si el cociente del numero introducido entre el divisor es igual a 0 significa que ese numero es un divisor por lo que se imprimira por pantalla.
            cout<<b<<",";
        }
    }
    cout<<""<<endl;
    cin.get();
    cin.ignore();
}

