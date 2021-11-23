//El programa dice si el numero introducido es primo o no (uso del esquema for)
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Introduce un numero y pulse Intro: "<<endl;
    cin>>a;
    b=0;
    for(c=a; c>0; c--) { //Para cuando el dividendo es igual al numero introducido, mientras sea mayor que 0 al dividendo se le resta uno. 
        if(a%c==0) { //Si el cociente de la division del numero introducido entre y el dividendo es igual a 0, al contador se le suma 1.
            b++;
        }
    }
    if (b>2) { // Si el contador es mayor a 2 significa que el numero introducido tiene mas de 2 divisores por lo que no seria un numero primo.
        cout<<"El numero no es primo."<<endl;
    }
    else {
        cout<<"El numero es primo."<<endl;
    }
    system("pause");
}

