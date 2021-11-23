//La sucesion de Fibonacci ocurre las veces equivalentes al valor introducido. 
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    double a,b,n,r,i;
    cout<<"Introduce un valor para que se repita ese numero de veces la sucesion: "<<endl;
    cin>>n;
    a=0;
    b=1;
    i=0;
    if (n<=0) { //Para valores mas pequeños o iguales a 0 no se hace la sucesion.
        cout<<"Para este valor no se puede hacer la sucesion."<<endl;
    }
    else { // Si no, se imprimen por pantalla el 0 y el 1 y a partir de ahi empiezan a sumarse los valores anteriores para crear la sucesion.
        cout<<"La sucesion de Fibonacci es:"<<endl;
        cout<<0<<",";
        cout<<1<<",";
        do {
            r=a+b;
            a=b;
            b=r;
            cout<<r<<",";
            i=i+1;
        } while (i<n);
    }
    cout<<""<<endl;
    system("pause");
}

