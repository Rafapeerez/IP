// Divisores de un numero introducido en orden ascendente.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Introduce un numero y pulse Intro para saber sus divisores"<<endl;
    cin>>a;
    b=1; //Igualamos b a 1 para empezar a dividir cada vez valores mayores.
    cout<<"Los divisores de "<<a;
    cout<<" son: "<<endl;
    do {
        if (a%b==0) {
            cout<<b<<",";
        }
        b=b+1; // Vamos sumando unidades a b para formar los divisores en orden ascendente.
    } while (b<=a); // Esto se ejecutara mientras que el divisor sea menor o igual a a.
    cout<<""<<endl;
    system("pause");
}

