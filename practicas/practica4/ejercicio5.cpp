//El programa imprime por pantalla los n primeros numeros primos.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
bool esprimo(int v) { //Se crea la funcion esprimo para saber si un numero es primo o no.
    bool res;
    int div,b=0;
    for(div=v; div>0; div--) {
        if (v%div==0) {
            b++;
        }
    }
    if(b>2) {
        res=false;
    }
    else {
        res=true;
    }
    return res;
}

void primos(int n) { //Se crea otra funcion para imprimir los n primeros numeros primos.
    int a=1;
    for(int b=1; b<=n ; a++) {
        if(esprimo(a)==true) { //Al ejecutarse la funcion es primo, si el resultado de ser primo es afirmativo(true),se imprime por pantalla
            cout<<a<<",";
            b++;
        }
    }
}

int main() {
    int n;
    cout<<"Introduce un numero para imprimir los n primeros numeros primos: "<<endl;
    cin>>n;
    cout<<"Los numeros primos son: ";
    primos(n); //Se ejecuta la funcion primos para imprimir todos los numeros que han dado positivo(true) a la primera funcion
    cout<<""<<endl;

    system("pause");
}

