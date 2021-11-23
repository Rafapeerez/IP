//Divisores de un numero introducido en orden descendente.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Introduce un numero y pulse Intro para saber sus divisores."<<endl;
    cin>>a;
    b=a; // Igualamos a y b para empezar a dividir valores hacia atras.
    cout<<"Los divisores de "<<a;
    cout<<" son: "<<endl;
    do {
        if (a%b==0) { //Si el cociente entre la division de a y b es 0 significa que son divisibles entre si.
            cout<<b<<",";
        }
        b=b-1; // Vamos restando unidades a b para formar los divisores en orden descendente.
    } while (b>=1); //Esto se ejecutara mientras que el divisor sea igual o mayor a 1.
    cout<<""<<endl;
    system("pause");
}

