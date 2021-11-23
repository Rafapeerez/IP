//Suma los valores divisibles entre 2 y 3 que esten antes de un valor n introducido.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int n,s=0;
    cout<<"Introduce un valor: "<<endl;
    cin>>n;
    if (n<=1) { // Si el valor es menor o igual a 1 no se puede ejecutar la suma
        cout<<"Para este valor no se puede ejecutar la suma."<<endl;
    }
    do {
        if((n%2==0)||(n%3==0)) { //Si el valor introducido es divisible entre 2 y 3, es decir que el resto sea 0, se va sumando el numero.
            s=s+n;
        }
        n=n-1;
    } while(n>=0);
        cout<<"La suma final es: "<<s<<endl;
    system("pause");
}

